#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/DGEPOBDMLDJ.h"
#include "unitysdk/ICFEIEJDMIB.h"
#include "unitysdk/System/Object.h"
namespace RPG::GCFreeClosure { template <typename T1, typename T2, typename T3> class FuncByRef_3; }

namespace RPG::GCFreeClosure
{
	inline static constexpr unsigned int FuncClosure_1_FuncClosureWrapper_2_TypeDefinitionIndex = 6453;

	template <typename T1, typename T2>
	class FuncClosure_1_FuncClosureWrapper_2 : public ::System::Object
	{
	public:
		static ::RPG::GCFreeClosure::FuncByRef_3<::ICFEIEJDMIB, T1, ::DGEPOBDMLDJ>** StaticGet__default()
		{
			return (::RPG::GCFreeClosure::FuncByRef_3<::ICFEIEJDMIB, T1, ::DGEPOBDMLDJ>**)UnitySDK::FromName("RPG.GCFreeClosure", "FuncClosureWrapper`2")->GetStaticField(0x0);
		}

	};
}
