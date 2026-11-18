#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/FJAKNHFCIDD.h"

namespace System::Collections::Generic { template <typename T> class HashSet_1; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define NMNOFDCENBO_ACBAKBHIMJC_OFFSET UNITYSDK_OFFSET(0x1316BB80)
#define NMNOFDCENBO_CMFOMGGDPPA_OFFSET UNITYSDK_OFFSET(0x1316C090)
#define NMNOFDCENBO_GPGLNOBDBGJ_OFFSET UNITYSDK_OFFSET(0x1316C1B0)
#define NMNOFDCENBO_LBNAMNHJDBC_OFFSET UNITYSDK_OFFSET(0x1316BFE0)
#define NMNOFDCENBO_NHAFDGIDLIO_OFFSET UNITYSDK_OFFSET(0x1316C120)
#define NMNOFDCENBO_OKJCHFGIKBH_OFFSET UNITYSDK_OFFSET(0x1316BCF0)
#define NMNOFDCENBO__CTOR_OFFSET UNITYSDK_OFFSET(0x1316B9D0)

inline static constexpr unsigned int NMNOFDCENBO_TypeDefinitionIndex = 67755;

class NMNOFDCENBO : public ::FJAKNHFCIDD
{
public:
	::Il2CppArray<::System::Int32>* AKLLPHFMJGN; // 0x20
	::System::Collections::Generic::List_1<::FJAKNHFCIDD*>* HFPFDAAGGDB; // 0x28
	::System::Collections::Generic::HashSet_1<::FJAKNHFCIDD*>* EKNJMKJBNKC; // 0x30

	::System::Void _ctor(::Il2CppArray<::System::Int32>* AKLLPHFMJGN, ::Il2CppArray<::FJAKNHFCIDD*>* HFPFDAAGGDB)
	{
		return ((::System::Void(*)(::PVOID, ::Il2CppArray<::System::Int32>*, ::Il2CppArray<::FJAKNHFCIDD*>*))((::PBYTE)hIl2Cpp + NMNOFDCENBO__CTOR_OFFSET))(this, AKLLPHFMJGN, HFPFDAAGGDB);
	}

	::System::Void ACBAKBHIMJC()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + NMNOFDCENBO_ACBAKBHIMJC_OFFSET))(this);
	}

	::System::Void OKJCHFGIKBH()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + NMNOFDCENBO_OKJCHFGIKBH_OFFSET))(this);
	}

	::System::Void LBNAMNHJDBC(::FJAKNHFCIDD* FBIGIKNCLHJ)
	{
		return ((::System::Void(*)(::PVOID, ::FJAKNHFCIDD*))((::PBYTE)hIl2Cpp + NMNOFDCENBO_LBNAMNHJDBC_OFFSET))(this, FBIGIKNCLHJ);
	}

	::System::Void CMFOMGGDPPA()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + NMNOFDCENBO_CMFOMGGDPPA_OFFSET))(this);
	}

	::System::Void NHAFDGIDLIO(::FJAKNHFCIDD* MIALFKCCCPI)
	{
		return ((::System::Void(*)(::PVOID, ::FJAKNHFCIDD*))((::PBYTE)hIl2Cpp + NMNOFDCENBO_NHAFDGIDLIO_OFFSET))(this, MIALFKCCCPI);
	}

	::System::Void GPGLNOBDBGJ()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + NMNOFDCENBO_GPGLNOBDBGJ_OFFSET))(this);
	}
};
