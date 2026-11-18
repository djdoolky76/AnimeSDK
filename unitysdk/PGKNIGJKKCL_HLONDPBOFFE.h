#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/UnityEngine/LayerMask.h"
#include "unitysdk/UnityEngine/RaycastHit.h"

namespace System { class String; }

#define PGKNIGJKKCL_HLONDPBOFFE_LFHMGIDENEG_OFFSET UNITYSDK_OFFSET(0x1553A0C0)
#define PGKNIGJKKCL_HLONDPBOFFE__CTOR_OFFSET UNITYSDK_OFFSET(0x1553A0B0)

inline static constexpr unsigned int PGKNIGJKKCL_HLONDPBOFFE_TypeDefinitionIndex = 75335;

class PGKNIGJKKCL_HLONDPBOFFE : public ::System::Object
{
public:
	::System::String* CEOABKCAFOF; // 0x10
	::Il2CppArray<::System::String*>* AJIAEKCFFHJ; // 0x18
	::Il2CppArray<::System::String*>* DNKAKCEAGFC; // 0x20
	::UnityEngine::LayerMask INMJMJHIFDL; // 0x28

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + PGKNIGJKKCL_HLONDPBOFFE__CTOR_OFFSET))(this);
	}

	::System::Boolean LFHMGIDENEG(::UnityEngine::RaycastHit OFLHPPDJLNL)
	{
		return ((::System::Boolean(*)(::PVOID, ::UnityEngine::RaycastHit))((::PBYTE)hIl2Cpp + PGKNIGJKKCL_HLONDPBOFFE_LFHMGIDENEG_OFFSET))(this, OFLHPPDJLNL);
	}
};
