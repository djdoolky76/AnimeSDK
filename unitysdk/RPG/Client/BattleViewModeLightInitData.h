#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/BattleViewModeLightInitData_TabType.h"
#include "unitysdk/RPG/GameCore/AttackType.h"
#include "unitysdk/System/Object.h"
namespace RPG::Client { class BattleViewModeLightInitData; }

#define RPG_CLIENT_BATTLEVIEWMODELIGHTINITDATA_CCTOR_OFFSET UNITYSDK_OFFSET(0xD1D4B30)
#define RPG_CLIENT_BATTLEVIEWMODELIGHTINITDATA_CREATEDEFAULT_OFFSET UNITYSDK_OFFSET(0xD1D4450)
#define RPG_CLIENT_BATTLEVIEWMODELIGHTINITDATA_CREATESKILLTAB_OFFSET UNITYSDK_OFFSET(0xD1D49E0)
#define RPG_CLIENT_BATTLEVIEWMODELIGHTINITDATA_CREATE_OFFSET UNITYSDK_OFFSET(0xD1D4840)
#define RPG_CLIENT_BATTLEVIEWMODELIGHTINITDATA_CTOR_OFFSET UNITYSDK_OFFSET(0xD1D4AE0)
#define RPG_CLIENT_BATTLEVIEWMODELIGHTINITDATA_GET_INITATTACKTYPE_OFFSET UNITYSDK_OFFSET(0xD1D4B10)
#define RPG_CLIENT_BATTLEVIEWMODELIGHTINITDATA_GET_INITTABTYPE_OFFSET UNITYSDK_OFFSET(0xD1D4AF0)
#define RPG_CLIENT_BATTLEVIEWMODELIGHTINITDATA_SET_INITATTACKTYPE_OFFSET UNITYSDK_OFFSET(0xD1D4B20)
#define RPG_CLIENT_BATTLEVIEWMODELIGHTINITDATA_SET_INITTABTYPE_OFFSET UNITYSDK_OFFSET(0xD1D4B00)
#define RPG_CLIENT_BATTLEVIEWMODELIGHTINITDATA__CREATEINTERNAL_OFFSET UNITYSDK_OFFSET(0xD1D4950)

namespace RPG::Client
{
	inline static constexpr unsigned int BattleViewModeLightInitData_TypeDefinitionIndex = 74125;

	class BattleViewModeLightInitData : public ::System::Object
	{
	public:
		::RPG::GameCore::AttackType _InitAttackType_k__BackingField; // 0x10
		::RPG::Client::BattleViewModeLightInitData_TabType _InitTabType_k__BackingField; // 0x14
		static ::RPG::Client::BattleViewModeLightInitData_TabType* StaticGet_DefaultTabType()
		{
			return (::RPG::Client::BattleViewModeLightInitData_TabType*)UnitySDK::FromName("RPG.Client", "BattleViewModeLightInitData")->GetStaticField(0x10570);
		}

		static ::RPG::GameCore::AttackType* StaticGet_DefaultAttackType()
		{
			return (::RPG::GameCore::AttackType*)UnitySDK::FromName("RPG.Client", "BattleViewModeLightInitData")->GetStaticField(0x10574);
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_BATTLEVIEWMODELIGHTINITDATA_CTOR_OFFSET))(this);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + RPG_CLIENT_BATTLEVIEWMODELIGHTINITDATA_CCTOR_OFFSET))();
		}

		static ::RPG::Client::BattleViewModeLightInitData* Create(::RPG::Client::BattleViewModeLightInitData_TabType a1)
		{
			return ((::RPG::Client::BattleViewModeLightInitData*(*)(::RPG::Client::BattleViewModeLightInitData_TabType))((::PBYTE)hIl2Cpp + RPG_CLIENT_BATTLEVIEWMODELIGHTINITDATA_CREATE_OFFSET))(a1);
		}

		static ::RPG::Client::BattleViewModeLightInitData* CreateDefault()
		{
			return ((::RPG::Client::BattleViewModeLightInitData*(*)())((::PBYTE)hIl2Cpp + RPG_CLIENT_BATTLEVIEWMODELIGHTINITDATA_CREATEDEFAULT_OFFSET))();
		}

		static ::RPG::Client::BattleViewModeLightInitData* CreateSkillTab(::RPG::GameCore::AttackType a1)
		{
			return ((::RPG::Client::BattleViewModeLightInitData*(*)(::RPG::GameCore::AttackType))((::PBYTE)hIl2Cpp + RPG_CLIENT_BATTLEVIEWMODELIGHTINITDATA_CREATESKILLTAB_OFFSET))(a1);
		}

		static ::RPG::Client::BattleViewModeLightInitData* _CreateInternal(::RPG::Client::BattleViewModeLightInitData_TabType a1, ::RPG::GameCore::AttackType a2)
		{
			return ((::RPG::Client::BattleViewModeLightInitData*(*)(::RPG::Client::BattleViewModeLightInitData_TabType, ::RPG::GameCore::AttackType))((::PBYTE)hIl2Cpp + RPG_CLIENT_BATTLEVIEWMODELIGHTINITDATA__CREATEINTERNAL_OFFSET))(a1, a2);
		}

		::RPG::Client::BattleViewModeLightInitData_TabType get_InitTabType()
		{
			return ((::RPG::Client::BattleViewModeLightInitData_TabType(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_BATTLEVIEWMODELIGHTINITDATA_GET_INITTABTYPE_OFFSET))(this);
		}

		::System::Void set_InitTabType(::RPG::Client::BattleViewModeLightInitData_TabType a1)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::BattleViewModeLightInitData_TabType))((::PBYTE)hIl2Cpp + RPG_CLIENT_BATTLEVIEWMODELIGHTINITDATA_SET_INITTABTYPE_OFFSET))(this, a1);
		}

		::RPG::GameCore::AttackType get_InitAttackType()
		{
			return ((::RPG::GameCore::AttackType(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_BATTLEVIEWMODELIGHTINITDATA_GET_INITATTACKTYPE_OFFSET))(this);
		}

		::System::Void set_InitAttackType(::RPG::GameCore::AttackType a1)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::AttackType))((::PBYTE)hIl2Cpp + RPG_CLIENT_BATTLEVIEWMODELIGHTINITDATA_SET_INITATTACKTYPE_OFFSET))(this, a1);
		}

	};
}
