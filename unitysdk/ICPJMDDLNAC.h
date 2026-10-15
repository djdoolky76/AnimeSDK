#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/ComposeItemFailedType.h"
#include "unitysdk/RPG/Client/NotifyType.h"
#include "unitysdk/RPG/Client/SyncCheckItemBase.h"
class LACKPFDHOPE;
namespace RPG::Client { class CheckItemReachWorldLevel; }
namespace RPG::Client { class ComposeItemData; }
namespace System { class Action; }
namespace System::Collections::Generic { template <typename T> class HashSet_1; }

#define ICPJMDDLNAC_CTOR_OFFSET UNITYSDK_OFFSET(0x15E59920)
#define ICPJMDDLNAC_DINHEENGIDO_OFFSET UNITYSDK_OFFSET(0x15E59D80)
#define ICPJMDDLNAC_FILLNOTIFYTYPESTO_OFFSET UNITYSDK_OFFSET(0x15E59990)
#define ICPJMDDLNAC__DOCHECKIMPL_OFFSET UNITYSDK_OFFSET(0x15E59D30)
#define ICPJMDDLNAC__SUBSCRIBECUSTOMEVENT_OFFSET UNITYSDK_OFFSET(0x15E59AB0)
#define ICPJMDDLNAC__UNSUBSCRIBECUSTOMEVENT_OFFSET UNITYSDK_OFFSET(0x15E59BF0)

inline static constexpr unsigned int ICPJMDDLNAC_TypeDefinitionIndex = 65747;

	class ICPJMDDLNAC : public ::RPG::Client::SyncCheckItemBase
	{
	public:
		::RPG::Client::ComposeItemData* BFGABEFBIEO; // 0x10
		::RPG::Client::CheckItemReachWorldLevel* BFPMBBCCHNO; // 0x18
		::LACKPFDHOPE* HEBDLOLLNPK; // 0x20
		::System::Void _ctor(::RPG::Client::ComposeItemData* a1, ::LACKPFDHOPE* a2)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::ComposeItemData*, ::LACKPFDHOPE*))((::PBYTE)hIl2Cpp + ICPJMDDLNAC_CTOR_OFFSET))(this, a1, a2);
		}

		::System::Void FillNotifyTypesTo(::System::Collections::Generic::HashSet_1<::RPG::Client::NotifyType>* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Collections::Generic::HashSet_1<::RPG::Client::NotifyType>*))((::PBYTE)hIl2Cpp + ICPJMDDLNAC_FILLNOTIFYTYPESTO_OFFSET))(this, a1);
		}

		::System::Void _SubscribeCustomEvent(::System::Action* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Action*))((::PBYTE)hIl2Cpp + ICPJMDDLNAC__SUBSCRIBECUSTOMEVENT_OFFSET))(this, a1);
		}

		::System::Void _UnsubscribeCustomEvent(::System::Action* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Action*))((::PBYTE)hIl2Cpp + ICPJMDDLNAC__UNSUBSCRIBECUSTOMEVENT_OFFSET))(this, a1);
		}

		::System::Boolean _DoCheckImpl()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + ICPJMDDLNAC__DOCHECKIMPL_OFFSET))(this);
		}

		::RPG::Client::ComposeItemFailedType DINHEENGIDO()
		{
			return ((::RPG::Client::ComposeItemFailedType(*)(::PVOID))((::PBYTE)hIl2Cpp + ICPJMDDLNAC_DINHEENGIDO_OFFSET))(this);
		}

	};
