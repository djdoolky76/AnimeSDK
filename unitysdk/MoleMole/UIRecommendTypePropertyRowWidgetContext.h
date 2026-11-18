#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/MoleMole/UIControllerContextBase.h"

class EMONNCFEDAO;
class IKFBCIGNNEP;
namespace MoleMole { template <typename T> class UIRoleEquipRecommendPopContext_1; }

#define MOLEMOLE_UIRECOMMENDTYPEPROPERTYROWWIDGETCONTEXT__CTOR_OFFSET UNITYSDK_OFFSET(0x168EC510)

namespace MoleMole
{
	inline static constexpr unsigned int UIRecommendTypePropertyRowWidgetContext_TypeDefinitionIndex = 76533;

	class UIRecommendTypePropertyRowWidgetContext : public ::MoleMole::UIControllerContextBase
	{
	public:
		::MoleMole::UIRoleEquipRecommendPopContext_1<::EMONNCFEDAO*>* RoleEquipRecommendPopContext; // 0x28
		::IKFBCIGNNEP* avatarRecommendPropertyData; // 0x30
		::System::Boolean isConfigData; // 0x38

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIRECOMMENDTYPEPROPERTYROWWIDGETCONTEXT__CTOR_OFFSET))(this);
		}
	};
}
