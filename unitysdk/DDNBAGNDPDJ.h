#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/FJAKNHFCIDD.h"

namespace System::Collections::Generic { template <typename T> class HashSet_1; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define DDNBAGNDPDJ_ACBAKBHIMJC_OFFSET UNITYSDK_OFFSET(0x13E3E890)
#define DDNBAGNDPDJ_CMFOMGGDPPA_OFFSET UNITYSDK_OFFSET(0x13E3EDA0)
#define DDNBAGNDPDJ_GPGLNOBDBGJ_OFFSET UNITYSDK_OFFSET(0x13E3EEC0)
#define DDNBAGNDPDJ_LBNAMNHJDBC_OFFSET UNITYSDK_OFFSET(0x13E3ECF0)
#define DDNBAGNDPDJ_NHAFDGIDLIO_OFFSET UNITYSDK_OFFSET(0x13E3EE30)
#define DDNBAGNDPDJ_OKJCHFGIKBH_OFFSET UNITYSDK_OFFSET(0x13E3EA00)
#define DDNBAGNDPDJ__CTOR_OFFSET UNITYSDK_OFFSET(0x13E3E6E0)

inline static constexpr unsigned int DDNBAGNDPDJ_TypeDefinitionIndex = 52373;

class DDNBAGNDPDJ : public ::FJAKNHFCIDD
{
public:
	::System::Collections::Generic::HashSet_1<::FJAKNHFCIDD*>* EKNJMKJBNKC; // 0x20
	::System::Collections::Generic::List_1<::FJAKNHFCIDD*>* HFPFDAAGGDB; // 0x28
	::Il2CppArray<::System::Int32>* AKLLPHFMJGN; // 0x30

	::System::Void _ctor(::Il2CppArray<::System::Int32>* AKLLPHFMJGN, ::Il2CppArray<::FJAKNHFCIDD*>* HFPFDAAGGDB)
	{
		return ((::System::Void(*)(::PVOID, ::Il2CppArray<::System::Int32>*, ::Il2CppArray<::FJAKNHFCIDD*>*))((::PBYTE)hIl2Cpp + DDNBAGNDPDJ__CTOR_OFFSET))(this, AKLLPHFMJGN, HFPFDAAGGDB);
	}

	::System::Void ACBAKBHIMJC()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + DDNBAGNDPDJ_ACBAKBHIMJC_OFFSET))(this);
	}

	::System::Void OKJCHFGIKBH()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + DDNBAGNDPDJ_OKJCHFGIKBH_OFFSET))(this);
	}

	::System::Void LBNAMNHJDBC(::FJAKNHFCIDD* FBIGIKNCLHJ)
	{
		return ((::System::Void(*)(::PVOID, ::FJAKNHFCIDD*))((::PBYTE)hIl2Cpp + DDNBAGNDPDJ_LBNAMNHJDBC_OFFSET))(this, FBIGIKNCLHJ);
	}

	::System::Void CMFOMGGDPPA()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + DDNBAGNDPDJ_CMFOMGGDPPA_OFFSET))(this);
	}

	::System::Void NHAFDGIDLIO(::FJAKNHFCIDD* MIALFKCCCPI)
	{
		return ((::System::Void(*)(::PVOID, ::FJAKNHFCIDD*))((::PBYTE)hIl2Cpp + DDNBAGNDPDJ_NHAFDGIDLIO_OFFSET))(this, MIALFKCCCPI);
	}

	::System::Void GPGLNOBDBGJ()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + DDNBAGNDPDJ_GPGLNOBDBGJ_OFFSET))(this);
	}
};
