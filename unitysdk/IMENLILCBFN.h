#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/ENGKPGFGGLM.h"

#define IMENLILCBFN_CNHBDOMKKDE_OFFSET UNITYSDK_OFFSET(0x13AAC270)
#define IMENLILCBFN_FIGPAOKNJLN_OFFSET UNITYSDK_OFFSET(0x13AAC370)
#define IMENLILCBFN_GCDIGLPEOGH_OFFSET UNITYSDK_OFFSET(0x13AAC1E0)
#define IMENLILCBFN_OHFHFOHMBJH_OFFSET UNITYSDK_OFFSET(0x13AAC2D0)
#define IMENLILCBFN_PHOADBJGFBE_OFFSET UNITYSDK_OFFSET(0x13AAC0D0)
#define IMENLILCBFN__CCTOR_OFFSET UNITYSDK_OFFSET(0x13AAC160)
#define IMENLILCBFN__CTOR_OFFSET UNITYSDK_OFFSET(0x13AAC1D0)

inline static constexpr unsigned int IMENLILCBFN_TypeDefinitionIndex = 47811;

class IMENLILCBFN : public ::ENGKPGFGGLM
{
public:
	// static const ::System::UInt16 GBKNNOFLGDJ = 0x103; // 0x0
	::System::Boolean BIOAMIBPCNK; // 0x20
	::System::Byte _padding0[0x3];
	::System::UInt32 OJLDGECCPKK; // 0x24

	static ::System::Void _cctor()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + IMENLILCBFN__CCTOR_OFFSET))();
	}

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + IMENLILCBFN__CTOR_OFFSET))(this);
	}

	::System::Void PHOADBJGFBE()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + IMENLILCBFN_PHOADBJGFBE_OFFSET))(this);
	}

	::System::Void GCDIGLPEOGH()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + IMENLILCBFN_GCDIGLPEOGH_OFFSET))(this);
	}

	::System::Void CNHBDOMKKDE(::System::UInt32 CCCBKOMMACP, ::System::Boolean BIAJCABDPBN)
	{
		return ((::System::Void(*)(::PVOID, ::System::UInt32, ::System::Boolean))((::PBYTE)hIl2Cpp + IMENLILCBFN_CNHBDOMKKDE_OFFSET))(this, CCCBKOMMACP, BIAJCABDPBN);
	}

	::System::Void OHFHFOHMBJH()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + IMENLILCBFN_OHFHFOHMBJH_OFFSET))(this);
	}

	::System::Void FIGPAOKNJLN()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + IMENLILCBFN_FIGPAOKNJLN_OFFSET))(this);
	}
};
