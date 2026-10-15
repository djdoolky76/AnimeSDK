#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/MechCraft/MechCraftPartType.h"
namespace RPG::GameCore { class CharacterOutfitPartConfig; }
namespace System { class Object; }
namespace System { class String; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define FGNIPLCEDPE_GET_EFFECTPARAMS_OFFSET UNITYSDK_OFFSET(0x94F0)
#define FGNIPLCEDPE_GET_MATERIALPATHS_OFFSET UNITYSDK_OFFSET(0x94D0)
#define FGNIPLCEDPE_GET_MESHCONFIG_OFFSET UNITYSDK_OFFSET(0x1D40)
#define FGNIPLCEDPE_GET_PARTTYPE_OFFSET UNITYSDK_OFFSET(0xE620)
#define FGNIPLCEDPE_SET_EFFECTPARAMS_OFFSET UNITYSDK_OFFSET(0x9500)
#define FGNIPLCEDPE_SET_MATERIALPATHS_OFFSET UNITYSDK_OFFSET(0x94E0)
#define FGNIPLCEDPE_SET_MESHCONFIG_OFFSET UNITYSDK_OFFSET(0x94C0)
#define FGNIPLCEDPE_SET_PARTTYPE_OFFSET UNITYSDK_OFFSET(0xAF40)

	struct alignas(8) FGNIPLCEDPE
	{
		::RPG::Client::MechCraft::MechCraftPartType _PartType_k__BackingField; // 0x10
		::System::Byte _padding0[0x4];
		::RPG::GameCore::CharacterOutfitPartConfig* _MeshConfig_k__BackingField; // 0x18
		::System::Collections::Generic::List_1<::System::String*>* _MaterialPaths_k__BackingField; // 0x20
		::System::Collections::Generic::List_1<::System::Object*>* _EffectParams_k__BackingField; // 0x28
		::RPG::Client::MechCraft::MechCraftPartType get_PartType()
		{
			return ((::RPG::Client::MechCraft::MechCraftPartType(*)(::PVOID))((::PBYTE)hIl2Cpp + FGNIPLCEDPE_GET_PARTTYPE_OFFSET))(this);
		}

		::System::Void set_PartType(::RPG::Client::MechCraft::MechCraftPartType a1)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::MechCraft::MechCraftPartType))((::PBYTE)hIl2Cpp + FGNIPLCEDPE_SET_PARTTYPE_OFFSET))(this, a1);
		}

		::RPG::GameCore::CharacterOutfitPartConfig* get_MeshConfig()
		{
			return ((::RPG::GameCore::CharacterOutfitPartConfig*(*)(::PVOID))((::PBYTE)hIl2Cpp + FGNIPLCEDPE_GET_MESHCONFIG_OFFSET))(this);
		}

		::System::Void set_MeshConfig(::RPG::GameCore::CharacterOutfitPartConfig* a1)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::CharacterOutfitPartConfig*))((::PBYTE)hIl2Cpp + FGNIPLCEDPE_SET_MESHCONFIG_OFFSET))(this, a1);
		}

		::System::Collections::Generic::List_1<::System::String*>* get_MaterialPaths()
		{
			return ((::System::Collections::Generic::List_1<::System::String*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + FGNIPLCEDPE_GET_MATERIALPATHS_OFFSET))(this);
		}

		::System::Void set_MaterialPaths(::System::Collections::Generic::List_1<::System::String*>* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Collections::Generic::List_1<::System::String*>*))((::PBYTE)hIl2Cpp + FGNIPLCEDPE_SET_MATERIALPATHS_OFFSET))(this, a1);
		}

		::System::Collections::Generic::List_1<::System::Object*>* get_EffectParams()
		{
			return ((::System::Collections::Generic::List_1<::System::Object*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + FGNIPLCEDPE_GET_EFFECTPARAMS_OFFSET))(this);
		}

		::System::Void set_EffectParams(::System::Collections::Generic::List_1<::System::Object*>* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Collections::Generic::List_1<::System::Object*>*))((::PBYTE)hIl2Cpp + FGNIPLCEDPE_SET_EFFECTPARAMS_OFFSET))(this, a1);
		}

	};
