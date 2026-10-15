#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/MulticastDelegate.h"
#include "unitysdk/PDHLJJCMEDJ.h"
namespace RPG::Client { class MonoAttackHitBox; }
namespace System { class AsyncCallback; }
namespace System { class IAsyncResult; }
namespace System { class Object; }

#define RPG_CLIENT_MONOATTACKHITBOX_JHIPMDABILM_BEGININVOKE_OFFSET UNITYSDK_OFFSET(0xD730800)
#define RPG_CLIENT_MONOATTACKHITBOX_JHIPMDABILM_CTOR_OFFSET UNITYSDK_OFFSET(0xD730710)
#define RPG_CLIENT_MONOATTACKHITBOX_JHIPMDABILM_ENDINVOKE_OFFSET UNITYSDK_OFFSET(0xD730880)
#define RPG_CLIENT_MONOATTACKHITBOX_JHIPMDABILM_INVOKE_OFFSET UNITYSDK_OFFSET(0xD730620)

namespace RPG::Client
{
	inline static constexpr unsigned int MonoAttackHitBox_JHIPMDABILM_TypeDefinitionIndex = 68530;

	class MonoAttackHitBox_JHIPMDABILM : public ::System::MulticastDelegate
	{
	public:
		::System::Void _ctor(::System::Object* a1, ::System::IntPtr a2)
		{
			return ((::System::Void(*)(::PVOID, ::System::Object*, ::System::IntPtr))((::PBYTE)hIl2Cpp + RPG_CLIENT_MONOATTACKHITBOX_JHIPMDABILM_CTOR_OFFSET))(this, a1, a2);
		}

		::System::Void Invoke(::RPG::Client::MonoAttackHitBox* a1, ::PDHLJJCMEDJ a2)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::MonoAttackHitBox*, ::PDHLJJCMEDJ))((::PBYTE)hIl2Cpp + RPG_CLIENT_MONOATTACKHITBOX_JHIPMDABILM_INVOKE_OFFSET))(this, a1, a2);
		}

		::System::IAsyncResult* BeginInvoke(::RPG::Client::MonoAttackHitBox* a1, ::PDHLJJCMEDJ a2, ::System::AsyncCallback* a3, ::System::Object* a4)
		{
			return ((::System::IAsyncResult*(*)(::PVOID, ::RPG::Client::MonoAttackHitBox*, ::PDHLJJCMEDJ, ::System::AsyncCallback*, ::System::Object*))((::PBYTE)hIl2Cpp + RPG_CLIENT_MONOATTACKHITBOX_JHIPMDABILM_BEGININVOKE_OFFSET))(this, a1, a2, a3, a4);
		}

		::System::Void EndInvoke(::System::IAsyncResult* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::IAsyncResult*))((::PBYTE)hIl2Cpp + RPG_CLIENT_MONOATTACKHITBOX_JHIPMDABILM_ENDINVOKE_OFFSET))(this, a1);
		}

	};
}
