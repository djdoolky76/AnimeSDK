#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class CMIMAMMMOKA;
class DLDGOPHECJB;
class ENAEFMHBIID;
namespace System::Collections::Generic { template <typename T> class List_1; }

#define ABNMJHCLPCJ_GEFFLPLBOPJ_OFFSET UNITYSDK_OFFSET(0x143952F0)
#define ABNMJHCLPCJ_PFNGLLAKGPC_OFFSET UNITYSDK_OFFSET(0x14395170)
#define ABNMJHCLPCJ_PKOGNPKCHHE_OFFSET UNITYSDK_OFFSET(0x14395110)
#define ABNMJHCLPCJ__CTOR_OFFSET UNITYSDK_OFFSET(0x143952E0)

inline static constexpr unsigned int ABNMJHCLPCJ_TypeDefinitionIndex = 78064;

class ABNMJHCLPCJ : public ::System::Object
{
public:
	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + ABNMJHCLPCJ__CTOR_OFFSET))(this);
	}

	::System::Collections::Generic::List_1<::CMIMAMMMOKA*>* PKOGNPKCHHE(::ENAEFMHBIID* AAOCANGHBDG)
	{
		return ((::System::Collections::Generic::List_1<::CMIMAMMMOKA*>*(*)(::PVOID, ::ENAEFMHBIID*))((::PBYTE)hIl2Cpp + ABNMJHCLPCJ_PKOGNPKCHHE_OFFSET))(this, AAOCANGHBDG);
	}

	::System::Boolean GEFFLPLBOPJ(::DLDGOPHECJB* AMEFDLEMJEL)
	{
		return ((::System::Boolean(*)(::PVOID, ::DLDGOPHECJB*))((::PBYTE)hIl2Cpp + ABNMJHCLPCJ_GEFFLPLBOPJ_OFFSET))(this, AMEFDLEMJEL);
	}

	::System::Collections::Generic::List_1<::CMIMAMMMOKA*>* PFNGLLAKGPC(::DLDGOPHECJB* AMEFDLEMJEL)
	{
		return ((::System::Collections::Generic::List_1<::CMIMAMMMOKA*>*(*)(::PVOID, ::DLDGOPHECJB*))((::PBYTE)hIl2Cpp + ABNMJHCLPCJ_PFNGLLAKGPC_OFFSET))(this, AMEFDLEMJEL);
	}
};
