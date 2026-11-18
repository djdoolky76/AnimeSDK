#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/MulticastDelegate.h"

class PNHPNNENFLI_CCNMNOOOFCL;
namespace System { class AsyncCallback; }
namespace System { class IAsyncResult; }
namespace System { class Object; }
namespace UnityEngine { class GameObject; }

#define PNHPNNENFLI_MKAGIJIAIEG_BEGININVOKE_OFFSET UNITYSDK_OFFSET(0x13727F20)
#define PNHPNNENFLI_MKAGIJIAIEG_ENDINVOKE_OFFSET UNITYSDK_OFFSET(0x13727F60)
#define PNHPNNENFLI_MKAGIJIAIEG_INVOKE_OFFSET UNITYSDK_OFFSET(0x13727980)
#define PNHPNNENFLI_MKAGIJIAIEG__CTOR_OFFSET UNITYSDK_OFFSET(0x13727970)

inline static constexpr unsigned int PNHPNNENFLI_MKAGIJIAIEG_TypeDefinitionIndex = 67266;

class PNHPNNENFLI_MKAGIJIAIEG : public ::System::MulticastDelegate
{
public:
	::System::Void _ctor(::System::Object* FABAAKLFDHN, ::System::IntPtr LJEPPLANHIL)
	{
		return ((::System::Void(*)(::PVOID, ::System::Object*, ::System::IntPtr))((::PBYTE)hIl2Cpp + PNHPNNENFLI_MKAGIJIAIEG__CTOR_OFFSET))(this, FABAAKLFDHN, LJEPPLANHIL);
	}

	::System::Void Invoke(::UnityEngine::GameObject* JEIDPPCEHLD, ::PNHPNNENFLI_CCNMNOOOFCL* HPPNDMPGOCH)
	{
		return ((::System::Void(*)(::PVOID, ::UnityEngine::GameObject*, ::PNHPNNENFLI_CCNMNOOOFCL*))((::PBYTE)hIl2Cpp + PNHPNNENFLI_MKAGIJIAIEG_INVOKE_OFFSET))(this, JEIDPPCEHLD, HPPNDMPGOCH);
	}

	::System::IAsyncResult* BeginInvoke(::UnityEngine::GameObject* JEIDPPCEHLD, ::PNHPNNENFLI_CCNMNOOOFCL* HPPNDMPGOCH, ::System::AsyncCallback* EJGDHCIBCJH, ::System::Object* FABAAKLFDHN)
	{
		return ((::System::IAsyncResult*(*)(::PVOID, ::UnityEngine::GameObject*, ::PNHPNNENFLI_CCNMNOOOFCL*, ::System::AsyncCallback*, ::System::Object*))((::PBYTE)hIl2Cpp + PNHPNNENFLI_MKAGIJIAIEG_BEGININVOKE_OFFSET))(this, JEIDPPCEHLD, HPPNDMPGOCH, EJGDHCIBCJH, FABAAKLFDHN);
	}

	::System::Void EndInvoke(::System::IAsyncResult* IGAAKDOIPNN)
	{
		return ((::System::Void(*)(::PVOID, ::System::IAsyncResult*))((::PBYTE)hIl2Cpp + PNHPNNENFLI_MKAGIJIAIEG_ENDINVOKE_OFFSET))(this, IGAAKDOIPNN);
	}
};
