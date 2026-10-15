#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/STTaskConfig.h"
#include "unitysdk/RPG/GameCore/STTaskExecutePhase.h"
class FCOEMCEDLNL;
class HCNFFJKBKMM;
namespace RPG::GameCore { class DynamicFloat; }
namespace System { class String; }

#define HCNFFJKBKMM_CTOR_OFFSET UNITYSDK_OFFSET(0x1CE8E6B0)
#define HCNFFJKBKMM_MGMEGEDLMAK_OFFSET UNITYSDK_OFFSET(0x1CE8E6C0)
#define HCNFFJKBKMM_OJNNBEJLDIJ_OFFSET UNITYSDK_OFFSET(0x1CE8E680)

	class HCNFFJKBKMM : public ::RPG::GameCore::STTaskConfig
	{
	public:
		::RPG::GameCore::DynamicFloat* MNDFOPKBHKP; // 0x18
		::System::String* LLOBIMGOPOP; // 0x20
		::RPG::GameCore::STTaskExecutePhase PPOIJHJIMLL; // 0x28
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + HCNFFJKBKMM_CTOR_OFFSET))(this);
		}

		static ::System::Void OJNNBEJLDIJ(::FCOEMCEDLNL* a1, ::HCNFFJKBKMM* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::HCNFFJKBKMM*))((::PBYTE)hIl2Cpp + HCNFFJKBKMM_OJNNBEJLDIJ_OFFSET))(a1, a2);
		}

		static ::System::Void MGMEGEDLMAK(::FCOEMCEDLNL* a1, ::HCNFFJKBKMM* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::HCNFFJKBKMM*))((::PBYTE)hIl2Cpp + HCNFFJKBKMM_MGMEGEDLMAK_OFFSET))(a1, a2);
		}

	};
