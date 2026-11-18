#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class COCJHGGDBCA;
class GIGFDLPMNND;
namespace System { template <typename T1, typename T2> class Action_2; }
namespace System { template <typename T> class Action_1; }

#define NPCCROWD_LOD_NPCCROWDLODSUBSYSTEM___C__CCTOR_OFFSET UNITYSDK_OFFSET(0xFD2F6A0)
#define NPCCROWD_LOD_NPCCROWDLODSUBSYSTEM___C__CTOR_OFFSET UNITYSDK_OFFSET(0xFD2F6E0)
#define NPCCROWD_LOD_NPCCROWDLODSUBSYSTEM___C__REALPOSTLATEUPDATELEGACY_B__34_0_OFFSET UNITYSDK_OFFSET(0xFD2F750)
#define NPCCROWD_LOD_NPCCROWDLODSUBSYSTEM___C__REALPOSTLATEUPDATE_B__35_0_OFFSET UNITYSDK_OFFSET(0xFD2FDB0)
#define NPCCROWD_LOD_NPCCROWDLODSUBSYSTEM___C__UPDATENPCLODLEGACY_B__29_0_OFFSET UNITYSDK_OFFSET(0xFD2F6F0)
#define NPCCROWD_LOD_NPCCROWDLODSUBSYSTEM___C__UPDATERENDERERVISIBILITYBATCH_B__36_0_OFFSET UNITYSDK_OFFSET(0xFD30290)

namespace NPCCrowd::Lod
{
	inline static constexpr unsigned int NPCCrowdLodSubSystem___c_TypeDefinitionIndex = 84520;

	class NPCCrowdLodSubSystem___c : public ::System::Object
	{
	public:
		static ::System::Action_2<::COCJHGGDBCA*, ::GIGFDLPMNND*>** StaticGet___9__35_0()
		{
			return (::System::Action_2<::COCJHGGDBCA*, ::GIGFDLPMNND*>**)Il2CppClass::FromTypeDefinitionIndex(NPCCrowdLodSubSystem___c_TypeDefinitionIndex)->GetStaticField(0x35F40);
		}
		static ::System::Action_1<::COCJHGGDBCA*>** StaticGet___9__29_0()
		{
			return (::System::Action_1<::COCJHGGDBCA*>**)Il2CppClass::FromTypeDefinitionIndex(NPCCrowdLodSubSystem___c_TypeDefinitionIndex)->GetStaticField(0x35F48);
		}
		static ::System::Action_1<::COCJHGGDBCA*>** StaticGet___9__36_0()
		{
			return (::System::Action_1<::COCJHGGDBCA*>**)Il2CppClass::FromTypeDefinitionIndex(NPCCrowdLodSubSystem___c_TypeDefinitionIndex)->GetStaticField(0x35F50);
		}
		static ::System::Action_1<::COCJHGGDBCA*>** StaticGet___9__34_0()
		{
			return (::System::Action_1<::COCJHGGDBCA*>**)Il2CppClass::FromTypeDefinitionIndex(NPCCrowdLodSubSystem___c_TypeDefinitionIndex)->GetStaticField(0x35F58);
		}
		static ::System::Object** StaticGet___9()
		{
			return (::System::Object**)Il2CppClass::FromTypeDefinitionIndex(NPCCrowdLodSubSystem___c_TypeDefinitionIndex)->GetStaticField(0x35F60);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + NPCCROWD_LOD_NPCCROWDLODSUBSYSTEM___C__CCTOR_OFFSET))();
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + NPCCROWD_LOD_NPCCROWDLODSUBSYSTEM___C__CTOR_OFFSET))(this);
		}

		::System::Void _UpdateNPCLODLegacy_b__29_0(::COCJHGGDBCA* npcComp)
		{
			return ((::System::Void(*)(::PVOID, ::COCJHGGDBCA*))((::PBYTE)hIl2Cpp + NPCCROWD_LOD_NPCCROWDLODSUBSYSTEM___C__UPDATENPCLODLEGACY_B__29_0_OFFSET))(this, npcComp);
		}

		::System::Void _RealPostLateUpdateLegacy_b__34_0(::COCJHGGDBCA* npcComp)
		{
			return ((::System::Void(*)(::PVOID, ::COCJHGGDBCA*))((::PBYTE)hIl2Cpp + NPCCROWD_LOD_NPCCROWDLODSUBSYSTEM___C__REALPOSTLATEUPDATELEGACY_B__34_0_OFFSET))(this, npcComp);
		}

		::System::Void _RealPostLateUpdate_b__35_0(::COCJHGGDBCA* npcComp, ::GIGFDLPMNND* materialComponent)
		{
			return ((::System::Void(*)(::PVOID, ::COCJHGGDBCA*, ::GIGFDLPMNND*))((::PBYTE)hIl2Cpp + NPCCROWD_LOD_NPCCROWDLODSUBSYSTEM___C__REALPOSTLATEUPDATE_B__35_0_OFFSET))(this, npcComp, materialComponent);
		}

		::System::Void _UpdateRendererVisibilityBatch_b__36_0(::COCJHGGDBCA* npcComp)
		{
			return ((::System::Void(*)(::PVOID, ::COCJHGGDBCA*))((::PBYTE)hIl2Cpp + NPCCROWD_LOD_NPCCROWDLODSUBSYSTEM___C__UPDATERENDERERVISIBILITYBATCH_B__36_0_OFFSET))(this, npcComp);
		}
	};
}
