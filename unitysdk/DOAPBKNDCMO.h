#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/APCGKBOPGJL.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/System/ValueTuple_2.h"
class DNIAIFGHFLM;
class DPHIFKIPMLI;
class HPJEECIEDAB;
class NCINHOOPPNG;
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }
namespace System::Collections::Generic { template <typename T> class IEnumerable_1; }

#define DOAPBKNDCMO_ANAHFGMKJMB_OFFSET UNITYSDK_OFFSET(0x1919AC30)
#define DOAPBKNDCMO_BMFMNJLOJPN_OFFSET UNITYSDK_OFFSET(0x1919AAE0)
#define DOAPBKNDCMO_CTOR_OFFSET UNITYSDK_OFFSET(0x1919A8A0)
#define DOAPBKNDCMO_DGBMKOOLGID_OFFSET UNITYSDK_OFFSET(0x1919A9C0)
#define DOAPBKNDCMO_EKHHHAFPNGO_OFFSET UNITYSDK_OFFSET(0x1919ACC0)
#define DOAPBKNDCMO_HGAEIMNNEHI_OFFSET UNITYSDK_OFFSET(0x1919B470)
#define DOAPBKNDCMO_KILEPBKMIHE_OFFSET UNITYSDK_OFFSET(0x1919AA50)

inline static constexpr unsigned int DOAPBKNDCMO_TypeDefinitionIndex = 64225;

	class DOAPBKNDCMO : public ::System::Object
	{
	public:
		::DNIAIFGHFLM* GOHMGCHLKLM; // 0x10
		::HPJEECIEDAB* IHFNBHEIIAI; // 0x18
		::System::Collections::Generic::Dictionary_2<::System::UInt32, ::System::UInt32>* OBEBIGAMJGF; // 0x20
		::DPHIFKIPMLI* PMGONAJKJAE; // 0x28
		::APCGKBOPGJL ODMGLBEOBDP; // 0x30
		::System::UInt32 FFFFJCOACPK; // 0x38
		::System::Void _ctor(::APCGKBOPGJL a1, ::HPJEECIEDAB* a2, ::DNIAIFGHFLM* a3)
		{
			return ((::System::Void(*)(::PVOID, ::APCGKBOPGJL, ::HPJEECIEDAB*, ::DNIAIFGHFLM*))((::PBYTE)hIl2Cpp + DOAPBKNDCMO_CTOR_OFFSET))(this, a1, a2, a3);
		}

		::System::Void DGBMKOOLGID(::DPHIFKIPMLI* a1)
		{
			return ((::System::Void(*)(::PVOID, ::DPHIFKIPMLI*))((::PBYTE)hIl2Cpp + DOAPBKNDCMO_DGBMKOOLGID_OFFSET))(this, a1);
		}

		::System::UInt32 KILEPBKMIHE(::System::UInt32 a1)
		{
			return ((::System::UInt32(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + DOAPBKNDCMO_KILEPBKMIHE_OFFSET))(this, a1);
		}

		::System::Collections::Generic::IEnumerable_1<::System::ValueTuple_2<::System::UInt32, ::System::UInt32>>* ANAHFGMKJMB()
		{
			return ((::System::Collections::Generic::IEnumerable_1<::System::ValueTuple_2<::System::UInt32, ::System::UInt32>>*(*)(::PVOID))((::PBYTE)hIl2Cpp + DOAPBKNDCMO_ANAHFGMKJMB_OFFSET))(this);
		}

		::System::Boolean BMFMNJLOJPN()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + DOAPBKNDCMO_BMFMNJLOJPN_OFFSET))(this);
		}

		::System::Void EKHHHAFPNGO()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + DOAPBKNDCMO_EKHHHAFPNGO_OFFSET))(this);
		}

		::System::Void HGAEIMNNEHI(::NCINHOOPPNG* a1)
		{
			return ((::System::Void(*)(::PVOID, ::NCINHOOPPNG*))((::PBYTE)hIl2Cpp + DOAPBKNDCMO_HGAEIMNNEHI_OFFSET))(this, a1);
		}

	};
