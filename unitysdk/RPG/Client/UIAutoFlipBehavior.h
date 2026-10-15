#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/FlipMode.h"
#include "unitysdk/RPG/Client/TABehaviorBase.h"
namespace RPG::Client { class UIAutoFlipMonoPlugin; }
namespace RPG::Client { class UIPageTurnMonoPlugin; }
namespace System { class Action; }

#define RPG_CLIENT_UIAUTOFLIPBEHAVIOR_CAHGDJDJIDD_OFFSET UNITYSDK_OFFSET(0xE376BF0)
#define RPG_CLIENT_UIAUTOFLIPBEHAVIOR_CGEJMGFOLMP_OFFSET UNITYSDK_OFFSET(0xE375730)
#define RPG_CLIENT_UIAUTOFLIPBEHAVIOR_CTOR_OFFSET UNITYSDK_OFFSET(0xE377160)
#define RPG_CLIENT_UIAUTOFLIPBEHAVIOR_DFFCHNLKELO_OFFSET UNITYSDK_OFFSET(0xE375D00)
#define RPG_CLIENT_UIAUTOFLIPBEHAVIOR_GET__OWNERMONOPLUGIN_OFFSET UNITYSDK_OFFSET(0xE376080)
#define RPG_CLIENT_UIAUTOFLIPBEHAVIOR_GGBCNHIEBJJ_OFFSET UNITYSDK_OFFSET(0xE376360)
#define RPG_CLIENT_UIAUTOFLIPBEHAVIOR_IMKBMLKJAOM_OFFSET UNITYSDK_OFFSET(0xE376100)
#define RPG_CLIENT_UIAUTOFLIPBEHAVIOR_JIPCAAFMDFC_OFFSET UNITYSDK_OFFSET(0xE376920)
#define RPG_CLIENT_UIAUTOFLIPBEHAVIOR_JPKHCNDFAEL_OFFSET UNITYSDK_OFFSET(0xE375790)
#define RPG_CLIENT_UIAUTOFLIPBEHAVIOR_KPJGDHLENIP_OFFSET UNITYSDK_OFFSET(0xE375340)
#define RPG_CLIENT_UIAUTOFLIPBEHAVIOR_LATETICK_OFFSET UNITYSDK_OFFSET(0xE375CA0)
#define RPG_CLIENT_UIAUTOFLIPBEHAVIOR_MFCDKJIHDEH_OFFSET UNITYSDK_OFFSET(0xE3756D0)
#define RPG_CLIENT_UIAUTOFLIPBEHAVIOR_NPAFMEBNFOB_OFFSET UNITYSDK_OFFSET(0xE375480)
#define RPG_CLIENT_UIAUTOFLIPBEHAVIOR_OIBPOPCFDHA_OFFSET UNITYSDK_OFFSET(0xE3757F0)
#define RPG_CLIENT_UIAUTOFLIPBEHAVIOR_PAGKOAEOLKA_OFFSET UNITYSDK_OFFSET(0xE3758B0)
#define RPG_CLIENT_UIAUTOFLIPBEHAVIOR_PCNAKDOLCCD_OFFSET UNITYSDK_OFFSET(0xE375410)
#define RPG_CLIENT_UIAUTOFLIPBEHAVIOR_TICK_OFFSET UNITYSDK_OFFSET(0xE375850)
#define RPG_CLIENT_UIAUTOFLIPBEHAVIOR__FLIPLEFTPAGE_B__25_0_OFFSET UNITYSDK_OFFSET(0xE377180)
#define RPG_CLIENT_UIAUTOFLIPBEHAVIOR__FLIPRIGHTPAGE_B__24_0_OFFSET UNITYSDK_OFFSET(0xE377170)
#define RPG_CLIENT_UIAUTOFLIPBEHAVIOR__UPDATE_B__27_0_OFFSET UNITYSDK_OFFSET(0xE377190)

namespace RPG::Client
{
	inline static constexpr unsigned int UIAutoFlipBehavior_TypeDefinitionIndex = 71054;

	class UIAutoFlipBehavior : public ::RPG::Client::TABehaviorBase
	{
	public:
		::System::Boolean flippingStarted; // 0x38
		::System::Boolean isPageFlipping; // 0x39
		::System::Byte _padding0[0x2];
		::System::Single elapsedTime; // 0x3C
		::System::Single nextPageCountDown; // 0x40
		::System::Boolean isBookInteractable; // 0x44
		::System::Byte _padding1[0x3];
		::System::Single elapsedTime2; // 0x48
		::System::Boolean isFlipping; // 0x4C
		::System::Byte _padding2[0x3];
		::System::Action* finish; // 0x50
		::System::Single xc; // 0x58
		::System::Single pageWidth; // 0x5C
		::System::Single pageHeight; // 0x60
		::RPG::Client::FlipMode flipMode; // 0x64
		::System::Int32 targetPaper; // 0x68
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_UIAUTOFLIPBEHAVIOR_CTOR_OFFSET))(this);
		}

		::System::Void KPJGDHLENIP()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_UIAUTOFLIPBEHAVIOR_KPJGDHLENIP_OFFSET))(this);
		}

		::System::Void PCNAKDOLCCD()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_UIAUTOFLIPBEHAVIOR_PCNAKDOLCCD_OFFSET))(this);
		}

		::System::Void MFCDKJIHDEH()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_UIAUTOFLIPBEHAVIOR_MFCDKJIHDEH_OFFSET))(this);
		}

		::System::Void CGEJMGFOLMP()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_UIAUTOFLIPBEHAVIOR_CGEJMGFOLMP_OFFSET))(this);
		}

		::System::Void JPKHCNDFAEL()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_UIAUTOFLIPBEHAVIOR_JPKHCNDFAEL_OFFSET))(this);
		}

		::System::Void OIBPOPCFDHA()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_UIAUTOFLIPBEHAVIOR_OIBPOPCFDHA_OFFSET))(this);
		}

		::System::Void Tick(::System::Single a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + RPG_CLIENT_UIAUTOFLIPBEHAVIOR_TICK_OFFSET))(this, a1);
		}

		::System::Void LateTick(::System::Single a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + RPG_CLIENT_UIAUTOFLIPBEHAVIOR_LATETICK_OFFSET))(this, a1);
		}

		::RPG::Client::UIAutoFlipMonoPlugin* get__OwnerMonoPlugin()
		{
			return ((::RPG::Client::UIAutoFlipMonoPlugin*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_UIAUTOFLIPBEHAVIOR_GET__OWNERMONOPLUGIN_OFFSET))(this);
		}

		::System::Void NPAFMEBNFOB()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_UIAUTOFLIPBEHAVIOR_NPAFMEBNFOB_OFFSET))(this);
		}

		::System::Void GGBCNHIEBJJ()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_UIAUTOFLIPBEHAVIOR_GGBCNHIEBJJ_OFFSET))(this);
		}

		::System::Void CAHGDJDJIDD()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_UIAUTOFLIPBEHAVIOR_CAHGDJDJIDD_OFFSET))(this);
		}

		::System::Void IMKBMLKJAOM(::System::Int32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + RPG_CLIENT_UIAUTOFLIPBEHAVIOR_IMKBMLKJAOM_OFFSET))(this, a1);
		}

		::System::Void PAGKOAEOLKA()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_UIAUTOFLIPBEHAVIOR_PAGKOAEOLKA_OFFSET))(this);
		}

		::System::Void JIPCAAFMDFC(::RPG::Client::UIPageTurnMonoPlugin* a1, ::System::Single a2, ::RPG::Client::FlipMode a3, ::System::Action* a4)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::UIPageTurnMonoPlugin*, ::System::Single, ::RPG::Client::FlipMode, ::System::Action*))((::PBYTE)hIl2Cpp + RPG_CLIENT_UIAUTOFLIPBEHAVIOR_JIPCAAFMDFC_OFFSET))(this, a1, a2, a3, a4);
		}

		::System::Void DFFCHNLKELO()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_UIAUTOFLIPBEHAVIOR_DFFCHNLKELO_OFFSET))(this);
		}

		::System::Void _FlipRightPage_b__24_0()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_UIAUTOFLIPBEHAVIOR__FLIPRIGHTPAGE_B__24_0_OFFSET))(this);
		}

		::System::Void _FlipLeftPage_b__25_0()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_UIAUTOFLIPBEHAVIOR__FLIPLEFTPAGE_B__25_0_OFFSET))(this);
		}

		::System::Void _Update_b__27_0()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_UIAUTOFLIPBEHAVIOR__UPDATE_B__27_0_OFFSET))(this);
		}

	};
}
