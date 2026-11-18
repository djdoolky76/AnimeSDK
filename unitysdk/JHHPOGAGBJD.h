#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/MoleMole/EntityHandle.h"

namespace MoleMole::Config { class FollowAvatarTrait; }

#define JHHPOGAGBJD_ANEOCOIFDDJ_OFFSET UNITYSDK_OFFSET(0x198C9300)
#define JHHPOGAGBJD_DMDLHICJKKO_OFFSET UNITYSDK_OFFSET(0x198C9310)
#define JHHPOGAGBJD_ILHIIDBCNEC_OFFSET UNITYSDK_OFFSET(0x198C92F0)
#define JHHPOGAGBJD_KDOIBCBFBAG_OFFSET UNITYSDK_OFFSET(0x198C9320)
#define JHHPOGAGBJD_MJDKLJOLFPO_OFFSET UNITYSDK_OFFSET(0x198C9330)
#define JHHPOGAGBJD_ONDISABLE_OFFSET UNITYSDK_OFFSET(0x198C9240)
#define JHHPOGAGBJD_ONENABLE_OFFSET UNITYSDK_OFFSET(0x198C9200)
#define JHHPOGAGBJD_ONRECYCLE_OFFSET UNITYSDK_OFFSET(0x198C9170)
#define JHHPOGAGBJD__CTOR_OFFSET UNITYSDK_OFFSET(0x198C9280)

inline static constexpr unsigned int JHHPOGAGBJD_TypeDefinitionIndex = 77225;

class JHHPOGAGBJD
{
public:
	::MoleMole::EntityHandle IAFAOELGMOM; // 0x28
	::MoleMole::Config::FollowAvatarTrait* _HPPJACJHFEP_k__BackingField; // 0x38

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + JHHPOGAGBJD__CTOR_OFFSET))(this);
	}

	::System::Void OnRecycle()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + JHHPOGAGBJD_ONRECYCLE_OFFSET))(this);
	}

	::System::Void OnEnable()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + JHHPOGAGBJD_ONENABLE_OFFSET))(this);
	}

	::System::Void OnDisable()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + JHHPOGAGBJD_ONDISABLE_OFFSET))(this);
	}

	::System::Void ILHIIDBCNEC()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + JHHPOGAGBJD_ILHIIDBCNEC_OFFSET))(this);
	}

	::System::Void ANEOCOIFDDJ()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + JHHPOGAGBJD_ANEOCOIFDDJ_OFFSET))(this);
	}

	::System::Void DMDLHICJKKO(::MoleMole::Config::FollowAvatarTrait* EGEGIMGMJHN)
	{
		return ((::System::Void(*)(::PVOID, ::MoleMole::Config::FollowAvatarTrait*))((::PBYTE)hIl2Cpp + JHHPOGAGBJD_DMDLHICJKKO_OFFSET))(this, EGEGIMGMJHN);
	}

	::System::Void KDOIBCBFBAG()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + JHHPOGAGBJD_KDOIBCBFBAG_OFFSET))(this);
	}

	::MoleMole::Config::FollowAvatarTrait* MJDKLJOLFPO()
	{
		return ((::MoleMole::Config::FollowAvatarTrait*(*)(::PVOID))((::PBYTE)hIl2Cpp + JHHPOGAGBJD_MJDKLJOLFPO_OFFSET))(this);
	}
};
