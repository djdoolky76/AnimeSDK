#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/LittleGame/BaseMonoGenericView.h"
#include "unitysdk/RPG/GameCore/ChenLingBattleEffectLifeTimeType.h"
class ALMFLCJCHKP;
class EMJIDLCDFMI;
class LMFOOOLDECA;
class OMNJCDDMLHI;
namespace Entitas { class IContext; }
namespace Entitas { class IEntity; }
namespace System { class String; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }
namespace System::Collections::Generic { template <typename T> class HashSet_1; }

#define RPG_CLIENT_LITTLEGAME_CHENLING_CHENLINGGAMEVIEW_AHBPJFGGFOH_OFFSET UNITYSDK_OFFSET(0xD405F60)
#define RPG_CLIENT_LITTLEGAME_CHENLING_CHENLINGGAMEVIEW_CTOR_OFFSET UNITYSDK_OFFSET(0xD402E10)
#define RPG_CLIENT_LITTLEGAME_CHENLING_CHENLINGGAMEVIEW_GETENTITY_OFFSET UNITYSDK_OFFSET(0xD405E60)
#define RPG_CLIENT_LITTLEGAME_CHENLING_CHENLINGGAMEVIEW_INITIALIZE_OFFSET UNITYSDK_OFFSET(0xD405790)
#define RPG_CLIENT_LITTLEGAME_CHENLING_CHENLINGGAMEVIEW_KEOEOPBIENN_OFFSET UNITYSDK_OFFSET(0xD405FA0)
#define RPG_CLIENT_LITTLEGAME_CHENLING_CHENLINGGAMEVIEW_KPEHFNEGBHM_OFFSET UNITYSDK_OFFSET(0xD405F00)
#define RPG_CLIENT_LITTLEGAME_CHENLING_CHENLINGGAMEVIEW_LGKADOAPOFB_OFFSET UNITYSDK_OFFSET(0xD405FE0)
#define RPG_CLIENT_LITTLEGAME_CHENLING_CHENLINGGAMEVIEW_LITTLEGAMETICK_OFFSET UNITYSDK_OFFSET(0xD405EA0)
#define RPG_CLIENT_LITTLEGAME_CHENLING_CHENLINGGAMEVIEW_REGISTEREFFECTLIFETIME_OFFSET UNITYSDK_OFFSET(0xD406020)
#define RPG_CLIENT_LITTLEGAME_CHENLING_CHENLINGGAMEVIEW_RELEASEEFFECTBYLIFETIME_OFFSET UNITYSDK_OFFSET(0xD405B60)
#define RPG_CLIENT_LITTLEGAME_CHENLING_CHENLINGGAMEVIEW_RELEASE_OFFSET UNITYSDK_OFFSET(0xD405990)

namespace RPG::Client::LittleGame::ChenLing
{
	inline static constexpr unsigned int ChenLingGameView_TypeDefinitionIndex = 77971;

	class ChenLingGameView : public ::RPG::Client::LittleGame::BaseMonoGenericView
	{
	public:
		::OMNJCDDMLHI* EEFMDEHLLFI; // 0x20
		::LMFOOOLDECA* PDENFEFCAGN; // 0x28
		::ALMFLCJCHKP* KAKEIDJDNHJ; // 0x30
		::System::Collections::Generic::HashSet_1<::System::UInt32>* CIKFDFFCBDF; // 0x38
		::System::Collections::Generic::Dictionary_2<::RPG::GameCore::ChenLingBattleEffectLifeTimeType, ::System::Collections::Generic::HashSet_1<::System::UInt32>*>* KJPBMOAFFLO; // 0x40
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_LITTLEGAME_CHENLING_CHENLINGGAMEVIEW_CTOR_OFFSET))(this);
		}

		::System::Void Initialize(::Entitas::IContext* a1, ::EMJIDLCDFMI* a2, ::Entitas::IEntity* a3)
		{
			return ((::System::Void(*)(::PVOID, ::Entitas::IContext*, ::EMJIDLCDFMI*, ::Entitas::IEntity*))((::PBYTE)hIl2Cpp + RPG_CLIENT_LITTLEGAME_CHENLING_CHENLINGGAMEVIEW_INITIALIZE_OFFSET))(this, a1, a2, a3);
		}

		::System::Void Release(::System::String* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + RPG_CLIENT_LITTLEGAME_CHENLING_CHENLINGGAMEVIEW_RELEASE_OFFSET))(this, a1);
		}

		::Entitas::IEntity* GetEntity()
		{
			return ((::Entitas::IEntity*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_LITTLEGAME_CHENLING_CHENLINGGAMEVIEW_GETENTITY_OFFSET))(this);
		}

		::System::Void LittleGameTick(::System::Single a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + RPG_CLIENT_LITTLEGAME_CHENLING_CHENLINGGAMEVIEW_LITTLEGAMETICK_OFFSET))(this, a1);
		}

		::System::Void KPEHFNEGBHM(::System::Single a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + RPG_CLIENT_LITTLEGAME_CHENLING_CHENLINGGAMEVIEW_KPEHFNEGBHM_OFFSET))(this, a1);
		}

		::System::Void AHBPJFGGFOH()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_LITTLEGAME_CHENLING_CHENLINGGAMEVIEW_AHBPJFGGFOH_OFFSET))(this);
		}

		::System::Void KEOEOPBIENN()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_LITTLEGAME_CHENLING_CHENLINGGAMEVIEW_KEOEOPBIENN_OFFSET))(this);
		}

		::System::Void LGKADOAPOFB()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_LITTLEGAME_CHENLING_CHENLINGGAMEVIEW_LGKADOAPOFB_OFFSET))(this);
		}

		::System::Void RegisterEffectLifeTime(::RPG::GameCore::ChenLingBattleEffectLifeTimeType a1, ::System::UInt32 a2)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::ChenLingBattleEffectLifeTimeType, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_LITTLEGAME_CHENLING_CHENLINGGAMEVIEW_REGISTEREFFECTLIFETIME_OFFSET))(this, a1, a2);
		}

		::System::Void ReleaseEffectByLifeTime(::RPG::GameCore::ChenLingBattleEffectLifeTimeType a1)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::ChenLingBattleEffectLifeTimeType))((::PBYTE)hIl2Cpp + RPG_CLIENT_LITTLEGAME_CHENLING_CHENLINGGAMEVIEW_RELEASEEFFECTBYLIFETIME_OFFSET))(this, a1);
		}

	};
}
