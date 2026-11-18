#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/UnityEngine/Vector3.h"

#define LLOLKLDDEGH_ECKNMLDPLIA_OFFSET UNITYSDK_OFFSET(0x16C64700)
#define LLOLKLDDEGH__CCTOR_OFFSET UNITYSDK_OFFSET(0x16C648F0)
#define LLOLKLDDEGH__CTOR_OFFSET UNITYSDK_OFFSET(0x16C648E0)

inline static constexpr unsigned int LLOLKLDDEGH_TypeDefinitionIndex = 75066;

class LLOLKLDDEGH : public ::System::Object
{
public:
	static ::LLOLKLDDEGH** StaticGet_NJLLMPCDOEB()
	{
		return (::LLOLKLDDEGH**)Il2CppClass::FromTypeDefinitionIndex(LLOLKLDDEGH_TypeDefinitionIndex)->GetStaticField(0x3BB70);
	}

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + LLOLKLDDEGH__CTOR_OFFSET))(this);
	}

	static ::System::Void _cctor()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + LLOLKLDDEGH__CCTOR_OFFSET))();
	}

	::System::Boolean ECKNMLDPLIA(::UnityEngine::Vector3& OHOGDOMNHNK)
	{
		return ((::System::Boolean(*)(::PVOID, ::UnityEngine::Vector3&))((::PBYTE)hIl2Cpp + LLOLKLDDEGH_ECKNMLDPLIA_OFFSET))(this, OHOGDOMNHNK);
	}
};
