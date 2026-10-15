#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class FCOEMCEDLNL;
class FPHEGOFOLFM;
namespace RPG::GameCore { class ActivityHipplenGameRow; }

#define RPG_GAMECORE_ACTIVITYHIPPLENGAMEROW_CTOR_OFFSET UNITYSDK_OFFSET(0x1D3397E0)
#define RPG_GAMECORE_ACTIVITYHIPPLENGAMEROW_FROMBINARY_OFFSET UNITYSDK_OFFSET(0x1D339690)

namespace RPG::GameCore
{
	inline static constexpr unsigned int ActivityHipplenGameRow_TypeDefinitionIndex = 11641;

	class ActivityHipplenGameRow : public ::System::Object
	{
	public:
		::Il2CppArray<::FPHEGOFOLFM*>* EffectList; // 0x10
		::System::UInt32 ID; // 0x18
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ACTIVITYHIPPLENGAMEROW_CTOR_OFFSET))(this);
		}

		static ::System::Void FromBinary(::FCOEMCEDLNL* a1, ::RPG::GameCore::ActivityHipplenGameRow* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::ActivityHipplenGameRow*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ACTIVITYHIPPLENGAMEROW_FROMBINARY_OFFSET))(a1, a2);
		}

	};
}
