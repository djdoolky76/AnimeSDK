#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class CMIMAMMMOKA;
class DLDGOPHECJB;
class ENAEFMHBIID;
namespace System::Collections::Generic { template <typename T> class List_1; }

#define FNPHEEPPAGA_FDDMPMLKPMN_OFFSET UNITYSDK_OFFSET(0x156CDBB0)
#define FNPHEEPPAGA_PFNGLLAKGPC_OFFSET UNITYSDK_OFFSET(0x156CDA30)
#define FNPHEEPPAGA_PKOGNPKCHHE_OFFSET UNITYSDK_OFFSET(0x156CD9D0)
#define FNPHEEPPAGA__CTOR_OFFSET UNITYSDK_OFFSET(0x156CDBA0)

inline static constexpr unsigned int FNPHEEPPAGA_TypeDefinitionIndex = 75702;

class FNPHEEPPAGA : public ::System::Object
{
public:
	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + FNPHEEPPAGA__CTOR_OFFSET))(this);
	}

	::System::Collections::Generic::List_1<::CMIMAMMMOKA*>* PKOGNPKCHHE(::ENAEFMHBIID* AAOCANGHBDG)
	{
		return ((::System::Collections::Generic::List_1<::CMIMAMMMOKA*>*(*)(::PVOID, ::ENAEFMHBIID*))((::PBYTE)hIl2Cpp + FNPHEEPPAGA_PKOGNPKCHHE_OFFSET))(this, AAOCANGHBDG);
	}

	::System::Boolean FDDMPMLKPMN(::DLDGOPHECJB* AMEFDLEMJEL)
	{
		return ((::System::Boolean(*)(::PVOID, ::DLDGOPHECJB*))((::PBYTE)hIl2Cpp + FNPHEEPPAGA_FDDMPMLKPMN_OFFSET))(this, AMEFDLEMJEL);
	}

	::System::Collections::Generic::List_1<::CMIMAMMMOKA*>* PFNGLLAKGPC(::DLDGOPHECJB* AMEFDLEMJEL)
	{
		return ((::System::Collections::Generic::List_1<::CMIMAMMMOKA*>*(*)(::PVOID, ::DLDGOPHECJB*))((::PBYTE)hIl2Cpp + FNPHEEPPAGA_PFNGLLAKGPC_OFFSET))(this, AMEFDLEMJEL);
	}
};
