#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/ICFEIEJDMIB.h"
#include "unitysdk/System/Object.h"
namespace RPG::GCFreeClosure { template <typename T1, typename T2, typename T3> class ActionByRef_3; }

namespace RPG::GCFreeClosure
{
	template <typename T1, typename T2>
	class ActionClosure_2_ActionClosureWrapper_1 : public ::System::Object
	{
	public:
		static ::RPG::GCFreeClosure::ActionByRef_3<::ICFEIEJDMIB, T1, T2>** StaticGet__default()
		{
			return (::RPG::GCFreeClosure::ActionByRef_3<::ICFEIEJDMIB, T1, T2>**)UnitySDK::FromName("RPG.GCFreeClosure", "ActionClosureWrapper`1")->GetStaticField(0x0);
		}

	};
}
