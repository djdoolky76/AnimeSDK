#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/GCJMBIOBFJN.h"
#include "unitysdk/UnityEngine/Vector3.h"

namespace System { class String; }
namespace UnityEngine { class Collider; }

#define FFOBNKJKBAB_EAIJCOBOFEN_OFFSET UNITYSDK_OFFSET(0x169D5730)
#define FFOBNKJKBAB_EHOPNFKKNMK_OFFSET UNITYSDK_OFFSET(0x169D56D0)
#define FFOBNKJKBAB_FBBMMKAHLFN_OFFSET UNITYSDK_OFFSET(0x169D57F0)
#define FFOBNKJKBAB_FCONHHMEJGM_OFFSET UNITYSDK_OFFSET(0x169D5800)
#define FFOBNKJKBAB_FHCGJCMAFIL_OFFSET UNITYSDK_OFFSET(0x169D5820)
#define FFOBNKJKBAB_JCNMPAFLCHJ_OFFSET UNITYSDK_OFFSET(0x169D5870)
#define FFOBNKJKBAB_KMBEFKBFBJC_OFFSET UNITYSDK_OFFSET(0x169D57E0)
#define FFOBNKJKBAB__CTOR_OFFSET UNITYSDK_OFFSET(0x169D5810)

inline static constexpr unsigned int FFOBNKJKBAB_TypeDefinitionIndex = 66743;

class FFOBNKJKBAB : public ::GCJMBIOBFJN
{
public:
	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + FFOBNKJKBAB__CTOR_OFFSET))(this);
	}

	::System::String* EHOPNFKKNMK()
	{
		return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + FFOBNKJKBAB_EHOPNFKKNMK_OFFSET))(this);
	}

	::System::Int32 EAIJCOBOFEN()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + FFOBNKJKBAB_EAIJCOBOFEN_OFFSET))(this);
	}

	::System::Boolean KMBEFKBFBJC()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + FFOBNKJKBAB_KMBEFKBFBJC_OFFSET))(this);
	}

	::System::Boolean FBBMMKAHLFN()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + FFOBNKJKBAB_FBBMMKAHLFN_OFFSET))(this);
	}

	::System::Boolean FCONHHMEJGM()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + FFOBNKJKBAB_FCONHHMEJGM_OFFSET))(this);
	}

	::System::Boolean FHCGJCMAFIL(::UnityEngine::Vector3& AGHNEGFHKMC)
	{
		return ((::System::Boolean(*)(::PVOID, ::UnityEngine::Vector3&))((::PBYTE)hIl2Cpp + FFOBNKJKBAB_FHCGJCMAFIL_OFFSET))(this, AGHNEGFHKMC);
	}

	::System::Boolean JCNMPAFLCHJ(::UnityEngine::Collider*& EHHHMFKHNAI, ::UnityEngine::Vector3& AGHNEGFHKMC)
	{
		return ((::System::Boolean(*)(::PVOID, ::UnityEngine::Collider*&, ::UnityEngine::Vector3&))((::PBYTE)hIl2Cpp + FFOBNKJKBAB_JCNMPAFLCHJ_OFFSET))(this, EHHHMFKHNAI, AGHNEGFHKMC);
	}
};
