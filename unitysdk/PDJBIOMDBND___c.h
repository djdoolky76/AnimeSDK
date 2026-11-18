#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class IEHMCPFFJLG;
namespace System { template <typename T> class Comparison_1; }

#define PDJBIOMDBND___C_GBELDLCHGOE_OFFSET UNITYSDK_OFFSET(0x17315110)
#define PDJBIOMDBND___C__CCTOR_OFFSET UNITYSDK_OFFSET(0x173150C0)
#define PDJBIOMDBND___C__CTOR_OFFSET UNITYSDK_OFFSET(0x17315100)

inline static constexpr unsigned int PDJBIOMDBND___c_TypeDefinitionIndex = 41133;

class PDJBIOMDBND___c : public ::System::Object
{
public:
	static ::System::Comparison_1<::IEHMCPFFJLG*>** StaticGet___9__12_0()
	{
		return (::System::Comparison_1<::IEHMCPFFJLG*>**)Il2CppClass::FromTypeDefinitionIndex(PDJBIOMDBND___c_TypeDefinitionIndex)->GetStaticField(0x478C0);
	}
	static ::System::Object** StaticGet___9()
	{
		return (::System::Object**)Il2CppClass::FromTypeDefinitionIndex(PDJBIOMDBND___c_TypeDefinitionIndex)->GetStaticField(0x478C8);
	}

	static ::System::Void _cctor()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + PDJBIOMDBND___C__CCTOR_OFFSET))();
	}

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + PDJBIOMDBND___C__CTOR_OFFSET))(this);
	}

	::System::Int32 GBELDLCHGOE(::IEHMCPFFJLG* EJCBEJMGFAJ, ::IEHMCPFFJLG* EBFCACIEKBC)
	{
		return ((::System::Int32(*)(::PVOID, ::IEHMCPFFJLG*, ::IEHMCPFFJLG*))((::PBYTE)hIl2Cpp + PDJBIOMDBND___C_GBELDLCHGOE_OFFSET))(this, EJCBEJMGFAJ, EBFCACIEKBC);
	}
};
