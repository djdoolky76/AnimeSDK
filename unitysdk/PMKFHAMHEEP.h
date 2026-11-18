#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class JNDPMMKLNDC;

#define PMKFHAMHEEP_AAFKDLBNMFN_OFFSET UNITYSDK_OFFSET(0x194B8B30)
#define PMKFHAMHEEP_ACOEONABOJL_OFFSET UNITYSDK_OFFSET(0x194B8B10)
#define PMKFHAMHEEP_DPJGFIFIKOM_OFFSET UNITYSDK_OFFSET(0x194B8B20)
#define PMKFHAMHEEP_FFBHNHMMMHE_OFFSET UNITYSDK_OFFSET(0x194B8CD0)
#define PMKFHAMHEEP_GFGKABKHBND_OFFSET UNITYSDK_OFFSET(0x194B8AA0)
#define PMKFHAMHEEP_HEKLAFGEABH_OFFSET UNITYSDK_OFFSET(0x194B8B00)
#define PMKFHAMHEEP_JBKCIELFGHL_OFFSET UNITYSDK_OFFSET(0x194B8AB0)
#define PMKFHAMHEEP__CTOR_OFFSET UNITYSDK_OFFSET(0x194B8A70)

inline static constexpr unsigned int PMKFHAMHEEP_TypeDefinitionIndex = 77537;

class PMKFHAMHEEP : public ::System::Object
{
public:
	::System::Int64 _FBJBBPAIDPH_k__BackingField; // 0x10
	::System::UInt32 _JFPALPENGNB_k__BackingField; // 0x18

	::System::Void _ctor(::JNDPMMKLNDC* HMMMOCJAEOA)
	{
		return ((::System::Void(*)(::PVOID, ::JNDPMMKLNDC*))((::PBYTE)hIl2Cpp + PMKFHAMHEEP__CTOR_OFFSET))(this, HMMMOCJAEOA);
	}

	::System::Void GFGKABKHBND(::System::Int64 EGEGIMGMJHN)
	{
		return ((::System::Void(*)(::PVOID, ::System::Int64))((::PBYTE)hIl2Cpp + PMKFHAMHEEP_GFGKABKHBND_OFFSET))(this, EGEGIMGMJHN);
	}

	::System::Void JBKCIELFGHL(::System::Int64 OJIEBBCKHGN)
	{
		return ((::System::Void(*)(::PVOID, ::System::Int64))((::PBYTE)hIl2Cpp + PMKFHAMHEEP_JBKCIELFGHL_OFFSET))(this, OJIEBBCKHGN);
	}

	::System::Int64 HEKLAFGEABH()
	{
		return ((::System::Int64(*)(::PVOID))((::PBYTE)hIl2Cpp + PMKFHAMHEEP_HEKLAFGEABH_OFFSET))(this);
	}

	::System::UInt32 ACOEONABOJL()
	{
		return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + PMKFHAMHEEP_ACOEONABOJL_OFFSET))(this);
	}

	::System::Void DPJGFIFIKOM(::System::UInt32 EGEGIMGMJHN)
	{
		return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + PMKFHAMHEEP_DPJGFIFIKOM_OFFSET))(this, EGEGIMGMJHN);
	}

	::System::Boolean AAFKDLBNMFN()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + PMKFHAMHEEP_AAFKDLBNMFN_OFFSET))(this);
	}

	::System::Boolean FFBHNHMMMHE()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + PMKFHAMHEEP_FFBHNHMMMHE_OFFSET))(this);
	}
};
