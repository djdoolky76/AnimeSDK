#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/MulticastDelegate.h"

class NPCBBDGEGPM;
namespace System { class AsyncCallback; }
namespace System { class IAsyncResult; }
namespace System { class Object; }

#define MGBNGCJNBKL_NHCGGABNENI_BEGININVOKE_OFFSET UNITYSDK_OFFSET(0x156A6AE0)
#define MGBNGCJNBKL_NHCGGABNENI_ENDINVOKE_OFFSET UNITYSDK_OFFSET(0x156A6B10)
#define MGBNGCJNBKL_NHCGGABNENI_INVOKE_OFFSET UNITYSDK_OFFSET(0x156A65C0)
#define MGBNGCJNBKL_NHCGGABNENI__CTOR_OFFSET UNITYSDK_OFFSET(0x156A65B0)

inline static constexpr unsigned int MGBNGCJNBKL_NHCGGABNENI_TypeDefinitionIndex = 50433;

class MGBNGCJNBKL_NHCGGABNENI : public ::System::MulticastDelegate
{
public:
	::System::Void _ctor(::System::Object* FABAAKLFDHN, ::System::IntPtr LJEPPLANHIL)
	{
		return ((::System::Void(*)(::PVOID, ::System::Object*, ::System::IntPtr))((::PBYTE)hIl2Cpp + MGBNGCJNBKL_NHCGGABNENI__CTOR_OFFSET))(this, FABAAKLFDHN, LJEPPLANHIL);
	}

	::System::Void Invoke(::NPCBBDGEGPM* JEJBKDHBLNM)
	{
		return ((::System::Void(*)(::PVOID, ::NPCBBDGEGPM*))((::PBYTE)hIl2Cpp + MGBNGCJNBKL_NHCGGABNENI_INVOKE_OFFSET))(this, JEJBKDHBLNM);
	}

	::System::IAsyncResult* BeginInvoke(::NPCBBDGEGPM* JEJBKDHBLNM, ::System::AsyncCallback* EJGDHCIBCJH, ::System::Object* FABAAKLFDHN)
	{
		return ((::System::IAsyncResult*(*)(::PVOID, ::NPCBBDGEGPM*, ::System::AsyncCallback*, ::System::Object*))((::PBYTE)hIl2Cpp + MGBNGCJNBKL_NHCGGABNENI_BEGININVOKE_OFFSET))(this, JEJBKDHBLNM, EJGDHCIBCJH, FABAAKLFDHN);
	}

	::System::Void EndInvoke(::System::IAsyncResult* IGAAKDOIPNN)
	{
		return ((::System::Void(*)(::PVOID, ::System::IAsyncResult*))((::PBYTE)hIl2Cpp + MGBNGCJNBKL_NHCGGABNENI_ENDINVOKE_OFFSET))(this, IGAAKDOIPNN);
	}
};
