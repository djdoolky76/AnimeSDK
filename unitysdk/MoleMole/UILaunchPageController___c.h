#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class DGDNKBFMHME;
namespace System { class Action; }
namespace System { template <typename T> class Action_1; }

#define MOLEMOLE_UILAUNCHPAGECONTROLLER___C__CCTOR_OFFSET UNITYSDK_OFFSET(0x196DFB40)
#define MOLEMOLE_UILAUNCHPAGECONTROLLER___C__CTOR_OFFSET UNITYSDK_OFFSET(0x196DFB80)
#define MOLEMOLE_UILAUNCHPAGECONTROLLER___C__GAMESTART_B__16_0_OFFSET UNITYSDK_OFFSET(0x196DFB90)
#define MOLEMOLE_UILAUNCHPAGECONTROLLER___C__GAMESTART_G__GOTOLOGINGAME_16_1_OFFSET UNITYSDK_OFFSET(0x196DFC30)
#define MOLEMOLE_UILAUNCHPAGECONTROLLER___C__PLAYKOREAAGELIMIT_B__18_0_OFFSET UNITYSDK_OFFSET(0x196DFC60)

namespace MoleMole
{
	inline static constexpr unsigned int UILaunchPageController___c_TypeDefinitionIndex = 49586;

	class UILaunchPageController___c : public ::System::Object
	{
	public:
		static ::System::Action** StaticGet___9__16_0()
		{
			return (::System::Action**)Il2CppClass::FromTypeDefinitionIndex(UILaunchPageController___c_TypeDefinitionIndex)->GetStaticField(0x4FAD0);
		}
		static ::System::Action_1<::DGDNKBFMHME*>** StaticGet___9__18_0()
		{
			return (::System::Action_1<::DGDNKBFMHME*>**)Il2CppClass::FromTypeDefinitionIndex(UILaunchPageController___c_TypeDefinitionIndex)->GetStaticField(0x4FAD8);
		}
		static ::System::Object** StaticGet___9()
		{
			return (::System::Object**)Il2CppClass::FromTypeDefinitionIndex(UILaunchPageController___c_TypeDefinitionIndex)->GetStaticField(0x4FAE0);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + MOLEMOLE_UILAUNCHPAGECONTROLLER___C__CCTOR_OFFSET))();
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UILAUNCHPAGECONTROLLER___C__CTOR_OFFSET))(this);
		}

		::System::Void _GameStart_b__16_0()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UILAUNCHPAGECONTROLLER___C__GAMESTART_B__16_0_OFFSET))(this);
		}

		::System::Void _GameStart_g__GoToLoginGame_16_1()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UILAUNCHPAGECONTROLLER___C__GAMESTART_G__GOTOLOGINGAME_16_1_OFFSET))(this);
		}

		::System::Void _PlayKoreaAgeLimit_b__18_0(::DGDNKBFMHME* playerHelper)
		{
			return ((::System::Void(*)(::PVOID, ::DGDNKBFMHME*))((::PBYTE)hIl2Cpp + MOLEMOLE_UILAUNCHPAGECONTROLLER___C__PLAYKOREAAGELIMIT_B__18_0_OFFSET))(this, playerHelper);
		}
	};
}
