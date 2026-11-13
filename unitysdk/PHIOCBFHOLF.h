#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
namespace RPG::Client { class EffectPluginManager; }

#define PHIOCBFHOLF_HIBMFAPHDFD_OFFSET UNITYSDK_OFFSET(0x1A9B0F80)

inline static constexpr unsigned int PHIOCBFHOLF_TypeDefinitionIndex = 72754;

	class PHIOCBFHOLF : public ::System::Object
	{
	public:
		static ::RPG::Client::EffectPluginManager* HIBMFAPHDFD(::System::Boolean a1)
		{
			return ((::RPG::Client::EffectPluginManager*(*)(::System::Boolean))((::PBYTE)hIl2Cpp + PHIOCBFHOLF_HIBMFAPHDFD_OFFSET))(a1);
		}

	};
