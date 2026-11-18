#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/MulticastDelegate.h"

namespace System { class AsyncCallback; }
namespace System { class IAsyncResult; }
namespace System { class Object; }
namespace System { class String; }

#define DJDFHDFHOEO_BEGININVOKE_OFFSET UNITYSDK_OFFSET(0x12414880)
#define DJDFHDFHOEO_ENDINVOKE_OFFSET UNITYSDK_OFFSET(0x12414920)
#define DJDFHDFHOEO_INVOKE_OFFSET UNITYSDK_OFFSET(0x12414270)
#define DJDFHDFHOEO__CTOR_OFFSET UNITYSDK_OFFSET(0x12414260)

inline static constexpr unsigned int DJDFHDFHOEO_TypeDefinitionIndex = 42422;

class DJDFHDFHOEO : public ::System::MulticastDelegate
{
public:
	::System::Void _ctor(::System::Object* FABAAKLFDHN, ::System::IntPtr LJEPPLANHIL)
	{
		return ((::System::Void(*)(::PVOID, ::System::Object*, ::System::IntPtr))((::PBYTE)hIl2Cpp + DJDFHDFHOEO__CTOR_OFFSET))(this, FABAAKLFDHN, LJEPPLANHIL);
	}

	::System::Void Invoke(::System::String* FAELKDHFDOP, ::System::Single IPKAOCOLLJO, ::System::Single MMLKOEPCAEI)
	{
		return ((::System::Void(*)(::PVOID, ::System::String*, ::System::Single, ::System::Single))((::PBYTE)hIl2Cpp + DJDFHDFHOEO_INVOKE_OFFSET))(this, FAELKDHFDOP, IPKAOCOLLJO, MMLKOEPCAEI);
	}

	::System::IAsyncResult* BeginInvoke(::System::String* FAELKDHFDOP, ::System::Single IPKAOCOLLJO, ::System::Single MMLKOEPCAEI, ::System::AsyncCallback* EJGDHCIBCJH, ::System::Object* FABAAKLFDHN)
	{
		return ((::System::IAsyncResult*(*)(::PVOID, ::System::String*, ::System::Single, ::System::Single, ::System::AsyncCallback*, ::System::Object*))((::PBYTE)hIl2Cpp + DJDFHDFHOEO_BEGININVOKE_OFFSET))(this, FAELKDHFDOP, IPKAOCOLLJO, MMLKOEPCAEI, EJGDHCIBCJH, FABAAKLFDHN);
	}

	::System::Void EndInvoke(::System::IAsyncResult* IGAAKDOIPNN)
	{
		return ((::System::Void(*)(::PVOID, ::System::IAsyncResult*))((::PBYTE)hIl2Cpp + DJDFHDFHOEO_ENDINVOKE_OFFSET))(this, IGAAKDOIPNN);
	}
};
