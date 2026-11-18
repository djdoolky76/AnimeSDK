#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace MoleMole::Battle { class Entity; }
namespace MoleMole::Config { class ConfigCounterstroke; }

#define CFHNCNDOLFB__CTOR_OFFSET UNITYSDK_OFFSET(0x13257E20)

inline static constexpr unsigned int CFHNCNDOLFB_TypeDefinitionIndex = 58871;

class CFHNCNDOLFB : public ::System::Object
{
public:
	::MoleMole::Battle::Entity* IFNDCFJNECO; // 0x10
	::MoleMole::Config::ConfigCounterstroke* GCPMFMLDHAA; // 0x18
	::System::Int32 PFJIBCNGHKF; // 0x20
	::System::Boolean DONJGGDCPLE; // 0x24

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CFHNCNDOLFB__CTOR_OFFSET))(this);
	}
};
