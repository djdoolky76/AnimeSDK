#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class GHICACFMBNP;
namespace UnityEngine { class RectTransform; }

#define ODBKEIOMGPM_COFELNJPGNA_ILILNIMPFAH_OFFSET UNITYSDK_OFFSET(0x13A4BDF0)
#define ODBKEIOMGPM_COFELNJPGNA__CTOR_OFFSET UNITYSDK_OFFSET(0x13A4BDE0)

inline static constexpr unsigned int ODBKEIOMGPM_COFELNJPGNA_TypeDefinitionIndex = 89916;

class ODBKEIOMGPM_COFELNJPGNA : public ::System::Object
{
public:
	::GHICACFMBNP* MMPGJNECJGP; // 0x10
	::UnityEngine::RectTransform* MGOFOAFCFIJ; // 0x18

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + ODBKEIOMGPM_COFELNJPGNA__CTOR_OFFSET))(this);
	}

	::System::Void ILILNIMPFAH()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + ODBKEIOMGPM_COFELNJPGNA_ILILNIMPFAH_OFFSET))(this);
	}
};
