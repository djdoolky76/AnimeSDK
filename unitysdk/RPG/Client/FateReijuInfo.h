#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class JCMKKEKMHNC;
class KAOPGJBGEBF;
class OMGHALDIJHL;
namespace Google::Protobuf::Collections { template <typename T> class RepeatedField_1; }
namespace RPG::Client { class FateReijuDataItem; }
namespace RPG::Client { class FateReijuSelectAction; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define RPG_CLIENT_FATEREIJUINFO_ADDREIJU_OFFSET UNITYSDK_OFFSET(0x1DB93FF0)
#define RPG_CLIENT_FATEREIJUINFO_CTOR_OFFSET UNITYSDK_OFFSET(0x1DB743E0)
#define RPG_CLIENT_FATEREIJUINFO_DISPOSE_OFFSET UNITYSDK_OFFSET(0x1DB95F10)
#define RPG_CLIENT_FATEREIJUINFO_GET_ALLREIJUS_OFFSET UNITYSDK_OFFSET(0x1DB96240)
#define RPG_CLIENT_FATEREIJUINFO_GET_SELECTACTION_OFFSET UNITYSDK_OFFSET(0x1DB96280)
#define RPG_CLIENT_FATEREIJUINFO_ISREROLLUNLOCK_OFFSET UNITYSDK_OFFSET(0x1DB96150)
#define RPG_CLIENT_FATEREIJUINFO_SYNCPENDINGREIJUSELECTACTION_OFFSET UNITYSDK_OFFSET(0x1DB943B0)
#define RPG_CLIENT_FATEREIJUINFO_SYNC_OFFSET UNITYSDK_OFFSET(0x1DB753A0)

namespace RPG::Client
{
	inline static constexpr unsigned int FateReijuInfo_TypeDefinitionIndex = 65564;

	class FateReijuInfo : public ::System::Object
	{
	public:
		::RPG::Client::FateReijuSelectAction* _SelectAction; // 0x10
		::System::Collections::Generic::List_1<::RPG::Client::FateReijuDataItem*>* _OwnedReijus; // 0x18
		::OMGHALDIJHL* _ParamProxyFactory; // 0x20
		::System::Void _ctor(::OMGHALDIJHL* a1)
		{
			return ((::System::Void(*)(::PVOID, ::OMGHALDIJHL*))((::PBYTE)hIl2Cpp + RPG_CLIENT_FATEREIJUINFO_CTOR_OFFSET))(this, a1);
		}

		::System::Void Dispose()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_FATEREIJUINFO_DISPOSE_OFFSET))(this);
		}

		::System::Void Sync(::Google::Protobuf::Collections::RepeatedField_1<::KAOPGJBGEBF*>* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Google::Protobuf::Collections::RepeatedField_1<::KAOPGJBGEBF*>*))((::PBYTE)hIl2Cpp + RPG_CLIENT_FATEREIJUINFO_SYNC_OFFSET))(this, a1);
		}

		::System::Void SyncPendingReijuSelectAction(::System::UInt32 a1, ::JCMKKEKMHNC* a2)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32, ::JCMKKEKMHNC*))((::PBYTE)hIl2Cpp + RPG_CLIENT_FATEREIJUINFO_SYNCPENDINGREIJUSELECTACTION_OFFSET))(this, a1, a2);
		}

		::System::Void AddReiju(::KAOPGJBGEBF* a1)
		{
			return ((::System::Void(*)(::PVOID, ::KAOPGJBGEBF*))((::PBYTE)hIl2Cpp + RPG_CLIENT_FATEREIJUINFO_ADDREIJU_OFFSET))(this, a1);
		}

		static ::System::Boolean IsRerollUnlock(::System::UInt32 a1)
		{
			return ((::System::Boolean(*)(::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_FATEREIJUINFO_ISREROLLUNLOCK_OFFSET))(a1);
		}

		::System::Collections::Generic::List_1<::RPG::Client::FateReijuDataItem*>* get_AllReijus()
		{
			return ((::System::Collections::Generic::List_1<::RPG::Client::FateReijuDataItem*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_FATEREIJUINFO_GET_ALLREIJUS_OFFSET))(this);
		}

		::RPG::Client::FateReijuSelectAction* get_SelectAction()
		{
			return ((::RPG::Client::FateReijuSelectAction*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_FATEREIJUINFO_GET_SELECTACTION_OFFSET))(this);
		}

	};
}
