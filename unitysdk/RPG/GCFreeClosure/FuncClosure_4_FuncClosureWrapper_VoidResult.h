#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/DGEPOBDMLDJ.h"
#include "unitysdk/ICFEIEJDMIB.h"
#include "unitysdk/System/Object.h"
namespace RPG::GCFreeClosure { template <typename T1, typename T2, typename T3, typename T4, typename T5, typename T6> class FuncByRef_6; }

namespace RPG::GCFreeClosure
{
	template <typename T1, typename T2, typename T3, typename T4>
	class FuncClosure_4_FuncClosureWrapper_VoidResult : public ::System::Object
	{
	public:
		static ::RPG::GCFreeClosure::FuncByRef_6<::ICFEIEJDMIB, T1, T2, T3, T4, ::DGEPOBDMLDJ>** StaticGet__default()
		{
			return (::RPG::GCFreeClosure::FuncByRef_6<::ICFEIEJDMIB, T1, T2, T3, T4, ::DGEPOBDMLDJ>**)UnitySDK::FromName("RPG.GCFreeClosure", "FuncClosureWrapper_VoidResult")->GetStaticField(0x0);
		}

	};
}
