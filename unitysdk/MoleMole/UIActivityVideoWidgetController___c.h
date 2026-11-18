#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class DGDNKBFMHME;
namespace System { template <typename T> class Action_1; }

#define MOLEMOLE_UIACTIVITYVIDEOWIDGETCONTROLLER___C__CCTOR_OFFSET UNITYSDK_OFFSET(0x19D2DCC0)
#define MOLEMOLE_UIACTIVITYVIDEOWIDGETCONTROLLER___C__CTOR_OFFSET UNITYSDK_OFFSET(0x19D2DD00)
#define MOLEMOLE_UIACTIVITYVIDEOWIDGETCONTROLLER___C__PLAYVIDEOFROMSTART_B__9_0_OFFSET UNITYSDK_OFFSET(0x19D2DD10)

namespace MoleMole
{
	inline static constexpr unsigned int UIActivityVideoWidgetController___c_TypeDefinitionIndex = 92921;

	class UIActivityVideoWidgetController___c : public ::System::Object
	{
	public:
		static ::System::Object** StaticGet___9()
		{
			return (::System::Object**)Il2CppClass::FromTypeDefinitionIndex(UIActivityVideoWidgetController___c_TypeDefinitionIndex)->GetStaticField(0x3C010);
		}
		static ::System::Action_1<::DGDNKBFMHME*>** StaticGet___9__9_0()
		{
			return (::System::Action_1<::DGDNKBFMHME*>**)Il2CppClass::FromTypeDefinitionIndex(UIActivityVideoWidgetController___c_TypeDefinitionIndex)->GetStaticField(0x3C018);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + MOLEMOLE_UIACTIVITYVIDEOWIDGETCONTROLLER___C__CCTOR_OFFSET))();
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIACTIVITYVIDEOWIDGETCONTROLLER___C__CTOR_OFFSET))(this);
		}

		::System::Void _PlayVideoFromStart_b__9_0(::DGDNKBFMHME* vp)
		{
			return ((::System::Void(*)(::PVOID, ::DGDNKBFMHME*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIACTIVITYVIDEOWIDGETCONTROLLER___C__PLAYVIDEOFROMSTART_B__9_0_OFFSET))(this, vp);
		}
	};
}
