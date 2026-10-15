#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/POEELJNJAAO.h"
#include "unitysdk/RPG/Client/PacketSendResult_1.h"
#include "unitysdk/System/Threading/CancellationToken.h"
class PGNFCEBLDHJ;
namespace Cysharp::Threading::Tasks { class AutoResetUniTaskCompletionSource; }
namespace System { class Object; }
namespace System::Collections::Generic { template <typename T> class Queue_1; }

namespace RPG::Client
{
	inline static constexpr unsigned int PendingRspEntry_1_TypeDefinitionIndex = 69407;

	template <typename T>
	class PendingRspEntry_1 : public ::POEELJNJAAO
	{
	public:
		::PGNFCEBLDHJ* _Owner; // 0x0
		::System::UInt32 _PacketId; // 0x0
		::System::UInt16 _ReqCmdID; // 0x0
		::Cysharp::Threading::Tasks::AutoResetUniTaskCompletionSource* _Source; // 0x0
		::System::Collections::Generic::Queue_1<::System::Object*>* _NotifyBuffer; // 0x0
		::System::Threading::CancellationToken _AwaitCt; // 0x0
		static ::System::UInt16* StaticGet_s_RspCmdID()
		{
			return (::System::UInt16*)UnitySDK::FromName("RPG.Client", "PendingRspEntry`1")->GetStaticField(0x0);
		}

		// static const ::System::Object _DefaultTimeoutMs; // 0x0
	};
}
