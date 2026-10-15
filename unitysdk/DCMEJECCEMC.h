#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/EFNJLACKEDH.h"
class BKHHFIJCHEP;
class GLPPDCIBMIH;
class GPDLKLOEOJG;
class IJFIHJJPHNA;
namespace System::Collections::Generic { template <typename T> class List_1; }

#define DCMEJECCEMC_CTOR_OFFSET UNITYSDK_OFFSET(0xE251000)
#define DCMEJECCEMC_HCOFMFKFMDK_OFFSET UNITYSDK_OFFSET(0xE251380)
#define DCMEJECCEMC_KLBFBHOPMDH_OFFSET UNITYSDK_OFFSET(0xE251310)
#define DCMEJECCEMC_NPAFMEBNFOB_OFFSET UNITYSDK_OFFSET(0xE251050)

	class DCMEJECCEMC : public ::EFNJLACKEDH
	{
	public:
		::System::Collections::Generic::List_1<::GLPPDCIBMIH*>* GNOEGILFEMD; // 0x18
		::GPDLKLOEOJG* HHBFPBLDOHM; // 0x20
		::IJFIHJJPHNA* KAKEIDJDNHJ; // 0x28
		::System::UInt32 MPIMEEAIELI; // 0x30
		::System::Void _ctor(::BKHHFIJCHEP* a1, ::System::UInt32 a2, ::System::Collections::Generic::List_1<::GLPPDCIBMIH*>* a3)
		{
			return ((::System::Void(*)(::PVOID, ::BKHHFIJCHEP*, ::System::UInt32, ::System::Collections::Generic::List_1<::GLPPDCIBMIH*>*))((::PBYTE)hIl2Cpp + DCMEJECCEMC_CTOR_OFFSET))(this, a1, a2, a3);
		}

		::System::Void NPAFMEBNFOB()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + DCMEJECCEMC_NPAFMEBNFOB_OFFSET))(this);
		}

		::System::Void KLBFBHOPMDH()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + DCMEJECCEMC_KLBFBHOPMDH_OFFSET))(this);
		}

		::System::Boolean HCOFMFKFMDK()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + DCMEJECCEMC_HCOFMFKFMDK_OFFSET))(this);
		}

	};
