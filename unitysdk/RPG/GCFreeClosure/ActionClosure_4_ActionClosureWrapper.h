#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/ICFEIEJDMIB.h"
#include "unitysdk/System/Object.h"
namespace RPG::GCFreeClosure { template <typename T1, typename T2, typename T3, typename T4, typename T5> class ActionByRef_5; }

namespace RPG::GCFreeClosure
{
	template <typename T1, typename T2, typename T3, typename T4>
	class ActionClosure_4_ActionClosureWrapper : public ::System::Object
	{
	public:
		static ::RPG::GCFreeClosure::ActionByRef_5<::ICFEIEJDMIB, T1, T2, T3, T4>** StaticGet__default()
		{
			return (::RPG::GCFreeClosure::ActionByRef_5<::ICFEIEJDMIB, T1, T2, T3, T4>**)UnitySDK::FromName("RPG.GCFreeClosure", "ActionClosureWrapper")->GetStaticField(0x0);
		}

	};
}
