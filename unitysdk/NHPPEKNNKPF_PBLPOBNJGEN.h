#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/BJNJBJKHDCJ.h"
#include "unitysdk/System/Object.h"

class NHPPEKNNKPF_HOHGLCFELKC;
namespace MoleMole::Battle { class Entity; }

#define NHPPEKNNKPF_PBLPOBNJGEN_CCMKLFMCGIM_OFFSET UNITYSDK_OFFSET(0x1314FE30)
#define NHPPEKNNKPF_PBLPOBNJGEN__CTOR_OFFSET UNITYSDK_OFFSET(0x1314FE20)

inline static constexpr unsigned int NHPPEKNNKPF_PBLPOBNJGEN_TypeDefinitionIndex = 74430;

class NHPPEKNNKPF_PBLPOBNJGEN : public ::System::Object
{
public:
	::NHPPEKNNKPF_HOHGLCFELKC* FGBNBFHOKAA; // 0x10
	::BJNJBJKHDCJ MPCFCIMLKEG; // 0x18

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + NHPPEKNNKPF_PBLPOBNJGEN__CTOR_OFFSET))(this);
	}

	::System::Boolean CCMKLFMCGIM(::MoleMole::Battle::Entity* OMPHGGCEIBD, ::MoleMole::Battle::Entity* FKCCGOEODBN)
	{
		return ((::System::Boolean(*)(::PVOID, ::MoleMole::Battle::Entity*, ::MoleMole::Battle::Entity*))((::PBYTE)hIl2Cpp + NHPPEKNNKPF_PBLPOBNJGEN_CCMKLFMCGIM_OFFSET))(this, OMPHGGCEIBD, FKCCGOEODBN);
	}
};
