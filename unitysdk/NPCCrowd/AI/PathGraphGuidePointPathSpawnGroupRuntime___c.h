#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace NPCCrowd::AI { class PathGraphFeaturePointRuntime; }
namespace NPCCrowd::AI { class PathGraphSpawnPointComponentRuntime; }
namespace System { template <typename T1, typename T2> class Func_2; }

#define NPCCROWD_AI_PATHGRAPHGUIDEPOINTPATHSPAWNGROUPRUNTIME___C__CCTOR_OFFSET UNITYSDK_OFFSET(0x105D3760)
#define NPCCROWD_AI_PATHGRAPHGUIDEPOINTPATHSPAWNGROUPRUNTIME___C__CTOR_OFFSET UNITYSDK_OFFSET(0x105D37A0)
#define NPCCROWD_AI_PATHGRAPHGUIDEPOINTPATHSPAWNGROUPRUNTIME___C__INIT_B__7_2_OFFSET UNITYSDK_OFFSET(0x105D37B0)

namespace NPCCrowd::AI
{
	inline static constexpr unsigned int PathGraphGuidePointPathSpawnGroupRuntime___c_TypeDefinitionIndex = 62767;

	class PathGraphGuidePointPathSpawnGroupRuntime___c : public ::System::Object
	{
	public:
		static ::System::Func_2<::NPCCrowd::AI::PathGraphFeaturePointRuntime*, ::NPCCrowd::AI::PathGraphSpawnPointComponentRuntime*>** StaticGet___9__7_2()
		{
			return (::System::Func_2<::NPCCrowd::AI::PathGraphFeaturePointRuntime*, ::NPCCrowd::AI::PathGraphSpawnPointComponentRuntime*>**)Il2CppClass::FromTypeDefinitionIndex(PathGraphGuidePointPathSpawnGroupRuntime___c_TypeDefinitionIndex)->GetStaticField(0x4AFD0);
		}
		static ::System::Object** StaticGet___9()
		{
			return (::System::Object**)Il2CppClass::FromTypeDefinitionIndex(PathGraphGuidePointPathSpawnGroupRuntime___c_TypeDefinitionIndex)->GetStaticField(0x4AFD8);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + NPCCROWD_AI_PATHGRAPHGUIDEPOINTPATHSPAWNGROUPRUNTIME___C__CCTOR_OFFSET))();
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + NPCCROWD_AI_PATHGRAPHGUIDEPOINTPATHSPAWNGROUPRUNTIME___C__CTOR_OFFSET))(this);
		}

		::NPCCrowd::AI::PathGraphSpawnPointComponentRuntime* _Init_b__7_2(::NPCCrowd::AI::PathGraphFeaturePointRuntime* pointRuntime)
		{
			return ((::NPCCrowd::AI::PathGraphSpawnPointComponentRuntime*(*)(::PVOID, ::NPCCrowd::AI::PathGraphFeaturePointRuntime*))((::PBYTE)hIl2Cpp + NPCCROWD_AI_PATHGRAPHGUIDEPOINTPATHSPAWNGROUPRUNTIME___C__INIT_B__7_2_OFFSET))(this, pointRuntime);
		}
	};
}
