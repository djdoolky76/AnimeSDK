#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class FOJMCDPDANK;
class HJGOAJHNEGC;
namespace MoleMole::Battle { class Entity; }

#define FOJMCDPDANK_ABNFIEFFPEM_LPOLGJLBIHD_OFFSET UNITYSDK_OFFSET(0x15EFE800)
#define FOJMCDPDANK_ABNFIEFFPEM__CTOR_OFFSET UNITYSDK_OFFSET(0x15EFE7F0)

inline static constexpr unsigned int FOJMCDPDANK_ABNFIEFFPEM_TypeDefinitionIndex = 53834;

class FOJMCDPDANK_ABNFIEFFPEM : public ::System::Object
{
public:
	::FOJMCDPDANK* KLHPEBKNIFB; // 0x10
	::MoleMole::Battle::Entity* BDHOILPIGKB; // 0x18
	::HJGOAJHNEGC* CFKNPNAEHKL; // 0x20
	::System::Int32 PBCMNKKGKBL; // 0x28

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + FOJMCDPDANK_ABNFIEFFPEM__CTOR_OFFSET))(this);
	}

	::System::Void LPOLGJLBIHD(::MoleMole::Battle::Entity* KECKGDFIALJ)
	{
		return ((::System::Void(*)(::PVOID, ::MoleMole::Battle::Entity*))((::PBYTE)hIl2Cpp + FOJMCDPDANK_ABNFIEFFPEM_LPOLGJLBIHD_OFFSET))(this, KECKGDFIALJ);
	}
};
