#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/DGEPOBDMLDJ.h"
#include "unitysdk/ICFEIEJDMIB.h"
#include "unitysdk/System/Object.h"
namespace RPG::GCFreeClosure { template <typename T1, typename T2, typename T3> class FuncByRef_3; }

namespace RPG::GCFreeClosure
{
	template <typename T>
	class FuncClosure_1_FuncClosureWrapper_1 : public ::System::Object
	{
	public:
		static ::RPG::GCFreeClosure::FuncByRef_3<::ICFEIEJDMIB, T, ::DGEPOBDMLDJ>** StaticGet__default()
		{
			return (::RPG::GCFreeClosure::FuncByRef_3<::ICFEIEJDMIB, T, ::DGEPOBDMLDJ>**)UnitySDK::FromName("RPG.GCFreeClosure", "FuncClosureWrapper`1")->GetStaticField(0x0);
		}

	};
}
