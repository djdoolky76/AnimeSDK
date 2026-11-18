#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class ODLBEJANMEG;
namespace MoleMole { class UISummerEventPopGetRowWidgetController_Data; }
namespace System { template <typename T1, typename T2> class Func_2; }

#define DOLEOLBBCGO___C_OFCPGLBDMMG_OFFSET UNITYSDK_OFFSET(0x1697BB20)
#define DOLEOLBBCGO___C__CCTOR_OFFSET UNITYSDK_OFFSET(0x1697BAD0)
#define DOLEOLBBCGO___C__CTOR_OFFSET UNITYSDK_OFFSET(0x1697BB10)

inline static constexpr unsigned int DOLEOLBBCGO___c_TypeDefinitionIndex = 74698;

class DOLEOLBBCGO___c : public ::System::Object
{
public:
	static ::System::Func_2<::ODLBEJANMEG*, ::System::Object*>** StaticGet___9__11_3()
	{
		return (::System::Func_2<::ODLBEJANMEG*, ::System::Object*>**)Il2CppClass::FromTypeDefinitionIndex(DOLEOLBBCGO___c_TypeDefinitionIndex)->GetStaticField(0x3AA60);
	}
	static ::System::Object** StaticGet___9()
	{
		return (::System::Object**)Il2CppClass::FromTypeDefinitionIndex(DOLEOLBBCGO___c_TypeDefinitionIndex)->GetStaticField(0x3AA68);
	}

	static ::System::Void _cctor()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + DOLEOLBBCGO___C__CCTOR_OFFSET))();
	}

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + DOLEOLBBCGO___C__CTOR_OFFSET))(this);
	}

	::MoleMole::UISummerEventPopGetRowWidgetController_Data* OFCPGLBDMMG(::ODLBEJANMEG* EJCBEJMGFAJ)
	{
		return ((::MoleMole::UISummerEventPopGetRowWidgetController_Data*(*)(::PVOID, ::ODLBEJANMEG*))((::PBYTE)hIl2Cpp + DOLEOLBBCGO___C_OFCPGLBDMMG_OFFSET))(this, EJCBEJMGFAJ);
	}
};
