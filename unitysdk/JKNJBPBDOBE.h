#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/MultiLightEffectMatBlockType.h"
#include "unitysdk/System/Object.h"

#define JKNJBPBDOBE_HJKIEKODDAL_OFFSET UNITYSDK_OFFSET(0xB2236B0)

inline static constexpr unsigned int JKNJBPBDOBE_TypeDefinitionIndex = 70688;

	class JKNJBPBDOBE : public ::System::Object
	{
	public:
		static ::System::Boolean HJKIEKODDAL(::RPG::Client::MultiLightEffectMatBlockType a1, ::RPG::Client::MultiLightEffectMatBlockType a2)
		{
			return ((::System::Boolean(*)(::RPG::Client::MultiLightEffectMatBlockType, ::RPG::Client::MultiLightEffectMatBlockType))((::PBYTE)hIl2Cpp + JKNJBPBDOBE_HJKIEKODDAL_OFFSET))(a1, a2);
		}

	};
