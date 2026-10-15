#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/DCMKIHKMBCF.h"
class OADLFAMLGPP;

#define JKCBGFHPBJM_BPLPBPMEODA_OFFSET UNITYSDK_OFFSET(0xB2129B0)
#define JKCBGFHPBJM_CTOR_OFFSET UNITYSDK_OFFSET(0xB212AC0)

inline static constexpr unsigned int JKCBGFHPBJM_TypeDefinitionIndex = 62567;

	class JKCBGFHPBJM : public ::System::Object
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + JKCBGFHPBJM_CTOR_OFFSET))(this);
		}

		::OADLFAMLGPP* BPLPBPMEODA(::DCMKIHKMBCF a1)
		{
			return ((::OADLFAMLGPP*(*)(::PVOID, ::DCMKIHKMBCF))((::PBYTE)hIl2Cpp + JKCBGFHPBJM_BPLPBPMEODA_OFFSET))(this, a1);
		}

	};
