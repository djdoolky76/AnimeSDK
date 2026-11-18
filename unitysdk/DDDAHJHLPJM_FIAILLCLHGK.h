#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/MulticastDelegate.h"
#include "unitysdk/Cinemachine/CameraState.h"

namespace System { class AsyncCallback; }
namespace System { class IAsyncResult; }
namespace System { class Object; }

#define DDDAHJHLPJM_FIAILLCLHGK_BEGININVOKE_OFFSET UNITYSDK_OFFSET(0x153621C0)
#define DDDAHJHLPJM_FIAILLCLHGK_ENDINVOKE_OFFSET UNITYSDK_OFFSET(0x15362250)
#define DDDAHJHLPJM_FIAILLCLHGK_INVOKE_OFFSET UNITYSDK_OFFSET(0x15361EA0)
#define DDDAHJHLPJM_FIAILLCLHGK__CTOR_OFFSET UNITYSDK_OFFSET(0x15361E90)

inline static constexpr unsigned int DDDAHJHLPJM_FIAILLCLHGK_TypeDefinitionIndex = 75995;

class DDDAHJHLPJM_FIAILLCLHGK : public ::System::MulticastDelegate
{
public:
	::System::Void _ctor(::System::Object* FABAAKLFDHN, ::System::IntPtr LJEPPLANHIL)
	{
		return ((::System::Void(*)(::PVOID, ::System::Object*, ::System::IntPtr))((::PBYTE)hIl2Cpp + DDDAHJHLPJM_FIAILLCLHGK__CTOR_OFFSET))(this, FABAAKLFDHN, LJEPPLANHIL);
	}

	::System::Void Invoke(::Cinemachine::CameraState& JKBLDFBGBPK, ::System::Single PMNLNNGEIFM)
	{
		return ((::System::Void(*)(::PVOID, ::Cinemachine::CameraState&, ::System::Single))((::PBYTE)hIl2Cpp + DDDAHJHLPJM_FIAILLCLHGK_INVOKE_OFFSET))(this, JKBLDFBGBPK, PMNLNNGEIFM);
	}

	::System::IAsyncResult* BeginInvoke(::Cinemachine::CameraState& JKBLDFBGBPK, ::System::Single PMNLNNGEIFM, ::System::AsyncCallback* EJGDHCIBCJH, ::System::Object* FABAAKLFDHN)
	{
		return ((::System::IAsyncResult*(*)(::PVOID, ::Cinemachine::CameraState&, ::System::Single, ::System::AsyncCallback*, ::System::Object*))((::PBYTE)hIl2Cpp + DDDAHJHLPJM_FIAILLCLHGK_BEGININVOKE_OFFSET))(this, JKBLDFBGBPK, PMNLNNGEIFM, EJGDHCIBCJH, FABAAKLFDHN);
	}

	::System::Void EndInvoke(::Cinemachine::CameraState& JKBLDFBGBPK, ::System::IAsyncResult* IGAAKDOIPNN)
	{
		return ((::System::Void(*)(::PVOID, ::Cinemachine::CameraState&, ::System::IAsyncResult*))((::PBYTE)hIl2Cpp + DDDAHJHLPJM_FIAILLCLHGK_ENDINVOKE_OFFSET))(this, JKBLDFBGBPK, IGAAKDOIPNN);
	}
};
