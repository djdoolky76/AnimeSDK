#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class AMLegIK;
namespace UnityEngine { class Transform; }

#define OMINJHFFAJI_KNPCJOLHMDB_EONKACIJKGI_OFFSET UNITYSDK_OFFSET(0x136A0940)
#define OMINJHFFAJI_KNPCJOLHMDB__CTOR_OFFSET UNITYSDK_OFFSET(0x136A0930)

inline static constexpr unsigned int OMINJHFFAJI_KNPCJOLHMDB_TypeDefinitionIndex = 56962;

class OMINJHFFAJI_KNPCJOLHMDB : public ::System::Object
{
public:
	::AMLegIK* CGINKAINIHH; // 0x10

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + OMINJHFFAJI_KNPCJOLHMDB__CTOR_OFFSET))(this);
	}

	::UnityEngine::Transform* EONKACIJKGI()
	{
		return ((::UnityEngine::Transform*(*)(::PVOID))((::PBYTE)hIl2Cpp + OMINJHFFAJI_KNPCJOLHMDB_EONKACIJKGI_OFFSET))(this);
	}
};
