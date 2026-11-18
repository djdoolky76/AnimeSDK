#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/NCIAOKMBKED.h"

class ANAPNFPOMNG;
namespace System::Collections::Generic { template <typename T> class List_1; }

#define DGBLAFJJPDB_ANEOCOIFDDJ_OFFSET UNITYSDK_OFFSET(0x1CCABD80)
#define DGBLAFJJPDB_BAEOMKCHECF_OFFSET UNITYSDK_OFFSET(0x1CCAB950)
#define DGBLAFJJPDB_ECNOGHHOPPF_OFFSET UNITYSDK_OFFSET(0x1CCABEA0)
#define DGBLAFJJPDB_FCMNHLDLJCI_OFFSET UNITYSDK_OFFSET(0x1CCABC60)
#define DGBLAFJJPDB_OJENCMOGDKL_OFFSET UNITYSDK_OFFSET(0x1CCAB890)
#define DGBLAFJJPDB_OMEIBIPJGDH_OFFSET UNITYSDK_OFFSET(0x1CCABE10)
#define DGBLAFJJPDB__CTOR_OFFSET UNITYSDK_OFFSET(0x1CCABD70)

inline static constexpr unsigned int DGBLAFJJPDB_TypeDefinitionIndex = 93481;

class DGBLAFJJPDB : public ::NCIAOKMBKED
{
public:
	::System::Collections::Generic::List_1<::System::Int32>* CDCJPFFGJPC; // 0x60

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + DGBLAFJJPDB__CTOR_OFFSET))(this);
	}

	::System::Void OJENCMOGDKL()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + DGBLAFJJPDB_OJENCMOGDKL_OFFSET))(this);
	}

	::System::Void BAEOMKCHECF(::ANAPNFPOMNG* DACKALLJNNF)
	{
		return ((::System::Void(*)(::PVOID, ::ANAPNFPOMNG*))((::PBYTE)hIl2Cpp + DGBLAFJJPDB_BAEOMKCHECF_OFFSET))(this, DACKALLJNNF);
	}

	::System::Void FCMNHLDLJCI()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + DGBLAFJJPDB_FCMNHLDLJCI_OFFSET))(this);
	}

	::System::Void ANEOCOIFDDJ()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + DGBLAFJJPDB_ANEOCOIFDDJ_OFFSET))(this);
	}

	::System::Void OMEIBIPJGDH(::ANAPNFPOMNG* MIALFKCCCPI)
	{
		return ((::System::Void(*)(::PVOID, ::ANAPNFPOMNG*))((::PBYTE)hIl2Cpp + DGBLAFJJPDB_OMEIBIPJGDH_OFFSET))(this, MIALFKCCCPI);
	}

	::System::Void ECNOGHHOPPF()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + DGBLAFJJPDB_ECNOGHHOPPF_OFFSET))(this);
	}
};
