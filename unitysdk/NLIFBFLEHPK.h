#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/AdvWaitingEventBase.h"
class FCOEMCEDLNL;
class NLIFBFLEHPK;
namespace RPG::GameCore { class TaskConfig; }

#define NLIFBFLEHPK_CTOR_OFFSET UNITYSDK_OFFSET(0x1D233050)
#define NLIFBFLEHPK_MGMEGEDLMAK_OFFSET UNITYSDK_OFFSET(0x1D233060)
#define NLIFBFLEHPK_OJNNBEJLDIJ_OFFSET UNITYSDK_OFFSET(0x1D233010)

	class NLIFBFLEHPK : public ::RPG::GameCore::AdvWaitingEventBase
	{
	public:
		::Il2CppArray<::RPG::GameCore::TaskConfig*>* LEAHACBFJBP; // 0x20
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + NLIFBFLEHPK_CTOR_OFFSET))(this);
		}

		static ::System::Void OJNNBEJLDIJ(::FCOEMCEDLNL* a1, ::NLIFBFLEHPK* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::NLIFBFLEHPK*))((::PBYTE)hIl2Cpp + NLIFBFLEHPK_OJNNBEJLDIJ_OFFSET))(a1, a2);
		}

		static ::System::Void MGMEGEDLMAK(::FCOEMCEDLNL* a1, ::NLIFBFLEHPK* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::NLIFBFLEHPK*))((::PBYTE)hIl2Cpp + NLIFBFLEHPK_MGMEGEDLMAK_OFFSET))(a1, a2);
		}

	};
