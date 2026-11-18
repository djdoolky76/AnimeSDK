#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/OLHFONBEAAN.h"

#define GLOFBGPFNOH_CCIFDCBKPPJ_OFFSET UNITYSDK_OFFSET(0x13DE5B10)
#define GLOFBGPFNOH_DGANINHHGPB_OFFSET UNITYSDK_OFFSET(0x13DE5D60)
#define GLOFBGPFNOH_EFDHFPDKKGD_OFFSET UNITYSDK_OFFSET(0x13DE5D40)
#define GLOFBGPFNOH_FMLNEBFEDFH_OFFSET UNITYSDK_OFFSET(0x13DE5BC0)
#define GLOFBGPFNOH_KBAFBMHJDEP_OFFSET UNITYSDK_OFFSET(0x13DE5D30)
#define GLOFBGPFNOH_LDGIBHMLCCO_OFFSET UNITYSDK_OFFSET(0x13DE5D50)
#define GLOFBGPFNOH_NEKANOEOOAE_OFFSET UNITYSDK_OFFSET(0x13DE5C70)
#define GLOFBGPFNOH_OHDPCOIOMGF_OFFSET UNITYSDK_OFFSET(0x13DE5B00)
#define GLOFBGPFNOH_PEBFBIHHCAD_OFFSET UNITYSDK_OFFSET(0x13DE5CD0)
#define GLOFBGPFNOH__CTOR_OFFSET UNITYSDK_OFFSET(0x13DE5AC0)

inline static constexpr unsigned int GLOFBGPFNOH_TypeDefinitionIndex = 83710;

class GLOFBGPFNOH : public ::OLHFONBEAAN
{
public:
	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + GLOFBGPFNOH__CTOR_OFFSET))(this);
	}

	::System::Boolean OHDPCOIOMGF()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + GLOFBGPFNOH_OHDPCOIOMGF_OFFSET))(this);
	}

	::System::Void CCIFDCBKPPJ()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + GLOFBGPFNOH_CCIFDCBKPPJ_OFFSET))(this);
	}

	::System::Void FMLNEBFEDFH()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + GLOFBGPFNOH_FMLNEBFEDFH_OFFSET))(this);
	}

	::System::Void NEKANOEOOAE()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + GLOFBGPFNOH_NEKANOEOOAE_OFFSET))(this);
	}

	::System::Void PEBFBIHHCAD()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + GLOFBGPFNOH_PEBFBIHHCAD_OFFSET))(this);
	}

	::System::Void KBAFBMHJDEP()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + GLOFBGPFNOH_KBAFBMHJDEP_OFFSET))(this);
	}

	::System::Void EFDHFPDKKGD()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + GLOFBGPFNOH_EFDHFPDKKGD_OFFSET))(this);
	}

	::System::Void LDGIBHMLCCO()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + GLOFBGPFNOH_LDGIBHMLCCO_OFFSET))(this);
	}

	::System::Void DGANINHHGPB()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + GLOFBGPFNOH_DGANINHHGPB_OFFSET))(this);
	}
};
