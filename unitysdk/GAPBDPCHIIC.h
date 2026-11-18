#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/GMBDKAPICHA.h"

namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }

#define GAPBDPCHIIC_AKNHMJAICMD_OFFSET UNITYSDK_OFFSET(0x15CD0500)
#define GAPBDPCHIIC_BLAKEBBPEPC_OFFSET UNITYSDK_OFFSET(0x15CD05F0)
#define GAPBDPCHIIC_DMGPBKBFNDD_OFFSET UNITYSDK_OFFSET(0x15CD0360)
#define GAPBDPCHIIC_LJBGAGJMNIF_OFFSET UNITYSDK_OFFSET(0x15CD0470)
#define GAPBDPCHIIC_LNEPBIEFOIP_OFFSET UNITYSDK_OFFSET(0x15CD05E0)
#define GAPBDPCHIIC_MAGIOJCGJKG_OFFSET UNITYSDK_OFFSET(0x15CD06E0)
#define GAPBDPCHIIC__CTOR_OFFSET UNITYSDK_OFFSET(0x15CD02A0)

inline static constexpr unsigned int GAPBDPCHIIC_TypeDefinitionIndex = 64131;

class GAPBDPCHIIC : public ::GMBDKAPICHA
{
public:
	::System::Void _ctor(::System::Int32 ENJBNINBDEI, ::System::Int32 COFHLCMILJA, ::System::Collections::Generic::Dictionary_2<::System::Int32, ::System::Int32>* KNHIFHIKHIO)
	{
		return ((::System::Void(*)(::PVOID, ::System::Int32, ::System::Int32, ::System::Collections::Generic::Dictionary_2<::System::Int32, ::System::Int32>*))((::PBYTE)hIl2Cpp + GAPBDPCHIIC__CTOR_OFFSET))(this, ENJBNINBDEI, COFHLCMILJA, KNHIFHIKHIO);
	}

	::System::Int32 DMGPBKBFNDD(::System::Int32 FMEKFDKKEDH)
	{
		return ((::System::Int32(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + GAPBDPCHIIC_DMGPBKBFNDD_OFFSET))(this, FMEKFDKKEDH);
	}

	::System::Int32 LJBGAGJMNIF(::System::Int32 FMEKFDKKEDH)
	{
		return ((::System::Int32(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + GAPBDPCHIIC_LJBGAGJMNIF_OFFSET))(this, FMEKFDKKEDH);
	}

	::System::Int32 AKNHMJAICMD(::System::Int32 MOBNMDEDJIP)
	{
		return ((::System::Int32(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + GAPBDPCHIIC_AKNHMJAICMD_OFFSET))(this, MOBNMDEDJIP);
	}

	::System::Int32 LNEPBIEFOIP(::System::Int32 MIALFKCCCPI)
	{
		return ((::System::Int32(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + GAPBDPCHIIC_LNEPBIEFOIP_OFFSET))(this, MIALFKCCCPI);
	}

	::System::Int32 BLAKEBBPEPC(::System::Int32 MIALFKCCCPI)
	{
		return ((::System::Int32(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + GAPBDPCHIIC_BLAKEBBPEPC_OFFSET))(this, MIALFKCCCPI);
	}

	::System::Int32 MAGIOJCGJKG(::System::Int32 MIALFKCCCPI)
	{
		return ((::System::Int32(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + GAPBDPCHIIC_MAGIOJCGJKG_OFFSET))(this, MIALFKCCCPI);
	}
};
