#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/PIDBPNBEKKN.h"
#include "unitysdk/System/Object.h"

namespace System { template <typename T> class Comparison_1; }

#define OFDBLABMAPE___C_JKEDJOFAMGK_OFFSET UNITYSDK_OFFSET(0xE149D40)
#define OFDBLABMAPE___C__CCTOR_OFFSET UNITYSDK_OFFSET(0xE149CF0)
#define OFDBLABMAPE___C__CTOR_OFFSET UNITYSDK_OFFSET(0xE149D30)

inline static constexpr unsigned int OFDBLABMAPE___c_TypeDefinitionIndex = 64466;

class OFDBLABMAPE___c : public ::System::Object
{
public:
	static ::System::Comparison_1<::PIDBPNBEKKN>** StaticGet___9__9_0()
	{
		return (::System::Comparison_1<::PIDBPNBEKKN>**)Il2CppClass::FromTypeDefinitionIndex(OFDBLABMAPE___c_TypeDefinitionIndex)->GetStaticField(0x3CDB0);
	}
	static ::System::Object** StaticGet___9()
	{
		return (::System::Object**)Il2CppClass::FromTypeDefinitionIndex(OFDBLABMAPE___c_TypeDefinitionIndex)->GetStaticField(0x3CDB8);
	}

	static ::System::Void _cctor()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + OFDBLABMAPE___C__CCTOR_OFFSET))();
	}

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + OFDBLABMAPE___C__CTOR_OFFSET))(this);
	}

	::System::Int32 JKEDJOFAMGK(::PIDBPNBEKKN EJCBEJMGFAJ, ::PIDBPNBEKKN EBFCACIEKBC)
	{
		return ((::System::Int32(*)(::PVOID, ::PIDBPNBEKKN, ::PIDBPNBEKKN))((::PBYTE)hIl2Cpp + OFDBLABMAPE___C_JKEDJOFAMGK_OFFSET))(this, EJCBEJMGFAJ, EBFCACIEKBC);
	}
};
