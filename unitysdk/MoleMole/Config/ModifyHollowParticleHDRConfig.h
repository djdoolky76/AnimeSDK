#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/MoleMole/Config/ConfigUIBaseActionNode.h"

class ADCIIHIOAMH;
namespace System { class String; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define MOLEMOLE_CONFIG_MODIFYHOLLOWPARTICLEHDRCONFIG_GETUIANIMATIONNODE_OFFSET UNITYSDK_OFFSET(0x1C6E6AC0)
#define MOLEMOLE_CONFIG_MODIFYHOLLOWPARTICLEHDRCONFIG__CTOR_OFFSET UNITYSDK_OFFSET(0x1C6E6B80)

namespace MoleMole::Config
{
	inline static constexpr unsigned int ModifyHollowParticleHDRConfig_TypeDefinitionIndex = 83903;

	class ModifyHollowParticleHDRConfig : public ::MoleMole::Config::ConfigUIBaseActionNode
	{
	public:
		::System::Collections::Generic::List_1<::System::String*>* ModifyPath; // 0x18
		::System::Single Intensity; // 0x20
		::System::Boolean Enable; // 0x24

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_MODIFYHOLLOWPARTICLEHDRCONFIG__CTOR_OFFSET))(this);
		}

		::ADCIIHIOAMH* GetUIAnimationNode()
		{
			return ((::ADCIIHIOAMH*(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_MODIFYHOLLOWPARTICLEHDRCONFIG_GETUIANIMATIONNODE_OFFSET))(this);
		}
	};
}
