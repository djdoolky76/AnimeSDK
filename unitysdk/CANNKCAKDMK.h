#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/KKEFMOKEJIF.h"
#include "unitysdk/RPG/MVector3.h"
class COKICPIHPAC;
namespace RPG::Client { class AdditiveHitWeaponAttachmentHandler; }
namespace RPG::Client { class AvatarAimController; }
namespace RPG::Client { class AvatarLookAtController; }
namespace RPG::Client { class FABRIK_WeaponControl; }
namespace RPG::Client { class LookAtIK; }
namespace RPG::GameCore { class GameEntity; }
namespace RootMotion::FinalIK { class GrounderIK; }
namespace RootMotion::FinalIK { class LimbIK; }

#define CANNKCAKDMK_CTOR_OFFSET UNITYSDK_OFFSET(0xC494FC0)
#define CANNKCAKDMK_DAMDMJJKLON_OFFSET UNITYSDK_OFFSET(0xC493A20)
#define CANNKCAKDMK_DFFCHNLKELO_OFFSET UNITYSDK_OFFSET(0xC494390)
#define CANNKCAKDMK_GET_AIMCONTROLLER_OFFSET UNITYSDK_OFFSET(0xC494F20)
#define CANNKCAKDMK_GET_GROUNDERIK_OFFSET UNITYSDK_OFFSET(0xC494EE0)
#define CANNKCAKDMK_GET_LIMBIKS_OFFSET UNITYSDK_OFFSET(0xC494F00)
#define CANNKCAKDMK_GET_LOOKATCONTROLLER_OFFSET UNITYSDK_OFFSET(0xC494F40)
#define CANNKCAKDMK_GET_LOOKATIK_OFFSET UNITYSDK_OFFSET(0xC494F60)
#define CANNKCAKDMK_GET_WEAPONATTACHMENTHANDLER_OFFSET UNITYSDK_OFFSET(0xC494F80)
#define CANNKCAKDMK_GET_WEAPONCONTROLLER_OFFSET UNITYSDK_OFFSET(0xC494FA0)
#define CANNKCAKDMK_IBLMJDIOEMP_OFFSET UNITYSDK_OFFSET(0xC494DF0)
#define CANNKCAKDMK_JIENENJGBBI_OFFSET UNITYSDK_OFFSET(0xC4946F0)
#define CANNKCAKDMK_NLBNJGKAMII_OFFSET UNITYSDK_OFFSET(0xC493AD0)
#define CANNKCAKDMK_OMHAIMPHDHH_OFFSET UNITYSDK_OFFSET(0xC494E70)
#define CANNKCAKDMK_ONAFTERMODELARTLOAD_OFFSET UNITYSDK_OFFSET(0xC493B70)
#define CANNKCAKDMK_ONBEFOREMODELARTUNLOAD_OFFSET UNITYSDK_OFFSET(0xC494250)
#define CANNKCAKDMK_SET_AIMCONTROLLER_OFFSET UNITYSDK_OFFSET(0xC494F30)
#define CANNKCAKDMK_SET_GROUNDERIK_OFFSET UNITYSDK_OFFSET(0xC494EF0)
#define CANNKCAKDMK_SET_LIMBIKS_OFFSET UNITYSDK_OFFSET(0xC494F10)
#define CANNKCAKDMK_SET_LOOKATCONTROLLER_OFFSET UNITYSDK_OFFSET(0xC494F50)
#define CANNKCAKDMK_SET_LOOKATIK_OFFSET UNITYSDK_OFFSET(0xC494F70)
#define CANNKCAKDMK_SET_WEAPONATTACHMENTHANDLER_OFFSET UNITYSDK_OFFSET(0xC494F90)
#define CANNKCAKDMK_SET_WEAPONCONTROLLER_OFFSET UNITYSDK_OFFSET(0xC494FB0)

	class CANNKCAKDMK : public ::KKEFMOKEJIF
	{
	public:
		::RPG::Client::AvatarLookAtController* _LookAtController_k__BackingField; // 0x18
		::RPG::Client::AvatarAimController* _AimController_k__BackingField; // 0x20
		::Il2CppArray<::RootMotion::FinalIK::LimbIK*>* _LimbIKs_k__BackingField; // 0x28
		::RPG::Client::FABRIK_WeaponControl* _WeaponController_k__BackingField; // 0x30
		::RPG::Client::AdditiveHitWeaponAttachmentHandler* _WeaponAttachmentHandler_k__BackingField; // 0x38
		::RPG::Client::LookAtIK* _LookAtIK_k__BackingField; // 0x40
		::Il2CppArray<::COKICPIHPAC*>* OGDFEPGPPCI; // 0x48
		::RootMotion::FinalIK::GrounderIK* _GrounderIK_k__BackingField; // 0x50
		::RPG::MVector3 FGPABJLGHEB; // 0x58
		::RPG::MVector3 KJGLNGABFDD; // 0x64
		::System::Boolean KANKADMLCMB; // 0x70
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CANNKCAKDMK_CTOR_OFFSET))(this);
		}

		::System::Void DAMDMJJKLON()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CANNKCAKDMK_DAMDMJJKLON_OFFSET))(this);
		}

		::System::Void NLBNJGKAMII()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CANNKCAKDMK_NLBNJGKAMII_OFFSET))(this);
		}

		::System::Void OnAfterModelArtLoad(::RPG::GameCore::GameEntity* a1)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::GameEntity*))((::PBYTE)hIl2Cpp + CANNKCAKDMK_ONAFTERMODELARTLOAD_OFFSET))(this, a1);
		}

		::System::Void OnBeforeModelArtUnload(::RPG::GameCore::GameEntity* a1)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::GameEntity*))((::PBYTE)hIl2Cpp + CANNKCAKDMK_ONBEFOREMODELARTUNLOAD_OFFSET))(this, a1);
		}

		::System::Void DFFCHNLKELO(::System::Single a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + CANNKCAKDMK_DFFCHNLKELO_OFFSET))(this, a1);
		}

		::System::Void JIENENJGBBI(::RPG::MVector3 a1, ::System::Boolean a2, ::System::Boolean a3, ::System::Boolean a4, ::System::Boolean a5)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::MVector3, ::System::Boolean, ::System::Boolean, ::System::Boolean, ::System::Boolean))((::PBYTE)hIl2Cpp + CANNKCAKDMK_JIENENJGBBI_OFFSET))(this, a1, a2, a3, a4, a5);
		}

		::System::Void IBLMJDIOEMP(::System::Boolean a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + CANNKCAKDMK_IBLMJDIOEMP_OFFSET))(this, a1);
		}

		::System::Void OMHAIMPHDHH()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CANNKCAKDMK_OMHAIMPHDHH_OFFSET))(this);
		}

		::RootMotion::FinalIK::GrounderIK* get_GrounderIK()
		{
			return ((::RootMotion::FinalIK::GrounderIK*(*)(::PVOID))((::PBYTE)hIl2Cpp + CANNKCAKDMK_GET_GROUNDERIK_OFFSET))(this);
		}

		::System::Void set_GrounderIK(::RootMotion::FinalIK::GrounderIK* a1)
		{
			return ((::System::Void(*)(::PVOID, ::RootMotion::FinalIK::GrounderIK*))((::PBYTE)hIl2Cpp + CANNKCAKDMK_SET_GROUNDERIK_OFFSET))(this, a1);
		}

		::Il2CppArray<::RootMotion::FinalIK::LimbIK*>* get_LimbIKs()
		{
			return ((::Il2CppArray<::RootMotion::FinalIK::LimbIK*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + CANNKCAKDMK_GET_LIMBIKS_OFFSET))(this);
		}

		::System::Void set_LimbIKs(::Il2CppArray<::RootMotion::FinalIK::LimbIK*>* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Il2CppArray<::RootMotion::FinalIK::LimbIK*>*))((::PBYTE)hIl2Cpp + CANNKCAKDMK_SET_LIMBIKS_OFFSET))(this, a1);
		}

		::RPG::Client::AvatarAimController* get_AimController()
		{
			return ((::RPG::Client::AvatarAimController*(*)(::PVOID))((::PBYTE)hIl2Cpp + CANNKCAKDMK_GET_AIMCONTROLLER_OFFSET))(this);
		}

		::System::Void set_AimController(::RPG::Client::AvatarAimController* a1)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::AvatarAimController*))((::PBYTE)hIl2Cpp + CANNKCAKDMK_SET_AIMCONTROLLER_OFFSET))(this, a1);
		}

		::RPG::Client::AvatarLookAtController* get_LookAtController()
		{
			return ((::RPG::Client::AvatarLookAtController*(*)(::PVOID))((::PBYTE)hIl2Cpp + CANNKCAKDMK_GET_LOOKATCONTROLLER_OFFSET))(this);
		}

		::System::Void set_LookAtController(::RPG::Client::AvatarLookAtController* a1)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::AvatarLookAtController*))((::PBYTE)hIl2Cpp + CANNKCAKDMK_SET_LOOKATCONTROLLER_OFFSET))(this, a1);
		}

		::RPG::Client::LookAtIK* get_LookAtIK()
		{
			return ((::RPG::Client::LookAtIK*(*)(::PVOID))((::PBYTE)hIl2Cpp + CANNKCAKDMK_GET_LOOKATIK_OFFSET))(this);
		}

		::System::Void set_LookAtIK(::RPG::Client::LookAtIK* a1)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::LookAtIK*))((::PBYTE)hIl2Cpp + CANNKCAKDMK_SET_LOOKATIK_OFFSET))(this, a1);
		}

		::RPG::Client::AdditiveHitWeaponAttachmentHandler* get_WeaponAttachmentHandler()
		{
			return ((::RPG::Client::AdditiveHitWeaponAttachmentHandler*(*)(::PVOID))((::PBYTE)hIl2Cpp + CANNKCAKDMK_GET_WEAPONATTACHMENTHANDLER_OFFSET))(this);
		}

		::System::Void set_WeaponAttachmentHandler(::RPG::Client::AdditiveHitWeaponAttachmentHandler* a1)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::AdditiveHitWeaponAttachmentHandler*))((::PBYTE)hIl2Cpp + CANNKCAKDMK_SET_WEAPONATTACHMENTHANDLER_OFFSET))(this, a1);
		}

		::RPG::Client::FABRIK_WeaponControl* get_WeaponController()
		{
			return ((::RPG::Client::FABRIK_WeaponControl*(*)(::PVOID))((::PBYTE)hIl2Cpp + CANNKCAKDMK_GET_WEAPONCONTROLLER_OFFSET))(this);
		}

		::System::Void set_WeaponController(::RPG::Client::FABRIK_WeaponControl* a1)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::FABRIK_WeaponControl*))((::PBYTE)hIl2Cpp + CANNKCAKDMK_SET_WEAPONCONTROLLER_OFFSET))(this, a1);
		}

	};
