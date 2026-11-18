#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/MulticastDelegate.h"

class CLFBLCIJPKD_CHNJLKMDOFP;
namespace System { class AsyncCallback; }
namespace System { class IAsyncResult; }
namespace System { class Object; }

#define CLFBLCIJPKD_LOLJNLCDKPC_BEGININVOKE_OFFSET UNITYSDK_OFFSET(0x145D1DF0)
#define CLFBLCIJPKD_LOLJNLCDKPC_ENDINVOKE_OFFSET UNITYSDK_OFFSET(0x145D1E20)
#define CLFBLCIJPKD_LOLJNLCDKPC_INVOKE_OFFSET UNITYSDK_OFFSET(0x145D18D0)
#define CLFBLCIJPKD_LOLJNLCDKPC__CTOR_OFFSET UNITYSDK_OFFSET(0x145D18C0)

inline static constexpr unsigned int CLFBLCIJPKD_LOLJNLCDKPC_TypeDefinitionIndex = 88473;

class CLFBLCIJPKD_LOLJNLCDKPC : public ::System::MulticastDelegate
{
public:
	::System::Void _ctor(::System::Object* FABAAKLFDHN, ::System::IntPtr LJEPPLANHIL)
	{
		return ((::System::Void(*)(::PVOID, ::System::Object*, ::System::IntPtr))((::PBYTE)hIl2Cpp + CLFBLCIJPKD_LOLJNLCDKPC__CTOR_OFFSET))(this, FABAAKLFDHN, LJEPPLANHIL);
	}

	::System::Boolean Invoke(::CLFBLCIJPKD_CHNJLKMDOFP* HHIJHDFHPOI)
	{
		return ((::System::Boolean(*)(::PVOID, ::CLFBLCIJPKD_CHNJLKMDOFP*))((::PBYTE)hIl2Cpp + CLFBLCIJPKD_LOLJNLCDKPC_INVOKE_OFFSET))(this, HHIJHDFHPOI);
	}

	::System::IAsyncResult* BeginInvoke(::CLFBLCIJPKD_CHNJLKMDOFP* HHIJHDFHPOI, ::System::AsyncCallback* EJGDHCIBCJH, ::System::Object* FABAAKLFDHN)
	{
		return ((::System::IAsyncResult*(*)(::PVOID, ::CLFBLCIJPKD_CHNJLKMDOFP*, ::System::AsyncCallback*, ::System::Object*))((::PBYTE)hIl2Cpp + CLFBLCIJPKD_LOLJNLCDKPC_BEGININVOKE_OFFSET))(this, HHIJHDFHPOI, EJGDHCIBCJH, FABAAKLFDHN);
	}

	::System::Boolean EndInvoke(::System::IAsyncResult* IGAAKDOIPNN)
	{
		return ((::System::Boolean(*)(::PVOID, ::System::IAsyncResult*))((::PBYTE)hIl2Cpp + CLFBLCIJPKD_LOLJNLCDKPC_ENDINVOKE_OFFSET))(this, IGAAKDOIPNN);
	}
};
