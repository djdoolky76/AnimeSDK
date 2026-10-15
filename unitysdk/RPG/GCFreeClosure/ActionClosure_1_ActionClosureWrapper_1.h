#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/ICFEIEJDMIB.h"
#include "unitysdk/System/Object.h"
namespace RPG::GCFreeClosure { template <typename T1, typename T2> class ActionByRef_2; }

namespace RPG::GCFreeClosure
{
	inline static constexpr unsigned int ActionClosure_1_ActionClosureWrapper_1_TypeDefinitionIndex = 6419;

	template <typename T>
	class ActionClosure_1_ActionClosureWrapper_1 : public ::System::Object
	{
	public:
		static ::RPG::GCFreeClosure::ActionByRef_2<::ICFEIEJDMIB, T>** StaticGet__default()
		{
			return (::RPG::GCFreeClosure::ActionByRef_2<::ICFEIEJDMIB, T>**)UnitySDK::FromName("RPG.GCFreeClosure", "ActionClosureWrapper`1")->GetStaticField(0x0);
		}

	};
}
