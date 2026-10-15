#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class CAFGGCCJPNI;
class IPGCLEABHPG;
class LMHBFGADIMD;
class MGKEJEAJGGK;
namespace System::Collections::Generic { template <typename T> class IReadOnlyList_1; }

#define FELMPFMCMKG_CIGGAIGBIGM_OFFSET UNITYSDK_OFFSET(0x15725500)
#define FELMPFMCMKG_CTOR_OFFSET UNITYSDK_OFFSET(0x157254F0)
#define FELMPFMCMKG_HPJNKIPDCPK_OFFSET UNITYSDK_OFFSET(0x157255B0)
#define FELMPFMCMKG_PCJCCNIPFBL_OFFSET UNITYSDK_OFFSET(0x157257E0)

inline static constexpr unsigned int FELMPFMCMKG_TypeDefinitionIndex = 63897;

	class FELMPFMCMKG : public ::System::Object
	{
	public:
		::MGKEJEAJGGK* HJOADEMMCLN; // 0x10
		::IPGCLEABHPG* AMJKPLAFION; // 0x18
		::System::Void _ctor(::MGKEJEAJGGK* a1, ::IPGCLEABHPG* a2)
		{
			return ((::System::Void(*)(::PVOID, ::MGKEJEAJGGK*, ::IPGCLEABHPG*))((::PBYTE)hIl2Cpp + FELMPFMCMKG_CTOR_OFFSET))(this, a1, a2);
		}

		::LMHBFGADIMD* CIGGAIGBIGM(::System::UInt32 a1, ::System::Collections::Generic::IReadOnlyList_1<::CAFGGCCJPNI*>* a2)
		{
			return ((::LMHBFGADIMD*(*)(::PVOID, ::System::UInt32, ::System::Collections::Generic::IReadOnlyList_1<::CAFGGCCJPNI*>*))((::PBYTE)hIl2Cpp + FELMPFMCMKG_CIGGAIGBIGM_OFFSET))(this, a1, a2);
		}

		::System::Collections::Generic::IReadOnlyList_1<::LMHBFGADIMD*>* HPJNKIPDCPK(::System::UInt32 a1, ::System::UInt32 a2, ::System::Collections::Generic::IReadOnlyList_1<::CAFGGCCJPNI*>* a3)
		{
			return ((::System::Collections::Generic::IReadOnlyList_1<::LMHBFGADIMD*>*(*)(::PVOID, ::System::UInt32, ::System::UInt32, ::System::Collections::Generic::IReadOnlyList_1<::CAFGGCCJPNI*>*))((::PBYTE)hIl2Cpp + FELMPFMCMKG_HPJNKIPDCPK_OFFSET))(this, a1, a2, a3);
		}

		::LMHBFGADIMD* PCJCCNIPFBL(::System::UInt32 a1, ::System::Collections::Generic::IReadOnlyList_1<::CAFGGCCJPNI*>* a2)
		{
			return ((::LMHBFGADIMD*(*)(::PVOID, ::System::UInt32, ::System::Collections::Generic::IReadOnlyList_1<::CAFGGCCJPNI*>*))((::PBYTE)hIl2Cpp + FELMPFMCMKG_PCJCCNIPFBL_OFFSET))(this, a1, a2);
		}

	};
