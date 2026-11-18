#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class NPCAccesoryItemOverrideTable;
class NPCPrefabPartOverrideTable;
class RandomNPCPrefabsLibrary;
namespace NPCCrowd { class NPCModuleAvatarAssetsPacked; }
namespace System { template <typename T> class Action_1; }

#define NPCCROWD_NPCCROWDMODULEGLOBALCONFIGUTILS___C__CCTOR_OFFSET UNITYSDK_OFFSET(0x1003F710)
#define NPCCROWD_NPCCROWDMODULEGLOBALCONFIGUTILS___C__CTOR_OFFSET UNITYSDK_OFFSET(0x1003F750)
#define NPCCROWD_NPCCROWDMODULEGLOBALCONFIGUTILS___C__LOADGLOBALCONFIG_B__10_0_OFFSET UNITYSDK_OFFSET(0x1003F760)
#define NPCCROWD_NPCCROWDMODULEGLOBALCONFIGUTILS___C__LOADGLOBALCONFIG_B__10_1_OFFSET UNITYSDK_OFFSET(0x1003F900)
#define NPCCROWD_NPCCROWDMODULEGLOBALCONFIGUTILS___C__LOADGLOBALCONFIG_B__10_2_OFFSET UNITYSDK_OFFSET(0x1003FAA0)
#define NPCCROWD_NPCCROWDMODULEGLOBALCONFIGUTILS___C__LOADGLOBALCONFIG_B__10_3_OFFSET UNITYSDK_OFFSET(0x10044DF0)

namespace NPCCrowd
{
	inline static constexpr unsigned int NPCCrowdModuleGlobalConfigUtils___c_TypeDefinitionIndex = 77349;

	class NPCCrowdModuleGlobalConfigUtils___c : public ::System::Object
	{
	public:
		static ::System::Action_1<::NPCPrefabPartOverrideTable*>** StaticGet___9__10_0()
		{
			return (::System::Action_1<::NPCPrefabPartOverrideTable*>**)Il2CppClass::FromTypeDefinitionIndex(NPCCrowdModuleGlobalConfigUtils___c_TypeDefinitionIndex)->GetStaticField(0x3CC00);
		}
		static ::System::Action_1<::RandomNPCPrefabsLibrary*>** StaticGet___9__10_2()
		{
			return (::System::Action_1<::RandomNPCPrefabsLibrary*>**)Il2CppClass::FromTypeDefinitionIndex(NPCCrowdModuleGlobalConfigUtils___c_TypeDefinitionIndex)->GetStaticField(0x3CC08);
		}
		static ::System::Action_1<::NPCCrowd::NPCModuleAvatarAssetsPacked*>** StaticGet___9__10_3()
		{
			return (::System::Action_1<::NPCCrowd::NPCModuleAvatarAssetsPacked*>**)Il2CppClass::FromTypeDefinitionIndex(NPCCrowdModuleGlobalConfigUtils___c_TypeDefinitionIndex)->GetStaticField(0x3CC10);
		}
		static ::System::Action_1<::NPCAccesoryItemOverrideTable*>** StaticGet___9__10_1()
		{
			return (::System::Action_1<::NPCAccesoryItemOverrideTable*>**)Il2CppClass::FromTypeDefinitionIndex(NPCCrowdModuleGlobalConfigUtils___c_TypeDefinitionIndex)->GetStaticField(0x3CC18);
		}
		static ::System::Object** StaticGet___9()
		{
			return (::System::Object**)Il2CppClass::FromTypeDefinitionIndex(NPCCrowdModuleGlobalConfigUtils___c_TypeDefinitionIndex)->GetStaticField(0x3CC20);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + NPCCROWD_NPCCROWDMODULEGLOBALCONFIGUTILS___C__CCTOR_OFFSET))();
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + NPCCROWD_NPCCROWDMODULEGLOBALCONFIGUTILS___C__CTOR_OFFSET))(this);
		}

		::System::Void _LoadGlobalConfig_b__10_0(::NPCPrefabPartOverrideTable* partOverrideTable)
		{
			return ((::System::Void(*)(::PVOID, ::NPCPrefabPartOverrideTable*))((::PBYTE)hIl2Cpp + NPCCROWD_NPCCROWDMODULEGLOBALCONFIGUTILS___C__LOADGLOBALCONFIG_B__10_0_OFFSET))(this, partOverrideTable);
		}

		::System::Void _LoadGlobalConfig_b__10_1(::NPCAccesoryItemOverrideTable* accItemOverrideTable)
		{
			return ((::System::Void(*)(::PVOID, ::NPCAccesoryItemOverrideTable*))((::PBYTE)hIl2Cpp + NPCCROWD_NPCCROWDMODULEGLOBALCONFIGUTILS___C__LOADGLOBALCONFIG_B__10_1_OFFSET))(this, accItemOverrideTable);
		}

		::System::Void _LoadGlobalConfig_b__10_2(::RandomNPCPrefabsLibrary* library)
		{
			return ((::System::Void(*)(::PVOID, ::RandomNPCPrefabsLibrary*))((::PBYTE)hIl2Cpp + NPCCROWD_NPCCROWDMODULEGLOBALCONFIGUTILS___C__LOADGLOBALCONFIG_B__10_2_OFFSET))(this, library);
		}

		::System::Void _LoadGlobalConfig_b__10_3(::NPCCrowd::NPCModuleAvatarAssetsPacked* sceneAss)
		{
			return ((::System::Void(*)(::PVOID, ::NPCCrowd::NPCModuleAvatarAssetsPacked*))((::PBYTE)hIl2Cpp + NPCCROWD_NPCCROWDMODULEGLOBALCONFIGUTILS___C__LOADGLOBALCONFIG_B__10_3_OFFSET))(this, sceneAss);
		}
	};
}
