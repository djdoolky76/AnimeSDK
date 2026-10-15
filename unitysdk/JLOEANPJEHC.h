#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class CJADCGNNPON;
class HHAJMHBECLJ;
class IBAPNEEMJJC;
class JIGPGHCDBOE;
class NABDFMIFKOI;
namespace System::Collections::Generic { template <typename T> class List_1; }

#define JLOEANPJEHC_CBBIEPPIKFI_OFFSET UNITYSDK_OFFSET(0xB252850)
#define JLOEANPJEHC_CTOR_OFFSET UNITYSDK_OFFSET(0xB251CD0)
#define JLOEANPJEHC_DMGEEEDLGHF_1_OFFSET UNITYSDK_OFFSET(0xB251E80)
#define JLOEANPJEHC_DMGEEEDLGHF_2_OFFSET UNITYSDK_OFFSET(0xB252050)
#define JLOEANPJEHC_DMGEEEDLGHF_OFFSET UNITYSDK_OFFSET(0xB251D40)

inline static constexpr unsigned int JLOEANPJEHC_TypeDefinitionIndex = 79797;

	class JLOEANPJEHC : public ::System::Object
	{
	public:
		::NABDFMIFKOI* BJCHCAIMLFE; // 0x10
		::CJADCGNNPON* GEFAIMFFEHM; // 0x18
		::System::Collections::Generic::List_1<::JIGPGHCDBOE*>* LOJOFACAJGI; // 0x20
		::System::Void _ctor(::CJADCGNNPON* a1, ::NABDFMIFKOI* a2)
		{
			return ((::System::Void(*)(::PVOID, ::CJADCGNNPON*, ::NABDFMIFKOI*))((::PBYTE)hIl2Cpp + JLOEANPJEHC_CTOR_OFFSET))(this, a1, a2);
		}

		::System::Void DMGEEEDLGHF(::HHAJMHBECLJ* a1)
		{
			return ((::System::Void(*)(::PVOID, ::HHAJMHBECLJ*))((::PBYTE)hIl2Cpp + JLOEANPJEHC_DMGEEEDLGHF_OFFSET))(this, a1);
		}

		::System::Void DMGEEEDLGHF_1(::JIGPGHCDBOE* a1)
		{
			return ((::System::Void(*)(::PVOID, ::JIGPGHCDBOE*))((::PBYTE)hIl2Cpp + JLOEANPJEHC_DMGEEEDLGHF_1_OFFSET))(this, a1);
		}

		::System::Void DMGEEEDLGHF_2(::IBAPNEEMJJC* a1)
		{
			return ((::System::Void(*)(::PVOID, ::IBAPNEEMJJC*))((::PBYTE)hIl2Cpp + JLOEANPJEHC_DMGEEEDLGHF_2_OFFSET))(this, a1);
		}

		::System::Boolean CBBIEPPIKFI(::JIGPGHCDBOE* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::JIGPGHCDBOE*))((::PBYTE)hIl2Cpp + JLOEANPJEHC_CBBIEPPIKFI_OFFSET))(this, a1);
		}

	};
