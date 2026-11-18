#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/MulticastDelegate.h"
#include "unitysdk/OHMNIHKKCMH.h"

namespace System { class AsyncCallback; }
namespace System { class IAsyncResult; }
namespace System { class Object; }

#define IGLACMPAOLK_ODHBFONJFDG_BEGININVOKE_OFFSET UNITYSDK_OFFSET(0x16A9ABE0)
#define IGLACMPAOLK_ODHBFONJFDG_ENDINVOKE_OFFSET UNITYSDK_OFFSET(0x16A9AC50)
#define IGLACMPAOLK_ODHBFONJFDG_INVOKE_OFFSET UNITYSDK_OFFSET(0x16A9A8F0)
#define IGLACMPAOLK_ODHBFONJFDG__CTOR_OFFSET UNITYSDK_OFFSET(0x16A9A8E0)

inline static constexpr unsigned int IGLACMPAOLK_ODHBFONJFDG_TypeDefinitionIndex = 71984;

class IGLACMPAOLK_ODHBFONJFDG : public ::System::MulticastDelegate
{
public:
	::System::Void _ctor(::System::Object* FABAAKLFDHN, ::System::IntPtr LJEPPLANHIL)
	{
		return ((::System::Void(*)(::PVOID, ::System::Object*, ::System::IntPtr))((::PBYTE)hIl2Cpp + IGLACMPAOLK_ODHBFONJFDG__CTOR_OFFSET))(this, FABAAKLFDHN, LJEPPLANHIL);
	}

	::System::Void Invoke(::OHMNIHKKCMH& AAOCANGHBDG)
	{
		return ((::System::Void(*)(::PVOID, ::OHMNIHKKCMH&))((::PBYTE)hIl2Cpp + IGLACMPAOLK_ODHBFONJFDG_INVOKE_OFFSET))(this, AAOCANGHBDG);
	}

	::System::IAsyncResult* BeginInvoke(::OHMNIHKKCMH& AAOCANGHBDG, ::System::AsyncCallback* EJGDHCIBCJH, ::System::Object* FABAAKLFDHN)
	{
		return ((::System::IAsyncResult*(*)(::PVOID, ::OHMNIHKKCMH&, ::System::AsyncCallback*, ::System::Object*))((::PBYTE)hIl2Cpp + IGLACMPAOLK_ODHBFONJFDG_BEGININVOKE_OFFSET))(this, AAOCANGHBDG, EJGDHCIBCJH, FABAAKLFDHN);
	}

	::System::Void EndInvoke(::OHMNIHKKCMH& AAOCANGHBDG, ::System::IAsyncResult* IGAAKDOIPNN)
	{
		return ((::System::Void(*)(::PVOID, ::OHMNIHKKCMH&, ::System::IAsyncResult*))((::PBYTE)hIl2Cpp + IGLACMPAOLK_ODHBFONJFDG_ENDINVOKE_OFFSET))(this, AAOCANGHBDG, IGAAKDOIPNN);
	}
};
