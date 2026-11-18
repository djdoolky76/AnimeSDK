#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class KJIEDDLNJFC;
namespace System { class Action; }
namespace System { template <typename T> class Comparison_1; }

#define IAPCANOLBEE___C_DLKMNLPGNMP_OFFSET UNITYSDK_OFFSET(0xEBA87E0)
#define IAPCANOLBEE___C_JOAFLHKPDND_OFFSET UNITYSDK_OFFSET(0xEBA8350)
#define IAPCANOLBEE___C__CCTOR_OFFSET UNITYSDK_OFFSET(0xEBA8300)
#define IAPCANOLBEE___C__CTOR_OFFSET UNITYSDK_OFFSET(0xEBA8340)

inline static constexpr unsigned int IAPCANOLBEE___c_TypeDefinitionIndex = 76409;

class IAPCANOLBEE___c : public ::System::Object
{
public:
	static ::System::Action** StaticGet___9__27_1()
	{
		return (::System::Action**)Il2CppClass::FromTypeDefinitionIndex(IAPCANOLBEE___c_TypeDefinitionIndex)->GetStaticField(0x3DFE0);
	}
	static ::System::Object** StaticGet___9()
	{
		return (::System::Object**)Il2CppClass::FromTypeDefinitionIndex(IAPCANOLBEE___c_TypeDefinitionIndex)->GetStaticField(0x3DFE8);
	}
	static ::System::Comparison_1<::KJIEDDLNJFC*>** StaticGet___9__19_0()
	{
		return (::System::Comparison_1<::KJIEDDLNJFC*>**)Il2CppClass::FromTypeDefinitionIndex(IAPCANOLBEE___c_TypeDefinitionIndex)->GetStaticField(0x3DFF0);
	}

	static ::System::Void _cctor()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + IAPCANOLBEE___C__CCTOR_OFFSET))();
	}

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + IAPCANOLBEE___C__CTOR_OFFSET))(this);
	}

	::System::Int32 JOAFLHKPDND(::KJIEDDLNJFC* EJCBEJMGFAJ, ::KJIEDDLNJFC* EBFCACIEKBC)
	{
		return ((::System::Int32(*)(::PVOID, ::KJIEDDLNJFC*, ::KJIEDDLNJFC*))((::PBYTE)hIl2Cpp + IAPCANOLBEE___C_JOAFLHKPDND_OFFSET))(this, EJCBEJMGFAJ, EBFCACIEKBC);
	}

	::System::Void DLKMNLPGNMP()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + IAPCANOLBEE___C_DLKMNLPGNMP_OFFSET))(this);
	}
};
