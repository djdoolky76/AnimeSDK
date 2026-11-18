#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/CGEHELPGEGO_HMMKJADFNEB.h"
#include "unitysdk/System/Object.h"

namespace UnityEngine { class Transform; }

#define CGEHELPGEGO_CGNFLABBPKM_OFFSET UNITYSDK_OFFSET(0x18DCF920)
#define CGEHELPGEGO_GECFHIBMOCA_OFFSET UNITYSDK_OFFSET(0x18DCF510)
#define CGEHELPGEGO_GFFHAMJEABP_OFFSET UNITYSDK_OFFSET(0x18DCF980)
#define CGEHELPGEGO_JFICBDLMKBD_OFFSET UNITYSDK_OFFSET(0x18DCF5E0)
#define CGEHELPGEGO_JMFOBMHNIOF_OFFSET UNITYSDK_OFFSET(0x18DCF8E0)
#define CGEHELPGEGO_PLEBJJLHLIG_OFFSET UNITYSDK_OFFSET(0x18DCF630)
#define CGEHELPGEGO_PLPONJAKNEB_OFFSET UNITYSDK_OFFSET(0x18DCF680)
#define CGEHELPGEGO__CTOR_OFFSET UNITYSDK_OFFSET(0x18DCF500)

inline static constexpr unsigned int CGEHELPGEGO_TypeDefinitionIndex = 88351;

class CGEHELPGEGO : public ::System::Object
{
public:
	::UnityEngine::Transform* BMPCFGDINHN; // 0x10
	::CGEHELPGEGO_HMMKJADFNEB MBBGIFIEOLK; // 0x18
	::System::Boolean AOIOFINNPCH; // 0x1C
	::System::Boolean KHFOOHDFHGL; // 0x1D
	::System::Byte _padding0[0x2];
	::System::Int32 PFDADPAOAEK; // 0x20
	::System::Single GPDCBHEPDGL; // 0x24
	::System::Single JOFGIANGHMK; // 0x28
	::System::Int32 DJKOFJDOCJJ; // 0x2C
	::System::Single AJPAFKAPNNM; // 0x30

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CGEHELPGEGO__CTOR_OFFSET))(this);
	}

	::System::Void GECFHIBMOCA(::System::Single PMNLNNGEIFM)
	{
		return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + CGEHELPGEGO_GECFHIBMOCA_OFFSET))(this, PMNLNNGEIFM);
	}

	::System::Boolean JFICBDLMKBD()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + CGEHELPGEGO_JFICBDLMKBD_OFFSET))(this);
	}

	::System::Boolean PLEBJJLHLIG()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + CGEHELPGEGO_PLEBJJLHLIG_OFFSET))(this);
	}

	::System::Void PLPONJAKNEB(::System::Single PMNLNNGEIFM)
	{
		return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + CGEHELPGEGO_PLPONJAKNEB_OFFSET))(this, PMNLNNGEIFM);
	}

	::System::Void JMFOBMHNIOF()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CGEHELPGEGO_JMFOBMHNIOF_OFFSET))(this);
	}

	::System::Void CGNFLABBPKM()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CGEHELPGEGO_CGNFLABBPKM_OFFSET))(this);
	}

	::System::Boolean GFFHAMJEABP()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + CGEHELPGEGO_GFFHAMJEABP_OFFSET))(this);
	}
};
