#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/UnityEngine/Vector4.h"

namespace UnityEngine { class Material; }

#define OIBDKPJMDLO_GGLECHOIKBI_KEGPOENIFHN_OFFSET UNITYSDK_OFFSET(0xF194190)
#define OIBDKPJMDLO_GGLECHOIKBI_NEKIBCFCGLG_OFFSET UNITYSDK_OFFSET(0xF194270)
#define OIBDKPJMDLO_GGLECHOIKBI__CTOR_OFFSET UNITYSDK_OFFSET(0xF194180)

inline static constexpr unsigned int OIBDKPJMDLO_GGLECHOIKBI_TypeDefinitionIndex = 52477;

class OIBDKPJMDLO_GGLECHOIKBI : public ::System::Object
{
public:
	::UnityEngine::Material* MDALCKNJLJA; // 0x10
	::Il2CppArray<::UnityEngine::Material*>* OKFHHLJFHII; // 0x18

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + OIBDKPJMDLO_GGLECHOIKBI__CTOR_OFFSET))(this);
	}

	::System::Void KEGPOENIFHN(::UnityEngine::Vector4 HAAEBCOBKFF)
	{
		return ((::System::Void(*)(::PVOID, ::UnityEngine::Vector4))((::PBYTE)hIl2Cpp + OIBDKPJMDLO_GGLECHOIKBI_KEGPOENIFHN_OFFSET))(this, HAAEBCOBKFF);
	}

	::UnityEngine::Vector4 NEKIBCFCGLG()
	{
		return ((::UnityEngine::Vector4(*)(::PVOID))((::PBYTE)hIl2Cpp + OIBDKPJMDLO_GGLECHOIKBI_NEKIBCFCGLG_OFFSET))(this);
	}
};
