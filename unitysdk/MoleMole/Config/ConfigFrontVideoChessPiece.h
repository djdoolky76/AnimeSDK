#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

#define MOLEMOLE_CONFIG_CONFIGFRONTVIDEOCHESSPIECE__CTOR_OFFSET UNITYSDK_OFFSET(0x1929EB60)

namespace MoleMole::Config
{
	inline static constexpr unsigned int ConfigFrontVideoChessPiece_TypeDefinitionIndex = 47190;

	class ConfigFrontVideoChessPiece : public ::System::Object
	{
	public:
		::System::Single FrontVideoOpacity; // 0x10

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_CONFIGFRONTVIDEOCHESSPIECE__CTOR_OFFSET))(this);
		}
	};
}
