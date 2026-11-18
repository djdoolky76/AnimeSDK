#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/GCJMBIOBFJN.h"
#include "unitysdk/UnityEngine/Vector3.h"

namespace System { class String; }
namespace UnityEngine { class Collider; }

#define OOIGHKMIKFL_EAIJCOBOFEN_OFFSET UNITYSDK_OFFSET(0x16F8FEF0)
#define OOIGHKMIKFL_EHOPNFKKNMK_OFFSET UNITYSDK_OFFSET(0x16F8FE90)
#define OOIGHKMIKFL_FBBMMKAHLFN_OFFSET UNITYSDK_OFFSET(0x16F8FFB0)
#define OOIGHKMIKFL_FCONHHMEJGM_OFFSET UNITYSDK_OFFSET(0x16F8FFC0)
#define OOIGHKMIKFL_FHCGJCMAFIL_OFFSET UNITYSDK_OFFSET(0x16F90330)
#define OOIGHKMIKFL_JCNMPAFLCHJ_OFFSET UNITYSDK_OFFSET(0x16F8FFE0)
#define OOIGHKMIKFL_KMBEFKBFBJC_OFFSET UNITYSDK_OFFSET(0x16F8FFA0)
#define OOIGHKMIKFL__CTOR_OFFSET UNITYSDK_OFFSET(0x16F8FFD0)

inline static constexpr unsigned int OOIGHKMIKFL_TypeDefinitionIndex = 80320;

class OOIGHKMIKFL : public ::GCJMBIOBFJN
{
public:
	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + OOIGHKMIKFL__CTOR_OFFSET))(this);
	}

	::System::String* EHOPNFKKNMK()
	{
		return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + OOIGHKMIKFL_EHOPNFKKNMK_OFFSET))(this);
	}

	::System::Int32 EAIJCOBOFEN()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + OOIGHKMIKFL_EAIJCOBOFEN_OFFSET))(this);
	}

	::System::Boolean KMBEFKBFBJC()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + OOIGHKMIKFL_KMBEFKBFBJC_OFFSET))(this);
	}

	::System::Boolean FBBMMKAHLFN()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + OOIGHKMIKFL_FBBMMKAHLFN_OFFSET))(this);
	}

	::System::Boolean FCONHHMEJGM()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + OOIGHKMIKFL_FCONHHMEJGM_OFFSET))(this);
	}

	::System::Boolean JCNMPAFLCHJ(::UnityEngine::Collider*& EHHHMFKHNAI, ::UnityEngine::Vector3& AGHNEGFHKMC)
	{
		return ((::System::Boolean(*)(::PVOID, ::UnityEngine::Collider*&, ::UnityEngine::Vector3&))((::PBYTE)hIl2Cpp + OOIGHKMIKFL_JCNMPAFLCHJ_OFFSET))(this, EHHHMFKHNAI, AGHNEGFHKMC);
	}

	::System::Boolean FHCGJCMAFIL(::UnityEngine::Vector3& AGHNEGFHKMC)
	{
		return ((::System::Boolean(*)(::PVOID, ::UnityEngine::Vector3&))((::PBYTE)hIl2Cpp + OOIGHKMIKFL_FHCGJCMAFIL_OFFSET))(this, AGHNEGFHKMC);
	}
};
