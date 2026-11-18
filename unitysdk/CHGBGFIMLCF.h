#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/UnityEngine/Vector3.h"

class GEIHCPAOKKK;

#define CHGBGFIMLCF_ECKNMLDPLIA_OFFSET UNITYSDK_OFFSET(0x128F9430)
#define CHGBGFIMLCF_PCMMGMFNCAI_OFFSET UNITYSDK_OFFSET(0x128F95F0)
#define CHGBGFIMLCF__CCTOR_OFFSET UNITYSDK_OFFSET(0x128F95B0)
#define CHGBGFIMLCF__CTOR_OFFSET UNITYSDK_OFFSET(0x128F95A0)

inline static constexpr unsigned int CHGBGFIMLCF_TypeDefinitionIndex = 69048;

class CHGBGFIMLCF : public ::System::Object
{
public:
	static ::CHGBGFIMLCF** StaticGet_NJLLMPCDOEB()
	{
		return (::CHGBGFIMLCF**)Il2CppClass::FromTypeDefinitionIndex(CHGBGFIMLCF_TypeDefinitionIndex)->GetStaticField(0x3D610);
	}

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CHGBGFIMLCF__CTOR_OFFSET))(this);
	}

	static ::System::Void _cctor()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + CHGBGFIMLCF__CCTOR_OFFSET))();
	}

	::System::Boolean ECKNMLDPLIA(::UnityEngine::Vector3& OHOGDOMNHNK)
	{
		return ((::System::Boolean(*)(::PVOID, ::UnityEngine::Vector3&))((::PBYTE)hIl2Cpp + CHGBGFIMLCF_ECKNMLDPLIA_OFFSET))(this, OHOGDOMNHNK);
	}

	::GEIHCPAOKKK* PCMMGMFNCAI()
	{
		return ((::GEIHCPAOKKK*(*)(::PVOID))((::PBYTE)hIl2Cpp + CHGBGFIMLCF_PCMMGMFNCAI_OFFSET))(this);
	}
};
