#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/UnityEngine/Vector3.h"

class PNJDGHBEMLK;

#define CMMBBCHFIJJ_AIGDDNFOKII_OFFSET UNITYSDK_OFFSET(0x14978B80)
#define CMMBBCHFIJJ_BBKPIJFOMFO_OFFSET UNITYSDK_OFFSET(0x14978C30)
#define CMMBBCHFIJJ_GGDPOMLHEFJ_OFFSET UNITYSDK_OFFSET(0x14978C20)
#define CMMBBCHFIJJ_JLEGHNGEBOG_OFFSET UNITYSDK_OFFSET(0x14978B90)
#define CMMBBCHFIJJ_PMKNEOCFPCF_OFFSET UNITYSDK_OFFSET(0x14978B70)
#define CMMBBCHFIJJ__CTOR_OFFSET UNITYSDK_OFFSET(0x14978B60)

inline static constexpr unsigned int CMMBBCHFIJJ_TypeDefinitionIndex = 70188;

class CMMBBCHFIJJ : public ::System::Object
{
public:
	::PNJDGHBEMLK* BPNJBMCANEE; // 0x10
	::System::Boolean DHDHIOIJEJK; // 0x18
	::System::Boolean ACANCAIOEDA; // 0x19

	::System::Void _ctor(::PNJDGHBEMLK* CDKCJAKODPN, ::System::Boolean GMFMMIEGIHO, ::System::Boolean BHLLFKICOHC)
	{
		return ((::System::Void(*)(::PVOID, ::PNJDGHBEMLK*, ::System::Boolean, ::System::Boolean))((::PBYTE)hIl2Cpp + CMMBBCHFIJJ__CTOR_OFFSET))(this, CDKCJAKODPN, GMFMMIEGIHO, BHLLFKICOHC);
	}

	::PNJDGHBEMLK* PMKNEOCFPCF()
	{
		return ((::PNJDGHBEMLK*(*)(::PVOID))((::PBYTE)hIl2Cpp + CMMBBCHFIJJ_PMKNEOCFPCF_OFFSET))(this);
	}

	::System::Boolean AIGDDNFOKII()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + CMMBBCHFIJJ_AIGDDNFOKII_OFFSET))(this);
	}

	::UnityEngine::Vector3 JLEGHNGEBOG()
	{
		return ((::UnityEngine::Vector3(*)(::PVOID))((::PBYTE)hIl2Cpp + CMMBBCHFIJJ_JLEGHNGEBOG_OFFSET))(this);
	}

	::System::Boolean GGDPOMLHEFJ()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + CMMBBCHFIJJ_GGDPOMLHEFJ_OFFSET))(this);
	}

	::UnityEngine::Vector3 BBKPIJFOMFO(::System::Single ALPANKAJAGK, ::System::Single DMIAICJPPDL, ::System::Boolean PEMKHJBIFJG, ::System::Boolean CEIJEEPIBEH)
	{
		return ((::UnityEngine::Vector3(*)(::PVOID, ::System::Single, ::System::Single, ::System::Boolean, ::System::Boolean))((::PBYTE)hIl2Cpp + CMMBBCHFIJJ_BBKPIJFOMFO_OFFSET))(this, ALPANKAJAGK, DMIAICJPPDL, PEMKHJBIFJG, CEIJEEPIBEH);
	}
};
