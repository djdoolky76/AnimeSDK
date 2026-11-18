#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/MoleMole/Config/ConfigUIBaseActionNode.h"

class ADCIIHIOAMH;

#define MOLEMOLE_CONFIG_CONFIGCHESSBOARDMUTEAUDIONODE_GETUIANIMATIONNODE_OFFSET UNITYSDK_OFFSET(0x1909A690)
#define MOLEMOLE_CONFIG_CONFIGCHESSBOARDMUTEAUDIONODE__CTOR_OFFSET UNITYSDK_OFFSET(0x1909A750)

namespace MoleMole::Config
{
	inline static constexpr unsigned int ConfigChessboardMuteAudioNode_TypeDefinitionIndex = 89778;

	class ConfigChessboardMuteAudioNode : public ::MoleMole::Config::ConfigUIBaseActionNode
	{
	public:
		::System::Boolean Enable; // 0x18

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_CONFIGCHESSBOARDMUTEAUDIONODE__CTOR_OFFSET))(this);
		}

		::ADCIIHIOAMH* GetUIAnimationNode()
		{
			return ((::ADCIIHIOAMH*(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_CONFIGCHESSBOARDMUTEAUDIONODE_GETUIANIMATIONNODE_OFFSET))(this);
		}
	};
}
