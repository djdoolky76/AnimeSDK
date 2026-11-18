#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/MulticastDelegate.h"

class IGLACMPAOLK;
class MJFNABLBEIH;
namespace System { class AsyncCallback; }
namespace System { class IAsyncResult; }
namespace System { class Object; }

#define MDCCAHIOEPE_BEGININVOKE_OFFSET UNITYSDK_OFFSET(0x11F35DC0)
#define MDCCAHIOEPE_ENDINVOKE_OFFSET UNITYSDK_OFFSET(0x11F35E00)
#define MDCCAHIOEPE_INVOKE_OFFSET UNITYSDK_OFFSET(0x11F35820)
#define MDCCAHIOEPE__CTOR_OFFSET UNITYSDK_OFFSET(0x11F35810)

inline static constexpr unsigned int MDCCAHIOEPE_TypeDefinitionIndex = 39992;

class MDCCAHIOEPE : public ::System::MulticastDelegate
{
public:
	::System::Void _ctor(::System::Object* FABAAKLFDHN, ::System::IntPtr LJEPPLANHIL)
	{
		return ((::System::Void(*)(::PVOID, ::System::Object*, ::System::IntPtr))((::PBYTE)hIl2Cpp + MDCCAHIOEPE__CTOR_OFFSET))(this, FABAAKLFDHN, LJEPPLANHIL);
	}

	::System::Void Invoke(::IGLACMPAOLK* EGGAALCPEPL, ::MJFNABLBEIH* EMAOHHKGEBF)
	{
		return ((::System::Void(*)(::PVOID, ::IGLACMPAOLK*, ::MJFNABLBEIH*))((::PBYTE)hIl2Cpp + MDCCAHIOEPE_INVOKE_OFFSET))(this, EGGAALCPEPL, EMAOHHKGEBF);
	}

	::System::IAsyncResult* BeginInvoke(::IGLACMPAOLK* EGGAALCPEPL, ::MJFNABLBEIH* EMAOHHKGEBF, ::System::AsyncCallback* EJGDHCIBCJH, ::System::Object* FABAAKLFDHN)
	{
		return ((::System::IAsyncResult*(*)(::PVOID, ::IGLACMPAOLK*, ::MJFNABLBEIH*, ::System::AsyncCallback*, ::System::Object*))((::PBYTE)hIl2Cpp + MDCCAHIOEPE_BEGININVOKE_OFFSET))(this, EGGAALCPEPL, EMAOHHKGEBF, EJGDHCIBCJH, FABAAKLFDHN);
	}

	::System::Void EndInvoke(::System::IAsyncResult* IGAAKDOIPNN)
	{
		return ((::System::Void(*)(::PVOID, ::System::IAsyncResult*))((::PBYTE)hIl2Cpp + MDCCAHIOEPE_ENDINVOKE_OFFSET))(this, IGAAKDOIPNN);
	}
};
