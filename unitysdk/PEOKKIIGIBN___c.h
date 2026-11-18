#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class IBENDELLLAO;
namespace MoleMole { class UIDigibooRoleRowWidgetController_Data; }
namespace System { template <typename T> class Comparison_1; }
namespace System { template <typename T> class Func_1; }

#define PEOKKIIGIBN___C_JGIDEJAJIOF_OFFSET UNITYSDK_OFFSET(0x150C0840)
#define PEOKKIIGIBN___C_NNKDMMGMJEE_OFFSET UNITYSDK_OFFSET(0x150C0B20)
#define PEOKKIIGIBN___C_OMPMEKABDFM_OFFSET UNITYSDK_OFFSET(0x150C09B0)
#define PEOKKIIGIBN___C__CCTOR_OFFSET UNITYSDK_OFFSET(0x150C07F0)
#define PEOKKIIGIBN___C__CTOR_OFFSET UNITYSDK_OFFSET(0x150C0830)

inline static constexpr unsigned int PEOKKIIGIBN___c_TypeDefinitionIndex = 74607;

class PEOKKIIGIBN___c : public ::System::Object
{
public:
	static ::System::Object** StaticGet___9()
	{
		return (::System::Object**)Il2CppClass::FromTypeDefinitionIndex(PEOKKIIGIBN___c_TypeDefinitionIndex)->GetStaticField(0x39DC0);
	}
	static ::System::Comparison_1<::System::Object*>** StaticGet___9__18_11()
	{
		return (::System::Comparison_1<::System::Object*>**)Il2CppClass::FromTypeDefinitionIndex(PEOKKIIGIBN___c_TypeDefinitionIndex)->GetStaticField(0x39DC8);
	}
	static ::System::Func_1<::IBENDELLLAO*>** StaticGet___9__18_7()
	{
		return (::System::Func_1<::IBENDELLLAO*>**)Il2CppClass::FromTypeDefinitionIndex(PEOKKIIGIBN___c_TypeDefinitionIndex)->GetStaticField(0x39DD0);
	}
	static ::System::Func_1<::IBENDELLLAO*>** StaticGet___9__18_6()
	{
		return (::System::Func_1<::IBENDELLLAO*>**)Il2CppClass::FromTypeDefinitionIndex(PEOKKIIGIBN___c_TypeDefinitionIndex)->GetStaticField(0x39DD8);
	}

	static ::System::Void _cctor()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + PEOKKIIGIBN___C__CCTOR_OFFSET))();
	}

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + PEOKKIIGIBN___C__CTOR_OFFSET))(this);
	}

	::IBENDELLLAO* JGIDEJAJIOF()
	{
		return ((::IBENDELLLAO*(*)(::PVOID))((::PBYTE)hIl2Cpp + PEOKKIIGIBN___C_JGIDEJAJIOF_OFFSET))(this);
	}

	::IBENDELLLAO* OMPMEKABDFM()
	{
		return ((::IBENDELLLAO*(*)(::PVOID))((::PBYTE)hIl2Cpp + PEOKKIIGIBN___C_OMPMEKABDFM_OFFSET))(this);
	}

	::System::Int32 NNKDMMGMJEE(::MoleMole::UIDigibooRoleRowWidgetController_Data* EJCBEJMGFAJ, ::MoleMole::UIDigibooRoleRowWidgetController_Data* EBFCACIEKBC)
	{
		return ((::System::Int32(*)(::PVOID, ::MoleMole::UIDigibooRoleRowWidgetController_Data*, ::MoleMole::UIDigibooRoleRowWidgetController_Data*))((::PBYTE)hIl2Cpp + PEOKKIIGIBN___C_NNKDMMGMJEE_OFFSET))(this, EJCBEJMGFAJ, EBFCACIEKBC);
	}
};
