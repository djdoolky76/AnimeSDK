#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/PingPongSPSkillType.h"
#include "unitysdk/System/Object.h"

#define CDBFAGCNIMO_CTOR_OFFSET UNITYSDK_OFFSET(0x1DA5E1D0)

inline static constexpr unsigned int CDBFAGCNIMO_TypeDefinitionIndex = 43967;

	class CDBFAGCNIMO : public ::System::Object
	{
	public:
		::System::Single GCAMNGCEBKD; // 0x10
		::RPG::GameCore::PingPongSPSkillType BPFFIGIAPJI; // 0x14
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CDBFAGCNIMO_CTOR_OFFSET))(this);
		}

	};
