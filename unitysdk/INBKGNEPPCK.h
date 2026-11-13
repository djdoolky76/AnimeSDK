#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/PlayVideoQTEStage.h"
#include "unitysdk/System/Object.h"

#define INBKGNEPPCK_CTOR_OFFSET UNITYSDK_OFFSET(0x1A5E4FD0)
#define INBKGNEPPCK_GET_STAGE_OFFSET UNITYSDK_OFFSET(0x1A5E4FE0)

inline static constexpr unsigned int INBKGNEPPCK_TypeDefinitionIndex = 74950;

	class INBKGNEPPCK : public ::System::Object
	{
	public:
		::RPG::Client::PlayVideoQTEStage _Stage_k__BackingField; // 0x10
		::System::Void _ctor(::RPG::Client::PlayVideoQTEStage a1)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::PlayVideoQTEStage))((::PBYTE)hIl2Cpp + INBKGNEPPCK_CTOR_OFFSET))(this, a1);
		}

		::RPG::Client::PlayVideoQTEStage get_Stage()
		{
			return ((::RPG::Client::PlayVideoQTEStage(*)(::PVOID))((::PBYTE)hIl2Cpp + INBKGNEPPCK_GET_STAGE_OFFSET))(this);
		}

	};
