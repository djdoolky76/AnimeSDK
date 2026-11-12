#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/NPCBodySize.h"
#include "unitysdk/System/Object.h"
namespace RPG::GameCore { class CharacterLodConfig; }
namespace RPG::GameCore { class CharacterLodMaterialPropertyList; }
namespace RPG::GameCore { class EntityLodLoadingArtData; }
namespace RPG::GameCore { class EntityRuntimeReplaceArtPrefabConfig; }
namespace System { class String; }

#define FCCGIAKHJMH_CCTOR_OFFSET UNITYSDK_OFFSET(0x165C8790)
#define FCCGIAKHJMH_CKGMAJFCFLB_OFFSET UNITYSDK_OFFSET(0x165C8590)
#define FCCGIAKHJMH_FIMOFHJMJCB_OFFSET UNITYSDK_OFFSET(0x165C8070)
#define FCCGIAKHJMH_NGIEBCMOPKM_OFFSET UNITYSDK_OFFSET(0x165C8310)
#define FCCGIAKHJMH_ODPAPLIIDDD_OFFSET UNITYSDK_OFFSET(0x165C7CB0)
#define FCCGIAKHJMH_PHFIONFIMEH_OFFSET UNITYSDK_OFFSET(0x165C7D70)

inline static constexpr unsigned int FCCGIAKHJMH_TypeDefinitionIndex = 71717;

	class FCCGIAKHJMH : public ::System::Object
	{
	public:
		static ::RPG::GameCore::CharacterLodConfig** StaticGet_GBPIBEILGLJ()
		{
			return (::RPG::GameCore::CharacterLodConfig**)UnitySDK::FromName("", "FCCGIAKHJMH")->GetStaticField(0x488C0);
		}

		static ::RPG::GameCore::EntityRuntimeReplaceArtPrefabConfig** StaticGet_PJMJBNAGAAP()
		{
			return (::RPG::GameCore::EntityRuntimeReplaceArtPrefabConfig**)UnitySDK::FromName("", "FCCGIAKHJMH")->GetStaticField(0x488C8);
		}

		static ::System::Int32* StaticGet_GGKBDIMDCEL()
		{
			return (::System::Int32*)UnitySDK::FromName("", "FCCGIAKHJMH")->GetStaticField(0xEF20);
		}

		// static const ::System::String* PLNHFAKJEKH; // 0x0
		// static const ::System::String* AADFDNPPDHK; // 0x0
		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + FCCGIAKHJMH_CCTOR_OFFSET))();
		}

		static ::System::Void ODPAPLIIDDD()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + FCCGIAKHJMH_ODPAPLIIDDD_OFFSET))();
		}

		static ::System::String* PHFIONFIMEH(::System::String* a1)
		{
			return ((::System::String*(*)(::System::String*))((::PBYTE)hIl2Cpp + FCCGIAKHJMH_PHFIONFIMEH_OFFSET))(a1);
		}

		static ::Il2CppArray<::System::String*>* FIMOFHJMJCB(::System::String* a1)
		{
			return ((::Il2CppArray<::System::String*>*(*)(::System::String*))((::PBYTE)hIl2Cpp + FCCGIAKHJMH_FIMOFHJMJCB_OFFSET))(a1);
		}

		static ::RPG::GameCore::CharacterLodMaterialPropertyList* NGIEBCMOPKM(::RPG::GameCore::NPCBodySize a1)
		{
			return ((::RPG::GameCore::CharacterLodMaterialPropertyList*(*)(::RPG::GameCore::NPCBodySize))((::PBYTE)hIl2Cpp + FCCGIAKHJMH_NGIEBCMOPKM_OFFSET))(a1);
		}

		static ::RPG::GameCore::EntityLodLoadingArtData* CKGMAJFCFLB(::System::Int32 a1)
		{
			return ((::RPG::GameCore::EntityLodLoadingArtData*(*)(::System::Int32))((::PBYTE)hIl2Cpp + FCCGIAKHJMH_CKGMAJFCFLB_OFFSET))(a1);
		}

	};
