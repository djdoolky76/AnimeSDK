#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/UnityEngine/Vector3.h"

class GEIHCPAOKKK;

#define HACFBOIIJMD_ECKNMLDPLIA_OFFSET UNITYSDK_OFFSET(0x15F43DB0)
#define HACFBOIIJMD_PCMMGMFNCAI_OFFSET UNITYSDK_OFFSET(0x15F43F70)
#define HACFBOIIJMD__CCTOR_OFFSET UNITYSDK_OFFSET(0x15F43F30)
#define HACFBOIIJMD__CTOR_OFFSET UNITYSDK_OFFSET(0x15F43F20)

inline static constexpr unsigned int HACFBOIIJMD_TypeDefinitionIndex = 60577;

class HACFBOIIJMD : public ::System::Object
{
public:
	static ::HACFBOIIJMD** StaticGet_NJLLMPCDOEB()
	{
		return (::HACFBOIIJMD**)Il2CppClass::FromTypeDefinitionIndex(HACFBOIIJMD_TypeDefinitionIndex)->GetStaticField(0x463D0);
	}

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + HACFBOIIJMD__CTOR_OFFSET))(this);
	}

	static ::System::Void _cctor()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + HACFBOIIJMD__CCTOR_OFFSET))();
	}

	::System::Boolean ECKNMLDPLIA(::UnityEngine::Vector3& OHOGDOMNHNK)
	{
		return ((::System::Boolean(*)(::PVOID, ::UnityEngine::Vector3&))((::PBYTE)hIl2Cpp + HACFBOIIJMD_ECKNMLDPLIA_OFFSET))(this, OHOGDOMNHNK);
	}

	::GEIHCPAOKKK* PCMMGMFNCAI()
	{
		return ((::GEIHCPAOKKK*(*)(::PVOID))((::PBYTE)hIl2Cpp + HACFBOIIJMD_PCMMGMFNCAI_OFFSET))(this);
	}
};
