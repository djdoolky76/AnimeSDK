#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/MulticastDelegate.h"

namespace System { class AsyncCallback; }
namespace System { class IAsyncResult; }
namespace System { class Object; }

#define BPCBGBDIFDE_NEOJPFIKEOA_BEGININVOKE_OFFSET UNITYSDK_OFFSET(0x1162F630)
#define BPCBGBDIFDE_NEOJPFIKEOA_ENDINVOKE_OFFSET UNITYSDK_OFFSET(0x1162F6A0)
#define BPCBGBDIFDE_NEOJPFIKEOA_INVOKE_OFFSET UNITYSDK_OFFSET(0x1162F330)
#define BPCBGBDIFDE_NEOJPFIKEOA__CTOR_OFFSET UNITYSDK_OFFSET(0x11606E50)

inline static constexpr unsigned int BPCBGBDIFDE_NEOJPFIKEOA_TypeDefinitionIndex = 78656;

class BPCBGBDIFDE_NEOJPFIKEOA : public ::System::MulticastDelegate
{
public:
	::System::Void _ctor(::System::Object* FABAAKLFDHN, ::System::IntPtr LJEPPLANHIL)
	{
		return ((::System::Void(*)(::PVOID, ::System::Object*, ::System::IntPtr))((::PBYTE)hIl2Cpp + BPCBGBDIFDE_NEOJPFIKEOA__CTOR_OFFSET))(this, FABAAKLFDHN, LJEPPLANHIL);
	}

	::System::Void Invoke(::System::Int32 ABHBKFJKINO)
	{
		return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + BPCBGBDIFDE_NEOJPFIKEOA_INVOKE_OFFSET))(this, ABHBKFJKINO);
	}

	::System::IAsyncResult* BeginInvoke(::System::Int32 ABHBKFJKINO, ::System::AsyncCallback* EJGDHCIBCJH, ::System::Object* FABAAKLFDHN)
	{
		return ((::System::IAsyncResult*(*)(::PVOID, ::System::Int32, ::System::AsyncCallback*, ::System::Object*))((::PBYTE)hIl2Cpp + BPCBGBDIFDE_NEOJPFIKEOA_BEGININVOKE_OFFSET))(this, ABHBKFJKINO, EJGDHCIBCJH, FABAAKLFDHN);
	}

	::System::Void EndInvoke(::System::IAsyncResult* IGAAKDOIPNN)
	{
		return ((::System::Void(*)(::PVOID, ::System::IAsyncResult*))((::PBYTE)hIl2Cpp + BPCBGBDIFDE_NEOJPFIKEOA_ENDINVOKE_OFFSET))(this, IGAAKDOIPNN);
	}
};
