#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/MulticastDelegate.h"

namespace System { class AsyncCallback; }
namespace System { class IAsyncResult; }
namespace System { class Object; }

#define IFFKIHMPGJK_PGPENLLCLDF_JHKLAHFOFPA_BEGININVOKE_OFFSET UNITYSDK_OFFSET(0xEBC9E60)
#define IFFKIHMPGJK_PGPENLLCLDF_JHKLAHFOFPA_ENDINVOKE_OFFSET UNITYSDK_OFFSET(0xEBC9E90)
#define IFFKIHMPGJK_PGPENLLCLDF_JHKLAHFOFPA_INVOKE_OFFSET UNITYSDK_OFFSET(0xEBC9BD0)
#define IFFKIHMPGJK_PGPENLLCLDF_JHKLAHFOFPA__CTOR_OFFSET UNITYSDK_OFFSET(0xEBC9BC0)

inline static constexpr unsigned int IFFKIHMPGJK_PGPENLLCLDF_JHKLAHFOFPA_TypeDefinitionIndex = 66899;

class IFFKIHMPGJK_PGPENLLCLDF_JHKLAHFOFPA : public ::System::MulticastDelegate
{
public:
	::System::Void _ctor(::System::Object* FABAAKLFDHN, ::System::IntPtr LJEPPLANHIL)
	{
		return ((::System::Void(*)(::PVOID, ::System::Object*, ::System::IntPtr))((::PBYTE)hIl2Cpp + IFFKIHMPGJK_PGPENLLCLDF_JHKLAHFOFPA__CTOR_OFFSET))(this, FABAAKLFDHN, LJEPPLANHIL);
	}

	::System::Void Invoke()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + IFFKIHMPGJK_PGPENLLCLDF_JHKLAHFOFPA_INVOKE_OFFSET))(this);
	}

	::System::IAsyncResult* BeginInvoke(::System::AsyncCallback* EJGDHCIBCJH, ::System::Object* FABAAKLFDHN)
	{
		return ((::System::IAsyncResult*(*)(::PVOID, ::System::AsyncCallback*, ::System::Object*))((::PBYTE)hIl2Cpp + IFFKIHMPGJK_PGPENLLCLDF_JHKLAHFOFPA_BEGININVOKE_OFFSET))(this, EJGDHCIBCJH, FABAAKLFDHN);
	}

	::System::Void EndInvoke(::System::IAsyncResult* IGAAKDOIPNN)
	{
		return ((::System::Void(*)(::PVOID, ::System::IAsyncResult*))((::PBYTE)hIl2Cpp + IFFKIHMPGJK_PGPENLLCLDF_JHKLAHFOFPA_ENDINVOKE_OFFSET))(this, IGAAKDOIPNN);
	}
};
