#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class DGDNKBFMHME;
namespace System { template <typename T> class Action_1; }

#define MOLEMOLE_UIACTIVITYVIDEODETAILPOPWINDOWCONTROLLER___C__CCTOR_OFFSET UNITYSDK_OFFSET(0x17EA4F30)
#define MOLEMOLE_UIACTIVITYVIDEODETAILPOPWINDOWCONTROLLER___C__CTOR_OFFSET UNITYSDK_OFFSET(0x17EA4F70)
#define MOLEMOLE_UIACTIVITYVIDEODETAILPOPWINDOWCONTROLLER___C__PLAYVIDEOFROMSTART_B__8_0_OFFSET UNITYSDK_OFFSET(0x17EA4F80)

namespace MoleMole
{
	inline static constexpr unsigned int UIActivityVideoDetailPopWindowController___c_TypeDefinitionIndex = 62114;

	class UIActivityVideoDetailPopWindowController___c : public ::System::Object
	{
	public:
		static ::System::Action_1<::DGDNKBFMHME*>** StaticGet___9__8_0()
		{
			return (::System::Action_1<::DGDNKBFMHME*>**)Il2CppClass::FromTypeDefinitionIndex(UIActivityVideoDetailPopWindowController___c_TypeDefinitionIndex)->GetStaticField(0x34FF0);
		}
		static ::System::Object** StaticGet___9()
		{
			return (::System::Object**)Il2CppClass::FromTypeDefinitionIndex(UIActivityVideoDetailPopWindowController___c_TypeDefinitionIndex)->GetStaticField(0x34FF8);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + MOLEMOLE_UIACTIVITYVIDEODETAILPOPWINDOWCONTROLLER___C__CCTOR_OFFSET))();
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIACTIVITYVIDEODETAILPOPWINDOWCONTROLLER___C__CTOR_OFFSET))(this);
		}

		::System::Void _PlayVideoFromStart_b__8_0(::DGDNKBFMHME* vp)
		{
			return ((::System::Void(*)(::PVOID, ::DGDNKBFMHME*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIACTIVITYVIDEODETAILPOPWINDOWCONTROLLER___C__PLAYVIDEOFROMSTART_B__8_0_OFFSET))(this, vp);
		}
	};
}
