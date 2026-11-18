#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace Code::Logic::Data::ScriptObject::Level { class SummerEventMonsterSpawnConfig; }
namespace System { class Action; }

#define ILNPIDMNKDP_KBPNNHININA_HOLADCNCPND_OFFSET UNITYSDK_OFFSET(0x16AA7FE0)
#define ILNPIDMNKDP_KBPNNHININA__CTOR_OFFSET UNITYSDK_OFFSET(0x16AA7FD0)

inline static constexpr unsigned int ILNPIDMNKDP_KBPNNHININA_TypeDefinitionIndex = 67651;

class ILNPIDMNKDP_KBPNNHININA : public ::System::Object
{
public:
	::System::Action* IBNICCGMILF; // 0x10

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + ILNPIDMNKDP_KBPNNHININA__CTOR_OFFSET))(this);
	}

	::System::Void HOLADCNCPND(::Code::Logic::Data::ScriptObject::Level::SummerEventMonsterSpawnConfig* DFMKILICPFB)
	{
		return ((::System::Void(*)(::PVOID, ::Code::Logic::Data::ScriptObject::Level::SummerEventMonsterSpawnConfig*))((::PBYTE)hIl2Cpp + ILNPIDMNKDP_KBPNNHININA_HOLADCNCPND_OFFSET))(this, DFMKILICPFB);
	}
};
