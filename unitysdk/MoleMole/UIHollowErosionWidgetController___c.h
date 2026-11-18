#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class DBEJKJDLNAI;
namespace System { template <typename T> class Predicate_1; }

#define MOLEMOLE_UIHOLLOWEROSIONWIDGETCONTROLLER___C__CCTOR_OFFSET UNITYSDK_OFFSET(0x182A65C0)
#define MOLEMOLE_UIHOLLOWEROSIONWIDGETCONTROLLER___C__CTOR_OFFSET UNITYSDK_OFFSET(0x182A6600)
#define MOLEMOLE_UIHOLLOWEROSIONWIDGETCONTROLLER___C__REFRESHCONFIGDATA_B__20_0_OFFSET UNITYSDK_OFFSET(0x182A6610)

namespace MoleMole
{
	inline static constexpr unsigned int UIHollowErosionWidgetController___c_TypeDefinitionIndex = 86714;

	class UIHollowErosionWidgetController___c : public ::System::Object
	{
	public:
		static ::System::Predicate_1<::DBEJKJDLNAI*>** StaticGet___9__20_0()
		{
			return (::System::Predicate_1<::DBEJKJDLNAI*>**)Il2CppClass::FromTypeDefinitionIndex(UIHollowErosionWidgetController___c_TypeDefinitionIndex)->GetStaticField(0x421D0);
		}
		static ::System::Object** StaticGet___9()
		{
			return (::System::Object**)Il2CppClass::FromTypeDefinitionIndex(UIHollowErosionWidgetController___c_TypeDefinitionIndex)->GetStaticField(0x421D8);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + MOLEMOLE_UIHOLLOWEROSIONWIDGETCONTROLLER___C__CCTOR_OFFSET))();
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIHOLLOWEROSIONWIDGETCONTROLLER___C__CTOR_OFFSET))(this);
		}

		::System::Boolean _RefreshConfigData_b__20_0(::DBEJKJDLNAI* x)
		{
			return ((::System::Boolean(*)(::PVOID, ::DBEJKJDLNAI*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIHOLLOWEROSIONWIDGETCONTROLLER___C__REFRESHCONFIGDATA_B__20_0_OFFSET))(this, x);
		}
	};
}
