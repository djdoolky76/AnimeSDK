#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/MulticastDelegate.h"
#include "unitysdk/Cinemachine/CameraState.h"

namespace System { class AsyncCallback; }
namespace System { class IAsyncResult; }
namespace System { class Object; }

#define DDDAHJHLPJM_IPCEKPELHJO_BEGININVOKE_OFFSET UNITYSDK_OFFSET(0x1A1D0C00)
#define DDDAHJHLPJM_IPCEKPELHJO_ENDINVOKE_OFFSET UNITYSDK_OFFSET(0x1A1D0C90)
#define DDDAHJHLPJM_IPCEKPELHJO_INVOKE_OFFSET UNITYSDK_OFFSET(0x1A1D08E0)
#define DDDAHJHLPJM_IPCEKPELHJO__CTOR_OFFSET UNITYSDK_OFFSET(0x1A1D08D0)

inline static constexpr unsigned int DDDAHJHLPJM_IPCEKPELHJO_TypeDefinitionIndex = 75996;

class DDDAHJHLPJM_IPCEKPELHJO : public ::System::MulticastDelegate
{
public:
	::System::Void _ctor(::System::Object* FABAAKLFDHN, ::System::IntPtr LJEPPLANHIL)
	{
		return ((::System::Void(*)(::PVOID, ::System::Object*, ::System::IntPtr))((::PBYTE)hIl2Cpp + DDDAHJHLPJM_IPCEKPELHJO__CTOR_OFFSET))(this, FABAAKLFDHN, LJEPPLANHIL);
	}

	::System::Void Invoke(::Cinemachine::CameraState& JKBLDFBGBPK, ::System::Single PMNLNNGEIFM)
	{
		return ((::System::Void(*)(::PVOID, ::Cinemachine::CameraState&, ::System::Single))((::PBYTE)hIl2Cpp + DDDAHJHLPJM_IPCEKPELHJO_INVOKE_OFFSET))(this, JKBLDFBGBPK, PMNLNNGEIFM);
	}

	::System::IAsyncResult* BeginInvoke(::Cinemachine::CameraState& JKBLDFBGBPK, ::System::Single PMNLNNGEIFM, ::System::AsyncCallback* EJGDHCIBCJH, ::System::Object* FABAAKLFDHN)
	{
		return ((::System::IAsyncResult*(*)(::PVOID, ::Cinemachine::CameraState&, ::System::Single, ::System::AsyncCallback*, ::System::Object*))((::PBYTE)hIl2Cpp + DDDAHJHLPJM_IPCEKPELHJO_BEGININVOKE_OFFSET))(this, JKBLDFBGBPK, PMNLNNGEIFM, EJGDHCIBCJH, FABAAKLFDHN);
	}

	::System::Void EndInvoke(::Cinemachine::CameraState& JKBLDFBGBPK, ::System::IAsyncResult* IGAAKDOIPNN)
	{
		return ((::System::Void(*)(::PVOID, ::Cinemachine::CameraState&, ::System::IAsyncResult*))((::PBYTE)hIl2Cpp + DDDAHJHLPJM_IPCEKPELHJO_ENDINVOKE_OFFSET))(this, JKBLDFBGBPK, IGAAKDOIPNN);
	}
};
