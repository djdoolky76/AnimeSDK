#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/AKNEHPCANEM.h"
class LCJIAMCDDFL;

#define CFIHNPKOEMD_BPLPBPMEODA_OFFSET UNITYSDK_OFFSET(0x178224F0)
#define CFIHNPKOEMD_CTOR_OFFSET UNITYSDK_OFFSET(0x17822680)

inline static constexpr unsigned int CFIHNPKOEMD_TypeDefinitionIndex = 64056;

	class CFIHNPKOEMD : public ::System::Object
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CFIHNPKOEMD_CTOR_OFFSET))(this);
		}

		::LCJIAMCDDFL* BPLPBPMEODA(::AKNEHPCANEM a1)
		{
			return ((::LCJIAMCDDFL*(*)(::PVOID, ::AKNEHPCANEM))((::PBYTE)hIl2Cpp + CFIHNPKOEMD_BPLPBPMEODA_OFFSET))(this, a1);
		}

	};
