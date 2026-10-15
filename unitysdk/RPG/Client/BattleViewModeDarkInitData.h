#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/BattleViewModeDarkInitData_TabType.h"
#include "unitysdk/System/Object.h"
namespace RPG::Client { class BattleViewModeDarkInitData; }

#define RPG_CLIENT_BATTLEVIEWMODEDARKINITDATA_CCTOR_OFFSET UNITYSDK_OFFSET(0xC8673A0)
#define RPG_CLIENT_BATTLEVIEWMODEDARKINITDATA_CREATEDEFAULT_OFFSET UNITYSDK_OFFSET(0xC867280)
#define RPG_CLIENT_BATTLEVIEWMODEDARKINITDATA_CREATE_OFFSET UNITYSDK_OFFSET(0xC8671F0)
#define RPG_CLIENT_BATTLEVIEWMODEDARKINITDATA_CTOR_OFFSET UNITYSDK_OFFSET(0xC867270)
#define RPG_CLIENT_BATTLEVIEWMODEDARKINITDATA_GET_INITTABTYPE_OFFSET UNITYSDK_OFFSET(0xC867380)
#define RPG_CLIENT_BATTLEVIEWMODEDARKINITDATA_SET_INITTABTYPE_OFFSET UNITYSDK_OFFSET(0xC867390)

namespace RPG::Client
{
	inline static constexpr unsigned int BattleViewModeDarkInitData_TypeDefinitionIndex = 72091;

	class BattleViewModeDarkInitData : public ::System::Object
	{
	public:
		::RPG::Client::BattleViewModeDarkInitData_TabType _InitTabType_k__BackingField; // 0x10
		static ::RPG::Client::BattleViewModeDarkInitData_TabType* StaticGet_DefaultTabType()
		{
			return (::RPG::Client::BattleViewModeDarkInitData_TabType*)UnitySDK::FromName("RPG.Client", "BattleViewModeDarkInitData")->GetStaticField(0x14090);
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_BATTLEVIEWMODEDARKINITDATA_CTOR_OFFSET))(this);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + RPG_CLIENT_BATTLEVIEWMODEDARKINITDATA_CCTOR_OFFSET))();
		}

		static ::RPG::Client::BattleViewModeDarkInitData* Create(::RPG::Client::BattleViewModeDarkInitData_TabType a1)
		{
			return ((::RPG::Client::BattleViewModeDarkInitData*(*)(::RPG::Client::BattleViewModeDarkInitData_TabType))((::PBYTE)hIl2Cpp + RPG_CLIENT_BATTLEVIEWMODEDARKINITDATA_CREATE_OFFSET))(a1);
		}

		static ::RPG::Client::BattleViewModeDarkInitData* CreateDefault()
		{
			return ((::RPG::Client::BattleViewModeDarkInitData*(*)())((::PBYTE)hIl2Cpp + RPG_CLIENT_BATTLEVIEWMODEDARKINITDATA_CREATEDEFAULT_OFFSET))();
		}

		::RPG::Client::BattleViewModeDarkInitData_TabType get_InitTabType()
		{
			return ((::RPG::Client::BattleViewModeDarkInitData_TabType(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_BATTLEVIEWMODEDARKINITDATA_GET_INITTABTYPE_OFFSET))(this);
		}

		::System::Void set_InitTabType(::RPG::Client::BattleViewModeDarkInitData_TabType a1)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::BattleViewModeDarkInitData_TabType))((::PBYTE)hIl2Cpp + RPG_CLIENT_BATTLEVIEWMODEDARKINITDATA_SET_INITTABTYPE_OFFSET))(this, a1);
		}

	};
}
