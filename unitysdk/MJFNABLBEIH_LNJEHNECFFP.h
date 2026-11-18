#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/MulticastDelegate.h"

class MJFNABLBEIH;
namespace System { class AsyncCallback; }
namespace System { class IAsyncResult; }
namespace System { class Object; }

#define MJFNABLBEIH_LNJEHNECFFP_BEGININVOKE_OFFSET UNITYSDK_OFFSET(0x1075CBF0)
#define MJFNABLBEIH_LNJEHNECFFP_ENDINVOKE_OFFSET UNITYSDK_OFFSET(0x1075CC70)
#define MJFNABLBEIH_LNJEHNECFFP_INVOKE_OFFSET UNITYSDK_OFFSET(0x1075C620)
#define MJFNABLBEIH_LNJEHNECFFP__CTOR_OFFSET UNITYSDK_OFFSET(0x1075C610)

inline static constexpr unsigned int MJFNABLBEIH_LNJEHNECFFP_TypeDefinitionIndex = 38801;

class MJFNABLBEIH_LNJEHNECFFP : public ::System::MulticastDelegate
{
public:
	::System::Void _ctor(::System::Object* FABAAKLFDHN, ::System::IntPtr LJEPPLANHIL)
	{
		return ((::System::Void(*)(::PVOID, ::System::Object*, ::System::IntPtr))((::PBYTE)hIl2Cpp + MJFNABLBEIH_LNJEHNECFFP__CTOR_OFFSET))(this, FABAAKLFDHN, LJEPPLANHIL);
	}

	::System::Void Invoke(::MJFNABLBEIH* EMAOHHKGEBF, ::System::Single ALLNOLHHJMD)
	{
		return ((::System::Void(*)(::PVOID, ::MJFNABLBEIH*, ::System::Single))((::PBYTE)hIl2Cpp + MJFNABLBEIH_LNJEHNECFFP_INVOKE_OFFSET))(this, EMAOHHKGEBF, ALLNOLHHJMD);
	}

	::System::IAsyncResult* BeginInvoke(::MJFNABLBEIH* EMAOHHKGEBF, ::System::Single ALLNOLHHJMD, ::System::AsyncCallback* EJGDHCIBCJH, ::System::Object* FABAAKLFDHN)
	{
		return ((::System::IAsyncResult*(*)(::PVOID, ::MJFNABLBEIH*, ::System::Single, ::System::AsyncCallback*, ::System::Object*))((::PBYTE)hIl2Cpp + MJFNABLBEIH_LNJEHNECFFP_BEGININVOKE_OFFSET))(this, EMAOHHKGEBF, ALLNOLHHJMD, EJGDHCIBCJH, FABAAKLFDHN);
	}

	::System::Void EndInvoke(::System::IAsyncResult* IGAAKDOIPNN)
	{
		return ((::System::Void(*)(::PVOID, ::System::IAsyncResult*))((::PBYTE)hIl2Cpp + MJFNABLBEIH_LNJEHNECFFP_ENDINVOKE_OFFSET))(this, IGAAKDOIPNN);
	}
};
