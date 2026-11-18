#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/MulticastDelegate.h"
#include "unitysdk/NJNGHAOBGCA.h"

class CLNGHONFNHE;
namespace System { class AsyncCallback; }
namespace System { class IAsyncResult; }
namespace System { class Object; }

#define JJGIFAPBOPH_BEGININVOKE_OFFSET UNITYSDK_OFFSET(0x1CDE0B20)
#define JJGIFAPBOPH_ENDINVOKE_OFFSET UNITYSDK_OFFSET(0x1CDE0BC0)
#define JJGIFAPBOPH_INVOKE_OFFSET UNITYSDK_OFFSET(0x1CDE0550)
#define JJGIFAPBOPH__CTOR_OFFSET UNITYSDK_OFFSET(0x1CDE0540)

inline static constexpr unsigned int JJGIFAPBOPH_TypeDefinitionIndex = 28697;

class JJGIFAPBOPH : public ::System::MulticastDelegate
{
public:
	::System::Void _ctor(::System::Object* FABAAKLFDHN, ::System::IntPtr LJEPPLANHIL)
	{
		return ((::System::Void(*)(::PVOID, ::System::Object*, ::System::IntPtr))((::PBYTE)hIl2Cpp + JJGIFAPBOPH__CTOR_OFFSET))(this, FABAAKLFDHN, LJEPPLANHIL);
	}

	::System::Boolean Invoke(::CLNGHONFNHE* BMEPJBGGDFN, ::NJNGHAOBGCA& HBMGHPEPBNC, ::System::UInt32 NJPBLIINPKP)
	{
		return ((::System::Boolean(*)(::PVOID, ::CLNGHONFNHE*, ::NJNGHAOBGCA&, ::System::UInt32))((::PBYTE)hIl2Cpp + JJGIFAPBOPH_INVOKE_OFFSET))(this, BMEPJBGGDFN, HBMGHPEPBNC, NJPBLIINPKP);
	}

	::System::IAsyncResult* BeginInvoke(::CLNGHONFNHE* BMEPJBGGDFN, ::NJNGHAOBGCA& HBMGHPEPBNC, ::System::UInt32 NJPBLIINPKP, ::System::AsyncCallback* EJGDHCIBCJH, ::System::Object* FABAAKLFDHN)
	{
		return ((::System::IAsyncResult*(*)(::PVOID, ::CLNGHONFNHE*, ::NJNGHAOBGCA&, ::System::UInt32, ::System::AsyncCallback*, ::System::Object*))((::PBYTE)hIl2Cpp + JJGIFAPBOPH_BEGININVOKE_OFFSET))(this, BMEPJBGGDFN, HBMGHPEPBNC, NJPBLIINPKP, EJGDHCIBCJH, FABAAKLFDHN);
	}

	::System::Boolean EndInvoke(::NJNGHAOBGCA& HBMGHPEPBNC, ::System::IAsyncResult* IGAAKDOIPNN)
	{
		return ((::System::Boolean(*)(::PVOID, ::NJNGHAOBGCA&, ::System::IAsyncResult*))((::PBYTE)hIl2Cpp + JJGIFAPBOPH_ENDINVOKE_OFFSET))(this, HBMGHPEPBNC, IGAAKDOIPNN);
	}
};
