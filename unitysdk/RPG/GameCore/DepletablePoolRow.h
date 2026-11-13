#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class FCOEMCEDLNL;
namespace RPG::GameCore { class DepletablePoolRow; }
namespace System { class String; }

#define RPG_GAMECORE_DEPLETABLEPOOLROW_CTOR_OFFSET UNITYSDK_OFFSET(0x1F0080E0)
#define RPG_GAMECORE_DEPLETABLEPOOLROW_FROMBINARY_OFFSET UNITYSDK_OFFSET(0x1F007EF0)

namespace RPG::GameCore
{
	inline static constexpr unsigned int DepletablePoolRow_TypeDefinitionIndex = 13197;

	class DepletablePoolRow : public ::System::Object
	{
	public:
		::System::String* UIPrefabPath; // 0x10
		::System::UInt32 PoolID; // 0x18
		::System::UInt32 ContentGroupID; // 0x1C
		::System::UInt32 CostPlanID; // 0x20
		::System::UInt32 VideoID; // 0x24
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_DEPLETABLEPOOLROW_CTOR_OFFSET))(this);
		}

		static ::System::Void FromBinary(::FCOEMCEDLNL* a1, ::RPG::GameCore::DepletablePoolRow* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::DepletablePoolRow*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_DEPLETABLEPOOLROW_FROMBINARY_OFFSET))(a1, a2);
		}

	};
}
