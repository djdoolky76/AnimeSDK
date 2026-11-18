#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/EDPGEFBNECD.h"
#include "unitysdk/KLPLBODKAHP.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/DGKCAFEOPMP_2.h"

template <typename T1, typename T2> class IJFNNPOAFNP_2;

#define EIFGNPAAHBH___C_ODCJPMHAIJF_OFFSET UNITYSDK_OFFSET(0x10F35570)
#define EIFGNPAAHBH___C__CCTOR_OFFSET UNITYSDK_OFFSET(0x10F35520)
#define EIFGNPAAHBH___C__CTOR_OFFSET UNITYSDK_OFFSET(0x10F35560)

inline static constexpr unsigned int EIFGNPAAHBH___c_TypeDefinitionIndex = 69067;

class EIFGNPAAHBH___c : public ::System::Object
{
public:
	static ::IJFNNPOAFNP_2<::KLPLBODKAHP, ::EDPGEFBNECD>** StaticGet___9__3_0()
	{
		return (::IJFNNPOAFNP_2<::KLPLBODKAHP, ::EDPGEFBNECD>**)Il2CppClass::FromTypeDefinitionIndex(EIFGNPAAHBH___c_TypeDefinitionIndex)->GetStaticField(0x3DA50);
	}
	static ::System::Object** StaticGet___9()
	{
		return (::System::Object**)Il2CppClass::FromTypeDefinitionIndex(EIFGNPAAHBH___c_TypeDefinitionIndex)->GetStaticField(0x3DA58);
	}

	static ::System::Void _cctor()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + EIFGNPAAHBH___C__CCTOR_OFFSET))();
	}

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + EIFGNPAAHBH___C__CTOR_OFFSET))(this);
	}

	::DGKCAFEOPMP_2<::KLPLBODKAHP, ::EDPGEFBNECD> ODCJPMHAIJF(::DGKCAFEOPMP_2<::KLPLBODKAHP, ::EDPGEFBNECD>& EJCBEJMGFAJ, ::DGKCAFEOPMP_2<::KLPLBODKAHP, ::EDPGEFBNECD>& EBFCACIEKBC, ::System::Single GALBDCDBCOP)
	{
		return ((::DGKCAFEOPMP_2<::KLPLBODKAHP, ::EDPGEFBNECD>(*)(::PVOID, ::DGKCAFEOPMP_2<::KLPLBODKAHP, ::EDPGEFBNECD>&, ::DGKCAFEOPMP_2<::KLPLBODKAHP, ::EDPGEFBNECD>&, ::System::Single))((::PBYTE)hIl2Cpp + EIFGNPAAHBH___C_ODCJPMHAIJF_OFFSET))(this, EJCBEJMGFAJ, EBFCACIEKBC, GALBDCDBCOP);
	}
};
