#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace UnityEngine { class Transform; }

#define PCMENEMPLGF_CNEMELPKBJM_AJNNMIBBPJC_OFFSET UNITYSDK_OFFSET(0x13A88340)
#define PCMENEMPLGF_CNEMELPKBJM__CTOR_OFFSET UNITYSDK_OFFSET(0x13A88330)

inline static constexpr unsigned int PCMENEMPLGF_CNEMELPKBJM_TypeDefinitionIndex = 62825;

class PCMENEMPLGF_CNEMELPKBJM : public ::System::Object
{
public:
	::UnityEngine::Transform* HANNHHAGPHB; // 0x10

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + PCMENEMPLGF_CNEMELPKBJM__CTOR_OFFSET))(this);
	}

	::System::Void AJNNMIBBPJC()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + PCMENEMPLGF_CNEMELPKBJM_AJNNMIBBPJC_OFFSET))(this);
	}
};
