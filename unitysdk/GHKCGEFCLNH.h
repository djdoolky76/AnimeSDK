#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace System { class Action; }

#define GHKCGEFCLNH_EACOHCPFGAE_OFFSET UNITYSDK_OFFSET(0x10EF61A0)
#define GHKCGEFCLNH_GGCJAIJMMHJ_OFFSET UNITYSDK_OFFSET(0x10EF60E0)
#define GHKCGEFCLNH_JOBJDBBKHBM_OFFSET UNITYSDK_OFFSET(0x10EF6130)
#define GHKCGEFCLNH_KNDMMHPDPIB_OFFSET UNITYSDK_OFFSET(0x10EF61B0)
#define GHKCGEFCLNH_NGELJIJDHLJ_OFFSET UNITYSDK_OFFSET(0x10EF6200)
#define GHKCGEFCLNH__CTOR_OFFSET UNITYSDK_OFFSET(0x10EF6190)

inline static constexpr unsigned int GHKCGEFCLNH_TypeDefinitionIndex = 72311;

class GHKCGEFCLNH : public ::System::Object
{
public:
	// static const ::System::String* ABBHHLLKPOL; // 0x0
	// static const ::System::String* FPIEBDKEJAH; // 0x0
	::System::Action* OHPAMHAIJHP; // 0x10
	::System::Boolean _HLKOIMLGOHH_k__BackingField; // 0x18

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + GHKCGEFCLNH__CTOR_OFFSET))(this);
	}

	::System::Void GGCJAIJMMHJ()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + GHKCGEFCLNH_GGCJAIJMMHJ_OFFSET))(this);
	}

	::System::Void JOBJDBBKHBM()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + GHKCGEFCLNH_JOBJDBBKHBM_OFFSET))(this);
	}

	::System::Void EACOHCPFGAE(::System::Boolean EGEGIMGMJHN)
	{
		return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + GHKCGEFCLNH_EACOHCPFGAE_OFFSET))(this, EGEGIMGMJHN);
	}

	::System::Void KNDMMHPDPIB()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + GHKCGEFCLNH_KNDMMHPDPIB_OFFSET))(this);
	}

	::System::Boolean NGELJIJDHLJ()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + GHKCGEFCLNH_NGELJIJDHLJ_OFFSET))(this);
	}
};
