#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/System/ValueTuple_2.h"

class CBDDODKFCIJ;
class CBHALHKAKLC_CKJIPAJPBKG;
class EDBDJENIDEO;
namespace System::Collections::Generic { template <typename T> class List_1; }

#define CBHALHKAKLC_DNAFGDGEMCJ_DOGMFFNABKK_OFFSET UNITYSDK_OFFSET(0x1152DA10)
#define CBHALHKAKLC_DNAFGDGEMCJ_EPAFDIAEJMM_OFFSET UNITYSDK_OFFSET(0x1152DC30)
#define CBHALHKAKLC_DNAFGDGEMCJ__CCTOR_OFFSET UNITYSDK_OFFSET(0x1152D980)

inline static constexpr unsigned int CBHALHKAKLC_DNAFGDGEMCJ_TypeDefinitionIndex = 55880;

class CBHALHKAKLC_DNAFGDGEMCJ : public ::System::Object
{
public:
	static ::System::Collections::Generic::List_1<::System::Object*>** StaticGet_ACONMONGDLC()
	{
		return (::System::Collections::Generic::List_1<::System::Object*>**)Il2CppClass::FromTypeDefinitionIndex(CBHALHKAKLC_DNAFGDGEMCJ_TypeDefinitionIndex)->GetStaticField(0x42EF0);
	}

	static ::System::Void _cctor()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + CBHALHKAKLC_DNAFGDGEMCJ__CCTOR_OFFSET))();
	}

	static ::System::ValueTuple_2<::EDBDJENIDEO*, ::CBDDODKFCIJ*> DOGMFFNABKK()
	{
		return ((::System::ValueTuple_2<::EDBDJENIDEO*, ::CBDDODKFCIJ*>(*)())((::PBYTE)hIl2Cpp + CBHALHKAKLC_DNAFGDGEMCJ_DOGMFFNABKK_OFFSET))();
	}

	static ::System::Void EPAFDIAEJMM(::CBHALHKAKLC_CKJIPAJPBKG* ELEIACDBIPL)
	{
		return ((::System::Void(*)(::CBHALHKAKLC_CKJIPAJPBKG*))((::PBYTE)hIl2Cpp + CBHALHKAKLC_DNAFGDGEMCJ_EPAFDIAEJMM_OFFSET))(ELEIACDBIPL);
	}
};
