#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/MoleMole/UIControllerContextBase.h"

class BFLBNDFBIBH;
class EMONNCFEDAO;
namespace MoleMole { template <typename T> class UIRoleEquipRecommendPopContext_1; }
namespace System { template <typename T> class Action_1; }

#define MOLEMOLE_UIRECOMMENDTYPESUITROWWIDGETCONTEXT__CTOR_OFFSET UNITYSDK_OFFSET(0x14CC1AC0)

namespace MoleMole
{
	inline static constexpr unsigned int UIRecommendTypeSuitRowWidgetContext_TypeDefinitionIndex = 42001;

	class UIRecommendTypeSuitRowWidgetContext : public ::MoleMole::UIControllerContextBase
	{
	public:
		::BFLBNDFBIBH* avatarRecommendSuitData; // 0x28
		::System::Action_1<::System::Boolean>* onSuitFocusChange; // 0x30
		::MoleMole::UIRoleEquipRecommendPopContext_1<::EMONNCFEDAO*>* RoleEquipRecommendPopContext; // 0x38
		::System::Boolean isConfigData; // 0x40

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIRECOMMENDTYPESUITROWWIDGETCONTEXT__CTOR_OFFSET))(this);
		}
	};
}
