#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/ElationEchoPointUIType.h"
#include "unitysdk/RPG/GameCore/NihiluxElationUIType.h"
#include "unitysdk/System/Nullable_1.h"
#include "unitysdk/System/Object.h"
namespace RPG::Client { class IAvatarSkinData; }
namespace RPG::GameCore { class GameEntity; }
namespace System { class Object; }
namespace System { class String; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }

#define RPG_CLIENT_BATTLEAVATARNIHILUXCUSTOMUIDATA_ADDHANDLERS_OFFSET UNITYSDK_OFFSET(0x1B020930)
#define RPG_CLIENT_BATTLEAVATARNIHILUXCUSTOMUIDATA_CTOR_OFFSET UNITYSDK_OFFSET(0x1B020D50)
#define RPG_CLIENT_BATTLEAVATARNIHILUXCUSTOMUIDATA_DISPOSE_OFFSET UNITYSDK_OFFSET(0x1B020700)
#define RPG_CLIENT_BATTLEAVATARNIHILUXCUSTOMUIDATA_GETELATIONECHOPOINTUITYPE_OFFSET UNITYSDK_OFFSET(0x1B021020)
#define RPG_CLIENT_BATTLEAVATARNIHILUXCUSTOMUIDATA_GETISNIHILUXELATIONTIMESPEEDUP_OFFSET UNITYSDK_OFFSET(0x1B0214E0)
#define RPG_CLIENT_BATTLEAVATARNIHILUXCUSTOMUIDATA_GETNIHILUXDIRTYHPRATIO_OFFSET UNITYSDK_OFFSET(0x1B0210C0)
#define RPG_CLIENT_BATTLEAVATARNIHILUXCUSTOMUIDATA_GET_ELATIONUITYPE_OFFSET UNITYSDK_OFFSET(0x1B021C10)
#define RPG_CLIENT_BATTLEAVATARNIHILUXCUSTOMUIDATA_MAPRESPATH_OFFSET UNITYSDK_OFFSET(0x1B021340)
#define RPG_CLIENT_BATTLEAVATARNIHILUXCUSTOMUIDATA_SETISNIHILUXELATIONTIMESPEEDUP_OFFSET UNITYSDK_OFFSET(0x1B0215F0)
#define RPG_CLIENT_BATTLEAVATARNIHILUXCUSTOMUIDATA_SETTRAILNIHILUXELATIONTIMESPEEDUP_OFFSET UNITYSDK_OFFSET(0x1B021490)
#define RPG_CLIENT_BATTLEAVATARNIHILUXCUSTOMUIDATA__GETHPSHAREDMAINTARGET_OFFSET UNITYSDK_OFFSET(0x1B0211C0)
#define RPG_CLIENT_BATTLEAVATARNIHILUXCUSTOMUIDATA__ONCREATEPLAYERTEAMFINISH_OFFSET UNITYSDK_OFFSET(0x1B021780)
#define RPG_CLIENT_BATTLEAVATARNIHILUXCUSTOMUIDATA__ONFORCESETNIHILUXELATIONUITYPE_OFFSET UNITYSDK_OFFSET(0x1B021AF0)
#define RPG_CLIENT_BATTLEAVATARNIHILUXCUSTOMUIDATA__ONSETNIHILUXDIRTYHPRATIO_OFFSET UNITYSDK_OFFSET(0x1B021A40)
#define RPG_CLIENT_BATTLEAVATARNIHILUXCUSTOMUIDATA__ONSWITCHELATIONECHOPOINTUITYPE_OFFSET UNITYSDK_OFFSET(0x1B021950)
#define RPG_CLIENT_BATTLEAVATARNIHILUXCUSTOMUIDATA__ONSWITCHNIHILUXELATIONUITYPE_OFFSET UNITYSDK_OFFSET(0x1B021670)
#define RPG_CLIENT_BATTLEAVATARNIHILUXCUSTOMUIDATA__REMOVEHANDLERS_OFFSET UNITYSDK_OFFSET(0x1B020E60)

namespace RPG::Client
{
	inline static constexpr unsigned int BattleAvatarNihiluxCustomUIData_TypeDefinitionIndex = 73441;

	class BattleAvatarNihiluxCustomUIData : public ::System::Object
	{
	public:
		::System::Collections::Generic::Dictionary_2<::System::UInt32, ::System::Single>* _NihiluxDirtyHPRatioMap; // 0x10
		::System::Collections::Generic::Dictionary_2<::System::UInt32, ::RPG::GameCore::ElationEchoPointUIType>* _ElationEchoPointUITypeMap; // 0x18
		::RPG::Client::IAvatarSkinData* _NihiluxSkinData; // 0x20
		::RPG::GameCore::NihiluxElationUIType _ElationUIType; // 0x28
		::System::Nullable_1<::System::Boolean> _IsTrailNihiluxElationTimeSpeedUp; // 0x2C
		::System::Boolean _IsForceNihiluxElationUIType; // 0x2E
		::System::Boolean _PauseUpdateElationUIType; // 0x2F
		::System::Boolean _AddedNotifyHandler; // 0x30
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_BATTLEAVATARNIHILUXCUSTOMUIDATA_CTOR_OFFSET))(this);
		}

		::System::Void Dispose()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_BATTLEAVATARNIHILUXCUSTOMUIDATA_DISPOSE_OFFSET))(this);
		}

		::System::Void AddHandlers()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_BATTLEAVATARNIHILUXCUSTOMUIDATA_ADDHANDLERS_OFFSET))(this);
		}

		::RPG::GameCore::ElationEchoPointUIType GetElationEchoPointUIType(::RPG::GameCore::GameEntity* a1)
		{
			return ((::RPG::GameCore::ElationEchoPointUIType(*)(::PVOID, ::RPG::GameCore::GameEntity*))((::PBYTE)hIl2Cpp + RPG_CLIENT_BATTLEAVATARNIHILUXCUSTOMUIDATA_GETELATIONECHOPOINTUITYPE_OFFSET))(this, a1);
		}

		::System::Single GetNihiluxDirtyHPRatio(::RPG::GameCore::GameEntity* a1)
		{
			return ((::System::Single(*)(::PVOID, ::RPG::GameCore::GameEntity*))((::PBYTE)hIl2Cpp + RPG_CLIENT_BATTLEAVATARNIHILUXCUSTOMUIDATA_GETNIHILUXDIRTYHPRATIO_OFFSET))(this, a1);
		}

		::System::String* MapResPath(::System::String* a1)
		{
			return ((::System::String*(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + RPG_CLIENT_BATTLEAVATARNIHILUXCUSTOMUIDATA_MAPRESPATH_OFFSET))(this, a1);
		}

		::System::Void SetTrailNihiluxElationTimeSpeedUp(::System::Boolean a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + RPG_CLIENT_BATTLEAVATARNIHILUXCUSTOMUIDATA_SETTRAILNIHILUXELATIONTIMESPEEDUP_OFFSET))(this, a1);
		}

		::System::Boolean GetIsNihiluxElationTimeSpeedUp()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_BATTLEAVATARNIHILUXCUSTOMUIDATA_GETISNIHILUXELATIONTIMESPEEDUP_OFFSET))(this);
		}

		::System::Void SetIsNihiluxElationTimeSpeedUp(::System::Boolean a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + RPG_CLIENT_BATTLEAVATARNIHILUXCUSTOMUIDATA_SETISNIHILUXELATIONTIMESPEEDUP_OFFSET))(this, a1);
		}

		::System::Void _RemoveHandlers()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_BATTLEAVATARNIHILUXCUSTOMUIDATA__REMOVEHANDLERS_OFFSET))(this);
		}

		::System::Void _OnSwitchNihiluxElationUIType(::System::Object* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + RPG_CLIENT_BATTLEAVATARNIHILUXCUSTOMUIDATA__ONSWITCHNIHILUXELATIONUITYPE_OFFSET))(this, a1);
		}

		::System::Void _OnCreatePlayerTeamFinish(::System::Object* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + RPG_CLIENT_BATTLEAVATARNIHILUXCUSTOMUIDATA__ONCREATEPLAYERTEAMFINISH_OFFSET))(this, a1);
		}

		::System::Void _OnSwitchElationEchoPointUIType(::System::Object* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + RPG_CLIENT_BATTLEAVATARNIHILUXCUSTOMUIDATA__ONSWITCHELATIONECHOPOINTUITYPE_OFFSET))(this, a1);
		}

		static ::RPG::GameCore::GameEntity* _GetHpSharedMainTarget(::RPG::GameCore::GameEntity* a1)
		{
			return ((::RPG::GameCore::GameEntity*(*)(::RPG::GameCore::GameEntity*))((::PBYTE)hIl2Cpp + RPG_CLIENT_BATTLEAVATARNIHILUXCUSTOMUIDATA__GETHPSHAREDMAINTARGET_OFFSET))(a1);
		}

		::System::Void _OnSetNihiluxDirtyHPRatio(::System::Object* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + RPG_CLIENT_BATTLEAVATARNIHILUXCUSTOMUIDATA__ONSETNIHILUXDIRTYHPRATIO_OFFSET))(this, a1);
		}

		::System::Void _OnForceSetNihiluxElationUIType(::System::Object* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + RPG_CLIENT_BATTLEAVATARNIHILUXCUSTOMUIDATA__ONFORCESETNIHILUXELATIONUITYPE_OFFSET))(this, a1);
		}

		::RPG::GameCore::NihiluxElationUIType get_ElationUIType()
		{
			return ((::RPG::GameCore::NihiluxElationUIType(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_BATTLEAVATARNIHILUXCUSTOMUIDATA_GET_ELATIONUITYPE_OFFSET))(this);
		}

	};
}
