#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/TaskConfig.h"
class FCOEMCEDLNL;
namespace RPG::GameCore { class MoveUINodeToMask; }
namespace System { class String; }

#define RPG_GAMECORE_MOVEUINODETOMASK_CTOR_OFFSET UNITYSDK_OFFSET(0x1D8BE3C0)
#define RPG_GAMECORE_MOVEUINODETOMASK_FROMBINARYIMPL_OFFSET UNITYSDK_OFFSET(0x1D8BE3D0)
#define RPG_GAMECORE_MOVEUINODETOMASK_FROMBINARY_OFFSET UNITYSDK_OFFSET(0x1D8BE390)

namespace RPG::GameCore
{
	inline static constexpr unsigned int MoveUINodeToMask_TypeDefinitionIndex = 24284;

	class MoveUINodeToMask : public ::RPG::GameCore::TaskConfig
	{
	public:
		::System::String* Path; // 0x18
		::System::String* PathPC; // 0x20
		::System::String* NodeID; // 0x28
		::System::Boolean Reset; // 0x30
		::System::Boolean Follow; // 0x31
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_MOVEUINODETOMASK_CTOR_OFFSET))(this);
		}

		static ::System::Void FromBinary(::FCOEMCEDLNL* a1, ::RPG::GameCore::MoveUINodeToMask* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::MoveUINodeToMask*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_MOVEUINODETOMASK_FROMBINARY_OFFSET))(a1, a2);
		}

		static ::System::Void FromBinaryImpl(::FCOEMCEDLNL* a1, ::RPG::GameCore::MoveUINodeToMask* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::MoveUINodeToMask*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_MOVEUINODETOMASK_FROMBINARYIMPL_OFFSET))(a1, a2);
		}

	};
}
