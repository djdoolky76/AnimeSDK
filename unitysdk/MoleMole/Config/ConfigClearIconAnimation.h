#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/MoleMole/Config/ConfigSetSection_Order.h"
#include "unitysdk/MoleMole/Config/ConfigUIBaseActionNode.h"
#include "unitysdk/MoleMole/Vector2Int.h"

class ADCIIHIOAMH;
namespace System::Collections::Generic { template <typename T> class List_1; }

#define MOLEMOLE_CONFIG_CONFIGCLEARICONANIMATION_GETUIANIMATIONNODE_OFFSET UNITYSDK_OFFSET(0x19B14220)
#define MOLEMOLE_CONFIG_CONFIGCLEARICONANIMATION__CTOR_OFFSET UNITYSDK_OFFSET(0x19B142E0)

namespace MoleMole::Config
{
	inline static constexpr unsigned int ConfigClearIconAnimation_TypeDefinitionIndex = 72646;

	class ConfigClearIconAnimation : public ::MoleMole::Config::ConfigUIBaseActionNode
	{
	public:
		::System::Collections::Generic::List_1<::MoleMole::Vector2Int>* OffsetList; // 0x18
		::System::Boolean UseSpecific; // 0x20
		::System::Byte _padding0[0x3];
		::MoleMole::Config::ConfigSetSection_Order ConfigOrder; // 0x24

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_CONFIGCLEARICONANIMATION__CTOR_OFFSET))(this);
		}

		::ADCIIHIOAMH* GetUIAnimationNode()
		{
			return ((::ADCIIHIOAMH*(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_CONFIGCLEARICONANIMATION_GETUIANIMATIONNODE_OFFSET))(this);
		}
	};
}
