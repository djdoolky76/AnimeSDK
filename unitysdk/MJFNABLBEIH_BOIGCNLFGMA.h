#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/MulticastDelegate.h"

namespace System { class AsyncCallback; }
namespace System { class IAsyncResult; }
namespace System { class Object; }

#define MJFNABLBEIH_BOIGCNLFGMA_BEGININVOKE_OFFSET UNITYSDK_OFFSET(0x17D369B0)
#define MJFNABLBEIH_BOIGCNLFGMA_ENDINVOKE_OFFSET UNITYSDK_OFFSET(0x17D36A40)
#define MJFNABLBEIH_BOIGCNLFGMA_INVOKE_OFFSET UNITYSDK_OFFSET(0x17D366A0)
#define MJFNABLBEIH_BOIGCNLFGMA__CTOR_OFFSET UNITYSDK_OFFSET(0x17D36690)

inline static constexpr unsigned int MJFNABLBEIH_BOIGCNLFGMA_TypeDefinitionIndex = 38800;

class MJFNABLBEIH_BOIGCNLFGMA : public ::System::MulticastDelegate
{
public:
	::System::Void _ctor(::System::Object* FABAAKLFDHN, ::System::IntPtr LJEPPLANHIL)
	{
		return ((::System::Void(*)(::PVOID, ::System::Object*, ::System::IntPtr))((::PBYTE)hIl2Cpp + MJFNABLBEIH_BOIGCNLFGMA__CTOR_OFFSET))(this, FABAAKLFDHN, LJEPPLANHIL);
	}

	::System::Void Invoke(::System::Int32 CKELOFDFEEM, ::System::UInt32 BKLGNCBNEGM)
	{
		return ((::System::Void(*)(::PVOID, ::System::Int32, ::System::UInt32))((::PBYTE)hIl2Cpp + MJFNABLBEIH_BOIGCNLFGMA_INVOKE_OFFSET))(this, CKELOFDFEEM, BKLGNCBNEGM);
	}

	::System::IAsyncResult* BeginInvoke(::System::Int32 CKELOFDFEEM, ::System::UInt32 BKLGNCBNEGM, ::System::AsyncCallback* EJGDHCIBCJH, ::System::Object* FABAAKLFDHN)
	{
		return ((::System::IAsyncResult*(*)(::PVOID, ::System::Int32, ::System::UInt32, ::System::AsyncCallback*, ::System::Object*))((::PBYTE)hIl2Cpp + MJFNABLBEIH_BOIGCNLFGMA_BEGININVOKE_OFFSET))(this, CKELOFDFEEM, BKLGNCBNEGM, EJGDHCIBCJH, FABAAKLFDHN);
	}

	::System::Void EndInvoke(::System::IAsyncResult* IGAAKDOIPNN)
	{
		return ((::System::Void(*)(::PVOID, ::System::IAsyncResult*))((::PBYTE)hIl2Cpp + MJFNABLBEIH_BOIGCNLFGMA_ENDINVOKE_OFFSET))(this, IGAAKDOIPNN);
	}
};
