#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/DCMKIHKMBCF.h"
class OADLFAMLGPP;

#define JKCBGFHPBJM_BPLPBPMEODA_OFFSET UNITYSDK_OFFSET(0xBA3A2E0)
#define JKCBGFHPBJM_CTOR_OFFSET UNITYSDK_OFFSET(0xBA3A470)

inline static constexpr unsigned int JKCBGFHPBJM_TypeDefinitionIndex = 63980;

	class JKCBGFHPBJM : public ::System::Object
	{
	public:
		// static const ::System::String* BNPOFIPMGNI; // 0x0
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + JKCBGFHPBJM_CTOR_OFFSET))(this);
		}

		::OADLFAMLGPP* BPLPBPMEODA(::DCMKIHKMBCF a1, ::System::UInt32 a2)
		{
			return ((::OADLFAMLGPP*(*)(::PVOID, ::DCMKIHKMBCF, ::System::UInt32))((::PBYTE)hIl2Cpp + JKCBGFHPBJM_BPLPBPMEODA_OFFSET))(this, a1, a2);
		}

	};
