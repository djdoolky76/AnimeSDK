#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }

#define GBFJHDEOFEO_CMOEJFFNDDG_OFFSET UNITYSDK_OFFSET(0x1DE4B1A0)
#define GBFJHDEOFEO_KHOFNMBNIMB_OFFSET UNITYSDK_OFFSET(0x1DE4B410)
#define GBFJHDEOFEO_PHOADBJGFBE_OFFSET UNITYSDK_OFFSET(0x1DE4B250)
#define GBFJHDEOFEO_PPNOKIKDBEO_OFFSET UNITYSDK_OFFSET(0x1DE4B360)
#define GBFJHDEOFEO__CTOR_OFFSET UNITYSDK_OFFSET(0x1DE4B120)

inline static constexpr unsigned int GBFJHDEOFEO_TypeDefinitionIndex = 93607;

class GBFJHDEOFEO : public ::System::Object
{
public:
	::System::Collections::Generic::Dictionary_2<::System::UInt32, ::System::UInt32>* NDOAHDLELDL; // 0x10
	::System::Collections::Generic::Dictionary_2<::System::Int64, ::System::Int32>* KPDNLJEIALE; // 0x18

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + GBFJHDEOFEO__CTOR_OFFSET))(this);
	}

	::System::Boolean CMOEJFFNDDG(::System::UInt32 BKLGNCBNEGM, ::System::Int32 KAMJLKGLFDB)
	{
		return ((::System::Boolean(*)(::PVOID, ::System::UInt32, ::System::Int32))((::PBYTE)hIl2Cpp + GBFJHDEOFEO_CMOEJFFNDDG_OFFSET))(this, BKLGNCBNEGM, KAMJLKGLFDB);
	}

	::System::Void PHOADBJGFBE()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + GBFJHDEOFEO_PHOADBJGFBE_OFFSET))(this);
	}

	::System::Int32 PPNOKIKDBEO(::System::UInt32 BKLGNCBNEGM, ::System::Int32 KAMJLKGLFDB, ::System::Int32 IFJECFEGAPP)
	{
		return ((::System::Int32(*)(::PVOID, ::System::UInt32, ::System::Int32, ::System::Int32))((::PBYTE)hIl2Cpp + GBFJHDEOFEO_PPNOKIKDBEO_OFFSET))(this, BKLGNCBNEGM, KAMJLKGLFDB, IFJECFEGAPP);
	}

	::System::Void KHOFNMBNIMB(::System::UInt32 BKLGNCBNEGM, ::System::Int32 KAMJLKGLFDB, ::System::Int32 JELMNMHDLGB)
	{
		return ((::System::Void(*)(::PVOID, ::System::UInt32, ::System::Int32, ::System::Int32))((::PBYTE)hIl2Cpp + GBFJHDEOFEO_KHOFNMBNIMB_OFFSET))(this, BKLGNCBNEGM, KAMJLKGLFDB, JELMNMHDLGB);
	}
};
