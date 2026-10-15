#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/FMPCODLIOLG.h"
#include "unitysdk/IGKFNIEJGLM.h"
class JFCNEFFCAMG;
class LEBBNIGFINP;
namespace RPG::GameCore { class AvatarDataComponent; }
namespace RPG::GameCore { class AvatarRowData; }
namespace RPG::GameCore { class BattleInstance; }
namespace RPG::GameCore { class GameEntity; }
namespace RPG::GameCore { class ICharacterSkillRowData; }
namespace System { class Object; }
namespace System { class String; }

#define MNJNHIAPNKD_CFPPPIMJMFH_OFFSET UNITYSDK_OFFSET(0xBA0ED50)
#define MNJNHIAPNKD_CTOR_OFFSET UNITYSDK_OFFSET(0xBA0FB00)
#define MNJNHIAPNKD_DFGLPGCNBKC_OFFSET UNITYSDK_OFFSET(0xBA0DC30)
#define MNJNHIAPNKD_DHHDFAAJMMC_OFFSET UNITYSDK_OFFSET(0xBA0D680)
#define MNJNHIAPNKD_DMBMGCGDMCE_OFFSET UNITYSDK_OFFSET(0xBA0F470)
#define MNJNHIAPNKD_EAAJKKOGGEE_OFFSET UNITYSDK_OFFSET(0xBA0F820)
#define MNJNHIAPNKD_ECOHEIAHIAO_OFFSET UNITYSDK_OFFSET(0xBA0D6F0)
#define MNJNHIAPNKD_EJPHKAJJCOG_OFFSET UNITYSDK_OFFSET(0xBA0F180)
#define MNJNHIAPNKD_HAGJAPDDPBC_OFFSET UNITYSDK_OFFSET(0xBA0F4C0)
#define MNJNHIAPNKD_HGNOGNMMLCL_OFFSET UNITYSDK_OFFSET(0xBA0F230)
#define MNJNHIAPNKD_JJJHEKJFMKJ_OFFSET UNITYSDK_OFFSET(0xBA0F690)
#define MNJNHIAPNKD_LDHOHEOALEL_OFFSET UNITYSDK_OFFSET(0xBA0F7D0)
#define MNJNHIAPNKD_LJBCDJNNBJH_OFFSET UNITYSDK_OFFSET(0xBA0D8D0)
#define MNJNHIAPNKD_MBFBIBPKMFO_1_OFFSET UNITYSDK_OFFSET(0xBA0E4C0)
#define MNJNHIAPNKD_MBFBIBPKMFO_OFFSET UNITYSDK_OFFSET(0xBA0F870)
#define MNJNHIAPNKD_PLPGKAKPEED_OFFSET UNITYSDK_OFFSET(0xBA0E370)
#define MNJNHIAPNKD_POPELHBODOG_OFFSET UNITYSDK_OFFSET(0xBA0EBC0)
#define MNJNHIAPNKD__ONBIND_OFFSET UNITYSDK_OFFSET(0xBA0D560)

	class MNJNHIAPNKD : public ::FMPCODLIOLG
	{
	public:
		::JFCNEFFCAMG* CBIDDFDIPFC; // 0x60
		::JFCNEFFCAMG* GPICOIAFHCF; // 0x68
		::LEBBNIGFINP* JPBNFMLIJMI; // 0x70
		::RPG::GameCore::BattleInstance* IFKCCHIFMOC; // 0x78
		::System::Boolean EMFKGGCEIHH; // 0x80
		::System::Boolean CGEIJFBMLLE; // 0x81
		// static const ::System::String* EHELEAICPAD; // 0x0
		// static const ::System::String* CDFBFCEGCHE; // 0x0
		// static const ::System::String* EEKKKIACEIL; // 0x0
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MNJNHIAPNKD_CTOR_OFFSET))(this);
		}

		::System::Void _OnBind()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MNJNHIAPNKD__ONBIND_OFFSET))(this);
		}

		::System::Void DHHDFAAJMMC(::IGKFNIEJGLM a1)
		{
			return ((::System::Void(*)(::PVOID, ::IGKFNIEJGLM))((::PBYTE)hIl2Cpp + MNJNHIAPNKD_DHHDFAAJMMC_OFFSET))(this, a1);
		}

		::System::Void ECOHEIAHIAO()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MNJNHIAPNKD_ECOHEIAHIAO_OFFSET))(this);
		}

		::System::Void LJBCDJNNBJH(::RPG::GameCore::GameEntity* a1)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::GameEntity*))((::PBYTE)hIl2Cpp + MNJNHIAPNKD_LJBCDJNNBJH_OFFSET))(this, a1);
		}

		::System::Void DFGLPGCNBKC(::System::Object* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + MNJNHIAPNKD_DFGLPGCNBKC_OFFSET))(this, a1);
		}

		::System::Void CFPPPIMJMFH(::System::Object* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + MNJNHIAPNKD_CFPPPIMJMFH_OFFSET))(this, a1);
		}

		::System::Void EJPHKAJJCOG(::System::Object* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + MNJNHIAPNKD_EJPHKAJJCOG_OFFSET))(this, a1);
		}

		::System::Void HGNOGNMMLCL(::System::Object* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + MNJNHIAPNKD_HGNOGNMMLCL_OFFSET))(this, a1);
		}

		::System::Void DMBMGCGDMCE(::System::Object* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + MNJNHIAPNKD_DMBMGCGDMCE_OFFSET))(this, a1);
		}

		::System::Void HAGJAPDDPBC(::System::Object* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + MNJNHIAPNKD_HAGJAPDDPBC_OFFSET))(this, a1);
		}

		::System::Void POPELHBODOG(::System::Boolean a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + MNJNHIAPNKD_POPELHBODOG_OFFSET))(this, a1);
		}

		::System::String* EAAJKKOGGEE()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + MNJNHIAPNKD_EAAJKKOGGEE_OFFSET))(this);
		}

		::System::Void MBFBIBPKMFO(::System::UInt32 a1, ::System::Object* a2)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32, ::System::Object*))((::PBYTE)hIl2Cpp + MNJNHIAPNKD_MBFBIBPKMFO_OFFSET))(this, a1, a2);
		}

		::System::Void MBFBIBPKMFO_1(::RPG::GameCore::AvatarRowData* a1, ::RPG::GameCore::ICharacterSkillRowData* a2)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::AvatarRowData*, ::RPG::GameCore::ICharacterSkillRowData*))((::PBYTE)hIl2Cpp + MNJNHIAPNKD_MBFBIBPKMFO_1_OFFSET))(this, a1, a2);
		}

		::System::Boolean PLPGKAKPEED(::RPG::GameCore::GameEntity* a1, ::RPG::GameCore::AvatarDataComponent* a2)
		{
			return ((::System::Boolean(*)(::PVOID, ::RPG::GameCore::GameEntity*, ::RPG::GameCore::AvatarDataComponent*))((::PBYTE)hIl2Cpp + MNJNHIAPNKD_PLPGKAKPEED_OFFSET))(this, a1, a2);
		}

		::System::Boolean LDHOHEOALEL()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + MNJNHIAPNKD_LDHOHEOALEL_OFFSET))(this);
		}

		::System::Void JJJHEKJFMKJ(::System::Boolean a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + MNJNHIAPNKD_JJJHEKJFMKJ_OFFSET))(this, a1);
		}

	};
