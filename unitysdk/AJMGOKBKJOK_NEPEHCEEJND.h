#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/MulticastDelegate.h"
#include "unitysdk/OCAJKBOJJFI.h"

namespace System { class AsyncCallback; }
namespace System { class IAsyncResult; }
namespace System { class Object; }

#define AJMGOKBKJOK_NEPEHCEEJND_BEGININVOKE_OFFSET UNITYSDK_OFFSET(0x17DDC420)
#define AJMGOKBKJOK_NEPEHCEEJND_ENDINVOKE_OFFSET UNITYSDK_OFFSET(0x17DDC490)
#define AJMGOKBKJOK_NEPEHCEEJND_INVOKE_OFFSET UNITYSDK_OFFSET(0x17DDC130)
#define AJMGOKBKJOK_NEPEHCEEJND__CTOR_OFFSET UNITYSDK_OFFSET(0x17DDC120)

inline static constexpr unsigned int AJMGOKBKJOK_NEPEHCEEJND_TypeDefinitionIndex = 61605;

class AJMGOKBKJOK_NEPEHCEEJND : public ::System::MulticastDelegate
{
public:
	::System::Void _ctor(::System::Object* FABAAKLFDHN, ::System::IntPtr LJEPPLANHIL)
	{
		return ((::System::Void(*)(::PVOID, ::System::Object*, ::System::IntPtr))((::PBYTE)hIl2Cpp + AJMGOKBKJOK_NEPEHCEEJND__CTOR_OFFSET))(this, FABAAKLFDHN, LJEPPLANHIL);
	}

	::System::Boolean Invoke(::OCAJKBOJJFI& LJBPECKCCEA)
	{
		return ((::System::Boolean(*)(::PVOID, ::OCAJKBOJJFI&))((::PBYTE)hIl2Cpp + AJMGOKBKJOK_NEPEHCEEJND_INVOKE_OFFSET))(this, LJBPECKCCEA);
	}

	::System::IAsyncResult* BeginInvoke(::OCAJKBOJJFI& LJBPECKCCEA, ::System::AsyncCallback* EJGDHCIBCJH, ::System::Object* FABAAKLFDHN)
	{
		return ((::System::IAsyncResult*(*)(::PVOID, ::OCAJKBOJJFI&, ::System::AsyncCallback*, ::System::Object*))((::PBYTE)hIl2Cpp + AJMGOKBKJOK_NEPEHCEEJND_BEGININVOKE_OFFSET))(this, LJBPECKCCEA, EJGDHCIBCJH, FABAAKLFDHN);
	}

	::System::Boolean EndInvoke(::OCAJKBOJJFI& LJBPECKCCEA, ::System::IAsyncResult* IGAAKDOIPNN)
	{
		return ((::System::Boolean(*)(::PVOID, ::OCAJKBOJJFI&, ::System::IAsyncResult*))((::PBYTE)hIl2Cpp + AJMGOKBKJOK_NEPEHCEEJND_ENDINVOKE_OFFSET))(this, LJBPECKCCEA, IGAAKDOIPNN);
	}
};
