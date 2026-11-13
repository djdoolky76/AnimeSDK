#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/MulticastDelegate.h"
namespace RPG::GameCore { class BattlePerformCaptureActor; }
namespace RPG::GameCore { class GameEntity; }
namespace System { class AsyncCallback; }
namespace System { class IAsyncResult; }
namespace System { class Object; }

#define LEILONLGEGA_KOMDKENHMPE_BEGININVOKE_OFFSET UNITYSDK_OFFSET(0x18C36A70)
#define LEILONLGEGA_KOMDKENHMPE_CTOR_OFFSET UNITYSDK_OFFSET(0x18C36980)
#define LEILONLGEGA_KOMDKENHMPE_ENDINVOKE_OFFSET UNITYSDK_OFFSET(0x18C36AB0)
#define LEILONLGEGA_KOMDKENHMPE_INVOKE_OFFSET UNITYSDK_OFFSET(0x18C35FB0)

inline static constexpr unsigned int LEILONLGEGA_KOMDKENHMPE_TypeDefinitionIndex = 58581;

	class LEILONLGEGA_KOMDKENHMPE : public ::System::MulticastDelegate
	{
	public:
		::System::Void _ctor(::System::Object* a1, ::System::IntPtr a2)
		{
			return ((::System::Void(*)(::PVOID, ::System::Object*, ::System::IntPtr))((::PBYTE)hIl2Cpp + LEILONLGEGA_KOMDKENHMPE_CTOR_OFFSET))(this, a1, a2);
		}

		::RPG::GameCore::GameEntity* Invoke(::RPG::GameCore::BattlePerformCaptureActor* a1, ::RPG::GameCore::GameEntity* a2)
		{
			return ((::RPG::GameCore::GameEntity*(*)(::PVOID, ::RPG::GameCore::BattlePerformCaptureActor*, ::RPG::GameCore::GameEntity*))((::PBYTE)hIl2Cpp + LEILONLGEGA_KOMDKENHMPE_INVOKE_OFFSET))(this, a1, a2);
		}

		::System::IAsyncResult* BeginInvoke(::RPG::GameCore::BattlePerformCaptureActor* a1, ::RPG::GameCore::GameEntity* a2, ::System::AsyncCallback* a3, ::System::Object* a4)
		{
			return ((::System::IAsyncResult*(*)(::PVOID, ::RPG::GameCore::BattlePerformCaptureActor*, ::RPG::GameCore::GameEntity*, ::System::AsyncCallback*, ::System::Object*))((::PBYTE)hIl2Cpp + LEILONLGEGA_KOMDKENHMPE_BEGININVOKE_OFFSET))(this, a1, a2, a3, a4);
		}

		::RPG::GameCore::GameEntity* EndInvoke(::System::IAsyncResult* a1)
		{
			return ((::RPG::GameCore::GameEntity*(*)(::PVOID, ::System::IAsyncResult*))((::PBYTE)hIl2Cpp + LEILONLGEGA_KOMDKENHMPE_ENDINVOKE_OFFSET))(this, a1);
		}

	};
