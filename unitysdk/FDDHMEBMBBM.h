#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class KOIDMLPJGML;
class MonoUITableScrollV2;
namespace System::Collections::Generic { template <typename T> class List_1; }

#define FDDHMEBMBBM_EAOICBCCDNH_OFFSET UNITYSDK_OFFSET(0x10F5EEE0)
#define FDDHMEBMBBM_JHBFPJHHPKB_OFFSET UNITYSDK_OFFSET(0x10F5EF50)
#define FDDHMEBMBBM_KIHDIDACMCA_OFFSET UNITYSDK_OFFSET(0x10F5F250)

inline static constexpr unsigned int FDDHMEBMBBM_TypeDefinitionIndex = 64305;

class FDDHMEBMBBM : public ::System::Object
{
public:
	static ::System::Void EAOICBCCDNH(::MonoUITableScrollV2* FAMGIABLFPH, ::System::Int32 KHHOMGELJFM, ::System::Boolean PCBKKDKDHPF)
	{
		return ((::System::Void(*)(::MonoUITableScrollV2*, ::System::Int32, ::System::Boolean))((::PBYTE)hIl2Cpp + FDDHMEBMBBM_EAOICBCCDNH_OFFSET))(FAMGIABLFPH, KHHOMGELJFM, PCBKKDKDHPF);
	}

	static ::System::Collections::Generic::List_1<::KOIDMLPJGML*>* JHBFPJHHPKB(::System::Int32 KHHOMGELJFM, ::System::Boolean CPKLHBIFDBP, ::System::Boolean PCBKKDKDHPF)
	{
		return ((::System::Collections::Generic::List_1<::KOIDMLPJGML*>*(*)(::System::Int32, ::System::Boolean, ::System::Boolean))((::PBYTE)hIl2Cpp + FDDHMEBMBBM_JHBFPJHHPKB_OFFSET))(KHHOMGELJFM, CPKLHBIFDBP, PCBKKDKDHPF);
	}

	static ::System::Collections::Generic::List_1<::KOIDMLPJGML*>* KIHDIDACMCA(::System::Int32 KHHOMGELJFM, ::System::Boolean CPKLHBIFDBP)
	{
		return ((::System::Collections::Generic::List_1<::KOIDMLPJGML*>*(*)(::System::Int32, ::System::Boolean))((::PBYTE)hIl2Cpp + FDDHMEBMBBM_KIHDIDACMCA_OFFSET))(KHHOMGELJFM, CPKLHBIFDBP);
	}
};
