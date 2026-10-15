#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/TaskConfig.h"
class ELKAKOOGJLB;
class FCOEMCEDLNL;
namespace RPG::GameCore { class RtSubModifierData; }

#define ELKAKOOGJLB_CTOR_OFFSET UNITYSDK_OFFSET(0x1CDA3F80)
#define ELKAKOOGJLB_MGMEGEDLMAK_OFFSET UNITYSDK_OFFSET(0x1CDA3F90)
#define ELKAKOOGJLB_OJNNBEJLDIJ_OFFSET UNITYSDK_OFFSET(0x1CDA3F50)

	class ELKAKOOGJLB : public ::RPG::GameCore::TaskConfig
	{
	public:
		::Il2CppArray<::RPG::GameCore::RtSubModifierData*>* OLJCAJMFJPO; // 0x18
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + ELKAKOOGJLB_CTOR_OFFSET))(this);
		}

		static ::System::Void OJNNBEJLDIJ(::FCOEMCEDLNL* a1, ::ELKAKOOGJLB* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::ELKAKOOGJLB*))((::PBYTE)hIl2Cpp + ELKAKOOGJLB_OJNNBEJLDIJ_OFFSET))(a1, a2);
		}

		static ::System::Void MGMEGEDLMAK(::FCOEMCEDLNL* a1, ::ELKAKOOGJLB* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::ELKAKOOGJLB*))((::PBYTE)hIl2Cpp + ELKAKOOGJLB_MGMEGEDLMAK_OFFSET))(a1, a2);
		}

	};
