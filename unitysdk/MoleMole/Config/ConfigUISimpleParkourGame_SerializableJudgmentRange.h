#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class CCGEIPFHBBP;

#define MOLEMOLE_CONFIG_CONFIGUISIMPLEPARKOURGAME_SERIALIZABLEJUDGMENTRANGE_TOJUDGMENTRANGE_OFFSET UNITYSDK_OFFSET(0x1B92DE90)
#define MOLEMOLE_CONFIG_CONFIGUISIMPLEPARKOURGAME_SERIALIZABLEJUDGMENTRANGE__CTOR_OFFSET UNITYSDK_OFFSET(0x1B92DE80)

namespace MoleMole::Config
{
	inline static constexpr unsigned int ConfigUISimpleParkourGame_SerializableJudgmentRange_TypeDefinitionIndex = 64087;

	class ConfigUISimpleParkourGame_SerializableJudgmentRange : public ::System::Object
	{
	public:
		::System::Single Before; // 0x10
		::System::Single After; // 0x14

		::System::Void _ctor(::System::Single before, ::System::Single after)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single, ::System::Single))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_CONFIGUISIMPLEPARKOURGAME_SERIALIZABLEJUDGMENTRANGE__CTOR_OFFSET))(this, before, after);
		}

		::CCGEIPFHBBP* ToJudgmentRange()
		{
			return ((::CCGEIPFHBBP*(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_CONFIGUISIMPLEPARKOURGAME_SERIALIZABLEJUDGMENTRANGE_TOJUDGMENTRANGE_OFFSET))(this);
		}
	};
}
