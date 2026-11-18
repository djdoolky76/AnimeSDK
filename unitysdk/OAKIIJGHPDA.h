#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/HGAJKHIMKJP.h"
#include "unitysdk/Share/EItemType.h"

class AHAICPLGBAH;
class AOLDOKHEAOE;
class BPNGLLLIMDC_GKFFOHIBAAN;
class CFMGIKJLMBJ;
class FMBPEPDJNAN;
class FOLOGHLENFB;
class JKPJHBGLLFB;
namespace System { class String; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define OAKIIJGHPDA_AOENKMAECNH_OFFSET UNITYSDK_OFFSET(0x15FBE890)
#define OAKIIJGHPDA_GKILDJBDCAP_OFFSET UNITYSDK_OFFSET(0x15FBE550)
#define OAKIIJGHPDA_MFPLKMFPPLK_OFFSET UNITYSDK_OFFSET(0x15FBE690)
#define OAKIIJGHPDA_MGEAEGODOJO_OFFSET UNITYSDK_OFFSET(0x15FBE9C0)
#define OAKIIJGHPDA_NILHMDPJLGA_OFFSET UNITYSDK_OFFSET(0x15FBE900)
#define OAKIIJGHPDA__CTOR_OFFSET UNITYSDK_OFFSET(0x15FBE560)

inline static constexpr unsigned int OAKIIJGHPDA_TypeDefinitionIndex = 42283;

class OAKIIJGHPDA : public ::HGAJKHIMKJP
{
public:
	::System::Collections::Generic::Dictionary_2<::System::String*, ::System::Int32>* GDHDAIDAMAA; // 0x70
	::JKPJHBGLLFB* JFBHCKFOIAH; // 0x78
	::FMBPEPDJNAN* IFCHMBMFOJO; // 0x80
	::BPNGLLLIMDC_GKFFOHIBAAN* DCFBGIIKEHN; // 0x88
	::System::Int32 MAIBEBEHBJK; // 0x90

	::System::Void _ctor(::System::UInt64 KGIOFDBFGAM, ::System::Int32 OIKFFGKDHME, ::FOLOGHLENFB* DFMKILICPFB, ::System::Int32 OHOGDOMNHNK)
	{
		return ((::System::Void(*)(::PVOID, ::System::UInt64, ::System::Int32, ::FOLOGHLENFB*, ::System::Int32))((::PBYTE)hIl2Cpp + OAKIIJGHPDA__CTOR_OFFSET))(this, KGIOFDBFGAM, OIKFFGKDHME, DFMKILICPFB, OHOGDOMNHNK);
	}

	::Share::EItemType GKILDJBDCAP()
	{
		return ((::Share::EItemType(*)(::PVOID))((::PBYTE)hIl2Cpp + OAKIIJGHPDA_GKILDJBDCAP_OFFSET))(this);
	}

	::System::Void MFPLKMFPPLK(::CFMGIKJLMBJ* JKHIHIBHDPH)
	{
		return ((::System::Void(*)(::PVOID, ::CFMGIKJLMBJ*))((::PBYTE)hIl2Cpp + OAKIIJGHPDA_MFPLKMFPPLK_OFFSET))(this, JKHIHIBHDPH);
	}

	::AOLDOKHEAOE* AOENKMAECNH()
	{
		return ((::AOLDOKHEAOE*(*)(::PVOID))((::PBYTE)hIl2Cpp + OAKIIJGHPDA_AOENKMAECNH_OFFSET))(this);
	}

	::System::Void NILHMDPJLGA(::System::Collections::Generic::List_1<::AHAICPLGBAH*>* PILELGPBCLL)
	{
		return ((::System::Void(*)(::PVOID, ::System::Collections::Generic::List_1<::AHAICPLGBAH*>*))((::PBYTE)hIl2Cpp + OAKIIJGHPDA_NILHMDPJLGA_OFFSET))(this, PILELGPBCLL);
	}

	::System::Void MGEAEGODOJO(::CFMGIKJLMBJ* MIALFKCCCPI)
	{
		return ((::System::Void(*)(::PVOID, ::CFMGIKJLMBJ*))((::PBYTE)hIl2Cpp + OAKIIJGHPDA_MGEAEGODOJO_OFFSET))(this, MIALFKCCCPI);
	}
};
