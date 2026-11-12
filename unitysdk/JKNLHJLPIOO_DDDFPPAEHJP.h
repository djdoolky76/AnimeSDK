#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class ENEIHJJPNPI;
class GAGIJDJFKAB;
class GELIALJDFBL;
namespace RPG::GameCore { class TaskConfig; }
namespace RPG::GameCore { class TaskContext; }

#define JKNLHJLPIOO_DDDFPPAEHJP_CTOR_OFFSET UNITYSDK_OFFSET(0xBA52A10)

inline static constexpr unsigned int JKNLHJLPIOO_DDDFPPAEHJP_TypeDefinitionIndex = 57021;

	class JKNLHJLPIOO_DDDFPPAEHJP : public ::System::Object
	{
	public:
		::RPG::GameCore::TaskConfig* EABKOHGCHFP; // 0x10
		::GELIALJDFBL* PJJGPDNKMJH; // 0x18
		::GAGIJDJFKAB* BGOBPFANEHD; // 0x20
		::RPG::GameCore::TaskContext* BKIFMPHBIAK; // 0x28
		::ENEIHJJPNPI* CIJDNELBFIG; // 0x30
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + JKNLHJLPIOO_DDDFPPAEHJP_CTOR_OFFSET))(this);
		}

	};
