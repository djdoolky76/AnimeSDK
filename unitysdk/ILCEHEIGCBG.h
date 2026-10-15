#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
namespace RPG::AvatarSystem { class IAvatar; }

#define ILCEHEIGCBG_CTOR_OFFSET UNITYSDK_OFFSET(0x164A7A90)
#define ILCEHEIGCBG_GET_AVATARS_OFFSET UNITYSDK_OFFSET(0x164A7A80)
#define ILCEHEIGCBG_GET_ROUTEID_OFFSET UNITYSDK_OFFSET(0x164A7A70)

inline static constexpr unsigned int ILCEHEIGCBG_TypeDefinitionIndex = 63850;

	class ILCEHEIGCBG : public ::System::Object
	{
	public:
		::Il2CppArray<::RPG::AvatarSystem::IAvatar*>* _Avatars_k__BackingField; // 0x10
		::System::UInt32 _RouteID_k__BackingField; // 0x18
		::System::Void _ctor(::System::UInt32 a1, ::Il2CppArray<::RPG::AvatarSystem::IAvatar*>* a2)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32, ::Il2CppArray<::RPG::AvatarSystem::IAvatar*>*))((::PBYTE)hIl2Cpp + ILCEHEIGCBG_CTOR_OFFSET))(this, a1, a2);
		}

		::System::UInt32 get_RouteID()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + ILCEHEIGCBG_GET_ROUTEID_OFFSET))(this);
		}

		::Il2CppArray<::RPG::AvatarSystem::IAvatar*>* get_Avatars()
		{
			return ((::Il2CppArray<::RPG::AvatarSystem::IAvatar*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + ILCEHEIGCBG_GET_AVATARS_OFFSET))(this);
		}

	};
