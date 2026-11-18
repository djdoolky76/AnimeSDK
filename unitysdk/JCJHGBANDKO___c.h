#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class GNCLMODKIHG;
namespace System { template <typename T1, typename T2> class Func_2; }

#define JCJHGBANDKO___C_ACFNBDJNGDK_OFFSET UNITYSDK_OFFSET(0x1306C2F0)
#define JCJHGBANDKO___C_EAONKIIMPNJ_OFFSET UNITYSDK_OFFSET(0x1306C250)
#define JCJHGBANDKO___C__CCTOR_OFFSET UNITYSDK_OFFSET(0x1306C200)
#define JCJHGBANDKO___C__CTOR_OFFSET UNITYSDK_OFFSET(0x1306C240)

inline static constexpr unsigned int JCJHGBANDKO___c_TypeDefinitionIndex = 85314;

class JCJHGBANDKO___c : public ::System::Object
{
public:
	static ::System::Object** StaticGet___9()
	{
		return (::System::Object**)Il2CppClass::FromTypeDefinitionIndex(JCJHGBANDKO___c_TypeDefinitionIndex)->GetStaticField(0x481A0);
	}
	static ::System::Func_2<::GNCLMODKIHG*, ::System::Single>** StaticGet___9__8_0()
	{
		return (::System::Func_2<::GNCLMODKIHG*, ::System::Single>**)Il2CppClass::FromTypeDefinitionIndex(JCJHGBANDKO___c_TypeDefinitionIndex)->GetStaticField(0x481A8);
	}
	static ::System::Func_2<::GNCLMODKIHG*, ::System::Single>** StaticGet___9__7_0()
	{
		return (::System::Func_2<::GNCLMODKIHG*, ::System::Single>**)Il2CppClass::FromTypeDefinitionIndex(JCJHGBANDKO___c_TypeDefinitionIndex)->GetStaticField(0x481B0);
	}

	static ::System::Void _cctor()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + JCJHGBANDKO___C__CCTOR_OFFSET))();
	}

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + JCJHGBANDKO___C__CTOR_OFFSET))(this);
	}

	::System::Single EAONKIIMPNJ(::GNCLMODKIHG* FEKJMJOPFJC)
	{
		return ((::System::Single(*)(::PVOID, ::GNCLMODKIHG*))((::PBYTE)hIl2Cpp + JCJHGBANDKO___C_EAONKIIMPNJ_OFFSET))(this, FEKJMJOPFJC);
	}

	::System::Single ACFNBDJNGDK(::GNCLMODKIHG* FEKJMJOPFJC)
	{
		return ((::System::Single(*)(::PVOID, ::GNCLMODKIHG*))((::PBYTE)hIl2Cpp + JCJHGBANDKO___C_ACFNBDJNGDK_OFFSET))(this, FEKJMJOPFJC);
	}
};
