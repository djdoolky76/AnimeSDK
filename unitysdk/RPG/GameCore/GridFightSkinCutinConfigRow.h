#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class FCOEMCEDLNL;
namespace RPG::GameCore { class GridFightSkinCutinConfigRow; }
namespace System { class String; }

#define RPG_GAMECORE_GRIDFIGHTSKINCUTINCONFIGROW_CTOR_OFFSET UNITYSDK_OFFSET(0x1D715A20)
#define RPG_GAMECORE_GRIDFIGHTSKINCUTINCONFIGROW_FROMBINARY_OFFSET UNITYSDK_OFFSET(0x1D7158F0)

namespace RPG::GameCore
{
	inline static constexpr unsigned int GridFightSkinCutinConfigRow_TypeDefinitionIndex = 13562;

	class GridFightSkinCutinConfigRow : public ::System::Object
	{
	public:
		::System::String* CutinPath; // 0x10
		::System::UInt32 SkinID; // 0x18
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_GRIDFIGHTSKINCUTINCONFIGROW_CTOR_OFFSET))(this);
		}

		static ::System::Void FromBinary(::FCOEMCEDLNL* a1, ::RPG::GameCore::GridFightSkinCutinConfigRow* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::GridFightSkinCutinConfigRow*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_GRIDFIGHTSKINCUTINCONFIGROW_FROMBINARY_OFFSET))(a1, a2);
		}

	};
}
