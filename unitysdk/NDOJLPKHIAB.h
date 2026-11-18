#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/FCPEGLOOKGH.h"
#include "unitysdk/JANFHIKPCFO.h"
#include "unitysdk/PIFBCHGBCBC.h"

namespace System::Collections::Generic { template <typename T> class HashSet_1; }

#define NDOJLPKHIAB_DBACFHNPPPP_OFFSET UNITYSDK_OFFSET(0x16B66CB0)
#define NDOJLPKHIAB_GMEFFPMHFNO_OFFSET UNITYSDK_OFFSET(0x16B670F0)
#define NDOJLPKHIAB_IOKNDMAPPDB_OFFSET UNITYSDK_OFFSET(0x16B66DD0)
#define NDOJLPKHIAB_KAEIINKFAAA_OFFSET UNITYSDK_OFFSET(0x16B66A90)
#define NDOJLPKHIAB_MGHDOECNEJA_OFFSET UNITYSDK_OFFSET(0x16B66AF0)
#define NDOJLPKHIAB_NFHMDNEEECM_OFFSET UNITYSDK_OFFSET(0x16B66D40)
#define NDOJLPKHIAB_NMIIPLNEBAH_OFFSET UNITYSDK_OFFSET(0x16B67190)
#define NDOJLPKHIAB__CTOR_OFFSET UNITYSDK_OFFSET(0x16B66CA0)

inline static constexpr unsigned int NDOJLPKHIAB_TypeDefinitionIndex = 48773;

class NDOJLPKHIAB : public ::JANFHIKPCFO
{
public:
	::System::Collections::Generic::HashSet_1<::FCPEGLOOKGH>* ADPEDIJGAKC; // 0x18

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + NDOJLPKHIAB__CTOR_OFFSET))(this);
	}

	::System::Boolean KAEIINKFAAA()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + NDOJLPKHIAB_KAEIINKFAAA_OFFSET))(this);
	}

	::System::Boolean MGHDOECNEJA(::PIFBCHGBCBC DMADIGMDIBK)
	{
		return ((::System::Boolean(*)(::PVOID, ::PIFBCHGBCBC))((::PBYTE)hIl2Cpp + NDOJLPKHIAB_MGHDOECNEJA_OFFSET))(this, DMADIGMDIBK);
	}

	::System::Boolean DBACFHNPPPP(::PIFBCHGBCBC MIALFKCCCPI)
	{
		return ((::System::Boolean(*)(::PVOID, ::PIFBCHGBCBC))((::PBYTE)hIl2Cpp + NDOJLPKHIAB_DBACFHNPPPP_OFFSET))(this, MIALFKCCCPI);
	}

	::System::Boolean NFHMDNEEECM()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + NDOJLPKHIAB_NFHMDNEEECM_OFFSET))(this);
	}

	::PIFBCHGBCBC IOKNDMAPPDB(::System::Collections::Generic::HashSet_1<::FCPEGLOOKGH>* JBINJOHOKHJ, ::System::Boolean HMLKIBPICKL)
	{
		return ((::PIFBCHGBCBC(*)(::PVOID, ::System::Collections::Generic::HashSet_1<::FCPEGLOOKGH>*, ::System::Boolean))((::PBYTE)hIl2Cpp + NDOJLPKHIAB_IOKNDMAPPDB_OFFSET))(this, JBINJOHOKHJ, HMLKIBPICKL);
	}

	::System::Void GMEFFPMHFNO(::System::Collections::Generic::HashSet_1<::FCPEGLOOKGH>* JCLJNCGNLLF)
	{
		return ((::System::Void(*)(::PVOID, ::System::Collections::Generic::HashSet_1<::FCPEGLOOKGH>*))((::PBYTE)hIl2Cpp + NDOJLPKHIAB_GMEFFPMHFNO_OFFSET))(this, JCLJNCGNLLF);
	}

	::System::Void NMIIPLNEBAH()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + NDOJLPKHIAB_NMIIPLNEBAH_OFFSET))(this);
	}
};
