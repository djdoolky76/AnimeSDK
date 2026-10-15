#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/ExpeditionBattleFlowStateType.h"
#include "unitysdk/System/Object.h"
class ENMOCEFKBFI;
namespace RPG::GameCore { class BaseExpeditionBattleAction; }
namespace System::Collections::Generic { template <typename T> class IReadOnlyList_1; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define BDAFNKJPDFD_AFKAFAPJLBB_OFFSET UNITYSDK_OFFSET(0x162EC460)
#define BDAFNKJPDFD_CTOR_OFFSET UNITYSDK_OFFSET(0x162EBEA0)
#define BDAFNKJPDFD_EPODAGHCEKF_OFFSET UNITYSDK_OFFSET(0x162EC530)
#define BDAFNKJPDFD_GET_STAGETYPE_OFFSET UNITYSDK_OFFSET(0x162EBDB0)
#define BDAFNKJPDFD_HDEJDHKBCPN_OFFSET UNITYSDK_OFFSET(0x162EC4C0)
#define BDAFNKJPDFD_IJJMIMJMNBN_OFFSET UNITYSDK_OFFSET(0x162EBDC0)

	class BDAFNKJPDFD : public ::System::Object
	{
	public:
		::ENMOCEFKBFI* CGHHNAEKHIO; // 0x10
		::System::Collections::Generic::List_1<::RPG::GameCore::BaseExpeditionBattleAction*>* LGMJPAADBME; // 0x18
		::RPG::GameCore::ExpeditionBattleFlowStateType _StageType_k__BackingField; // 0x20
		::System::Void _ctor(::RPG::GameCore::ExpeditionBattleFlowStateType a1, ::System::Collections::Generic::IReadOnlyList_1<::RPG::GameCore::BaseExpeditionBattleAction*>* a2)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::ExpeditionBattleFlowStateType, ::System::Collections::Generic::IReadOnlyList_1<::RPG::GameCore::BaseExpeditionBattleAction*>*))((::PBYTE)hIl2Cpp + BDAFNKJPDFD_CTOR_OFFSET))(this, a1, a2);
		}

		::RPG::GameCore::ExpeditionBattleFlowStateType get_StageType()
		{
			return ((::RPG::GameCore::ExpeditionBattleFlowStateType(*)(::PVOID))((::PBYTE)hIl2Cpp + BDAFNKJPDFD_GET_STAGETYPE_OFFSET))(this);
		}

		::System::Boolean IJJMIMJMNBN()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + BDAFNKJPDFD_IJJMIMJMNBN_OFFSET))(this);
		}

		::System::Boolean AFKAFAPJLBB(::RPG::GameCore::BaseExpeditionBattleAction* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::RPG::GameCore::BaseExpeditionBattleAction*))((::PBYTE)hIl2Cpp + BDAFNKJPDFD_AFKAFAPJLBB_OFFSET))(this, a1);
		}

		::System::Void HDEJDHKBCPN()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + BDAFNKJPDFD_HDEJDHKBCPN_OFFSET))(this);
		}

		::System::Boolean EPODAGHCEKF()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + BDAFNKJPDFD_EPODAGHCEKF_OFFSET))(this);
		}

	};
