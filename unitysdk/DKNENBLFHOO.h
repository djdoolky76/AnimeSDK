#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/EFNJLACKEDH.h"
class BKHHFIJCHEP;
class GPDLKLOEOJG;
class IJFIHJJPHNA;
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }

#define DKNENBLFHOO_CTOR_OFFSET UNITYSDK_OFFSET(0xF884840)
#define DKNENBLFHOO_HCOFMFKFMDK_OFFSET UNITYSDK_OFFSET(0xF8849F0)
#define DKNENBLFHOO_NPAFMEBNFOB_OFFSET UNITYSDK_OFFSET(0xF884890)

inline static constexpr unsigned int DKNENBLFHOO_TypeDefinitionIndex = 60350;

	class DKNENBLFHOO : public ::EFNJLACKEDH
	{
	public:
		::GPDLKLOEOJG* HHBFPBLDOHM; // 0x18
		::IJFIHJJPHNA* KAKEIDJDNHJ; // 0x20
		::System::Collections::Generic::Dictionary_2<::System::Int32, ::System::Int32>* BHFACEBLGKN; // 0x28
		::System::UInt32 MPIMEEAIELI; // 0x30
		::System::Void _ctor(::BKHHFIJCHEP* a1, ::System::UInt32 a2, ::System::Collections::Generic::Dictionary_2<::System::Int32, ::System::Int32>* a3)
		{
			return ((::System::Void(*)(::PVOID, ::BKHHFIJCHEP*, ::System::UInt32, ::System::Collections::Generic::Dictionary_2<::System::Int32, ::System::Int32>*))((::PBYTE)hIl2Cpp + DKNENBLFHOO_CTOR_OFFSET))(this, a1, a2, a3);
		}

		::System::Void NPAFMEBNFOB()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + DKNENBLFHOO_NPAFMEBNFOB_OFFSET))(this);
		}

		::System::Boolean HCOFMFKFMDK()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + DKNENBLFHOO_HCOFMFKFMDK_OFFSET))(this);
		}

	};
