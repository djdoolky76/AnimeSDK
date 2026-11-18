#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/MulticastDelegate.h"
#include "unitysdk/AJJMHOGKDNF.h"

namespace System { class AsyncCallback; }
namespace System { class IAsyncResult; }
namespace System { class Object; }

#define BECPKGINHPD_AEKALCPNIDN_BEGININVOKE_OFFSET UNITYSDK_OFFSET(0x169E7190)
#define BECPKGINHPD_AEKALCPNIDN_ENDINVOKE_OFFSET UNITYSDK_OFFSET(0x169E7220)
#define BECPKGINHPD_AEKALCPNIDN_INVOKE_OFFSET UNITYSDK_OFFSET(0x169E6C90)
#define BECPKGINHPD_AEKALCPNIDN__CTOR_OFFSET UNITYSDK_OFFSET(0x169E7180)

inline static constexpr unsigned int BECPKGINHPD_AEKALCPNIDN_TypeDefinitionIndex = 71110;

class BECPKGINHPD_AEKALCPNIDN : public ::System::MulticastDelegate
{
public:
	::System::Void _ctor(::System::Object* FABAAKLFDHN, ::System::IntPtr LJEPPLANHIL)
	{
		return ((::System::Void(*)(::PVOID, ::System::Object*, ::System::IntPtr))((::PBYTE)hIl2Cpp + BECPKGINHPD_AEKALCPNIDN__CTOR_OFFSET))(this, FABAAKLFDHN, LJEPPLANHIL);
	}

	::System::Void Invoke(::AJJMHOGKDNF EJFGMAHJMHK, ::System::Boolean EMHPEOIKCOL)
	{
		return ((::System::Void(*)(::PVOID, ::AJJMHOGKDNF, ::System::Boolean))((::PBYTE)hIl2Cpp + BECPKGINHPD_AEKALCPNIDN_INVOKE_OFFSET))(this, EJFGMAHJMHK, EMHPEOIKCOL);
	}

	::System::IAsyncResult* BeginInvoke(::AJJMHOGKDNF EJFGMAHJMHK, ::System::Boolean EMHPEOIKCOL, ::System::AsyncCallback* EJGDHCIBCJH, ::System::Object* FABAAKLFDHN)
	{
		return ((::System::IAsyncResult*(*)(::PVOID, ::AJJMHOGKDNF, ::System::Boolean, ::System::AsyncCallback*, ::System::Object*))((::PBYTE)hIl2Cpp + BECPKGINHPD_AEKALCPNIDN_BEGININVOKE_OFFSET))(this, EJFGMAHJMHK, EMHPEOIKCOL, EJGDHCIBCJH, FABAAKLFDHN);
	}

	::System::Void EndInvoke(::System::IAsyncResult* IGAAKDOIPNN)
	{
		return ((::System::Void(*)(::PVOID, ::System::IAsyncResult*))((::PBYTE)hIl2Cpp + BECPKGINHPD_AEKALCPNIDN_ENDINVOKE_OFFSET))(this, IGAAKDOIPNN);
	}
};
