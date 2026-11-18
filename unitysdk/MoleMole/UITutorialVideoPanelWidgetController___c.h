#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class DGDNKBFMHME;
namespace System { template <typename T> class Action_1; }

#define MOLEMOLE_UITUTORIALVIDEOPANELWIDGETCONTROLLER___C__CCTOR_OFFSET UNITYSDK_OFFSET(0x19CA2F30)
#define MOLEMOLE_UITUTORIALVIDEOPANELWIDGETCONTROLLER___C__CTOR_OFFSET UNITYSDK_OFFSET(0x19CA2F70)
#define MOLEMOLE_UITUTORIALVIDEOPANELWIDGETCONTROLLER___C__PLAYVIDEOINNER_B__12_0_OFFSET UNITYSDK_OFFSET(0x19CA2F80)

namespace MoleMole
{
	inline static constexpr unsigned int UITutorialVideoPanelWidgetController___c_TypeDefinitionIndex = 48679;

	class UITutorialVideoPanelWidgetController___c : public ::System::Object
	{
	public:
		static ::System::Object** StaticGet___9()
		{
			return (::System::Object**)Il2CppClass::FromTypeDefinitionIndex(UITutorialVideoPanelWidgetController___c_TypeDefinitionIndex)->GetStaticField(0x35770);
		}
		static ::System::Action_1<::DGDNKBFMHME*>** StaticGet___9__12_0()
		{
			return (::System::Action_1<::DGDNKBFMHME*>**)Il2CppClass::FromTypeDefinitionIndex(UITutorialVideoPanelWidgetController___c_TypeDefinitionIndex)->GetStaticField(0x35778);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + MOLEMOLE_UITUTORIALVIDEOPANELWIDGETCONTROLLER___C__CCTOR_OFFSET))();
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UITUTORIALVIDEOPANELWIDGETCONTROLLER___C__CTOR_OFFSET))(this);
		}

		::System::Void _PlayVideoInner_b__12_0(::DGDNKBFMHME* vp)
		{
			return ((::System::Void(*)(::PVOID, ::DGDNKBFMHME*))((::PBYTE)hIl2Cpp + MOLEMOLE_UITUTORIALVIDEOPANELWIDGETCONTROLLER___C__PLAYVIDEOINNER_B__12_0_OFFSET))(this, vp);
		}
	};
}
