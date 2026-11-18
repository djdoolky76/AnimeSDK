#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class ODLBEJANMEG;
namespace MoleMole { class UISummerEventPopGetRowWidgetController_Data; }
namespace System { template <typename T1, typename T2> class Func_2; }

#define JAAJJAEGBPG___C_AAKOPAHLGNA_OFFSET UNITYSDK_OFFSET(0x16ABBBA0)
#define JAAJJAEGBPG___C__CCTOR_OFFSET UNITYSDK_OFFSET(0x16ABBB50)
#define JAAJJAEGBPG___C__CTOR_OFFSET UNITYSDK_OFFSET(0x16ABBB90)

inline static constexpr unsigned int JAAJJAEGBPG___c_TypeDefinitionIndex = 86529;

class JAAJJAEGBPG___c : public ::System::Object
{
public:
	static ::System::Object** StaticGet___9()
	{
		return (::System::Object**)Il2CppClass::FromTypeDefinitionIndex(JAAJJAEGBPG___c_TypeDefinitionIndex)->GetStaticField(0x4BC30);
	}
	static ::System::Func_2<::ODLBEJANMEG*, ::System::Object*>** StaticGet___9__6_2()
	{
		return (::System::Func_2<::ODLBEJANMEG*, ::System::Object*>**)Il2CppClass::FromTypeDefinitionIndex(JAAJJAEGBPG___c_TypeDefinitionIndex)->GetStaticField(0x4BC38);
	}

	static ::System::Void _cctor()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + JAAJJAEGBPG___C__CCTOR_OFFSET))();
	}

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + JAAJJAEGBPG___C__CTOR_OFFSET))(this);
	}

	::MoleMole::UISummerEventPopGetRowWidgetController_Data* AAKOPAHLGNA(::ODLBEJANMEG* EJCBEJMGFAJ)
	{
		return ((::MoleMole::UISummerEventPopGetRowWidgetController_Data*(*)(::PVOID, ::ODLBEJANMEG*))((::PBYTE)hIl2Cpp + JAAJJAEGBPG___C_AAKOPAHLGNA_OFFSET))(this, EJCBEJMGFAJ);
	}
};
