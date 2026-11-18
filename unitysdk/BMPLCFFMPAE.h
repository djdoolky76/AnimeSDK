#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/CAONGKLFNGN.h"
#include "unitysdk/KGOEPEBCOOB.h"

class AHAICPLGBAH;
class ENGKPGFGGLM;
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }

#define BMPLCFFMPAE_ABLKKHDKCOO_OFFSET UNITYSDK_OFFSET(0xFF8E9C0)
#define BMPLCFFMPAE_BMGEEIJFLIJ_OFFSET UNITYSDK_OFFSET(0xFF8E410)
#define BMPLCFFMPAE_CFNKALIEIFL_OFFSET UNITYSDK_OFFSET(0xFF8EFE0)
#define BMPLCFFMPAE_CINMEPOMAAG_OFFSET UNITYSDK_OFFSET(0xFF8E930)
#define BMPLCFFMPAE_DIPCAIHDMIJ_OFFSET UNITYSDK_OFFSET(0xFF8EA50)
#define BMPLCFFMPAE_HJLOCLEOLOF_OFFSET UNITYSDK_OFFSET(0xFF8E730)
#define BMPLCFFMPAE_KIJAJIHPBDL_OFFSET UNITYSDK_OFFSET(0xFF8E010)
#define BMPLCFFMPAE_KOLPCLEMHGJ_OFFSET UNITYSDK_OFFSET(0xFF8ECA0)
#define BMPLCFFMPAE_OFFKDAJELAN_OFFSET UNITYSDK_OFFSET(0xFF8E1D0)
#define BMPLCFFMPAE__CTOR_OFFSET UNITYSDK_OFFSET(0xFF8E870)

inline static constexpr unsigned int BMPLCFFMPAE_TypeDefinitionIndex = 46416;

class BMPLCFFMPAE : public ::CAONGKLFNGN
{
public:
	::System::Collections::Generic::Dictionary_2<::System::UInt32, ::KGOEPEBCOOB>* IDHJPMKIFAD; // 0x10
	::System::Collections::Generic::Dictionary_2<::System::UInt32, ::AHAICPLGBAH*>* KAJKELFFMGP; // 0x18
	::System::Boolean DHLGGGGJAFI; // 0x20

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + BMPLCFFMPAE__CTOR_OFFSET))(this);
	}

	::System::Void KIJAJIHPBDL()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + BMPLCFFMPAE_KIJAJIHPBDL_OFFSET))(this);
	}

	::System::Void BMGEEIJFLIJ()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + BMPLCFFMPAE_BMGEEIJFLIJ_OFFSET))(this);
	}

	::System::Void CINMEPOMAAG()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + BMPLCFFMPAE_CINMEPOMAAG_OFFSET))(this);
	}

	::System::Void ABLKKHDKCOO()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + BMPLCFFMPAE_ABLKKHDKCOO_OFFSET))(this);
	}

	::System::Void DIPCAIHDMIJ(::AHAICPLGBAH* CJKKFCABFOM)
	{
		return ((::System::Void(*)(::PVOID, ::AHAICPLGBAH*))((::PBYTE)hIl2Cpp + BMPLCFFMPAE_DIPCAIHDMIJ_OFFSET))(this, CJKKFCABFOM);
	}

	::System::Void KOLPCLEMHGJ(::ENGKPGFGGLM* FFNKDGGHBPP)
	{
		return ((::System::Void(*)(::PVOID, ::ENGKPGFGGLM*))((::PBYTE)hIl2Cpp + BMPLCFFMPAE_KOLPCLEMHGJ_OFFSET))(this, FFNKDGGHBPP);
	}

	::System::Void HJLOCLEOLOF()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + BMPLCFFMPAE_HJLOCLEOLOF_OFFSET))(this);
	}

	::System::Void OFFKDAJELAN()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + BMPLCFFMPAE_OFFKDAJELAN_OFFSET))(this);
	}

	::System::Void CFNKALIEIFL(::AHAICPLGBAH* CJKKFCABFOM)
	{
		return ((::System::Void(*)(::PVOID, ::AHAICPLGBAH*))((::PBYTE)hIl2Cpp + BMPLCFFMPAE_CFNKALIEIFL_OFFSET))(this, CJKKFCABFOM);
	}
};
