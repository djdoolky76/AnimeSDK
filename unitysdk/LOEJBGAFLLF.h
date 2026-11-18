#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class CMIMAMMMOKA;
class DLDGOPHECJB;
class ENAEFMHBIID;
namespace System::Collections::Generic { template <typename T> class List_1; }

#define LOEJBGAFLLF_JDMDPGOGAAH_OFFSET UNITYSDK_OFFSET(0x125A0410)
#define LOEJBGAFLLF_PFNGLLAKGPC_OFFSET UNITYSDK_OFFSET(0x125A0290)
#define LOEJBGAFLLF_PKOGNPKCHHE_OFFSET UNITYSDK_OFFSET(0x125A0230)
#define LOEJBGAFLLF__CTOR_OFFSET UNITYSDK_OFFSET(0x125A0400)

inline static constexpr unsigned int LOEJBGAFLLF_TypeDefinitionIndex = 54604;

class LOEJBGAFLLF : public ::System::Object
{
public:
	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + LOEJBGAFLLF__CTOR_OFFSET))(this);
	}

	::System::Collections::Generic::List_1<::CMIMAMMMOKA*>* PKOGNPKCHHE(::ENAEFMHBIID* AAOCANGHBDG)
	{
		return ((::System::Collections::Generic::List_1<::CMIMAMMMOKA*>*(*)(::PVOID, ::ENAEFMHBIID*))((::PBYTE)hIl2Cpp + LOEJBGAFLLF_PKOGNPKCHHE_OFFSET))(this, AAOCANGHBDG);
	}

	::System::Boolean JDMDPGOGAAH(::DLDGOPHECJB* AMEFDLEMJEL)
	{
		return ((::System::Boolean(*)(::PVOID, ::DLDGOPHECJB*))((::PBYTE)hIl2Cpp + LOEJBGAFLLF_JDMDPGOGAAH_OFFSET))(this, AMEFDLEMJEL);
	}

	::System::Collections::Generic::List_1<::CMIMAMMMOKA*>* PFNGLLAKGPC(::DLDGOPHECJB* AMEFDLEMJEL)
	{
		return ((::System::Collections::Generic::List_1<::CMIMAMMMOKA*>*(*)(::PVOID, ::DLDGOPHECJB*))((::PBYTE)hIl2Cpp + LOEJBGAFLLF_PFNGLLAKGPC_OFFSET))(this, AMEFDLEMJEL);
	}
};
