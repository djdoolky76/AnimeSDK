#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/ODAEDPKLBPE.h"

namespace UnityEngine::Rendering::Universal::Internal { class SceneObjectProxy; }

#define LFBJNGAMCIM_BJANDJKKNCD_OFFSET UNITYSDK_OFFSET(0x158D0820)
#define LFBJNGAMCIM_CMFOIAAGPFL_OFFSET UNITYSDK_OFFSET(0x158D08A0)
#define LFBJNGAMCIM_JPMIFNEHDIL_OFFSET UNITYSDK_OFFSET(0x158D0270)
#define LFBJNGAMCIM_LCOMPIBAKEI_OFFSET UNITYSDK_OFFSET(0x158D05F0)
#define LFBJNGAMCIM_LDAKMNGHELE_OFFSET UNITYSDK_OFFSET(0x158D0580)
#define LFBJNGAMCIM__CTOR_OFFSET UNITYSDK_OFFSET(0x158D0890)

inline static constexpr unsigned int LFBJNGAMCIM_TypeDefinitionIndex = 92433;

class LFBJNGAMCIM : public ::ODAEDPKLBPE
{
public:
	::UnityEngine::Rendering::Universal::Internal::SceneObjectProxy* CENDLIKDNJA; // 0x18
	::System::Single IHMFODFGLHP; // 0x20

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + LFBJNGAMCIM__CTOR_OFFSET))(this);
	}

	::System::Void JPMIFNEHDIL()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + LFBJNGAMCIM_JPMIFNEHDIL_OFFSET))(this);
	}

	::System::Void LDAKMNGHELE()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + LFBJNGAMCIM_LDAKMNGHELE_OFFSET))(this);
	}

	::System::Void LCOMPIBAKEI(::System::Int32 JKBLDFBGBPK)
	{
		return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + LFBJNGAMCIM_LCOMPIBAKEI_OFFSET))(this, JKBLDFBGBPK);
	}

	::System::Void BJANDJKKNCD()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + LFBJNGAMCIM_BJANDJKKNCD_OFFSET))(this);
	}

	::System::Void CMFOIAAGPFL()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + LFBJNGAMCIM_CMFOIAAGPFL_OFFSET))(this);
	}
};
