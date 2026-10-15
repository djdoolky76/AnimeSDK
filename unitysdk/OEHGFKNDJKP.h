#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
namespace RPG::AvatarSystem { class IAvatar; }

#define OEHGFKNDJKP_CTOR_OFFSET UNITYSDK_OFFSET(0xBE2DD10)
#define OEHGFKNDJKP_DLGABDBOFEN_OFFSET UNITYSDK_OFFSET(0xBE2DEE0)
#define OEHGFKNDJKP_GET_AVATAR_OFFSET UNITYSDK_OFFSET(0xBE2DF40)
#define OEHGFKNDJKP_GET_ISEQUIPMENTFULLYTRAINED_OFFSET UNITYSDK_OFFSET(0xBE2DF60)
#define OEHGFKNDJKP_GET_ISLEVELFULLYTRAINED_OFFSET UNITYSDK_OFFSET(0xBE2DF50)
#define OEHGFKNDJKP_GET_ISRELICFULLYTRAINED_OFFSET UNITYSDK_OFFSET(0xBE2DF80)
#define OEHGFKNDJKP_GET_ISSKILLTREEFULLYTRAINED_OFFSET UNITYSDK_OFFSET(0xBE2DF70)
#define OEHGFKNDJKP_JMODOHBMOHL_OFFSET UNITYSDK_OFFSET(0xBE2DE70)
#define OEHGFKNDJKP_PCLNFBFNCON_OFFSET UNITYSDK_OFFSET(0xBE2DE00)
#define OEHGFKNDJKP_PJKPMDOHPMB_OFFSET UNITYSDK_OFFSET(0xBE2DD90)

	class OEHGFKNDJKP : public ::System::Object
	{
	public:
		::RPG::AvatarSystem::IAvatar* _Avatar_k__BackingField; // 0x10
		::System::Boolean _IsLevelFullyTrained_k__BackingField; // 0x18
		::System::Boolean _IsSkillTreeFullyTrained_k__BackingField; // 0x19
		::System::Boolean _IsEquipmentFullyTrained_k__BackingField; // 0x1A
		::System::Boolean _IsRelicFullyTrained_k__BackingField; // 0x1B
		::System::Void _ctor(::RPG::AvatarSystem::IAvatar* a1)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::AvatarSystem::IAvatar*))((::PBYTE)hIl2Cpp + OEHGFKNDJKP_CTOR_OFFSET))(this, a1);
		}

		::System::Boolean PJKPMDOHPMB()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + OEHGFKNDJKP_PJKPMDOHPMB_OFFSET))(this);
		}

		::System::Boolean PCLNFBFNCON()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + OEHGFKNDJKP_PCLNFBFNCON_OFFSET))(this);
		}

		::System::Boolean JMODOHBMOHL()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + OEHGFKNDJKP_JMODOHBMOHL_OFFSET))(this);
		}

		::System::Boolean DLGABDBOFEN()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + OEHGFKNDJKP_DLGABDBOFEN_OFFSET))(this);
		}

		::RPG::AvatarSystem::IAvatar* get_Avatar()
		{
			return ((::RPG::AvatarSystem::IAvatar*(*)(::PVOID))((::PBYTE)hIl2Cpp + OEHGFKNDJKP_GET_AVATAR_OFFSET))(this);
		}

		::System::Boolean get_IsLevelFullyTrained()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + OEHGFKNDJKP_GET_ISLEVELFULLYTRAINED_OFFSET))(this);
		}

		::System::Boolean get_IsEquipmentFullyTrained()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + OEHGFKNDJKP_GET_ISEQUIPMENTFULLYTRAINED_OFFSET))(this);
		}

		::System::Boolean get_IsSkillTreeFullyTrained()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + OEHGFKNDJKP_GET_ISSKILLTREEFULLYTRAINED_OFFSET))(this);
		}

		::System::Boolean get_IsRelicFullyTrained()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + OEHGFKNDJKP_GET_ISRELICFULLYTRAINED_OFFSET))(this);
		}

	};
