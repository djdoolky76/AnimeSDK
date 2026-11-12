#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class CANFMMJEBJG;
class LFOAAABKKHC;
class OKICIAPALHL;
namespace System { class Object; }
namespace System::Reflection { class MethodInfo; }

#define CHNKGINBJBI_ABFDIFLKGDF_OFFSET UNITYSDK_OFFSET(0xD8C9A20)
#define CHNKGINBJBI_CTOR_OFFSET UNITYSDK_OFFSET(0xD8C9A10)

inline static constexpr unsigned int CHNKGINBJBI_TypeDefinitionIndex = 75264;

	class CHNKGINBJBI : public ::System::Object
	{
	public:
		::OKICIAPALHL* FNPCKHIOBBK; // 0x10
		::LFOAAABKKHC* FNDHDEOILCK; // 0x18
		::System::Reflection::MethodInfo* KFGCBHOEIPE; // 0x20
		::System::Void _ctor(::System::Reflection::MethodInfo* a1, ::OKICIAPALHL* a2)
		{
			return ((::System::Void(*)(::PVOID, ::System::Reflection::MethodInfo*, ::OKICIAPALHL*))((::PBYTE)hIl2Cpp + CHNKGINBJBI_CTOR_OFFSET))(this, a1, a2);
		}

		::CANFMMJEBJG* ABFDIFLKGDF(::System::Object* a1)
		{
			return ((::CANFMMJEBJG*(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + CHNKGINBJBI_ABFDIFLKGDF_OFFSET))(this, a1);
		}

	};
