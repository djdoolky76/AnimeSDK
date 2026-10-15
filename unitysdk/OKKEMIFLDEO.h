#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/PropertyModifyFunction.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/IFBPIIECCAH.h"
#include "unitysdk/RPG/GameCore/FixPoint.h"
#include "unitysdk/RPG/GameCore/SkillCharacterComponent_UseSkillErrorInfo.h"
#include "unitysdk/System/Nullable_1.h"
class DEKDEPEBHNC;
class OKKEMIFLDEO_HANPIBHCKNL;
namespace RPG::GameCore { class GameEntity; }
namespace RPG::GameCore { class SkillData; }
namespace RPG::GameCore { class TurnBasedGameMode; }
namespace System { class Object; }
namespace System { class String; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }

#define OKKEMIFLDEO_BAKJPBILJGJ_OFFSET UNITYSDK_OFFSET(0xBED57B0)
#define OKKEMIFLDEO_BGLBCEJDNGL_OFFSET UNITYSDK_OFFSET(0xBED56D0)
#define OKKEMIFLDEO_CEMDEEPKJJO_OFFSET UNITYSDK_OFFSET(0xBED52E0)
#define OKKEMIFLDEO_CTOR_OFFSET UNITYSDK_OFFSET(0xBED4CF0)
#define OKKEMIFLDEO_EMFNGIMCHAF_OFFSET UNITYSDK_OFFSET(0xBED5CA0)
#define OKKEMIFLDEO_FANKOEGFNKG_OFFSET UNITYSDK_OFFSET(0xBED5090)
#define OKKEMIFLDEO_GCHJONIMMKG_OFFSET UNITYSDK_OFFSET(0xBED4DE0)
#define OKKEMIFLDEO_GHKHAMOLHMC_OFFSET UNITYSDK_OFFSET(0xBED6110)
#define OKKEMIFLDEO_GPPPCAEOAGB_OFFSET UNITYSDK_OFFSET(0xBED7190)
#define OKKEMIFLDEO_HADOHLNHHGB_OFFSET UNITYSDK_OFFSET(0xBED4D40)
#define OKKEMIFLDEO_HAPFBINNNPI_OFFSET UNITYSDK_OFFSET(0xBED6E90)
#define OKKEMIFLDEO_HCCIBHMMHNG_OFFSET UNITYSDK_OFFSET(0xBED60B0)
#define OKKEMIFLDEO_HFKKAEJEJIN_OFFSET UNITYSDK_OFFSET(0xBED4F00)
#define OKKEMIFLDEO_IGGJNIMAKDP_OFFSET UNITYSDK_OFFSET(0xBED5350)
#define OKKEMIFLDEO_JLAFIBALKFM_OFFSET UNITYSDK_OFFSET(0xBED5920)
#define OKKEMIFLDEO_KMAKEFGFBCD_OFFSET UNITYSDK_OFFSET(0xBED59D0)
#define OKKEMIFLDEO_KOKBGODJIMG_OFFSET UNITYSDK_OFFSET(0xBED6570)
#define OKKEMIFLDEO_LJAOCFGOKKL_OFFSET UNITYSDK_OFFSET(0xBED63B0)
#define OKKEMIFLDEO_OINBDMGFFJL_OFFSET UNITYSDK_OFFSET(0xBED4D00)
#define OKKEMIFLDEO_OKPFCPPFLOJ_OFFSET UNITYSDK_OFFSET(0xBED6770)

inline static constexpr unsigned int OKKEMIFLDEO_TypeDefinitionIndex = 56029;

	class OKKEMIFLDEO : public ::System::Object
	{
	public:
		::RPG::GameCore::TurnBasedGameMode* JADHLODNADK; // 0x10
		::System::Collections::Generic::Dictionary_2<::System::UInt32, ::System::Object*>* JCMIFAPPHFL; // 0x18
		::System::Void _ctor(::RPG::GameCore::TurnBasedGameMode* a1)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::TurnBasedGameMode*))((::PBYTE)hIl2Cpp + OKKEMIFLDEO_CTOR_OFFSET))(this, a1);
		}

		::System::Void OINBDMGFFJL()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + OKKEMIFLDEO_OINBDMGFFJL_OFFSET))(this);
		}

		::System::Void HADOHLNHHGB()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + OKKEMIFLDEO_HADOHLNHHGB_OFFSET))(this);
		}

		::System::Boolean GCHJONIMMKG(::RPG::GameCore::GameEntity* a1, ::RPG::GameCore::GameEntity* a2, ::IFBPIIECCAH a3)
		{
			return ((::System::Boolean(*)(::PVOID, ::RPG::GameCore::GameEntity*, ::RPG::GameCore::GameEntity*, ::IFBPIIECCAH))((::PBYTE)hIl2Cpp + OKKEMIFLDEO_GCHJONIMMKG_OFFSET))(this, a1, a2, a3);
		}

		::System::Boolean FANKOEGFNKG(::RPG::GameCore::GameEntity* a1, ::RPG::GameCore::FixPoint a2, ::RPG::GameCore::FixPoint a3, ::RPG::GameCore::FixPoint a4)
		{
			return ((::System::Boolean(*)(::PVOID, ::RPG::GameCore::GameEntity*, ::RPG::GameCore::FixPoint, ::RPG::GameCore::FixPoint, ::RPG::GameCore::FixPoint))((::PBYTE)hIl2Cpp + OKKEMIFLDEO_FANKOEGFNKG_OFFSET))(this, a1, a2, a3, a4);
		}

		::System::Boolean CEMDEEPKJJO()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + OKKEMIFLDEO_CEMDEEPKJJO_OFFSET))(this);
		}

		::System::Void IGGJNIMAKDP(::RPG::GameCore::GameEntity* a1)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::GameEntity*))((::PBYTE)hIl2Cpp + OKKEMIFLDEO_IGGJNIMAKDP_OFFSET))(this, a1);
		}

		::System::Void BGLBCEJDNGL(::RPG::GameCore::GameEntity* a1)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::GameEntity*))((::PBYTE)hIl2Cpp + OKKEMIFLDEO_BGLBCEJDNGL_OFFSET))(this, a1);
		}

		::System::Void BAKJPBILJGJ(::RPG::GameCore::GameEntity* a1, ::RPG::GameCore::GameEntity* a2, ::System::Boolean a3)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::GameEntity*, ::RPG::GameCore::GameEntity*, ::System::Boolean))((::PBYTE)hIl2Cpp + OKKEMIFLDEO_BAKJPBILJGJ_OFFSET))(this, a1, a2, a3);
		}

		::System::Void JLAFIBALKFM(::RPG::GameCore::GameEntity* a1, ::RPG::GameCore::GameEntity* a2, ::System::Int32 a3)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::GameEntity*, ::RPG::GameCore::GameEntity*, ::System::Int32))((::PBYTE)hIl2Cpp + OKKEMIFLDEO_JLAFIBALKFM_OFFSET))(this, a1, a2, a3);
		}

		::System::Void EMFNGIMCHAF(::RPG::GameCore::GameEntity* a1, ::System::Nullable_1<::RPG::GameCore::FixPoint> a2, ::System::Nullable_1<::RPG::GameCore::FixPoint> a3, ::System::Nullable_1<::RPG::GameCore::FixPoint> a4)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::GameEntity*, ::System::Nullable_1<::RPG::GameCore::FixPoint>, ::System::Nullable_1<::RPG::GameCore::FixPoint>, ::System::Nullable_1<::RPG::GameCore::FixPoint>))((::PBYTE)hIl2Cpp + OKKEMIFLDEO_EMFNGIMCHAF_OFFSET))(this, a1, a2, a3, a4);
		}

		::System::Void GHKHAMOLHMC(::RPG::GameCore::GameEntity* a1, ::RPG::GameCore::PropertyModifyFunction a2, ::RPG::GameCore::FixPoint a3, ::RPG::GameCore::PropertyModifyFunction a4, ::RPG::GameCore::FixPoint a5, ::RPG::GameCore::FixPoint a6)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::GameEntity*, ::RPG::GameCore::PropertyModifyFunction, ::RPG::GameCore::FixPoint, ::RPG::GameCore::PropertyModifyFunction, ::RPG::GameCore::FixPoint, ::RPG::GameCore::FixPoint))((::PBYTE)hIl2Cpp + OKKEMIFLDEO_GHKHAMOLHMC_OFFSET))(this, a1, a2, a3, a4, a5, a6);
		}

		::System::Void LJAOCFGOKKL(::RPG::GameCore::GameEntity* a1, ::RPG::GameCore::GameEntity* a2)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::GameEntity*, ::RPG::GameCore::GameEntity*))((::PBYTE)hIl2Cpp + OKKEMIFLDEO_LJAOCFGOKKL_OFFSET))(this, a1, a2);
		}

		::System::Void KOKBGODJIMG(::RPG::GameCore::GameEntity* a1, ::System::String* a2)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::GameEntity*, ::System::String*))((::PBYTE)hIl2Cpp + OKKEMIFLDEO_KOKBGODJIMG_OFFSET))(this, a1, a2);
		}

		::RPG::GameCore::SkillCharacterComponent_UseSkillErrorInfo OKPFCPPFLOJ(::RPG::GameCore::GameEntity* a1, ::RPG::GameCore::SkillData* a2, ::System::Boolean a3, ::System::Boolean a4)
		{
			return ((::RPG::GameCore::SkillCharacterComponent_UseSkillErrorInfo(*)(::PVOID, ::RPG::GameCore::GameEntity*, ::RPG::GameCore::SkillData*, ::System::Boolean, ::System::Boolean))((::PBYTE)hIl2Cpp + OKKEMIFLDEO_OKPFCPPFLOJ_OFFSET))(this, a1, a2, a3, a4);
		}

		::System::Boolean HAPFBINNNPI(::DEKDEPEBHNC* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::DEKDEPEBHNC*))((::PBYTE)hIl2Cpp + OKKEMIFLDEO_HAPFBINNNPI_OFFSET))(this, a1);
		}

		::System::Void GPPPCAEOAGB(::RPG::GameCore::SkillData* a1, ::RPG::GameCore::GameEntity* a2)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::SkillData*, ::RPG::GameCore::GameEntity*))((::PBYTE)hIl2Cpp + OKKEMIFLDEO_GPPPCAEOAGB_OFFSET))(this, a1, a2);
		}

		::OKKEMIFLDEO_HANPIBHCKNL* HFKKAEJEJIN(::RPG::GameCore::GameEntity* a1)
		{
			return ((::OKKEMIFLDEO_HANPIBHCKNL*(*)(::PVOID, ::RPG::GameCore::GameEntity*))((::PBYTE)hIl2Cpp + OKKEMIFLDEO_HFKKAEJEJIN_OFFSET))(this, a1);
		}

		::OKKEMIFLDEO_HANPIBHCKNL* KMAKEFGFBCD(::RPG::GameCore::GameEntity* a1)
		{
			return ((::OKKEMIFLDEO_HANPIBHCKNL*(*)(::PVOID, ::RPG::GameCore::GameEntity*))((::PBYTE)hIl2Cpp + OKKEMIFLDEO_KMAKEFGFBCD_OFFSET))(this, a1);
		}

		::System::Void HCCIBHMMHNG(::RPG::GameCore::GameEntity* a1)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::GameEntity*))((::PBYTE)hIl2Cpp + OKKEMIFLDEO_HCCIBHMMHNG_OFFSET))(this, a1);
		}

	};
