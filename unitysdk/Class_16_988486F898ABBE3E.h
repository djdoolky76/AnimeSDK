#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

#define CLASS_16_988486F898ABBE3E_DAECPPHLJHN_OFFSET UNITYSDK_OFFSET(0x16B69EA0)
#define CLASS_16_988486F898ABBE3E_KHKKPGAJBKH_OFFSET UNITYSDK_OFFSET(0x16B6A1C0)
#define CLASS_16_988486F898ABBE3E_KIAGKPDIDDH_OFFSET UNITYSDK_OFFSET(0x16B6A8D0)
#define CLASS_16_988486F898ABBE3E_MAMNIGKOFLN_OFFSET UNITYSDK_OFFSET(0x16B69F00)
#define CLASS_16_988486F898ABBE3E_MBOIFDLBFAG_OFFSET UNITYSDK_OFFSET(0x16B69F50)
#define CLASS_16_988486F898ABBE3E_METHOD_6_OFFSET UNITYSDK_OFFSET(0x16B6A710)
#define CLASS_16_988486F898ABBE3E__CCTOR_OFFSET UNITYSDK_OFFSET(0x16B69E80)
#define CLASS_16_988486F898ABBE3E__CTOR_OFFSET UNITYSDK_OFFSET(0x16B69E10)

inline static constexpr unsigned int Class_16_988486F898ABBE3E_TypeDefinitionIndex = 60931;

class Class_16_988486F898ABBE3E : public ::System::Object
{
public:
	static ::System::UInt64* StaticGet_Field_0()
	{
		return (::System::UInt64*)Il2CppClass::FromTypeDefinitionIndex(Class_16_988486F898ABBE3E_TypeDefinitionIndex)->GetStaticField(0xC3B0);
	}
	static ::System::Int32* StaticGet_HAOIJFKIFME()
	{
		return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(Class_16_988486F898ABBE3E_TypeDefinitionIndex)->GetStaticField(0xC3B8);
	}
	static ::System::Int32* StaticGet_KKGGANPMPKA()
	{
		return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(Class_16_988486F898ABBE3E_TypeDefinitionIndex)->GetStaticField(0xC3BC);
	}
	::Il2CppArray<::System::UInt64>* DCCBGGONJEO; // 0x10
	::System::Int32 EOGLMAEPALE; // 0x18

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_16_988486F898ABBE3E__CTOR_OFFSET))(this);
	}

	static ::System::Void _cctor()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + CLASS_16_988486F898ABBE3E__CCTOR_OFFSET))();
	}

	static ::System::UInt32 DAECPPHLJHN(::System::UInt32 HFMHOELKCAJ, ::System::UInt32 JCPNDFAEOLI)
	{
		return ((::System::UInt32(*)(::System::UInt32, ::System::UInt32))((::PBYTE)hIl2Cpp + CLASS_16_988486F898ABBE3E_DAECPPHLJHN_OFFSET))(HFMHOELKCAJ, JCPNDFAEOLI);
	}

	static ::System::UInt64 MAMNIGKOFLN(::System::UInt64 BFJONIPNMBI)
	{
		return ((::System::UInt64(*)(::System::UInt64))((::PBYTE)hIl2Cpp + CLASS_16_988486F898ABBE3E_MAMNIGKOFLN_OFFSET))(BFJONIPNMBI);
	}

	::System::Void MBOIFDLBFAG()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_16_988486F898ABBE3E_MBOIFDLBFAG_OFFSET))(this);
	}

	::System::Void KHKKPGAJBKH()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_16_988486F898ABBE3E_KHKKPGAJBKH_OFFSET))(this);
	}

	::System::Void Method_6(::System::UInt64 GONODCOMIAA)
	{
		return ((::System::Void(*)(::PVOID, ::System::UInt64))((::PBYTE)hIl2Cpp + CLASS_16_988486F898ABBE3E_METHOD_6_OFFSET))(this, GONODCOMIAA);
	}

	::System::UInt64 KIAGKPDIDDH()
	{
		return ((::System::UInt64(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_16_988486F898ABBE3E_KIAGKPDIDDH_OFFSET))(this);
	}
};
