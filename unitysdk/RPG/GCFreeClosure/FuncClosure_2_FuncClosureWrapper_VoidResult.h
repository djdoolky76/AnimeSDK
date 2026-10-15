#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/DGEPOBDMLDJ.h"
#include "unitysdk/ICFEIEJDMIB.h"
#include "unitysdk/System/Object.h"
namespace RPG::GCFreeClosure { template <typename T1, typename T2, typename T3, typename T4> class FuncByRef_4; }

namespace RPG::GCFreeClosure
{
	template <typename T1, typename T2>
	class FuncClosure_2_FuncClosureWrapper_VoidResult : public ::System::Object
	{
	public:
		static ::RPG::GCFreeClosure::FuncByRef_4<::ICFEIEJDMIB, T1, T2, ::DGEPOBDMLDJ>** StaticGet__default()
		{
			return (::RPG::GCFreeClosure::FuncByRef_4<::ICFEIEJDMIB, T1, T2, ::DGEPOBDMLDJ>**)UnitySDK::FromName("RPG.GCFreeClosure", "FuncClosureWrapper_VoidResult")->GetStaticField(0x0);
		}

	};
}
