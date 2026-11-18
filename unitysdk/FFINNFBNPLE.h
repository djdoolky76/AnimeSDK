#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/FFINNFBNPLE_ONLFENKKCKL.h"
#include "unitysdk/System/Object.h"

namespace UnityEngine { class Transform; }

#define FFINNFBNPLE_CGNFLABBPKM_OFFSET UNITYSDK_OFFSET(0x16184DE0)
#define FFINNFBNPLE_GFFHAMJEABP_OFFSET UNITYSDK_OFFSET(0x16184DD0)
#define FFINNFBNPLE_JFICBDLMKBD_OFFSET UNITYSDK_OFFSET(0x16184E40)
#define FFINNFBNPLE_JMFOBMHNIOF_OFFSET UNITYSDK_OFFSET(0x16184D90)
#define FFINNFBNPLE_KBBKDJJBMNJ_OFFSET UNITYSDK_OFFSET(0x16184CC0)
#define FFINNFBNPLE_PLEBJJLHLIG_OFFSET UNITYSDK_OFFSET(0x16184890)
#define FFINNFBNPLE_PLPONJAKNEB_OFFSET UNITYSDK_OFFSET(0x161848E0)
#define FFINNFBNPLE__CTOR_OFFSET UNITYSDK_OFFSET(0x16184880)

inline static constexpr unsigned int FFINNFBNPLE_TypeDefinitionIndex = 76055;

class FFINNFBNPLE : public ::System::Object
{
public:
	::UnityEngine::Transform* DDNIHAIOCBD; // 0x10
	::System::Single GPDCBHEPDGL; // 0x18
	::System::Single AJPAFKAPNNM; // 0x1C
	::System::Boolean AOIOFINNPCH; // 0x20
	::System::Boolean KHFOOHDFHGL; // 0x21
	::System::Byte _padding0[0x2];
	::System::Single JOFGIANGHMK; // 0x24
	::FFINNFBNPLE_ONLFENKKCKL MBBGIFIEOLK; // 0x28
	::System::Int32 PFDADPAOAEK; // 0x2C
	::System::Int32 DJKOFJDOCJJ; // 0x30

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + FFINNFBNPLE__CTOR_OFFSET))(this);
	}

	::System::Boolean PLEBJJLHLIG()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + FFINNFBNPLE_PLEBJJLHLIG_OFFSET))(this);
	}

	::System::Void PLPONJAKNEB(::System::Single PMNLNNGEIFM)
	{
		return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + FFINNFBNPLE_PLPONJAKNEB_OFFSET))(this, PMNLNNGEIFM);
	}

	::System::Void KBBKDJJBMNJ(::System::Single PMNLNNGEIFM)
	{
		return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + FFINNFBNPLE_KBBKDJJBMNJ_OFFSET))(this, PMNLNNGEIFM);
	}

	::System::Void JMFOBMHNIOF()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + FFINNFBNPLE_JMFOBMHNIOF_OFFSET))(this);
	}

	::System::Boolean GFFHAMJEABP()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + FFINNFBNPLE_GFFHAMJEABP_OFFSET))(this);
	}

	::System::Void CGNFLABBPKM()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + FFINNFBNPLE_CGNFLABBPKM_OFFSET))(this);
	}

	::System::Boolean JFICBDLMKBD()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + FFINNFBNPLE_JFICBDLMKBD_OFFSET))(this);
	}
};
