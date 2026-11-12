#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/MulticastDelegate.h"
#include "unitysdk/UnityEngine/Vector2.h"
namespace System { class AsyncCallback; }
namespace System { class IAsyncResult; }
namespace System { class Object; }

#define RPG_CLIENT_LITTLEGAME_COMICDESSERT_COMICDESSERTORDERBUBBLESERVEAREAQUERY_BEGININVOKE_OFFSET UNITYSDK_OFFSET(0xDE89980)
#define RPG_CLIENT_LITTLEGAME_COMICDESSERT_COMICDESSERTORDERBUBBLESERVEAREAQUERY_CTOR_OFFSET UNITYSDK_OFFSET(0xDE89900)
#define RPG_CLIENT_LITTLEGAME_COMICDESSERT_COMICDESSERTORDERBUBBLESERVEAREAQUERY_ENDINVOKE_OFFSET UNITYSDK_OFFSET(0xDE899D0)
#define RPG_CLIENT_LITTLEGAME_COMICDESSERT_COMICDESSERTORDERBUBBLESERVEAREAQUERY_INVOKE_OFFSET UNITYSDK_OFFSET(0xDE89970)

namespace RPG::Client::LittleGame::ComicDessert
{
	inline static constexpr unsigned int ComicDessertOrderBubbleServeAreaQuery_TypeDefinitionIndex = 80127;

	class ComicDessertOrderBubbleServeAreaQuery : public ::System::MulticastDelegate
	{
	public:
		::System::Void _ctor(::System::Object* a1, ::System::IntPtr a2)
		{
			return ((::System::Void(*)(::PVOID, ::System::Object*, ::System::IntPtr))((::PBYTE)hIl2Cpp + RPG_CLIENT_LITTLEGAME_COMICDESSERT_COMICDESSERTORDERBUBBLESERVEAREAQUERY_CTOR_OFFSET))(this, a1, a2);
		}

		::System::Int32 Invoke(::UnityEngine::Vector2 a1)
		{
			return ((::System::Int32(*)(::PVOID, ::UnityEngine::Vector2))((::PBYTE)hIl2Cpp + RPG_CLIENT_LITTLEGAME_COMICDESSERT_COMICDESSERTORDERBUBBLESERVEAREAQUERY_INVOKE_OFFSET))(this, a1);
		}

		::System::IAsyncResult* BeginInvoke(::UnityEngine::Vector2 a1, ::System::AsyncCallback* a2, ::System::Object* a3)
		{
			return ((::System::IAsyncResult*(*)(::PVOID, ::UnityEngine::Vector2, ::System::AsyncCallback*, ::System::Object*))((::PBYTE)hIl2Cpp + RPG_CLIENT_LITTLEGAME_COMICDESSERT_COMICDESSERTORDERBUBBLESERVEAREAQUERY_BEGININVOKE_OFFSET))(this, a1, a2, a3);
		}

		::System::Int32 EndInvoke(::System::IAsyncResult* a1)
		{
			return ((::System::Int32(*)(::PVOID, ::System::IAsyncResult*))((::PBYTE)hIl2Cpp + RPG_CLIENT_LITTLEGAME_COMICDESSERT_COMICDESSERTORDERBUBBLESERVEAREAQUERY_ENDINVOKE_OFFSET))(this, a1);
		}

	};
}
