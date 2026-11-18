#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/MulticastDelegate.h"
#include "unitysdk/Cysharp/Threading/Tasks/UniTask.h"
#include "unitysdk/System/Threading/CancellationToken.h"

namespace System { class AsyncCallback; }
namespace System { class IAsyncResult; }
namespace System { class Object; }

#define EADLNAAMFFE_BEGININVOKE_OFFSET UNITYSDK_OFFSET(0xFDCD7D0)
#define EADLNAAMFFE_ENDINVOKE_OFFSET UNITYSDK_OFFSET(0xFDCD840)
#define EADLNAAMFFE_INVOKE_OFFSET UNITYSDK_OFFSET(0xFDCD460)
#define EADLNAAMFFE__CTOR_OFFSET UNITYSDK_OFFSET(0xFDCD450)

inline static constexpr unsigned int EADLNAAMFFE_TypeDefinitionIndex = 81949;

class EADLNAAMFFE : public ::System::MulticastDelegate
{
public:
	::System::Void _ctor(::System::Object* FABAAKLFDHN, ::System::IntPtr LJEPPLANHIL)
	{
		return ((::System::Void(*)(::PVOID, ::System::Object*, ::System::IntPtr))((::PBYTE)hIl2Cpp + EADLNAAMFFE__CTOR_OFFSET))(this, FABAAKLFDHN, LJEPPLANHIL);
	}

	::Cysharp::Threading::Tasks::UniTask Invoke(::System::Threading::CancellationToken CBJFKEAGLGD)
	{
		return ((::Cysharp::Threading::Tasks::UniTask(*)(::PVOID, ::System::Threading::CancellationToken))((::PBYTE)hIl2Cpp + EADLNAAMFFE_INVOKE_OFFSET))(this, CBJFKEAGLGD);
	}

	::System::IAsyncResult* BeginInvoke(::System::Threading::CancellationToken CBJFKEAGLGD, ::System::AsyncCallback* EJGDHCIBCJH, ::System::Object* FABAAKLFDHN)
	{
		return ((::System::IAsyncResult*(*)(::PVOID, ::System::Threading::CancellationToken, ::System::AsyncCallback*, ::System::Object*))((::PBYTE)hIl2Cpp + EADLNAAMFFE_BEGININVOKE_OFFSET))(this, CBJFKEAGLGD, EJGDHCIBCJH, FABAAKLFDHN);
	}

	::Cysharp::Threading::Tasks::UniTask EndInvoke(::System::IAsyncResult* IGAAKDOIPNN)
	{
		return ((::Cysharp::Threading::Tasks::UniTask(*)(::PVOID, ::System::IAsyncResult*))((::PBYTE)hIl2Cpp + EADLNAAMFFE_ENDINVOKE_OFFSET))(this, IGAAKDOIPNN);
	}
};
