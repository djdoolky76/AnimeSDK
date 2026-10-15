#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/TaskConfig.h"
class FCOEMCEDLNL;
class JFEFADICJCM;
namespace RPG::GameCore { class DynamicString; }
namespace System { class String; }

#define JFEFADICJCM_CTOR_OFFSET UNITYSDK_OFFSET(0x1D0233A0)
#define JFEFADICJCM_MGMEGEDLMAK_OFFSET UNITYSDK_OFFSET(0x1D0233B0)
#define JFEFADICJCM_OJNNBEJLDIJ_OFFSET UNITYSDK_OFFSET(0x1D023370)

	class JFEFADICJCM : public ::RPG::GameCore::TaskConfig
	{
	public:
		::Il2CppArray<::System::String*>* BOLBCGBEBPG; // 0x18
		::RPG::GameCore::DynamicString* MNMHMECGDAK; // 0x20
		::System::Boolean MOKNCFJICIC; // 0x28
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + JFEFADICJCM_CTOR_OFFSET))(this);
		}

		static ::System::Void OJNNBEJLDIJ(::FCOEMCEDLNL* a1, ::JFEFADICJCM* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::JFEFADICJCM*))((::PBYTE)hIl2Cpp + JFEFADICJCM_OJNNBEJLDIJ_OFFSET))(a1, a2);
		}

		static ::System::Void MGMEGEDLMAK(::FCOEMCEDLNL* a1, ::JFEFADICJCM* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::JFEFADICJCM*))((::PBYTE)hIl2Cpp + JFEFADICJCM_MGMEGEDLMAK_OFFSET))(a1, a2);
		}

	};
