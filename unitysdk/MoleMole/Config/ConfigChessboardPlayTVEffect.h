#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/MoleMole/Config/ConfigUIBaseActionNode.h"
#include "unitysdk/MoleMole/Vector2Int.h"

class ADCIIHIOAMH;
namespace System { class String; }

#define MOLEMOLE_CONFIG_CONFIGCHESSBOARDPLAYTVEFFECT_GETUIANIMATIONNODE_OFFSET UNITYSDK_OFFSET(0x18B91AC0)
#define MOLEMOLE_CONFIG_CONFIGCHESSBOARDPLAYTVEFFECT__CTOR_OFFSET UNITYSDK_OFFSET(0x18B91B80)

namespace MoleMole::Config
{
	inline static constexpr unsigned int ConfigChessboardPlayTVEffect_TypeDefinitionIndex = 39351;

	class ConfigChessboardPlayTVEffect : public ::MoleMole::Config::ConfigUIBaseActionNode
	{
	public:
		::System::String* ParticlePath; // 0x18
		::MoleMole::Vector2Int RelativePos; // 0x20

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_CONFIGCHESSBOARDPLAYTVEFFECT__CTOR_OFFSET))(this);
		}

		::ADCIIHIOAMH* GetUIAnimationNode()
		{
			return ((::ADCIIHIOAMH*(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_CONFIGCHESSBOARDPLAYTVEFFECT_GETUIANIMATIONNODE_OFFSET))(this);
		}
	};
}
