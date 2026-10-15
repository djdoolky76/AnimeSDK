#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/TaskConfig.h"
class CNICIOEOIKB;
class FCOEMCEDLNL;
namespace RPG::GameCore { class DynamicString; }

#define CNICIOEOIKB_CTOR_OFFSET UNITYSDK_OFFSET(0x1DCB56A0)
#define CNICIOEOIKB_MGMEGEDLMAK_OFFSET UNITYSDK_OFFSET(0x1DCB56B0)
#define CNICIOEOIKB_OJNNBEJLDIJ_OFFSET UNITYSDK_OFFSET(0x1DCB5670)

	class CNICIOEOIKB : public ::RPG::GameCore::TaskConfig
	{
	public:
		::RPG::GameCore::DynamicString* MNMHMECGDAK; // 0x18
		::System::Boolean MOKNCFJICIC; // 0x20
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CNICIOEOIKB_CTOR_OFFSET))(this);
		}

		static ::System::Void OJNNBEJLDIJ(::FCOEMCEDLNL* a1, ::CNICIOEOIKB* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::CNICIOEOIKB*))((::PBYTE)hIl2Cpp + CNICIOEOIKB_OJNNBEJLDIJ_OFFSET))(a1, a2);
		}

		static ::System::Void MGMEGEDLMAK(::FCOEMCEDLNL* a1, ::CNICIOEOIKB* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::CNICIOEOIKB*))((::PBYTE)hIl2Cpp + CNICIOEOIKB_MGMEGEDLMAK_OFFSET))(a1, a2);
		}

	};
