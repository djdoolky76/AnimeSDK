#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }

#define GMBDKAPICHA_AKNHMJAICMD_OFFSET UNITYSDK_OFFSET(0x13DE66F0)
#define GMBDKAPICHA_BHNGLLFCIHG_OFFSET UNITYSDK_OFFSET(0x13DE68B0)
#define GMBDKAPICHA_DMGPBKBFNDD_OFFSET UNITYSDK_OFFSET(0x13DE65C0)
#define GMBDKAPICHA_EJDJDOEFGPK_OFFSET UNITYSDK_OFFSET(0x13DE6800)
#define GMBDKAPICHA_FLOAEOHBEEL_OFFSET UNITYSDK_OFFSET(0x13DE6810)
#define GMBDKAPICHA_JHHPFGMDEPA_OFFSET UNITYSDK_OFFSET(0x13DE67A0)
#define GMBDKAPICHA_JNCCBGOLMML_OFFSET UNITYSDK_OFFSET(0x13DE68A0)
#define GMBDKAPICHA_LJBGAGJMNIF_OFFSET UNITYSDK_OFFSET(0x13DE6670)
#define GMBDKAPICHA_NOIANMDABAM_OFFSET UNITYSDK_OFFSET(0x13DE67B0)
#define GMBDKAPICHA__CTOR_OFFSET UNITYSDK_OFFSET(0x13DE6430)

inline static constexpr unsigned int GMBDKAPICHA_TypeDefinitionIndex = 89384;

class GMBDKAPICHA : public ::System::Object
{
public:
	::System::Collections::Generic::Dictionary_2<::System::Int32, ::System::Int32>* MJKAPACJOMB; // 0x10
	::System::Int32 GIMKMNALPJF; // 0x18
	::System::Int32 _MEDAKDACDBD_k__BackingField; // 0x1C
	::System::Int32 _IKLGDONIBDP_k__BackingField; // 0x20
	::System::Int32 ENJBNINBDEI; // 0x24

	::System::Void _ctor(::System::Int32 ENJBNINBDEI, ::System::Int32 COFHLCMILJA, ::System::Collections::Generic::Dictionary_2<::System::Int32, ::System::Int32>* KNHIFHIKHIO)
	{
		return ((::System::Void(*)(::PVOID, ::System::Int32, ::System::Int32, ::System::Collections::Generic::Dictionary_2<::System::Int32, ::System::Int32>*))((::PBYTE)hIl2Cpp + GMBDKAPICHA__CTOR_OFFSET))(this, ENJBNINBDEI, COFHLCMILJA, KNHIFHIKHIO);
	}

	::System::Int32 DMGPBKBFNDD(::System::Int32 FMEKFDKKEDH)
	{
		return ((::System::Int32(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + GMBDKAPICHA_DMGPBKBFNDD_OFFSET))(this, FMEKFDKKEDH);
	}

	::System::Int32 LJBGAGJMNIF(::System::Int32 FMEKFDKKEDH)
	{
		return ((::System::Int32(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + GMBDKAPICHA_LJBGAGJMNIF_OFFSET))(this, FMEKFDKKEDH);
	}

	::System::Int32 AKNHMJAICMD(::System::Int32 MOBNMDEDJIP)
	{
		return ((::System::Int32(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + GMBDKAPICHA_AKNHMJAICMD_OFFSET))(this, MOBNMDEDJIP);
	}

	::System::Int32 JHHPFGMDEPA()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + GMBDKAPICHA_JHHPFGMDEPA_OFFSET))(this);
	}

	::System::Boolean NOIANMDABAM(::System::Int32 MOBNMDEDJIP)
	{
		return ((::System::Boolean(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + GMBDKAPICHA_NOIANMDABAM_OFFSET))(this, MOBNMDEDJIP);
	}

	::System::Int32 EJDJDOEFGPK()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + GMBDKAPICHA_EJDJDOEFGPK_OFFSET))(this);
	}

	::System::Boolean FLOAEOHBEEL()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + GMBDKAPICHA_FLOAEOHBEEL_OFFSET))(this);
	}

	::System::Void JNCCBGOLMML(::System::Int32 EGEGIMGMJHN)
	{
		return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + GMBDKAPICHA_JNCCBGOLMML_OFFSET))(this, EGEGIMGMJHN);
	}

	::System::Void BHNGLLFCIHG(::System::Int32 EGEGIMGMJHN)
	{
		return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + GMBDKAPICHA_BHNGLLFCIHG_OFFSET))(this, EGEGIMGMJHN);
	}
};
