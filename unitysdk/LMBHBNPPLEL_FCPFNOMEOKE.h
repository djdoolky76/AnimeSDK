#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/MulticastDelegate.h"
namespace Entitas { class IEntity; }
namespace RPG::Client::LittleGame::Ability { template <typename T> class ILittleGameAbilityValueGetter_1; }
namespace System { class AsyncCallback; }
namespace System { class IAsyncResult; }
namespace System { class Object; }

#define LMBHBNPPLEL_FCPFNOMEOKE_BEGININVOKE_OFFSET UNITYSDK_OFFSET(0xB77A6A0)
#define LMBHBNPPLEL_FCPFNOMEOKE_CTOR_OFFSET UNITYSDK_OFFSET(0xB77A630)
#define LMBHBNPPLEL_FCPFNOMEOKE_ENDINVOKE_OFFSET UNITYSDK_OFFSET(0xB77A6D0)
#define LMBHBNPPLEL_FCPFNOMEOKE_INVOKE_OFFSET UNITYSDK_OFFSET(0xB77A3D0)

inline static constexpr unsigned int LMBHBNPPLEL_FCPFNOMEOKE_TypeDefinitionIndex = 77391;

	class LMBHBNPPLEL_FCPFNOMEOKE : public ::System::MulticastDelegate
	{
	public:
		::System::Void _ctor(::System::Object* a1, ::System::IntPtr a2)
		{
			return ((::System::Void(*)(::PVOID, ::System::Object*, ::System::IntPtr))((::PBYTE)hIl2Cpp + LMBHBNPPLEL_FCPFNOMEOKE_CTOR_OFFSET))(this, a1, a2);
		}

		::RPG::Client::LittleGame::Ability::ILittleGameAbilityValueGetter_1<::Entitas::IEntity*>* Invoke()
		{
			return ((::RPG::Client::LittleGame::Ability::ILittleGameAbilityValueGetter_1<::Entitas::IEntity*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + LMBHBNPPLEL_FCPFNOMEOKE_INVOKE_OFFSET))(this);
		}

		::System::IAsyncResult* BeginInvoke(::System::AsyncCallback* a1, ::System::Object* a2)
		{
			return ((::System::IAsyncResult*(*)(::PVOID, ::System::AsyncCallback*, ::System::Object*))((::PBYTE)hIl2Cpp + LMBHBNPPLEL_FCPFNOMEOKE_BEGININVOKE_OFFSET))(this, a1, a2);
		}

		::RPG::Client::LittleGame::Ability::ILittleGameAbilityValueGetter_1<::Entitas::IEntity*>* EndInvoke(::System::IAsyncResult* a1)
		{
			return ((::RPG::Client::LittleGame::Ability::ILittleGameAbilityValueGetter_1<::Entitas::IEntity*>*(*)(::PVOID, ::System::IAsyncResult*))((::PBYTE)hIl2Cpp + LMBHBNPPLEL_FCPFNOMEOKE_ENDINVOKE_OFFSET))(this, a1);
		}

	};
