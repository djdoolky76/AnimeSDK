#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/TextID.h"
#include "unitysdk/RPG/GameCore/ElationEchoPointUIType.h"
#include "unitysdk/RPG/GameCore/NihiluxElationUIType.h"
#include "unitysdk/System/Object.h"
class DJOCDDCPEPF;
namespace RPG::Client { class ElationBattleBuffGroupViewData; }
namespace RPG::Client { class ElationBattleBuffViewData; }
namespace RPG::GameCore { class TurnBasedModifierInstance; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define RPG_CLIENT_ELATIONBATTLEBUFFGROUPVIEWDATA_CREATE_OFFSET UNITYSDK_OFFSET(0x189B5570)
#define RPG_CLIENT_ELATIONBATTLEBUFFGROUPVIEWDATA_CTOR_OFFSET UNITYSDK_OFFSET(0x189B5640)
#define RPG_CLIENT_ELATIONBATTLEBUFFGROUPVIEWDATA_GETALLBUFFCOUNT_OFFSET UNITYSDK_OFFSET(0x189B5900)
#define RPG_CLIENT_ELATIONBATTLEBUFFGROUPVIEWDATA_GETELATIONECHOPOINTUITYPE_OFFSET UNITYSDK_OFFSET(0x189B5950)
#define RPG_CLIENT_ELATIONBATTLEBUFFGROUPVIEWDATA_GETNIHILUXELATIONUITYPE_OFFSET UNITYSDK_OFFSET(0x189B59D0)
#define RPG_CLIENT_ELATIONBATTLEBUFFGROUPVIEWDATA_GET_BUFFVIEWDATAS_OFFSET UNITYSDK_OFFSET(0x189B5A60)
#define RPG_CLIENT_ELATIONBATTLEBUFFGROUPVIEWDATA_GET_ELATIONECHOPOINTMAX_OFFSET UNITYSDK_OFFSET(0x189B5B10)
#define RPG_CLIENT_ELATIONBATTLEBUFFGROUPVIEWDATA_GET_GROUPDESC_OFFSET UNITYSDK_OFFSET(0x189B5A20)
#define RPG_CLIENT_ELATIONBATTLEBUFFGROUPVIEWDATA_GET_ISNIHILUXELATIONECHOPOINTSHOW_OFFSET UNITYSDK_OFFSET(0x189B5C10)
#define RPG_CLIENT_ELATIONBATTLEBUFFGROUPVIEWDATA_GET_ISREACHMAX_OFFSET UNITYSDK_OFFSET(0x189B5BC0)
#define RPG_CLIENT_ELATIONBATTLEBUFFGROUPVIEWDATA_GET_NIHILUXGROUPDESC_OFFSET UNITYSDK_OFFSET(0x189B5A40)
#define RPG_CLIENT_ELATIONBATTLEBUFFGROUPVIEWDATA_GET_TITLE_OFFSET UNITYSDK_OFFSET(0x189B5DC0)
#define RPG_CLIENT_ELATIONBATTLEBUFFGROUPVIEWDATA_GET_TOTALPOINT_OFFSET UNITYSDK_OFFSET(0x189B5A80)
#define RPG_CLIENT_ELATIONBATTLEBUFFGROUPVIEWDATA_GET__ISNIHILUX_OFFSET UNITYSDK_OFFSET(0x189B5D30)
#define RPG_CLIENT_ELATIONBATTLEBUFFGROUPVIEWDATA_SET_BUFFVIEWDATAS_OFFSET UNITYSDK_OFFSET(0x189B5A70)
#define RPG_CLIENT_ELATIONBATTLEBUFFGROUPVIEWDATA_SET_GROUPDESC_OFFSET UNITYSDK_OFFSET(0x189B5A30)
#define RPG_CLIENT_ELATIONBATTLEBUFFGROUPVIEWDATA_SET_NIHILUXGROUPDESC_OFFSET UNITYSDK_OFFSET(0x189B5A50)

namespace RPG::Client
{
	inline static constexpr unsigned int ElationBattleBuffGroupViewData_TypeDefinitionIndex = 73503;

	class ElationBattleBuffGroupViewData : public ::System::Object
	{
	public:
		::DJOCDDCPEPF* _PointUIData; // 0x10
		::System::Collections::Generic::List_1<::RPG::Client::ElationBattleBuffViewData*>* _BuffViewDatas_k__BackingField; // 0x18
		::RPG::Client::TextID _NihiluxGroupDesc_k__BackingField; // 0x20
		::RPG::Client::TextID _GroupDesc_k__BackingField; // 0x30
		// static const ::System::String* _DEFAULT_TITLE; // 0x0
		// static const ::System::String* _NIHILUX_TITLE; // 0x0
		::System::Void _ctor(::DJOCDDCPEPF* a1, ::RPG::Client::TextID a2, ::RPG::Client::TextID a3, ::System::Collections::Generic::List_1<::RPG::GameCore::TurnBasedModifierInstance*>* a4)
		{
			return ((::System::Void(*)(::PVOID, ::DJOCDDCPEPF*, ::RPG::Client::TextID, ::RPG::Client::TextID, ::System::Collections::Generic::List_1<::RPG::GameCore::TurnBasedModifierInstance*>*))((::PBYTE)hIl2Cpp + RPG_CLIENT_ELATIONBATTLEBUFFGROUPVIEWDATA_CTOR_OFFSET))(this, a1, a2, a3, a4);
		}

		static ::RPG::Client::ElationBattleBuffGroupViewData* Create(::DJOCDDCPEPF* a1, ::RPG::Client::TextID a2, ::RPG::Client::TextID a3, ::System::Collections::Generic::List_1<::RPG::GameCore::TurnBasedModifierInstance*>* a4)
		{
			return ((::RPG::Client::ElationBattleBuffGroupViewData*(*)(::DJOCDDCPEPF*, ::RPG::Client::TextID, ::RPG::Client::TextID, ::System::Collections::Generic::List_1<::RPG::GameCore::TurnBasedModifierInstance*>*))((::PBYTE)hIl2Cpp + RPG_CLIENT_ELATIONBATTLEBUFFGROUPVIEWDATA_CREATE_OFFSET))(a1, a2, a3, a4);
		}

		::System::Int32 GetAllBuffCount()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ELATIONBATTLEBUFFGROUPVIEWDATA_GETALLBUFFCOUNT_OFFSET))(this);
		}

		::RPG::GameCore::ElationEchoPointUIType GetElationEchoPointUIType()
		{
			return ((::RPG::GameCore::ElationEchoPointUIType(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ELATIONBATTLEBUFFGROUPVIEWDATA_GETELATIONECHOPOINTUITYPE_OFFSET))(this);
		}

		::RPG::GameCore::NihiluxElationUIType GetNihiluxElationUIType()
		{
			return ((::RPG::GameCore::NihiluxElationUIType(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ELATIONBATTLEBUFFGROUPVIEWDATA_GETNIHILUXELATIONUITYPE_OFFSET))(this);
		}

		::RPG::Client::TextID get_GroupDesc()
		{
			return ((::RPG::Client::TextID(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ELATIONBATTLEBUFFGROUPVIEWDATA_GET_GROUPDESC_OFFSET))(this);
		}

		::System::Void set_GroupDesc(::RPG::Client::TextID a1)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::TextID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ELATIONBATTLEBUFFGROUPVIEWDATA_SET_GROUPDESC_OFFSET))(this, a1);
		}

		::RPG::Client::TextID get_NihiluxGroupDesc()
		{
			return ((::RPG::Client::TextID(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ELATIONBATTLEBUFFGROUPVIEWDATA_GET_NIHILUXGROUPDESC_OFFSET))(this);
		}

		::System::Void set_NihiluxGroupDesc(::RPG::Client::TextID a1)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::TextID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ELATIONBATTLEBUFFGROUPVIEWDATA_SET_NIHILUXGROUPDESC_OFFSET))(this, a1);
		}

		::System::Collections::Generic::List_1<::RPG::Client::ElationBattleBuffViewData*>* get_BuffViewDatas()
		{
			return ((::System::Collections::Generic::List_1<::RPG::Client::ElationBattleBuffViewData*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ELATIONBATTLEBUFFGROUPVIEWDATA_GET_BUFFVIEWDATAS_OFFSET))(this);
		}

		::System::Void set_BuffViewDatas(::System::Collections::Generic::List_1<::RPG::Client::ElationBattleBuffViewData*>* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Collections::Generic::List_1<::RPG::Client::ElationBattleBuffViewData*>*))((::PBYTE)hIl2Cpp + RPG_CLIENT_ELATIONBATTLEBUFFGROUPVIEWDATA_SET_BUFFVIEWDATAS_OFFSET))(this, a1);
		}

		::System::Int32 get_TotalPoint()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ELATIONBATTLEBUFFGROUPVIEWDATA_GET_TOTALPOINT_OFFSET))(this);
		}

		::System::Single get_ElationEchoPointMax()
		{
			return ((::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ELATIONBATTLEBUFFGROUPVIEWDATA_GET_ELATIONECHOPOINTMAX_OFFSET))(this);
		}

		::System::Boolean get_IsReachMax()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ELATIONBATTLEBUFFGROUPVIEWDATA_GET_ISREACHMAX_OFFSET))(this);
		}

		::System::Boolean get_IsNihiluxElationEchoPointShow()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ELATIONBATTLEBUFFGROUPVIEWDATA_GET_ISNIHILUXELATIONECHOPOINTSHOW_OFFSET))(this);
		}

		::RPG::Client::TextID get_Title()
		{
			return ((::RPG::Client::TextID(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ELATIONBATTLEBUFFGROUPVIEWDATA_GET_TITLE_OFFSET))(this);
		}

		::System::Boolean get__IsNihilux()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ELATIONBATTLEBUFFGROUPVIEWDATA_GET__ISNIHILUX_OFFSET))(this);
		}

	};
}
