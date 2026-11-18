#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/MulticastDelegate.h"
#include "unitysdk/GDALEODFJKL.h"
#include "unitysdk/JEIMDCMGJAM.h"

class EAIOHODECAO;
namespace System { class AsyncCallback; }
namespace System { class IAsyncResult; }
namespace System { class Object; }

#define MEAKBMCPFNI_BEGININVOKE_OFFSET UNITYSDK_OFFSET(0x1F54B380)
#define MEAKBMCPFNI_ENDINVOKE_OFFSET UNITYSDK_OFFSET(0x1F54B450)
#define MEAKBMCPFNI_INVOKE_OFFSET UNITYSDK_OFFSET(0x1F54AB20)
#define MEAKBMCPFNI__CTOR_OFFSET UNITYSDK_OFFSET(0x1F54AB10)

inline static constexpr unsigned int MEAKBMCPFNI_TypeDefinitionIndex = 28798;

class MEAKBMCPFNI : public ::System::MulticastDelegate
{
public:
	::System::Void _ctor(::System::Object* FABAAKLFDHN, ::System::IntPtr LJEPPLANHIL)
	{
		return ((::System::Void(*)(::PVOID, ::System::Object*, ::System::IntPtr))((::PBYTE)hIl2Cpp + MEAKBMCPFNI__CTOR_OFFSET))(this, FABAAKLFDHN, LJEPPLANHIL);
	}

	::System::Boolean Invoke(::EAIOHODECAO* GEEHGDABNJF, ::GDALEODFJKL EPPCEPEKHJK, ::JEIMDCMGJAM LDCPPJIIPDM, ::System::Boolean OACOGKKGHIG)
	{
		return ((::System::Boolean(*)(::PVOID, ::EAIOHODECAO*, ::GDALEODFJKL, ::JEIMDCMGJAM, ::System::Boolean))((::PBYTE)hIl2Cpp + MEAKBMCPFNI_INVOKE_OFFSET))(this, GEEHGDABNJF, EPPCEPEKHJK, LDCPPJIIPDM, OACOGKKGHIG);
	}

	::System::IAsyncResult* BeginInvoke(::EAIOHODECAO* GEEHGDABNJF, ::GDALEODFJKL EPPCEPEKHJK, ::JEIMDCMGJAM LDCPPJIIPDM, ::System::Boolean OACOGKKGHIG, ::System::AsyncCallback* EJGDHCIBCJH, ::System::Object* FABAAKLFDHN)
	{
		return ((::System::IAsyncResult*(*)(::PVOID, ::EAIOHODECAO*, ::GDALEODFJKL, ::JEIMDCMGJAM, ::System::Boolean, ::System::AsyncCallback*, ::System::Object*))((::PBYTE)hIl2Cpp + MEAKBMCPFNI_BEGININVOKE_OFFSET))(this, GEEHGDABNJF, EPPCEPEKHJK, LDCPPJIIPDM, OACOGKKGHIG, EJGDHCIBCJH, FABAAKLFDHN);
	}

	::System::Boolean EndInvoke(::System::IAsyncResult* IGAAKDOIPNN)
	{
		return ((::System::Boolean(*)(::PVOID, ::System::IAsyncResult*))((::PBYTE)hIl2Cpp + MEAKBMCPFNI_ENDINVOKE_OFFSET))(this, IGAAKDOIPNN);
	}
};
