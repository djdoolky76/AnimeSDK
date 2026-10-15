#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class FCOEMCEDLNL;
namespace RPG::GameCore { class ChenLingEffectProgressRow; }

#define RPG_GAMECORE_CHENLINGEFFECTPROGRESSROW_CTOR_OFFSET UNITYSDK_OFFSET(0x1D58BA30)
#define RPG_GAMECORE_CHENLINGEFFECTPROGRESSROW_FROMBINARY_OFFSET UNITYSDK_OFFSET(0x1D58B850)

namespace RPG::GameCore
{
	class ChenLingEffectProgressRow : public ::System::Object
	{
	public:
		::Il2CppArray<::System::UInt32>* EffectIDList; // 0x10
		::Il2CppArray<::System::UInt32>* ActionIDList; // 0x18
		::System::UInt32 Progress; // 0x20
		::System::UInt32 ID; // 0x24
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_CHENLINGEFFECTPROGRESSROW_CTOR_OFFSET))(this);
		}

		static ::System::Void FromBinary(::FCOEMCEDLNL* a1, ::RPG::GameCore::ChenLingEffectProgressRow* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::ChenLingEffectProgressRow*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_CHENLINGEFFECTPROGRESSROW_FROMBINARY_OFFSET))(a1, a2);
		}

	};
}
