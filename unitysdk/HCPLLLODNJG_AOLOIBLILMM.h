#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class GNIGEPABDDI;
namespace System::Collections::Generic { template <typename T> class IEnumerable_1; }

#define HCPLLLODNJG_AOLOIBLILMM_BBAFCCIGIDB_OFFSET UNITYSDK_OFFSET(0x14D156B0)
#define HCPLLLODNJG_AOLOIBLILMM__CTOR_OFFSET UNITYSDK_OFFSET(0x14D14D10)

inline static constexpr unsigned int HCPLLLODNJG_AOLOIBLILMM_TypeDefinitionIndex = 49891;

class HCPLLLODNJG_AOLOIBLILMM : public ::System::Object
{
public:
	::GNIGEPABDDI* KNHIFHIKHIO; // 0x10

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + HCPLLLODNJG_AOLOIBLILMM__CTOR_OFFSET))(this);
	}

	::System::Collections::Generic::IEnumerable_1<::System::Int32>* BBAFCCIGIDB(::System::Int32 AELLPLBJELA)
	{
		return ((::System::Collections::Generic::IEnumerable_1<::System::Int32>*(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + HCPLLLODNJG_AOLOIBLILMM_BBAFCCIGIDB_OFFSET))(this, AELLPLBJELA);
	}
};
