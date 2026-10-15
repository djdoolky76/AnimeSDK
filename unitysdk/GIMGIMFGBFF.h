#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/BehaviorBase.h"
#include "unitysdk/RPG/MVector3.h"
#include "unitysdk/UnityEngine/Quaternion.h"
namespace RPG::Client { class MonoEffectPluginEntityFollowEffect; }
namespace RPG::GameCore { class GameEntity; }
namespace System::Collections::Generic { template <typename T> class IList_1; }
namespace System::Collections::Generic { template <typename T> class List_1; }
namespace UnityEngine { class Transform; }

#define GIMGIMFGBFF_AEGMLJMJBDO_OFFSET UNITYSDK_OFFSET(0x15A3AF60)
#define GIMGIMFGBFF_CDEGKEKEHID_OFFSET UNITYSDK_OFFSET(0x15A3AD00)
#define GIMGIMFGBFF_CHBEGMHKJKP_OFFSET UNITYSDK_OFFSET(0x15A3ABB0)
#define GIMGIMFGBFF_CTOR_OFFSET UNITYSDK_OFFSET(0x15A3B620)
#define GIMGIMFGBFF_DLBMJPPNNBO_OFFSET UNITYSDK_OFFSET(0x15A3B150)
#define GIMGIMFGBFF_HPNDIIPEFLJ_OFFSET UNITYSDK_OFFSET(0x15A3B5D0)
#define GIMGIMFGBFF_KLIOBGEPFEH_OFFSET UNITYSDK_OFFSET(0x15A3A990)
#define GIMGIMFGBFF_LGNEMOJDJEG_OFFSET UNITYSDK_OFFSET(0x15A3B2C0)
#define GIMGIMFGBFF_MDOGEMECGBL_OFFSET UNITYSDK_OFFSET(0x15A3AA70)
#define GIMGIMFGBFF_NDEIEKBGGOK_OFFSET UNITYSDK_OFFSET(0x15A3AFB0)
#define GIMGIMFGBFF_NIKMDKFLJCJ_OFFSET UNITYSDK_OFFSET(0x15A3AF10)
#define GIMGIMFGBFF_POPNLPIAOCM_OFFSET UNITYSDK_OFFSET(0x15A3AB60)

inline static constexpr unsigned int GIMGIMFGBFF_TypeDefinitionIndex = 69873;

	class GIMGIMFGBFF : public ::RPG::Client::BehaviorBase
	{
	public:
		::System::Collections::Generic::List_1<::RPG::GameCore::GameEntity*>* PJFPEKPDKIH; // 0x18
		::RPG::MVector3 EGHJFEPGLDF; // 0x20
		::UnityEngine::Quaternion HDNOODAJMHE; // 0x2C
		::RPG::MVector3 HBKILGFLPOI; // 0x3C
		::UnityEngine::Quaternion CBKDGAFDBHH; // 0x48
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + GIMGIMFGBFF_CTOR_OFFSET))(this);
		}

		::System::Void KLIOBGEPFEH()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + GIMGIMFGBFF_KLIOBGEPFEH_OFFSET))(this);
		}

		::System::Void POPNLPIAOCM()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + GIMGIMFGBFF_POPNLPIAOCM_OFFSET))(this);
		}

		::System::Void CDEGKEKEHID(::System::Collections::Generic::IList_1<::RPG::GameCore::GameEntity*>* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Collections::Generic::IList_1<::RPG::GameCore::GameEntity*>*))((::PBYTE)hIl2Cpp + GIMGIMFGBFF_CDEGKEKEHID_OFFSET))(this, a1);
		}

		::System::Void NIKMDKFLJCJ()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + GIMGIMFGBFF_NIKMDKFLJCJ_OFFSET))(this);
		}

		::System::Void AEGMLJMJBDO()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + GIMGIMFGBFF_AEGMLJMJBDO_OFFSET))(this);
		}

		::System::Void DLBMJPPNNBO()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + GIMGIMFGBFF_DLBMJPPNNBO_OFFSET))(this);
		}

		::System::Void LGNEMOJDJEG(::RPG::GameCore::GameEntity* a1)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::GameEntity*))((::PBYTE)hIl2Cpp + GIMGIMFGBFF_LGNEMOJDJEG_OFFSET))(this, a1);
		}

		::System::Void NDEIEKBGGOK()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + GIMGIMFGBFF_NDEIEKBGGOK_OFFSET))(this);
		}

		::System::Void CHBEGMHKJKP()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + GIMGIMFGBFF_CHBEGMHKJKP_OFFSET))(this);
		}

		::RPG::Client::MonoEffectPluginEntityFollowEffect* HPNDIIPEFLJ()
		{
			return ((::RPG::Client::MonoEffectPluginEntityFollowEffect*(*)(::PVOID))((::PBYTE)hIl2Cpp + GIMGIMFGBFF_HPNDIIPEFLJ_OFFSET))(this);
		}

		::UnityEngine::Transform* MDOGEMECGBL()
		{
			return ((::UnityEngine::Transform*(*)(::PVOID))((::PBYTE)hIl2Cpp + GIMGIMFGBFF_MDOGEMECGBL_OFFSET))(this);
		}

	};
