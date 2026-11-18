#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/MulticastDelegate.h"

class KGPHFADIIBM;
namespace System { class AsyncCallback; }
namespace System { class IAsyncResult; }
namespace System { class Object; }

#define BCCMPEIHJMN_CAICKFLHNGI_BEGININVOKE_OFFSET UNITYSDK_OFFSET(0x12D19670)
#define BCCMPEIHJMN_CAICKFLHNGI_ENDINVOKE_OFFSET UNITYSDK_OFFSET(0x12D196A0)
#define BCCMPEIHJMN_CAICKFLHNGI_INVOKE_OFFSET UNITYSDK_OFFSET(0x12D19150)
#define BCCMPEIHJMN_CAICKFLHNGI__CTOR_OFFSET UNITYSDK_OFFSET(0x12D19140)

inline static constexpr unsigned int BCCMPEIHJMN_CAICKFLHNGI_TypeDefinitionIndex = 93124;

class BCCMPEIHJMN_CAICKFLHNGI : public ::System::MulticastDelegate
{
public:
	::System::Void _ctor(::System::Object* FABAAKLFDHN, ::System::IntPtr LJEPPLANHIL)
	{
		return ((::System::Void(*)(::PVOID, ::System::Object*, ::System::IntPtr))((::PBYTE)hIl2Cpp + BCCMPEIHJMN_CAICKFLHNGI__CTOR_OFFSET))(this, FABAAKLFDHN, LJEPPLANHIL);
	}

	::System::Void Invoke(::KGPHFADIIBM* MJJALLIPNFK)
	{
		return ((::System::Void(*)(::PVOID, ::KGPHFADIIBM*))((::PBYTE)hIl2Cpp + BCCMPEIHJMN_CAICKFLHNGI_INVOKE_OFFSET))(this, MJJALLIPNFK);
	}

	::System::IAsyncResult* BeginInvoke(::KGPHFADIIBM* MJJALLIPNFK, ::System::AsyncCallback* EJGDHCIBCJH, ::System::Object* FABAAKLFDHN)
	{
		return ((::System::IAsyncResult*(*)(::PVOID, ::KGPHFADIIBM*, ::System::AsyncCallback*, ::System::Object*))((::PBYTE)hIl2Cpp + BCCMPEIHJMN_CAICKFLHNGI_BEGININVOKE_OFFSET))(this, MJJALLIPNFK, EJGDHCIBCJH, FABAAKLFDHN);
	}

	::System::Void EndInvoke(::System::IAsyncResult* IGAAKDOIPNN)
	{
		return ((::System::Void(*)(::PVOID, ::System::IAsyncResult*))((::PBYTE)hIl2Cpp + BCCMPEIHJMN_CAICKFLHNGI_ENDINVOKE_OFFSET))(this, IGAAKDOIPNN);
	}
};
