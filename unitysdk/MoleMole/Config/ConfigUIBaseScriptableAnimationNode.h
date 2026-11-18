#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class ADCIIHIOAMH;
class DNGEKLMPBAC;
class NGPAGDNPMKJ;
namespace MoleMole::Config { class BoolUISpecialNum; }
namespace MoleMole::Config { class UISpecialNumGroup; }

#define MOLEMOLE_CONFIG_CONFIGUIBASESCRIPTABLEANIMATIONNODE_CREATEUIANIMATIONNODE_OFFSET UNITYSDK_OFFSET(0x192ADD20)
#define MOLEMOLE_CONFIG_CONFIGUIBASESCRIPTABLEANIMATIONNODE__CTOR_OFFSET UNITYSDK_OFFSET(0x192ADDD0)

namespace MoleMole::Config
{
	inline static constexpr unsigned int ConfigUIBaseScriptableAnimationNode_TypeDefinitionIndex = 77497;

	class ConfigUIBaseScriptableAnimationNode : public ::System::Object
	{
	public:
		::MoleMole::Config::BoolUISpecialNum* IsSkip; // 0x10

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_CONFIGUIBASESCRIPTABLEANIMATIONNODE__CTOR_OFFSET))(this);
		}

		::ADCIIHIOAMH* CreateUIAnimationNode(::NGPAGDNPMKJ* uiAnimationNodeContext, ::MoleMole::Config::UISpecialNumGroup* uiSpecialNumGroup, ::DNGEKLMPBAC* player)
		{
			return ((::ADCIIHIOAMH*(*)(::PVOID, ::NGPAGDNPMKJ*, ::MoleMole::Config::UISpecialNumGroup*, ::DNGEKLMPBAC*))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_CONFIGUIBASESCRIPTABLEANIMATIONNODE_CREATEUIANIMATIONNODE_OFFSET))(this, uiAnimationNodeContext, uiSpecialNumGroup, player);
		}
	};
}
