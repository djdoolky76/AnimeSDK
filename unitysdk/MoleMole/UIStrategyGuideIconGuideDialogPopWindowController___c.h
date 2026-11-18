#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class DGDNKBFMHME;
namespace System { template <typename T> class Action_1; }

#define MOLEMOLE_UISTRATEGYGUIDEICONGUIDEDIALOGPOPWINDOWCONTROLLER___C__CCTOR_OFFSET UNITYSDK_OFFSET(0x188ACF30)
#define MOLEMOLE_UISTRATEGYGUIDEICONGUIDEDIALOGPOPWINDOWCONTROLLER___C__CTOR_OFFSET UNITYSDK_OFFSET(0x188ACF70)
#define MOLEMOLE_UISTRATEGYGUIDEICONGUIDEDIALOGPOPWINDOWCONTROLLER___C__REFRESHDETAIL_B__13_0_OFFSET UNITYSDK_OFFSET(0x188ACF80)

namespace MoleMole
{
	inline static constexpr unsigned int UIStrategyGuideIconGuideDialogPopWindowController___c_TypeDefinitionIndex = 74019;

	class UIStrategyGuideIconGuideDialogPopWindowController___c : public ::System::Object
	{
	public:
		static ::System::Object** StaticGet___9()
		{
			return (::System::Object**)Il2CppClass::FromTypeDefinitionIndex(UIStrategyGuideIconGuideDialogPopWindowController___c_TypeDefinitionIndex)->GetStaticField(0x356A0);
		}
		static ::System::Action_1<::DGDNKBFMHME*>** StaticGet___9__13_0()
		{
			return (::System::Action_1<::DGDNKBFMHME*>**)Il2CppClass::FromTypeDefinitionIndex(UIStrategyGuideIconGuideDialogPopWindowController___c_TypeDefinitionIndex)->GetStaticField(0x356A8);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + MOLEMOLE_UISTRATEGYGUIDEICONGUIDEDIALOGPOPWINDOWCONTROLLER___C__CCTOR_OFFSET))();
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UISTRATEGYGUIDEICONGUIDEDIALOGPOPWINDOWCONTROLLER___C__CTOR_OFFSET))(this);
		}

		::System::Void _RefreshDetail_b__13_0(::DGDNKBFMHME* vp)
		{
			return ((::System::Void(*)(::PVOID, ::DGDNKBFMHME*))((::PBYTE)hIl2Cpp + MOLEMOLE_UISTRATEGYGUIDEICONGUIDEDIALOGPOPWINDOWCONTROLLER___C__REFRESHDETAIL_B__13_0_OFFSET))(this, vp);
		}
	};
}
