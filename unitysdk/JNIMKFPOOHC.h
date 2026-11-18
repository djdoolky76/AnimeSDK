#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/MulticastDelegate.h"

class BNPHNIKEBAL;
namespace System { class AsyncCallback; }
namespace System { class IAsyncResult; }
namespace System { class Object; }

#define JNIMKFPOOHC_BEGININVOKE_OFFSET UNITYSDK_OFFSET(0x1F439DE0)
#define JNIMKFPOOHC_ENDINVOKE_OFFSET UNITYSDK_OFFSET(0x1F439E10)
#define JNIMKFPOOHC_INVOKE_OFFSET UNITYSDK_OFFSET(0x1F4398C0)
#define JNIMKFPOOHC__CTOR_OFFSET UNITYSDK_OFFSET(0x1F4398B0)

inline static constexpr unsigned int JNIMKFPOOHC_TypeDefinitionIndex = 29116;

class JNIMKFPOOHC : public ::System::MulticastDelegate
{
public:
	::System::Void _ctor(::System::Object* FABAAKLFDHN, ::System::IntPtr LJEPPLANHIL)
	{
		return ((::System::Void(*)(::PVOID, ::System::Object*, ::System::IntPtr))((::PBYTE)hIl2Cpp + JNIMKFPOOHC__CTOR_OFFSET))(this, FABAAKLFDHN, LJEPPLANHIL);
	}

	::System::Void Invoke(::BNPHNIKEBAL* GADDFIDBBGC)
	{
		return ((::System::Void(*)(::PVOID, ::BNPHNIKEBAL*))((::PBYTE)hIl2Cpp + JNIMKFPOOHC_INVOKE_OFFSET))(this, GADDFIDBBGC);
	}

	::System::IAsyncResult* BeginInvoke(::BNPHNIKEBAL* GADDFIDBBGC, ::System::AsyncCallback* EJGDHCIBCJH, ::System::Object* FABAAKLFDHN)
	{
		return ((::System::IAsyncResult*(*)(::PVOID, ::BNPHNIKEBAL*, ::System::AsyncCallback*, ::System::Object*))((::PBYTE)hIl2Cpp + JNIMKFPOOHC_BEGININVOKE_OFFSET))(this, GADDFIDBBGC, EJGDHCIBCJH, FABAAKLFDHN);
	}

	::System::Void EndInvoke(::System::IAsyncResult* IGAAKDOIPNN)
	{
		return ((::System::Void(*)(::PVOID, ::System::IAsyncResult*))((::PBYTE)hIl2Cpp + JNIMKFPOOHC_ENDINVOKE_OFFSET))(this, IGAAKDOIPNN);
	}
};
