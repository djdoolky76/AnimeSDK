#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Cysharp/Threading/Tasks/UniTask.h"
#include "unitysdk/System/Threading/CancellationToken.h"
#include "unitysdk/System/Object.h"

class EMADFJAKIBG;
namespace System { class Action; }
namespace System { template <typename T1, typename T2> class Func_2; }
namespace System { template <typename T> class Action_1; }

#define MOLEMOLE_UIMAINCITYTIMETIPSPOPWINDOWCONTROLLER___C__CCTOR_OFFSET UNITYSDK_OFFSET(0x16740610)
#define MOLEMOLE_UIMAINCITYTIMETIPSPOPWINDOWCONTROLLER___C__CTOR_OFFSET UNITYSDK_OFFSET(0x16740650)
#define MOLEMOLE_UIMAINCITYTIMETIPSPOPWINDOWCONTROLLER___C__ONMODTIMERSP_B__16_0_OFFSET UNITYSDK_OFFSET(0x16740660)
#define MOLEMOLE_UIMAINCITYTIMETIPSPOPWINDOWCONTROLLER___C__ONMODTIMERSP_B__16_1_OFFSET UNITYSDK_OFFSET(0x16740760)
#define MOLEMOLE_UIMAINCITYTIMETIPSPOPWINDOWCONTROLLER___C__ONMODTIMERSP_B__16_2_OFFSET UNITYSDK_OFFSET(0x167408F0)

namespace MoleMole
{
	inline static constexpr unsigned int UIMainCityTimeTipsPopWindowController___c_TypeDefinitionIndex = 57510;

	class UIMainCityTimeTipsPopWindowController___c : public ::System::Object
	{
	public:
		static ::System::Action** StaticGet___9__16_1()
		{
			return (::System::Action**)Il2CppClass::FromTypeDefinitionIndex(UIMainCityTimeTipsPopWindowController___c_TypeDefinitionIndex)->GetStaticField(0x450F0);
		}
		static ::System::Object** StaticGet___9()
		{
			return (::System::Object**)Il2CppClass::FromTypeDefinitionIndex(UIMainCityTimeTipsPopWindowController___c_TypeDefinitionIndex)->GetStaticField(0x450F8);
		}
		static ::System::Func_2<::System::Threading::CancellationToken, ::Cysharp::Threading::Tasks::UniTask>** StaticGet___9__16_2()
		{
			return (::System::Func_2<::System::Threading::CancellationToken, ::Cysharp::Threading::Tasks::UniTask>**)Il2CppClass::FromTypeDefinitionIndex(UIMainCityTimeTipsPopWindowController___c_TypeDefinitionIndex)->GetStaticField(0x45100);
		}
		static ::System::Action_1<::EMADFJAKIBG*>** StaticGet___9__16_0()
		{
			return (::System::Action_1<::EMADFJAKIBG*>**)Il2CppClass::FromTypeDefinitionIndex(UIMainCityTimeTipsPopWindowController___c_TypeDefinitionIndex)->GetStaticField(0x45108);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + MOLEMOLE_UIMAINCITYTIMETIPSPOPWINDOWCONTROLLER___C__CCTOR_OFFSET))();
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIMAINCITYTIMETIPSPOPWINDOWCONTROLLER___C__CTOR_OFFSET))(this);
		}

		::System::Void _OnModTimeRsp_b__16_0(::EMADFJAKIBG* teleportByTransition)
		{
			return ((::System::Void(*)(::PVOID, ::EMADFJAKIBG*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIMAINCITYTIMETIPSPOPWINDOWCONTROLLER___C__ONMODTIMERSP_B__16_0_OFFSET))(this, teleportByTransition);
		}

		::System::Void _OnModTimeRsp_b__16_1()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIMAINCITYTIMETIPSPOPWINDOWCONTROLLER___C__ONMODTIMERSP_B__16_1_OFFSET))(this);
		}

		::Cysharp::Threading::Tasks::UniTask _OnModTimeRsp_b__16_2(::System::Threading::CancellationToken token)
		{
			return ((::Cysharp::Threading::Tasks::UniTask(*)(::PVOID, ::System::Threading::CancellationToken))((::PBYTE)hIl2Cpp + MOLEMOLE_UIMAINCITYTIMETIPSPOPWINDOWCONTROLLER___C__ONMODTIMERSP_B__16_2_OFFSET))(this, token);
		}
	};
}
