#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/MulticastDelegate.h"

namespace System { class AsyncCallback; }
namespace System { class IAsyncResult; }
namespace System { class Object; }
namespace System { class String; }

#define GHLHAIALAKE_BEGININVOKE_OFFSET UNITYSDK_OFFSET(0x149D7E40)
#define GHLHAIALAKE_ENDINVOKE_OFFSET UNITYSDK_OFFSET(0x149D7E70)
#define GHLHAIALAKE_INVOKE_OFFSET UNITYSDK_OFFSET(0x149D7920)
#define GHLHAIALAKE__CTOR_OFFSET UNITYSDK_OFFSET(0x149D7910)

inline static constexpr unsigned int GHLHAIALAKE_TypeDefinitionIndex = 55616;

class GHLHAIALAKE : public ::System::MulticastDelegate
{
public:
	::System::Void _ctor(::System::Object* FABAAKLFDHN, ::System::IntPtr LJEPPLANHIL)
	{
		return ((::System::Void(*)(::PVOID, ::System::Object*, ::System::IntPtr))((::PBYTE)hIl2Cpp + GHLHAIALAKE__CTOR_OFFSET))(this, FABAAKLFDHN, LJEPPLANHIL);
	}

	::System::Void Invoke(::System::String* FAELKDHFDOP)
	{
		return ((::System::Void(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + GHLHAIALAKE_INVOKE_OFFSET))(this, FAELKDHFDOP);
	}

	::System::IAsyncResult* BeginInvoke(::System::String* FAELKDHFDOP, ::System::AsyncCallback* EJGDHCIBCJH, ::System::Object* FABAAKLFDHN)
	{
		return ((::System::IAsyncResult*(*)(::PVOID, ::System::String*, ::System::AsyncCallback*, ::System::Object*))((::PBYTE)hIl2Cpp + GHLHAIALAKE_BEGININVOKE_OFFSET))(this, FAELKDHFDOP, EJGDHCIBCJH, FABAAKLFDHN);
	}

	::System::Void EndInvoke(::System::IAsyncResult* IGAAKDOIPNN)
	{
		return ((::System::Void(*)(::PVOID, ::System::IAsyncResult*))((::PBYTE)hIl2Cpp + GHLHAIALAKE_ENDINVOKE_OFFSET))(this, IGAAKDOIPNN);
	}
};
