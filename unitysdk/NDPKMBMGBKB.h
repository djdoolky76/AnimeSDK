#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/DJBPFFLIECG.h"

class NDPKMBMGBKB_HBEGOJINDJJ;

#define NDPKMBMGBKB_CLLBCMNBLPO_OFFSET UNITYSDK_OFFSET(0xE733950)
#define NDPKMBMGBKB_KIMJCGJHJAC_OFFSET UNITYSDK_OFFSET(0xE7337F0)
#define NDPKMBMGBKB_MHHJPBJILBJ_OFFSET UNITYSDK_OFFSET(0xE7337B0)
#define NDPKMBMGBKB_ONSTART_OFFSET UNITYSDK_OFFSET(0xE733770)
#define NDPKMBMGBKB_PKAINECJLFN_OFFSET UNITYSDK_OFFSET(0xE7338C0)
#define NDPKMBMGBKB__CTOR_OFFSET UNITYSDK_OFFSET(0xE733760)

inline static constexpr unsigned int NDPKMBMGBKB_TypeDefinitionIndex = 92777;

class NDPKMBMGBKB : public ::DJBPFFLIECG
{
public:
	::NDPKMBMGBKB_HBEGOJINDJJ* FICDLMAKGBE; // 0x30

	::System::Void _ctor(::System::Boolean DFANGALCGPL, ::System::Boolean PKLCFPANMPK)
	{
		return ((::System::Void(*)(::PVOID, ::System::Boolean, ::System::Boolean))((::PBYTE)hIl2Cpp + NDPKMBMGBKB__CTOR_OFFSET))(this, DFANGALCGPL, PKLCFPANMPK);
	}

	::System::Void OnStart()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + NDPKMBMGBKB_ONSTART_OFFSET))(this);
	}

	::System::Void MHHJPBJILBJ()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + NDPKMBMGBKB_MHHJPBJILBJ_OFFSET))(this);
	}

	::System::Void KIMJCGJHJAC()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + NDPKMBMGBKB_KIMJCGJHJAC_OFFSET))(this);
	}

	::System::Void CLLBCMNBLPO()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + NDPKMBMGBKB_CLLBCMNBLPO_OFFSET))(this);
	}

	::NDPKMBMGBKB_HBEGOJINDJJ* PKAINECJLFN()
	{
		return ((::NDPKMBMGBKB_HBEGOJINDJJ*(*)(::PVOID))((::PBYTE)hIl2Cpp + NDPKMBMGBKB_PKAINECJLFN_OFFSET))(this);
	}
};
