#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/NodeGraphDisplayType.h"
#include "unitysdk/System/Attribute.h"

#define FNALDFEDBMG_CTOR_OFFSET UNITYSDK_OFFSET(0x1CE0C3F0)

inline static constexpr unsigned int FNALDFEDBMG_TypeDefinitionIndex = 10813;

	class FNALDFEDBMG : public ::System::Attribute
	{
	public:
		::RPG::GameCore::NodeGraphDisplayType BEBEEMKOBNN; // 0x10
		::System::Void _ctor(::RPG::GameCore::NodeGraphDisplayType a1)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::NodeGraphDisplayType))((::PBYTE)hIl2Cpp + FNALDFEDBMG_CTOR_OFFSET))(this, a1);
		}

	};
