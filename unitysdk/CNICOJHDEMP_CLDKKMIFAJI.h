#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/MulticastDelegate.h"
#include "unitysdk/HJPDBOPHPAL.h"

namespace System { class AsyncCallback; }
namespace System { class IAsyncResult; }
namespace System { class Object; }

#define CNICOJHDEMP_CLDKKMIFAJI_BEGININVOKE_OFFSET UNITYSDK_OFFSET(0x1326F8B0)
#define CNICOJHDEMP_CLDKKMIFAJI_ENDINVOKE_OFFSET UNITYSDK_OFFSET(0x1326F920)
#define CNICOJHDEMP_CLDKKMIFAJI_INVOKE_OFFSET UNITYSDK_OFFSET(0x1326F5C0)
#define CNICOJHDEMP_CLDKKMIFAJI__CTOR_OFFSET UNITYSDK_OFFSET(0x1326F5B0)

inline static constexpr unsigned int CNICOJHDEMP_CLDKKMIFAJI_TypeDefinitionIndex = 68326;

class CNICOJHDEMP_CLDKKMIFAJI : public ::System::MulticastDelegate
{
public:
	::System::Void _ctor(::System::Object* FABAAKLFDHN, ::System::IntPtr LJEPPLANHIL)
	{
		return ((::System::Void(*)(::PVOID, ::System::Object*, ::System::IntPtr))((::PBYTE)hIl2Cpp + CNICOJHDEMP_CLDKKMIFAJI__CTOR_OFFSET))(this, FABAAKLFDHN, LJEPPLANHIL);
	}

	::System::Void Invoke(::HJPDBOPHPAL& HGDMBHDKFPK)
	{
		return ((::System::Void(*)(::PVOID, ::HJPDBOPHPAL&))((::PBYTE)hIl2Cpp + CNICOJHDEMP_CLDKKMIFAJI_INVOKE_OFFSET))(this, HGDMBHDKFPK);
	}

	::System::IAsyncResult* BeginInvoke(::HJPDBOPHPAL& HGDMBHDKFPK, ::System::AsyncCallback* EJGDHCIBCJH, ::System::Object* FABAAKLFDHN)
	{
		return ((::System::IAsyncResult*(*)(::PVOID, ::HJPDBOPHPAL&, ::System::AsyncCallback*, ::System::Object*))((::PBYTE)hIl2Cpp + CNICOJHDEMP_CLDKKMIFAJI_BEGININVOKE_OFFSET))(this, HGDMBHDKFPK, EJGDHCIBCJH, FABAAKLFDHN);
	}

	::System::Void EndInvoke(::HJPDBOPHPAL& HGDMBHDKFPK, ::System::IAsyncResult* IGAAKDOIPNN)
	{
		return ((::System::Void(*)(::PVOID, ::HJPDBOPHPAL&, ::System::IAsyncResult*))((::PBYTE)hIl2Cpp + CNICOJHDEMP_CLDKKMIFAJI_ENDINVOKE_OFFSET))(this, HGDMBHDKFPK, IGAAKDOIPNN);
	}
};
