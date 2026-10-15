#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/ExeCode.h"
#include "unitysdk/RPG/Client/FailedType.h"
#include "unitysdk/RPG/Client/NotifyType.h"
#include "unitysdk/RPG/Client/ProgressID.h"
#include "unitysdk/RPG/Client/TextID.h"
#include "unitysdk/System/Object.h"
class CDPCDCCGEJN;
class EJLIOMPMHHI;
class HGCEOEHGPPE;
class HIAMBDKHMIJ;
class JIAFOPELMJJ;
class KGPCBBIOGLB;
namespace RPG::Client { template <typename T1, typename T2, typename T3, typename T4> class ActionEvent_4; }
namespace RPG::Client { template <typename T1, typename T2, typename T3> class ActionEvent_3; }
namespace RPG::Client { template <typename T> class ActionEvent_1; }
namespace System { class Action; }
namespace System { class Object; }
namespace System { class String; }
namespace System::Collections::Generic { template <typename T> class List_1; }

namespace RPG::Client
{
	inline static constexpr unsigned int AsyncActionProgress_1_TypeDefinitionIndex = 59542;

	template <typename T>
	class AsyncActionProgress_1 : public ::System::Object
	{
	public:
		::System::Collections::Generic::List_1<::System::Object*>* _BatchItems; // 0x0
		::RPG::Client::ProgressID _ID_k__BackingField; // 0x0
		::JIAFOPELMJJ* _Board; // 0x0
		::System::Int32 _ThreadCount; // 0x0
		::EJLIOMPMHHI* _Queue; // 0x0
		::RPG::Client::TextID ProgressDescTextID; // 0x0
		::System::String* _ProgressDescText; // 0x0
		::RPG::Client::NotifyType ProgressNotifyType; // 0x0
		::RPG::Client::TextID EndDescTextID; // 0x0
		::System::String* _EndDescText; // 0x0
		::RPG::Client::NotifyType EndNotifyType; // 0x0
		::RPG::Client::FailedType FailedType; // 0x0
		::CDPCDCCGEJN* _ActionSystem; // 0x0
		::System::Action* _ActionThread; // 0x0
		::System::Int32 _TotalCount_k__BackingField; // 0x0
		::System::Int32 _SuccessCount_k__BackingField; // 0x0
		::System::Int32 _FailureCount_k__BackingField; // 0x0
		::System::Int32 _FinishCount_k__BackingField; // 0x0
		::RPG::Client::ActionEvent_1<::HGCEOEHGPPE*>* _OnStarting_k__BackingField; // 0x0
		::RPG::Client::ActionEvent_1<::HGCEOEHGPPE*>* _OnSucceed_k__BackingField; // 0x0
		::RPG::Client::ActionEvent_1<::HIAMBDKHMIJ*>* _OnFailed_k__BackingField; // 0x0
		::RPG::Client::ActionEvent_4<::HGCEOEHGPPE*, ::KGPCBBIOGLB*, ::System::Object*, ::RPG::Client::ExeCode>* _OnFinish_k__BackingField; // 0x0
		::RPG::Client::ActionEvent_3<::HGCEOEHGPPE*, ::KGPCBBIOGLB*, ::System::Object*>* _OnItemStarting_k__BackingField; // 0x0
		::RPG::Client::ActionEvent_3<::HGCEOEHGPPE*, ::KGPCBBIOGLB*, ::System::Object*>* _OnItemSucceed_k__BackingField; // 0x0
		::RPG::Client::ActionEvent_1<::HIAMBDKHMIJ*>* _OnItemFailed_k__BackingField; // 0x0
	};
}
