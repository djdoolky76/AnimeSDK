#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class ODLBEJANMEG;
namespace MoleMole { class UISummerEventPopGetRowWidgetController_Data; }
namespace System { template <typename T1, typename T2> class Func_2; }

#define MNPOPKJOCCH___C_GBHNCEECJKM_OFFSET UNITYSDK_OFFSET(0x11F63830)
#define MNPOPKJOCCH___C__CCTOR_OFFSET UNITYSDK_OFFSET(0x11F637E0)
#define MNPOPKJOCCH___C__CTOR_OFFSET UNITYSDK_OFFSET(0x11F63820)

inline static constexpr unsigned int MNPOPKJOCCH___c_TypeDefinitionIndex = 92007;

class MNPOPKJOCCH___c : public ::System::Object
{
public:
	static ::System::Object** StaticGet___9()
	{
		return (::System::Object**)Il2CppClass::FromTypeDefinitionIndex(MNPOPKJOCCH___c_TypeDefinitionIndex)->GetStaticField(0x3E880);
	}
	static ::System::Func_2<::ODLBEJANMEG*, ::System::Object*>** StaticGet___9__5_2()
	{
		return (::System::Func_2<::ODLBEJANMEG*, ::System::Object*>**)Il2CppClass::FromTypeDefinitionIndex(MNPOPKJOCCH___c_TypeDefinitionIndex)->GetStaticField(0x3E888);
	}

	static ::System::Void _cctor()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + MNPOPKJOCCH___C__CCTOR_OFFSET))();
	}

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MNPOPKJOCCH___C__CTOR_OFFSET))(this);
	}

	::MoleMole::UISummerEventPopGetRowWidgetController_Data* GBHNCEECJKM(::ODLBEJANMEG* EJCBEJMGFAJ)
	{
		return ((::MoleMole::UISummerEventPopGetRowWidgetController_Data*(*)(::PVOID, ::ODLBEJANMEG*))((::PBYTE)hIl2Cpp + MNPOPKJOCCH___C_GBHNCEECJKM_OFFSET))(this, EJCBEJMGFAJ);
	}
};
