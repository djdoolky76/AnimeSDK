#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class IFOHGNLIAKH;
namespace UnityEngine { class Transform; }

#define CPGKIKINDJM_JGKIDEPAEHN_GBODMIFMLOA_OFFSET UNITYSDK_OFFSET(0x145E1380)
#define CPGKIKINDJM_JGKIDEPAEHN__CTOR_OFFSET UNITYSDK_OFFSET(0x145E1370)

inline static constexpr unsigned int CPGKIKINDJM_JGKIDEPAEHN_TypeDefinitionIndex = 61849;

class CPGKIKINDJM_JGKIDEPAEHN : public ::System::Object
{
public:
	::UnityEngine::Transform* HINJNFBOMJI; // 0x10
	::System::Int32 KCNOHOOPNAH; // 0x18

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CPGKIKINDJM_JGKIDEPAEHN__CTOR_OFFSET))(this);
	}

	::System::Void GBODMIFMLOA(::IFOHGNLIAKH* PIIPCLCCOIG)
	{
		return ((::System::Void(*)(::PVOID, ::IFOHGNLIAKH*))((::PBYTE)hIl2Cpp + CPGKIKINDJM_JGKIDEPAEHN_GBODMIFMLOA_OFFSET))(this, PIIPCLCCOIG);
	}
};
