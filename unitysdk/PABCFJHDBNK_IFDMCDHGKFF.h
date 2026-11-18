#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class IGLACMPAOLK;
class PABCFJHDBNK;
namespace MoleMole::Battle { class Entity; }

#define PABCFJHDBNK_IFDMCDHGKFF_FFONHMGEFOG_OFFSET UNITYSDK_OFFSET(0x15523330)
#define PABCFJHDBNK_IFDMCDHGKFF_FNKOIFNIGPK_OFFSET UNITYSDK_OFFSET(0x15523960)
#define PABCFJHDBNK_IFDMCDHGKFF__CTOR_OFFSET UNITYSDK_OFFSET(0x15523320)

inline static constexpr unsigned int PABCFJHDBNK_IFDMCDHGKFF_TypeDefinitionIndex = 41087;

class PABCFJHDBNK_IFDMCDHGKFF : public ::System::Object
{
public:
	::IGLACMPAOLK* EGGAALCPEPL; // 0x10
	::PABCFJHDBNK* KLHPEBKNIFB; // 0x18

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + PABCFJHDBNK_IFDMCDHGKFF__CTOR_OFFSET))(this);
	}

	::System::Void FFONHMGEFOG()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + PABCFJHDBNK_IFDMCDHGKFF_FFONHMGEFOG_OFFSET))(this);
	}

	::System::Void FNKOIFNIGPK(::MoleMole::Battle::Entity* KECKGDFIALJ)
	{
		return ((::System::Void(*)(::PVOID, ::MoleMole::Battle::Entity*))((::PBYTE)hIl2Cpp + PABCFJHDBNK_IFDMCDHGKFF_FNKOIFNIGPK_OFFSET))(this, KECKGDFIALJ);
	}
};
