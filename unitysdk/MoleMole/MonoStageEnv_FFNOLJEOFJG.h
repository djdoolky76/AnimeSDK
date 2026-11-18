#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace MoleMole { class MonoEntityModelModifier; }
namespace MoleMole { class MonoSpawnMonsterConfig; }

#define MOLEMOLE_MONOSTAGEENV_FFNOLJEOFJG__CTOR_OFFSET UNITYSDK_OFFSET(0x14B04030)

namespace MoleMole
{
	inline static constexpr unsigned int MonoStageEnv_FFNOLJEOFJG_TypeDefinitionIndex = 55644;

	class MonoStageEnv_FFNOLJEOFJG : public ::System::Object
	{
	public:
		::MoleMole::MonoSpawnMonsterConfig* MNNDJIDGBBB; // 0x10
		::MoleMole::MonoEntityModelModifier* BEOFKLACFGE; // 0x18

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_MONOSTAGEENV_FFNOLJEOFJG__CTOR_OFFSET))(this);
		}
	};
}
