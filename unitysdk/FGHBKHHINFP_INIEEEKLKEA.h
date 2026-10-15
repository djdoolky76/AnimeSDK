#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/MulticastDelegate.h"
namespace RPG::Client::Promises { class Promise; }
namespace System { class AsyncCallback; }
namespace System { class IAsyncResult; }
namespace System { class Object; }
namespace UnityEngine { class GameObject; }

#define FGHBKHHINFP_INIEEEKLKEA_BEGININVOKE_OFFSET UNITYSDK_OFFSET(0x157569A0)
#define FGHBKHHINFP_INIEEEKLKEA_CTOR_OFFSET UNITYSDK_OFFSET(0x15756920)
#define FGHBKHHINFP_INIEEEKLKEA_ENDINVOKE_OFFSET UNITYSDK_OFFSET(0x157569E0)
#define FGHBKHHINFP_INIEEEKLKEA_INVOKE_OFFSET UNITYSDK_OFFSET(0x15756910)

inline static constexpr unsigned int FGHBKHHINFP_INIEEEKLKEA_TypeDefinitionIndex = 69165;

	class FGHBKHHINFP_INIEEEKLKEA : public ::System::MulticastDelegate
	{
	public:
		::System::Void _ctor(::System::Object* a1, ::System::IntPtr a2)
		{
			return ((::System::Void(*)(::PVOID, ::System::Object*, ::System::IntPtr))((::PBYTE)hIl2Cpp + FGHBKHHINFP_INIEEEKLKEA_CTOR_OFFSET))(this, a1, a2);
		}

		::System::Void Invoke(::UnityEngine::GameObject* a1, ::RPG::Client::Promises::Promise* a2)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::GameObject*, ::RPG::Client::Promises::Promise*))((::PBYTE)hIl2Cpp + FGHBKHHINFP_INIEEEKLKEA_INVOKE_OFFSET))(this, a1, a2);
		}

		::System::IAsyncResult* BeginInvoke(::UnityEngine::GameObject* a1, ::RPG::Client::Promises::Promise* a2, ::System::AsyncCallback* a3, ::System::Object* a4)
		{
			return ((::System::IAsyncResult*(*)(::PVOID, ::UnityEngine::GameObject*, ::RPG::Client::Promises::Promise*, ::System::AsyncCallback*, ::System::Object*))((::PBYTE)hIl2Cpp + FGHBKHHINFP_INIEEEKLKEA_BEGININVOKE_OFFSET))(this, a1, a2, a3, a4);
		}

		::System::Void EndInvoke(::System::IAsyncResult* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::IAsyncResult*))((::PBYTE)hIl2Cpp + FGHBKHHINFP_INIEEEKLKEA_ENDINVOKE_OFFSET))(this, a1);
		}

	};
