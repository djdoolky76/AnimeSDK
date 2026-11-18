#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace MoleMole::Battle { class Entity; }

#define DNPLKCGEDBK_IMCBOCLEKMD_OHNPONEBFFG_OFFSET UNITYSDK_OFFSET(0xFDCB3C0)
#define DNPLKCGEDBK_IMCBOCLEKMD__CTOR_OFFSET UNITYSDK_OFFSET(0xFDCB3B0)

inline static constexpr unsigned int DNPLKCGEDBK_IMCBOCLEKMD_TypeDefinitionIndex = 47120;

class DNPLKCGEDBK_IMCBOCLEKMD : public ::System::Object
{
public:
	::MoleMole::Battle::Entity* KECKGDFIALJ; // 0x10

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + DNPLKCGEDBK_IMCBOCLEKMD__CTOR_OFFSET))(this);
	}

	::System::Void OHNPONEBFFG()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + DNPLKCGEDBK_IMCBOCLEKMD_OHNPONEBFFG_OFFSET))(this);
	}
};
