#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/PlanetFesAssistantMessageType.h"
#include "unitysdk/System/Object.h"
class FMIHMGNLBPN;

#define IDIDNDHOJMI_BPLPBPMEODA_OFFSET UNITYSDK_OFFSET(0x1778E7C0)
#define IDIDNDHOJMI_CTOR_OFFSET UNITYSDK_OFFSET(0x1778E930)

inline static constexpr unsigned int IDIDNDHOJMI_TypeDefinitionIndex = 68443;

	class IDIDNDHOJMI : public ::System::Object
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + IDIDNDHOJMI_CTOR_OFFSET))(this);
		}

		static ::FMIHMGNLBPN* BPLPBPMEODA(::RPG::GameCore::PlanetFesAssistantMessageType a1)
		{
			return ((::FMIHMGNLBPN*(*)(::RPG::GameCore::PlanetFesAssistantMessageType))((::PBYTE)hIl2Cpp + IDIDNDHOJMI_BPLPBPMEODA_OFFSET))(a1);
		}

	};
