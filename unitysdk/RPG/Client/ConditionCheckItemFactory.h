#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/ConditionType.h"
#include "unitysdk/System/Object.h"
class DJBLFPJDAHG;
namespace System { class Object; }

#define RPG_CLIENT_CONDITIONCHECKITEMFACTORY_CREATECONDITIONCHECKITEM_OFFSET UNITYSDK_OFFSET(0xCBB0030)

namespace RPG::Client
{
	inline static constexpr unsigned int ConditionCheckItemFactory_TypeDefinitionIndex = 59894;

	class ConditionCheckItemFactory : public ::System::Object
	{
	public:
		static ::DJBLFPJDAHG* CreateConditionCheckItem(::RPG::GameCore::ConditionType a1, ::System::Object* a2)
		{
			return ((::DJBLFPJDAHG*(*)(::RPG::GameCore::ConditionType, ::System::Object*))((::PBYTE)hIl2Cpp + RPG_CLIENT_CONDITIONCHECKITEMFACTORY_CREATECONDITIONCHECKITEM_OFFSET))(a1, a2);
		}

	};
}
