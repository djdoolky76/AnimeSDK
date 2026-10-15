#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/ICFEIEJDMIB.h"
#include "unitysdk/System/Object.h"
namespace RPG::GCFreeClosure { template <typename T1, typename T2, typename T3, typename T4> class ActionByRef_4; }

namespace RPG::GCFreeClosure
{
	template <typename T1, typename T2, typename T3>
	class ActionClosure_3_ActionClosureWrapper_1 : public ::System::Object
	{
	public:
		static ::RPG::GCFreeClosure::ActionByRef_4<::ICFEIEJDMIB, T1, T2, T3>** StaticGet__default()
		{
			return (::RPG::GCFreeClosure::ActionByRef_4<::ICFEIEJDMIB, T1, T2, T3>**)UnitySDK::FromName("RPG.GCFreeClosure", "ActionClosureWrapper`1")->GetStaticField(0x0);
		}

	};
}
