#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class IANDOOLAALI_NGKHGAPPFDA;
class OAEFGCLEHHO;
namespace System { template <typename T1, typename T2> class Converter_2; }

#define KNLKGLCAPGH___C_GFDIFPOGCOM_OFFSET UNITYSDK_OFFSET(0x16822A40)
#define KNLKGLCAPGH___C_IJGDLENNGJH_OFFSET UNITYSDK_OFFSET(0x168229B0)
#define KNLKGLCAPGH___C_JBEGMEFBHCP_OFFSET UNITYSDK_OFFSET(0x168229A0)
#define KNLKGLCAPGH___C__CCTOR_OFFSET UNITYSDK_OFFSET(0x16822950)
#define KNLKGLCAPGH___C__CTOR_OFFSET UNITYSDK_OFFSET(0x16822990)

inline static constexpr unsigned int KNLKGLCAPGH___c_TypeDefinitionIndex = 41116;

class KNLKGLCAPGH___c : public ::System::Object
{
public:
	static ::IANDOOLAALI_NGKHGAPPFDA** StaticGet___9__13_1()
	{
		return (::IANDOOLAALI_NGKHGAPPFDA**)Il2CppClass::FromTypeDefinitionIndex(KNLKGLCAPGH___c_TypeDefinitionIndex)->GetStaticField(0x329D0);
	}
	static ::System::Converter_2<::System::Int32, ::System::UInt32>** StaticGet___9__25_0()
	{
		return (::System::Converter_2<::System::Int32, ::System::UInt32>**)Il2CppClass::FromTypeDefinitionIndex(KNLKGLCAPGH___c_TypeDefinitionIndex)->GetStaticField(0x329D8);
	}
	static ::IANDOOLAALI_NGKHGAPPFDA** StaticGet___9__9_1()
	{
		return (::IANDOOLAALI_NGKHGAPPFDA**)Il2CppClass::FromTypeDefinitionIndex(KNLKGLCAPGH___c_TypeDefinitionIndex)->GetStaticField(0x329E0);
	}
	static ::System::Object** StaticGet___9()
	{
		return (::System::Object**)Il2CppClass::FromTypeDefinitionIndex(KNLKGLCAPGH___c_TypeDefinitionIndex)->GetStaticField(0x329E8);
	}

	static ::System::Void _cctor()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + KNLKGLCAPGH___C__CCTOR_OFFSET))();
	}

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + KNLKGLCAPGH___C__CTOR_OFFSET))(this);
	}

	::System::UInt32 JBEGMEFBHCP(::System::Int32 HBJOLKHGGDD)
	{
		return ((::System::UInt32(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + KNLKGLCAPGH___C_JBEGMEFBHCP_OFFSET))(this, HBJOLKHGGDD);
	}

	::System::Void IJGDLENNGJH(::OAEFGCLEHHO* BHDNBGLCNOM)
	{
		return ((::System::Void(*)(::PVOID, ::OAEFGCLEHHO*))((::PBYTE)hIl2Cpp + KNLKGLCAPGH___C_IJGDLENNGJH_OFFSET))(this, BHDNBGLCNOM);
	}

	::System::Void GFDIFPOGCOM(::OAEFGCLEHHO* BHDNBGLCNOM)
	{
		return ((::System::Void(*)(::PVOID, ::OAEFGCLEHHO*))((::PBYTE)hIl2Cpp + KNLKGLCAPGH___C_GFDIFPOGCOM_OFFSET))(this, BHDNBGLCNOM);
	}
};
