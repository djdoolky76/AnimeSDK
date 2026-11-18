#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/MulticastDelegate.h"
#include "unitysdk/GDALEODFJKL.h"
#include "unitysdk/JEIMDCMGJAM.h"

class EAIOHODECAO;
class OMPFPLKPOGG;
namespace System { class AsyncCallback; }
namespace System { class IAsyncResult; }
namespace System { class Object; }

#define DMNCCAJMOEN_BEGININVOKE_OFFSET UNITYSDK_OFFSET(0x1CD94080)
#define DMNCCAJMOEN_ENDINVOKE_OFFSET UNITYSDK_OFFSET(0x1CD94160)
#define DMNCCAJMOEN_INVOKE_OFFSET UNITYSDK_OFFSET(0x1CD937A0)
#define DMNCCAJMOEN__CTOR_OFFSET UNITYSDK_OFFSET(0x1CD93790)

inline static constexpr unsigned int DMNCCAJMOEN_TypeDefinitionIndex = 28740;

class DMNCCAJMOEN : public ::System::MulticastDelegate
{
public:
	::System::Void _ctor(::System::Object* FABAAKLFDHN, ::System::IntPtr LJEPPLANHIL)
	{
		return ((::System::Void(*)(::PVOID, ::System::Object*, ::System::IntPtr))((::PBYTE)hIl2Cpp + DMNCCAJMOEN__CTOR_OFFSET))(this, FABAAKLFDHN, LJEPPLANHIL);
	}

	::System::Boolean Invoke(::EAIOHODECAO* GEEHGDABNJF, ::GDALEODFJKL EPPCEPEKHJK, ::JEIMDCMGJAM LDCPPJIIPDM, ::OMPFPLKPOGG* KECKGDFIALJ, ::System::Boolean OACOGKKGHIG)
	{
		return ((::System::Boolean(*)(::PVOID, ::EAIOHODECAO*, ::GDALEODFJKL, ::JEIMDCMGJAM, ::OMPFPLKPOGG*, ::System::Boolean))((::PBYTE)hIl2Cpp + DMNCCAJMOEN_INVOKE_OFFSET))(this, GEEHGDABNJF, EPPCEPEKHJK, LDCPPJIIPDM, KECKGDFIALJ, OACOGKKGHIG);
	}

	::System::IAsyncResult* BeginInvoke(::EAIOHODECAO* GEEHGDABNJF, ::GDALEODFJKL EPPCEPEKHJK, ::JEIMDCMGJAM LDCPPJIIPDM, ::OMPFPLKPOGG* KECKGDFIALJ, ::System::Boolean OACOGKKGHIG, ::System::AsyncCallback* EJGDHCIBCJH, ::System::Object* FABAAKLFDHN)
	{
		return ((::System::IAsyncResult*(*)(::PVOID, ::EAIOHODECAO*, ::GDALEODFJKL, ::JEIMDCMGJAM, ::OMPFPLKPOGG*, ::System::Boolean, ::System::AsyncCallback*, ::System::Object*))((::PBYTE)hIl2Cpp + DMNCCAJMOEN_BEGININVOKE_OFFSET))(this, GEEHGDABNJF, EPPCEPEKHJK, LDCPPJIIPDM, KECKGDFIALJ, OACOGKKGHIG, EJGDHCIBCJH, FABAAKLFDHN);
	}

	::System::Boolean EndInvoke(::System::IAsyncResult* IGAAKDOIPNN)
	{
		return ((::System::Boolean(*)(::PVOID, ::System::IAsyncResult*))((::PBYTE)hIl2Cpp + DMNCCAJMOEN_ENDINVOKE_OFFSET))(this, IGAAKDOIPNN);
	}
};
