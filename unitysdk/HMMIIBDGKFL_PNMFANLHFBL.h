#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/MulticastDelegate.h"

namespace System { class AsyncCallback; }
namespace System { class IAsyncResult; }
namespace System { class Object; }
namespace UnityEngine::Playables { class PlayableDirector; }

#define HMMIIBDGKFL_PNMFANLHFBL_BEGININVOKE_OFFSET UNITYSDK_OFFSET(0x140C1670)
#define HMMIIBDGKFL_PNMFANLHFBL_ENDINVOKE_OFFSET UNITYSDK_OFFSET(0x140C16A0)
#define HMMIIBDGKFL_PNMFANLHFBL_INVOKE_OFFSET UNITYSDK_OFFSET(0x140C13D0)
#define HMMIIBDGKFL_PNMFANLHFBL__CTOR_OFFSET UNITYSDK_OFFSET(0x140C13C0)

inline static constexpr unsigned int HMMIIBDGKFL_PNMFANLHFBL_TypeDefinitionIndex = 50275;

class HMMIIBDGKFL_PNMFANLHFBL : public ::System::MulticastDelegate
{
public:
	::System::Void _ctor(::System::Object* FABAAKLFDHN, ::System::IntPtr LJEPPLANHIL)
	{
		return ((::System::Void(*)(::PVOID, ::System::Object*, ::System::IntPtr))((::PBYTE)hIl2Cpp + HMMIIBDGKFL_PNMFANLHFBL__CTOR_OFFSET))(this, FABAAKLFDHN, LJEPPLANHIL);
	}

	::UnityEngine::Playables::PlayableDirector* Invoke()
	{
		return ((::UnityEngine::Playables::PlayableDirector*(*)(::PVOID))((::PBYTE)hIl2Cpp + HMMIIBDGKFL_PNMFANLHFBL_INVOKE_OFFSET))(this);
	}

	::System::IAsyncResult* BeginInvoke(::System::AsyncCallback* EJGDHCIBCJH, ::System::Object* FABAAKLFDHN)
	{
		return ((::System::IAsyncResult*(*)(::PVOID, ::System::AsyncCallback*, ::System::Object*))((::PBYTE)hIl2Cpp + HMMIIBDGKFL_PNMFANLHFBL_BEGININVOKE_OFFSET))(this, EJGDHCIBCJH, FABAAKLFDHN);
	}

	::UnityEngine::Playables::PlayableDirector* EndInvoke(::System::IAsyncResult* IGAAKDOIPNN)
	{
		return ((::UnityEngine::Playables::PlayableDirector*(*)(::PVOID, ::System::IAsyncResult*))((::PBYTE)hIl2Cpp + HMMIIBDGKFL_PNMFANLHFBL_ENDINVOKE_OFFSET))(this, IGAAKDOIPNN);
	}
};
