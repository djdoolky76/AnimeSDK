#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class BJHMBGLPOLB;
class COOONBGCCCM;
class FNMDEKMKEKH;

#define JCGJEBAIBPL_CTOR_OFFSET UNITYSDK_OFFSET(0x1657A820)
#define JCGJEBAIBPL_MJFKHPEKPBP_OFFSET UNITYSDK_OFFSET(0x1657A890)

inline static constexpr unsigned int JCGJEBAIBPL_TypeDefinitionIndex = 81106;

	class JCGJEBAIBPL : public ::System::Object
	{
	public:
		::FNMDEKMKEKH* EIKEHJPPKFK; // 0x10
		::System::Void _ctor(::FNMDEKMKEKH* a1)
		{
			return ((::System::Void(*)(::PVOID, ::FNMDEKMKEKH*))((::PBYTE)hIl2Cpp + JCGJEBAIBPL_CTOR_OFFSET))(this, a1);
		}

		::System::Void MJFKHPEKPBP(::COOONBGCCCM* a1, ::BJHMBGLPOLB* a2)
		{
			return ((::System::Void(*)(::PVOID, ::COOONBGCCCM*, ::BJHMBGLPOLB*))((::PBYTE)hIl2Cpp + JCGJEBAIBPL_MJFKHPEKPBP_OFFSET))(this, a1, a2);
		}

	};
