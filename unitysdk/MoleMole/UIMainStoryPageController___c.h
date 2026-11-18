#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class EFLEGHEHLHB;
namespace System { template <typename T1, typename T2> class Func_2; }

#define MOLEMOLE_UIMAINSTORYPAGECONTROLLER___C__CCTOR_OFFSET UNITYSDK_OFFSET(0x188148A0)
#define MOLEMOLE_UIMAINSTORYPAGECONTROLLER___C__CTOR_OFFSET UNITYSDK_OFFSET(0x188148E0)
#define MOLEMOLE_UIMAINSTORYPAGECONTROLLER___C__ONUIINIT_B__5_5_OFFSET UNITYSDK_OFFSET(0x188148F0)

namespace MoleMole
{
	inline static constexpr unsigned int UIMainStoryPageController___c_TypeDefinitionIndex = 60177;

	class UIMainStoryPageController___c : public ::System::Object
	{
	public:
		static ::System::Object** StaticGet___9()
		{
			return (::System::Object**)Il2CppClass::FromTypeDefinitionIndex(UIMainStoryPageController___c_TypeDefinitionIndex)->GetStaticField(0x4C4C0);
		}
		static ::System::Func_2<::EFLEGHEHLHB*, ::System::Int32>** StaticGet___9__5_5()
		{
			return (::System::Func_2<::EFLEGHEHLHB*, ::System::Int32>**)Il2CppClass::FromTypeDefinitionIndex(UIMainStoryPageController___c_TypeDefinitionIndex)->GetStaticField(0x4C4C8);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + MOLEMOLE_UIMAINSTORYPAGECONTROLLER___C__CCTOR_OFFSET))();
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIMAINSTORYPAGECONTROLLER___C__CTOR_OFFSET))(this);
		}

		::System::Int32 _OnUIInit_b__5_5(::EFLEGHEHLHB* x)
		{
			return ((::System::Int32(*)(::PVOID, ::EFLEGHEHLHB*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIMAINSTORYPAGECONTROLLER___C__ONUIINIT_B__5_5_OFFSET))(this, x);
		}
	};
}
