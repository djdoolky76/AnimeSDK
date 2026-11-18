#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/GMLFMJMLDJB.h"
#include "unitysdk/System/ValueType.h"

namespace System { class Object; }
namespace System { class String; }

#define NIKMEJNINMI_CALABOHEKKK_OFFSET UNITYSDK_OFFSET(0x5E6980)
#define NIKMEJNINMI_DPIHOJBBGLA_OFFSET UNITYSDK_OFFSET(0x908220)
#define NIKMEJNINMI_EQUALS_1_OFFSET UNITYSDK_OFFSET(0x9080F0)
#define NIKMEJNINMI_EQUALS_OFFSET UNITYSDK_OFFSET(0x908020)
#define NIKMEJNINMI_GDEBIAOOJGK_OFFSET UNITYSDK_OFFSET(0x1E5F77C0)
#define NIKMEJNINMI_GETHASHCODE_OFFSET UNITYSDK_OFFSET(0x908100)
#define NIKMEJNINMI_HLPHPBAODIF_OFFSET UNITYSDK_OFFSET(0x9082A0)
#define NIKMEJNINMI_JGBGPJACDOG_OFFSET UNITYSDK_OFFSET(0x908300)
#define NIKMEJNINMI_LMIDALFFGBM_OFFSET UNITYSDK_OFFSET(0x2E38E0)
#define NIKMEJNINMI_PMGIJNNCMAE_OFFSET UNITYSDK_OFFSET(0x359320)
#define NIKMEJNINMI_TOSTRING_OFFSET UNITYSDK_OFFSET(0x908010)
#define NIKMEJNINMI__CCTOR_OFFSET UNITYSDK_OFFSET(0x1E5F7B40)
#define NIKMEJNINMI__CTOR_OFFSET UNITYSDK_OFFSET(0x908000)

inline static constexpr unsigned int NIKMEJNINMI_TypeDefinitionIndex = 34079;

struct alignas(8) NIKMEJNINMI
{
	static ::NIKMEJNINMI* StaticGet_BAGLCAFLJIP()
	{
		return (::NIKMEJNINMI*)Il2CppClass::FromTypeDefinitionIndex(NIKMEJNINMI_TypeDefinitionIndex)->GetStaticField(0x2A020);
	}
	static ::NIKMEJNINMI* StaticGet_HKLINGLNGAL()
	{
		return (::NIKMEJNINMI*)Il2CppClass::FromTypeDefinitionIndex(NIKMEJNINMI_TypeDefinitionIndex)->GetStaticField(0x2A030);
	}
	::GMLFMJMLDJB _LFCJKDDFEMD_k__BackingField; // 0x10
	::System::Byte _padding0[0x4];
	::System::String* _GDJCDOJCNJM_k__BackingField; // 0x18

	::System::Void _ctor(::GMLFMJMLDJB DMHCNCHBEGK, ::System::String* NAPFALLANDL)
	{
		return ((::System::Void(*)(::PVOID, ::GMLFMJMLDJB, ::System::String*))((::PBYTE)hIl2Cpp + NIKMEJNINMI__CTOR_OFFSET))(this, DMHCNCHBEGK, NAPFALLANDL);
	}

	static ::System::Void _cctor()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + NIKMEJNINMI__CCTOR_OFFSET))();
	}

	::System::String* ToString()
	{
		return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + NIKMEJNINMI_TOSTRING_OFFSET))(this);
	}

	/*
	::System::Boolean Equals(::NIKMEJNINMI LIBPKNHDIGP)
	{
		return ((::System::Boolean(*)(::PVOID, ::NIKMEJNINMI))((::PBYTE)hIl2Cpp + NIKMEJNINMI_EQUALS_OFFSET))(this, LIBPKNHDIGP);
	}
	*/

	::System::Boolean Equals_1(::System::Object* EIFONLCJOPG)
	{
		return ((::System::Boolean(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + NIKMEJNINMI_EQUALS_1_OFFSET))(this, EIFONLCJOPG);
	}

	::System::Int32 GetHashCode()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + NIKMEJNINMI_GETHASHCODE_OFFSET))(this);
	}

	::GMLFMJMLDJB PMGIJNNCMAE()
	{
		return ((::GMLFMJMLDJB(*)(::PVOID))((::PBYTE)hIl2Cpp + NIKMEJNINMI_PMGIJNNCMAE_OFFSET))(this);
	}

	::System::Boolean CALABOHEKKK()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + NIKMEJNINMI_CALABOHEKKK_OFFSET))(this);
	}

	static ::System::String* GDEBIAOOJGK(::System::String* EMIKCAHJLGB, ::System::Int32 DNFNKBNBJHM)
	{
		return ((::System::String*(*)(::System::String*, ::System::Int32))((::PBYTE)hIl2Cpp + NIKMEJNINMI_GDEBIAOOJGK_OFFSET))(EMIKCAHJLGB, DNFNKBNBJHM);
	}

	::System::String* LMIDALFFGBM()
	{
		return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + NIKMEJNINMI_LMIDALFFGBM_OFFSET))(this);
	}

	::System::String* DPIHOJBBGLA()
	{
		return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + NIKMEJNINMI_DPIHOJBBGLA_OFFSET))(this);
	}

	::System::Int32 HLPHPBAODIF()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + NIKMEJNINMI_HLPHPBAODIF_OFFSET))(this);
	}

	::System::Boolean JGBGPJACDOG(::System::Object* MIALFKCCCPI)
	{
		return ((::System::Boolean(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + NIKMEJNINMI_JGBGPJACDOG_OFFSET))(this, MIALFKCCCPI);
	}
};
