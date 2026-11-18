#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace MoleMole { class ActivitBGSpineSequence; }
namespace Spine::Unity { class SkeletonGraphic; }

#define GDAAJAPBNAG_HNDGJKPNIHA_OFFSET UNITYSDK_OFFSET(0x10EE3260)
#define GDAAJAPBNAG_LCJEELHBNHG_OFFSET UNITYSDK_OFFSET(0x10EE2FE0)
#define GDAAJAPBNAG_PHOADBJGFBE_OFFSET UNITYSDK_OFFSET(0x10EE2FA0)
#define GDAAJAPBNAG__CTOR_OFFSET UNITYSDK_OFFSET(0x10EE2E50)

inline static constexpr unsigned int GDAAJAPBNAG_TypeDefinitionIndex = 74510;

class GDAAJAPBNAG : public ::System::Object
{
public:
	::MoleMole::ActivitBGSpineSequence* JKGMOBINBDO; // 0x10
	::Spine::Unity::SkeletonGraphic* AMBBJKIHCLB; // 0x18

	::System::Void _ctor(::MoleMole::ActivitBGSpineSequence* JKGMOBINBDO)
	{
		return ((::System::Void(*)(::PVOID, ::MoleMole::ActivitBGSpineSequence*))((::PBYTE)hIl2Cpp + GDAAJAPBNAG__CTOR_OFFSET))(this, JKGMOBINBDO);
	}

	::System::Void PHOADBJGFBE()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + GDAAJAPBNAG_PHOADBJGFBE_OFFSET))(this);
	}

	::System::Void LCJEELHBNHG()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + GDAAJAPBNAG_LCJEELHBNHG_OFFSET))(this);
	}

	::System::Void HNDGJKPNIHA()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + GDAAJAPBNAG_HNDGJKPNIHA_OFFSET))(this);
	}
};
