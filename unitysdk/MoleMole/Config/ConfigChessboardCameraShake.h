#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/MoleMole/Config/ConfigUIBaseActionNode.h"

class ADCIIHIOAMH;
namespace System { class String; }
namespace System::Collections { class IEnumerable; }

#define MOLEMOLE_CONFIG_CONFIGCHESSBOARDCAMERASHAKE_GETSHAKETYPELISTVALUEDROPDOWN_OFFSET UNITYSDK_OFFSET(0x1276FC60)
#define MOLEMOLE_CONFIG_CONFIGCHESSBOARDCAMERASHAKE_GETUIANIMATIONNODE_OFFSET UNITYSDK_OFFSET(0x1276FBA0)
#define MOLEMOLE_CONFIG_CONFIGCHESSBOARDCAMERASHAKE__CTOR_OFFSET UNITYSDK_OFFSET(0x1276FE30)

namespace MoleMole::Config
{
	inline static constexpr unsigned int ConfigChessboardCameraShake_TypeDefinitionIndex = 79851;

	class ConfigChessboardCameraShake : public ::MoleMole::Config::ConfigUIBaseActionNode
	{
	public:
		::System::String* CameraShakeKey; // 0x18
		::System::Boolean SkipWait; // 0x20

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_CONFIGCHESSBOARDCAMERASHAKE__CTOR_OFFSET))(this);
		}

		::ADCIIHIOAMH* GetUIAnimationNode()
		{
			return ((::ADCIIHIOAMH*(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_CONFIGCHESSBOARDCAMERASHAKE_GETUIANIMATIONNODE_OFFSET))(this);
		}

		::System::Collections::IEnumerable* GetShakeTypeListValueDropDown()
		{
			return ((::System::Collections::IEnumerable*(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_CONFIGCHESSBOARDCAMERASHAKE_GETSHAKETYPELISTVALUEDROPDOWN_OFFSET))(this);
		}
	};
}
