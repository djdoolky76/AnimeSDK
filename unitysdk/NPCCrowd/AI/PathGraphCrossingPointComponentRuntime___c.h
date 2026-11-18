#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace NPCCrowd::AI { class PathGraphSplineLocatorComponent; }
namespace System { template <typename T1, typename T2> class Func_2; }

#define NPCCROWD_AI_PATHGRAPHCROSSINGPOINTCOMPONENTRUNTIME___C__CCTOR_OFFSET UNITYSDK_OFFSET(0x105D2FC0)
#define NPCCROWD_AI_PATHGRAPHCROSSINGPOINTCOMPONENTRUNTIME___C__CTOR_OFFSET UNITYSDK_OFFSET(0x105D3000)
#define NPCCROWD_AI_PATHGRAPHCROSSINGPOINTCOMPONENTRUNTIME___C__SETSWITCHOFF_B__9_2_OFFSET UNITYSDK_OFFSET(0x105D3010)
#define NPCCROWD_AI_PATHGRAPHCROSSINGPOINTCOMPONENTRUNTIME___C__SETSWITCHOFF_B__9_3_OFFSET UNITYSDK_OFFSET(0x105D3030)

namespace NPCCrowd::AI
{
	inline static constexpr unsigned int PathGraphCrossingPointComponentRuntime___c_TypeDefinitionIndex = 57021;

	class PathGraphCrossingPointComponentRuntime___c : public ::System::Object
	{
	public:
		static ::System::Object** StaticGet___9()
		{
			return (::System::Object**)Il2CppClass::FromTypeDefinitionIndex(PathGraphCrossingPointComponentRuntime___c_TypeDefinitionIndex)->GetStaticField(0x474D0);
		}
		static ::System::Func_2<::NPCCrowd::AI::PathGraphSplineLocatorComponent*, ::System::Int32>** StaticGet___9__9_3()
		{
			return (::System::Func_2<::NPCCrowd::AI::PathGraphSplineLocatorComponent*, ::System::Int32>**)Il2CppClass::FromTypeDefinitionIndex(PathGraphCrossingPointComponentRuntime___c_TypeDefinitionIndex)->GetStaticField(0x474D8);
		}
		static ::System::Func_2<::NPCCrowd::AI::PathGraphSplineLocatorComponent*, ::System::Int32>** StaticGet___9__9_2()
		{
			return (::System::Func_2<::NPCCrowd::AI::PathGraphSplineLocatorComponent*, ::System::Int32>**)Il2CppClass::FromTypeDefinitionIndex(PathGraphCrossingPointComponentRuntime___c_TypeDefinitionIndex)->GetStaticField(0x474E0);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + NPCCROWD_AI_PATHGRAPHCROSSINGPOINTCOMPONENTRUNTIME___C__CCTOR_OFFSET))();
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + NPCCROWD_AI_PATHGRAPHCROSSINGPOINTCOMPONENTRUNTIME___C__CTOR_OFFSET))(this);
		}

		::System::Int32 _SetSwitchOff_b__9_2(::NPCCrowd::AI::PathGraphSplineLocatorComponent* locator)
		{
			return ((::System::Int32(*)(::PVOID, ::NPCCrowd::AI::PathGraphSplineLocatorComponent*))((::PBYTE)hIl2Cpp + NPCCROWD_AI_PATHGRAPHCROSSINGPOINTCOMPONENTRUNTIME___C__SETSWITCHOFF_B__9_2_OFFSET))(this, locator);
		}

		::System::Int32 _SetSwitchOff_b__9_3(::NPCCrowd::AI::PathGraphSplineLocatorComponent* locator)
		{
			return ((::System::Int32(*)(::PVOID, ::NPCCrowd::AI::PathGraphSplineLocatorComponent*))((::PBYTE)hIl2Cpp + NPCCROWD_AI_PATHGRAPHCROSSINGPOINTCOMPONENTRUNTIME___C__SETSWITCHOFF_B__9_3_OFFSET))(this, locator);
		}
	};
}
