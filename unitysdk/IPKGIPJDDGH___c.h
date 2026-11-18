#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace MoleMole { class UICoopTeachTabWidgetController_Data; }
namespace System { template <typename T1, typename T2> class Converter_2; }
namespace System { template <typename T> class Comparison_1; }
namespace System { template <typename T> class Predicate_1; }

#define IPKGIPJDDGH___C_CILAKHEOLPO_OFFSET UNITYSDK_OFFSET(0x14203F60)
#define IPKGIPJDDGH___C_DPFPNBHMLLL_OFFSET UNITYSDK_OFFSET(0x14203F70)
#define IPKGIPJDDGH___C_MOFIEFOOJFI_OFFSET UNITYSDK_OFFSET(0x142040A0)
#define IPKGIPJDDGH___C__CCTOR_OFFSET UNITYSDK_OFFSET(0x14203F10)
#define IPKGIPJDDGH___C__CTOR_OFFSET UNITYSDK_OFFSET(0x14203F50)

inline static constexpr unsigned int IPKGIPJDDGH___c_TypeDefinitionIndex = 69236;

class IPKGIPJDDGH___c : public ::System::Object
{
public:
	static ::System::Object** StaticGet___9()
	{
		return (::System::Object**)Il2CppClass::FromTypeDefinitionIndex(IPKGIPJDDGH___c_TypeDefinitionIndex)->GetStaticField(0x49EA0);
	}
	static ::System::Comparison_1<::System::Object*>** StaticGet___9__40_0()
	{
		return (::System::Comparison_1<::System::Object*>**)Il2CppClass::FromTypeDefinitionIndex(IPKGIPJDDGH___c_TypeDefinitionIndex)->GetStaticField(0x49EA8);
	}
	static ::System::Converter_2<::System::Int32, ::System::Int32>** StaticGet___9__36_4()
	{
		return (::System::Converter_2<::System::Int32, ::System::Int32>**)Il2CppClass::FromTypeDefinitionIndex(IPKGIPJDDGH___c_TypeDefinitionIndex)->GetStaticField(0x49EB0);
	}
	static ::System::Predicate_1<::System::Int32>** StaticGet___9__36_5()
	{
		return (::System::Predicate_1<::System::Int32>**)Il2CppClass::FromTypeDefinitionIndex(IPKGIPJDDGH___c_TypeDefinitionIndex)->GetStaticField(0x49EB8);
	}

	static ::System::Void _cctor()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + IPKGIPJDDGH___C__CCTOR_OFFSET))();
	}

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + IPKGIPJDDGH___C__CTOR_OFFSET))(this);
	}

	::System::Boolean CILAKHEOLPO(::System::Int32 HAAEBCOBKFF)
	{
		return ((::System::Boolean(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + IPKGIPJDDGH___C_CILAKHEOLPO_OFFSET))(this, HAAEBCOBKFF);
	}

	::System::Int32 DPFPNBHMLLL(::System::Int32 HAAEBCOBKFF)
	{
		return ((::System::Int32(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + IPKGIPJDDGH___C_DPFPNBHMLLL_OFFSET))(this, HAAEBCOBKFF);
	}

	::System::Int32 MOFIEFOOJFI(::MoleMole::UICoopTeachTabWidgetController_Data* EJCBEJMGFAJ, ::MoleMole::UICoopTeachTabWidgetController_Data* EBFCACIEKBC)
	{
		return ((::System::Int32(*)(::PVOID, ::MoleMole::UICoopTeachTabWidgetController_Data*, ::MoleMole::UICoopTeachTabWidgetController_Data*))((::PBYTE)hIl2Cpp + IPKGIPJDDGH___C_MOFIEFOOJFI_OFFSET))(this, EJCBEJMGFAJ, EBFCACIEKBC);
	}
};
