#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/MulticastDelegate.h"
#include "unitysdk/Cinemachine/CameraState.h"

namespace System { class AsyncCallback; }
namespace System { class IAsyncResult; }
namespace System { class Object; }

#define DDDAHJHLPJM_LCMBIDJBNDB_BEGININVOKE_OFFSET UNITYSDK_OFFSET(0x13E3E2B0)
#define DDDAHJHLPJM_LCMBIDJBNDB_ENDINVOKE_OFFSET UNITYSDK_OFFSET(0x13E3E340)
#define DDDAHJHLPJM_LCMBIDJBNDB_INVOKE_OFFSET UNITYSDK_OFFSET(0x13E3DF90)
#define DDDAHJHLPJM_LCMBIDJBNDB__CTOR_OFFSET UNITYSDK_OFFSET(0x13E3DF80)

inline static constexpr unsigned int DDDAHJHLPJM_LCMBIDJBNDB_TypeDefinitionIndex = 75997;

class DDDAHJHLPJM_LCMBIDJBNDB : public ::System::MulticastDelegate
{
public:
	::System::Void _ctor(::System::Object* FABAAKLFDHN, ::System::IntPtr LJEPPLANHIL)
	{
		return ((::System::Void(*)(::PVOID, ::System::Object*, ::System::IntPtr))((::PBYTE)hIl2Cpp + DDDAHJHLPJM_LCMBIDJBNDB__CTOR_OFFSET))(this, FABAAKLFDHN, LJEPPLANHIL);
	}

	::System::Void Invoke(::Cinemachine::CameraState& JKBLDFBGBPK, ::System::Single PMNLNNGEIFM)
	{
		return ((::System::Void(*)(::PVOID, ::Cinemachine::CameraState&, ::System::Single))((::PBYTE)hIl2Cpp + DDDAHJHLPJM_LCMBIDJBNDB_INVOKE_OFFSET))(this, JKBLDFBGBPK, PMNLNNGEIFM);
	}

	::System::IAsyncResult* BeginInvoke(::Cinemachine::CameraState& JKBLDFBGBPK, ::System::Single PMNLNNGEIFM, ::System::AsyncCallback* EJGDHCIBCJH, ::System::Object* FABAAKLFDHN)
	{
		return ((::System::IAsyncResult*(*)(::PVOID, ::Cinemachine::CameraState&, ::System::Single, ::System::AsyncCallback*, ::System::Object*))((::PBYTE)hIl2Cpp + DDDAHJHLPJM_LCMBIDJBNDB_BEGININVOKE_OFFSET))(this, JKBLDFBGBPK, PMNLNNGEIFM, EJGDHCIBCJH, FABAAKLFDHN);
	}

	::System::Void EndInvoke(::Cinemachine::CameraState& JKBLDFBGBPK, ::System::IAsyncResult* IGAAKDOIPNN)
	{
		return ((::System::Void(*)(::PVOID, ::Cinemachine::CameraState&, ::System::IAsyncResult*))((::PBYTE)hIl2Cpp + DDDAHJHLPJM_LCMBIDJBNDB_ENDINVOKE_OFFSET))(this, JKBLDFBGBPK, IGAAKDOIPNN);
	}
};
