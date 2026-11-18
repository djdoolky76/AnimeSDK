#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class COCJHGGDBCA;
namespace System { template <typename T> class Action_1; }

#define NPCCROWD_LOD_NPCCROWDVISIBLESUBSYSTEM___C__CCTOR_OFFSET UNITYSDK_OFFSET(0xE0D3960)
#define NPCCROWD_LOD_NPCCROWDVISIBLESUBSYSTEM___C__CTOR_OFFSET UNITYSDK_OFFSET(0xE0D39A0)
#define NPCCROWD_LOD_NPCCROWDVISIBLESUBSYSTEM___C__PREPARERENDERERVISIBILITYQUERY_B__19_0_OFFSET UNITYSDK_OFFSET(0xE0D39B0)

namespace NPCCrowd::Lod
{
	inline static constexpr unsigned int NPCCrowdVisibleSubSystem___c_TypeDefinitionIndex = 92535;

	class NPCCrowdVisibleSubSystem___c : public ::System::Object
	{
	public:
		static ::System::Object** StaticGet___9()
		{
			return (::System::Object**)Il2CppClass::FromTypeDefinitionIndex(NPCCrowdVisibleSubSystem___c_TypeDefinitionIndex)->GetStaticField(0x45790);
		}
		static ::System::Action_1<::COCJHGGDBCA*>** StaticGet___9__19_0()
		{
			return (::System::Action_1<::COCJHGGDBCA*>**)Il2CppClass::FromTypeDefinitionIndex(NPCCrowdVisibleSubSystem___c_TypeDefinitionIndex)->GetStaticField(0x45798);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + NPCCROWD_LOD_NPCCROWDVISIBLESUBSYSTEM___C__CCTOR_OFFSET))();
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + NPCCROWD_LOD_NPCCROWDVISIBLESUBSYSTEM___C__CTOR_OFFSET))(this);
		}

		::System::Void _PrepareRendererVisibilityQuery_b__19_0(::COCJHGGDBCA* npcComp)
		{
			return ((::System::Void(*)(::PVOID, ::COCJHGGDBCA*))((::PBYTE)hIl2Cpp + NPCCROWD_LOD_NPCCROWDVISIBLESUBSYSTEM___C__PREPARERENDERERVISIBILITYQUERY_B__19_0_OFFSET))(this, npcComp);
		}
	};
}
