#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/MulticastDelegate.h"
#include "unitysdk/UnityEngine/Vector2.h"
namespace System { class AsyncCallback; }
namespace System { class IAsyncResult; }
namespace System { class Object; }

#define RPG_CLIENT_LITTLEGAME_COMICDESSERT_COMICDESSERTCOINFLYTARGETQUERY_BEGININVOKE_OFFSET UNITYSDK_OFFSET(0x1E1400F0)
#define RPG_CLIENT_LITTLEGAME_COMICDESSERT_COMICDESSERTCOINFLYTARGETQUERY_CTOR_OFFSET UNITYSDK_OFFSET(0x1E140070)
#define RPG_CLIENT_LITTLEGAME_COMICDESSERT_COMICDESSERTCOINFLYTARGETQUERY_ENDINVOKE_OFFSET UNITYSDK_OFFSET(0x1E140120)
#define RPG_CLIENT_LITTLEGAME_COMICDESSERT_COMICDESSERTCOINFLYTARGETQUERY_INVOKE_OFFSET UNITYSDK_OFFSET(0x1E1400E0)

namespace RPG::Client::LittleGame::ComicDessert
{
	inline static constexpr unsigned int ComicDessertCoinFlyTargetQuery_TypeDefinitionIndex = 80108;

	class ComicDessertCoinFlyTargetQuery : public ::System::MulticastDelegate
	{
	public:
		::System::Void _ctor(::System::Object* a1, ::System::IntPtr a2)
		{
			return ((::System::Void(*)(::PVOID, ::System::Object*, ::System::IntPtr))((::PBYTE)hIl2Cpp + RPG_CLIENT_LITTLEGAME_COMICDESSERT_COMICDESSERTCOINFLYTARGETQUERY_CTOR_OFFSET))(this, a1, a2);
		}

		::UnityEngine::Vector2 Invoke()
		{
			return ((::UnityEngine::Vector2(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_LITTLEGAME_COMICDESSERT_COMICDESSERTCOINFLYTARGETQUERY_INVOKE_OFFSET))(this);
		}

		::System::IAsyncResult* BeginInvoke(::System::AsyncCallback* a1, ::System::Object* a2)
		{
			return ((::System::IAsyncResult*(*)(::PVOID, ::System::AsyncCallback*, ::System::Object*))((::PBYTE)hIl2Cpp + RPG_CLIENT_LITTLEGAME_COMICDESSERT_COMICDESSERTCOINFLYTARGETQUERY_BEGININVOKE_OFFSET))(this, a1, a2);
		}

		::UnityEngine::Vector2 EndInvoke(::System::IAsyncResult* a1)
		{
			return ((::UnityEngine::Vector2(*)(::PVOID, ::System::IAsyncResult*))((::PBYTE)hIl2Cpp + RPG_CLIENT_LITTLEGAME_COMICDESSERT_COMICDESSERTCOINFLYTARGETQUERY_ENDINVOKE_OFFSET))(this, a1);
		}

	};
}
