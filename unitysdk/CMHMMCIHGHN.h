#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace System::Collections::Generic { template <typename T> class List_1; }

#define CMHMMCIHGHN_FLPCLPDBHBK_OFFSET UNITYSDK_OFFSET(0x19717330)
#define CMHMMCIHGHN_FOKKGBKEDFI_OFFSET UNITYSDK_OFFSET(0x19717770)
#define CMHMMCIHGHN_OKJCHFGIKBH_OFFSET UNITYSDK_OFFSET(0x19717430)
#define CMHMMCIHGHN__CCTOR_OFFSET UNITYSDK_OFFSET(0x197173A0)
#define CMHMMCIHGHN__CTOR_OFFSET UNITYSDK_OFFSET(0x19717390)

inline static constexpr unsigned int CMHMMCIHGHN_TypeDefinitionIndex = 87874;

class CMHMMCIHGHN : public ::System::Object
{
public:
	static ::System::Collections::Generic::List_1<::CMHMMCIHGHN*>** StaticGet_JHKLNJNGIJC()
	{
		return (::System::Collections::Generic::List_1<::CMHMMCIHGHN*>**)Il2CppClass::FromTypeDefinitionIndex(CMHMMCIHGHN_TypeDefinitionIndex)->GetStaticField(0x4CD00);
	}

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CMHMMCIHGHN__CTOR_OFFSET))(this);
	}

	static ::System::Void _cctor()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + CMHMMCIHGHN__CCTOR_OFFSET))();
	}

	::System::Void FLPCLPDBHBK(::System::Single PMNLNNGEIFM)
	{
		return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + CMHMMCIHGHN_FLPCLPDBHBK_OFFSET))(this, PMNLNNGEIFM);
	}

	static ::System::Void OKJCHFGIKBH()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + CMHMMCIHGHN_OKJCHFGIKBH_OFFSET))();
	}

	static ::System::Void FOKKGBKEDFI()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + CMHMMCIHGHN_FOKKGBKEDFI_OFFSET))();
	}
};
