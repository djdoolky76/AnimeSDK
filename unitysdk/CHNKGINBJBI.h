#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class CANFMMJEBJG;
class LFOAAABKKHC;
class OKICIAPALHL;
namespace System { class Object; }
namespace System::Reflection { class MethodInfo; }

#define CHNKGINBJBI_ABFDIFLKGDF_OFFSET UNITYSDK_OFFSET(0xCF60CC0)
#define CHNKGINBJBI_CTOR_OFFSET UNITYSDK_OFFSET(0xCF60CB0)

	class CHNKGINBJBI : public ::System::Object
	{
	public:
		::System::Reflection::MethodInfo* KFGCBHOEIPE; // 0x10
		::OKICIAPALHL* FNPCKHIOBBK; // 0x18
		::LFOAAABKKHC* FNDHDEOILCK; // 0x20
		::System::Void _ctor(::System::Reflection::MethodInfo* a1, ::OKICIAPALHL* a2)
		{
			return ((::System::Void(*)(::PVOID, ::System::Reflection::MethodInfo*, ::OKICIAPALHL*))((::PBYTE)hIl2Cpp + CHNKGINBJBI_CTOR_OFFSET))(this, a1, a2);
		}

		::CANFMMJEBJG* ABFDIFLKGDF(::System::Object* a1)
		{
			return ((::CANFMMJEBJG*(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + CHNKGINBJBI_ABFDIFLKGDF_OFFSET))(this, a1);
		}

	};
