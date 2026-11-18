#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class NLNIIPDCABP;
namespace MoleMole::Battle { class AnimatorParamControl; }

#define MOLEMOLE_UIMAINCITYCHATPLAYWIDGETCONTROLLER___C__DISPLAYCLASS85_1__CTOR_OFFSET UNITYSDK_OFFSET(0x19A7E400)
#define MOLEMOLE_UIMAINCITYCHATPLAYWIDGETCONTROLLER___C__DISPLAYCLASS85_1__INLEVELPLAYSTORYNODE_B__1_OFFSET UNITYSDK_OFFSET(0x19A7E410)

namespace MoleMole
{
	inline static constexpr unsigned int UIMainCityChatPlayWidgetController___c__DisplayClass85_1_TypeDefinitionIndex = 55413;

	template <typename T>
	class UIMainCityChatPlayWidgetController___c__DisplayClass85_1 : public ::System::Object
	{
	public:
		::System::Object* CS___8__locals1; // 0x10
		::NLNIIPDCABP* animatorComponent; // 0x18
		::MoleMole::Battle::AnimatorParamControl* animatorParamControl; // 0x20

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIMAINCITYCHATPLAYWIDGETCONTROLLER___C__DISPLAYCLASS85_1__CTOR_OFFSET))(this);
		}

		::System::Void _InLevelPlayStoryNode_b__1()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIMAINCITYCHATPLAYWIDGETCONTROLLER___C__DISPLAYCLASS85_1__INLEVELPLAYSTORYNODE_B__1_OFFSET))(this);
		}
	};
}
