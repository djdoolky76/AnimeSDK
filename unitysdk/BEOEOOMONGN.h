#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/AvatarSkinType.h"
#include "unitysdk/System/Object.h"
namespace RPG::AvatarSystem { class AvatarSkin; }
namespace System::Collections::Generic { template <typename T1, typename T2> class IReadOnlyDictionary_2; }
namespace System::Collections::Generic { template <typename T> class IReadOnlyList_1; }

#define BEOEOOMONGN_CCTOR_OFFSET UNITYSDK_OFFSET(0xB15B1A0)
#define BEOEOOMONGN_CTOR_OFFSET UNITYSDK_OFFSET(0xB15B0F0)
#define BEOEOOMONGN_GET_DRESSEDSKIN_OFFSET UNITYSDK_OFFSET(0xB15B190)
#define BEOEOOMONGN_GET_SKINIDS_OFFSET UNITYSDK_OFFSET(0xB15B100)

	class BEOEOOMONGN : public ::System::Object
	{
	public:
		::RPG::AvatarSystem::AvatarSkin* _DressedSkin_k__BackingField; // 0x10
		static ::System::Collections::Generic::IReadOnlyDictionary_2<::RPG::GameCore::AvatarSkinType, ::System::Collections::Generic::IReadOnlyList_1<::System::UInt32>*>** StaticGet_KHBPHNJPCMM()
		{
			return (::System::Collections::Generic::IReadOnlyDictionary_2<::RPG::GameCore::AvatarSkinType, ::System::Collections::Generic::IReadOnlyList_1<::System::UInt32>*>**)UnitySDK::FromName("", "BEOEOOMONGN")->GetStaticField(0x6E330);
		}

		::System::Void _ctor(::RPG::AvatarSystem::AvatarSkin* a1)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::AvatarSystem::AvatarSkin*))((::PBYTE)hIl2Cpp + BEOEOOMONGN_CTOR_OFFSET))(this, a1);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + BEOEOOMONGN_CCTOR_OFFSET))();
		}

		::System::Collections::Generic::IReadOnlyDictionary_2<::RPG::GameCore::AvatarSkinType, ::System::Collections::Generic::IReadOnlyList_1<::System::UInt32>*>* get_SkinIDs()
		{
			return ((::System::Collections::Generic::IReadOnlyDictionary_2<::RPG::GameCore::AvatarSkinType, ::System::Collections::Generic::IReadOnlyList_1<::System::UInt32>*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + BEOEOOMONGN_GET_SKINIDS_OFFSET))(this);
		}

		::RPG::AvatarSystem::AvatarSkin* get_DressedSkin()
		{
			return ((::RPG::AvatarSystem::AvatarSkin*(*)(::PVOID))((::PBYTE)hIl2Cpp + BEOEOOMONGN_GET_DRESSEDSKIN_OFFSET))(this);
		}

	};
