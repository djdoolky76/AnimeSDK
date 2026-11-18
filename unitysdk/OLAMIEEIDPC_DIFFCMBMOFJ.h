#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/MulticastDelegate.h"

class LGHCIFIPDKP;
namespace System { class AsyncCallback; }
namespace System { class IAsyncResult; }
namespace System { class Object; }

#define OLAMIEEIDPC_DIFFCMBMOFJ_BEGININVOKE_OFFSET UNITYSDK_OFFSET(0xFB96240)
#define OLAMIEEIDPC_DIFFCMBMOFJ_ENDINVOKE_OFFSET UNITYSDK_OFFSET(0xFB96270)
#define OLAMIEEIDPC_DIFFCMBMOFJ_INVOKE_OFFSET UNITYSDK_OFFSET(0xFB95FA0)
#define OLAMIEEIDPC_DIFFCMBMOFJ__CTOR_OFFSET UNITYSDK_OFFSET(0xFB95F90)

inline static constexpr unsigned int OLAMIEEIDPC_DIFFCMBMOFJ_TypeDefinitionIndex = 75216;

class OLAMIEEIDPC_DIFFCMBMOFJ : public ::System::MulticastDelegate
{
public:
	::System::Void _ctor(::System::Object* FABAAKLFDHN, ::System::IntPtr LJEPPLANHIL)
	{
		return ((::System::Void(*)(::PVOID, ::System::Object*, ::System::IntPtr))((::PBYTE)hIl2Cpp + OLAMIEEIDPC_DIFFCMBMOFJ__CTOR_OFFSET))(this, FABAAKLFDHN, LJEPPLANHIL);
	}

	::LGHCIFIPDKP* Invoke()
	{
		return ((::LGHCIFIPDKP*(*)(::PVOID))((::PBYTE)hIl2Cpp + OLAMIEEIDPC_DIFFCMBMOFJ_INVOKE_OFFSET))(this);
	}

	::System::IAsyncResult* BeginInvoke(::System::AsyncCallback* EJGDHCIBCJH, ::System::Object* FABAAKLFDHN)
	{
		return ((::System::IAsyncResult*(*)(::PVOID, ::System::AsyncCallback*, ::System::Object*))((::PBYTE)hIl2Cpp + OLAMIEEIDPC_DIFFCMBMOFJ_BEGININVOKE_OFFSET))(this, EJGDHCIBCJH, FABAAKLFDHN);
	}

	::LGHCIFIPDKP* EndInvoke(::System::IAsyncResult* IGAAKDOIPNN)
	{
		return ((::LGHCIFIPDKP*(*)(::PVOID, ::System::IAsyncResult*))((::PBYTE)hIl2Cpp + OLAMIEEIDPC_DIFFCMBMOFJ_ENDINVOKE_OFFSET))(this, IGAAKDOIPNN);
	}
};
