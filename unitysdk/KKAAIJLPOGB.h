#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
namespace RPG::GameCore { class ChimeraAbility; }

#define KKAAIJLPOGB_CTOR_OFFSET UNITYSDK_OFFSET(0x1C8D7250)

inline static constexpr unsigned int KKAAIJLPOGB_TypeDefinitionIndex = 41982;

	class KKAAIJLPOGB : public ::System::Object
	{
	public:
		::Il2CppArray<::RPG::GameCore::ChimeraAbility*>* GLLOLLEDHAD; // 0x10
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + KKAAIJLPOGB_CTOR_OFFSET))(this);
		}

	};
