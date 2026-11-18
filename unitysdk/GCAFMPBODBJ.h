#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/MulticastDelegate.h"

namespace System { class AsyncCallback; }
namespace System { class IAsyncResult; }
namespace System { class Object; }

#define GCAFMPBODBJ_BEGININVOKE_OFFSET UNITYSDK_OFFSET(0x132467A0)
#define GCAFMPBODBJ_ENDINVOKE_OFFSET UNITYSDK_OFFSET(0x13246810)
#define GCAFMPBODBJ_INVOKE_OFFSET UNITYSDK_OFFSET(0x132464A0)
#define GCAFMPBODBJ__CTOR_OFFSET UNITYSDK_OFFSET(0x13246490)

inline static constexpr unsigned int GCAFMPBODBJ_TypeDefinitionIndex = 41919;

class GCAFMPBODBJ : public ::System::MulticastDelegate
{
public:
	::System::Void _ctor(::System::Object* FABAAKLFDHN, ::System::IntPtr LJEPPLANHIL)
	{
		return ((::System::Void(*)(::PVOID, ::System::Object*, ::System::IntPtr))((::PBYTE)hIl2Cpp + GCAFMPBODBJ__CTOR_OFFSET))(this, FABAAKLFDHN, LJEPPLANHIL);
	}

	::System::Void Invoke(::System::UInt32 GFOPLDDFDIA)
	{
		return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + GCAFMPBODBJ_INVOKE_OFFSET))(this, GFOPLDDFDIA);
	}

	::System::IAsyncResult* BeginInvoke(::System::UInt32 GFOPLDDFDIA, ::System::AsyncCallback* EJGDHCIBCJH, ::System::Object* FABAAKLFDHN)
	{
		return ((::System::IAsyncResult*(*)(::PVOID, ::System::UInt32, ::System::AsyncCallback*, ::System::Object*))((::PBYTE)hIl2Cpp + GCAFMPBODBJ_BEGININVOKE_OFFSET))(this, GFOPLDDFDIA, EJGDHCIBCJH, FABAAKLFDHN);
	}

	::System::Void EndInvoke(::System::IAsyncResult* IGAAKDOIPNN)
	{
		return ((::System::Void(*)(::PVOID, ::System::IAsyncResult*))((::PBYTE)hIl2Cpp + GCAFMPBODBJ_ENDINVOKE_OFFSET))(this, IGAAKDOIPNN);
	}
};
