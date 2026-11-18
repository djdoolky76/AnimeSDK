#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/OAOOLPCNHKA.h"

class MPALMNLEAIJ;

#define AFCEECMLJKL_IFHNMAGGFAE_OFFSET UNITYSDK_OFFSET(0x16D72000)
#define AFCEECMLJKL_JNGDCCGFFMP_OFFSET UNITYSDK_OFFSET(0x16D6C850)
#define AFCEECMLJKL_KNDMMHPDPIB_OFFSET UNITYSDK_OFFSET(0x16D6C8E0)
#define AFCEECMLJKL_LDCJONOBGEB_OFFSET UNITYSDK_OFFSET(0x16D71EE0)
#define AFCEECMLJKL_NIGDIMFIAEJ_OFFSET UNITYSDK_OFFSET(0x16D71F70)
#define AFCEECMLJKL_ONDESTROY_OFFSET UNITYSDK_OFFSET(0x16D6C5E0)
#define AFCEECMLJKL_START_OFFSET UNITYSDK_OFFSET(0x16D6C4D0)
#define AFCEECMLJKL_WAITFORFIXEDUPDATE_OFFSET UNITYSDK_OFFSET(0x16D6C6F0)
#define AFCEECMLJKL__CCTOR_OFFSET UNITYSDK_OFFSET(0x16D71E60)
#define AFCEECMLJKL__CTOR_OFFSET UNITYSDK_OFFSET(0x16D71E10)

inline static constexpr unsigned int AFCEECMLJKL_TypeDefinitionIndex = 71518;

class AFCEECMLJKL : public ::OAOOLPCNHKA
{
public:
	static ::MPALMNLEAIJ** StaticGet_EILDHKDHIHI()
	{
		return (::MPALMNLEAIJ**)Il2CppClass::FromTypeDefinitionIndex(AFCEECMLJKL_TypeDefinitionIndex)->GetStaticField(0x38790);
	}
	static ::MPALMNLEAIJ** StaticGet_GOBEOPMDHDL()
	{
		return (::MPALMNLEAIJ**)Il2CppClass::FromTypeDefinitionIndex(AFCEECMLJKL_TypeDefinitionIndex)->GetStaticField(0x38798);
	}
	static ::System::Boolean* StaticGet_PEDANHBGIGE()
	{
		return (::System::Boolean*)Il2CppClass::FromTypeDefinitionIndex(AFCEECMLJKL_TypeDefinitionIndex)->GetStaticField(0xCBF0);
	}

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + AFCEECMLJKL__CTOR_OFFSET))(this);
	}

	static ::System::Void _cctor()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + AFCEECMLJKL__CCTOR_OFFSET))();
	}

	::System::Void Start()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + AFCEECMLJKL_START_OFFSET))(this);
	}

	::System::Void OnDestroy()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + AFCEECMLJKL_ONDESTROY_OFFSET))(this);
	}

	::System::Void WaitForFixedUpdate()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + AFCEECMLJKL_WAITFORFIXEDUPDATE_OFFSET))(this);
	}

	::System::Void LDCJONOBGEB()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + AFCEECMLJKL_LDCJONOBGEB_OFFSET))(this);
	}

	static ::System::Void KNDMMHPDPIB()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + AFCEECMLJKL_KNDMMHPDPIB_OFFSET))();
	}

	::System::Void NIGDIMFIAEJ()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + AFCEECMLJKL_NIGDIMFIAEJ_OFFSET))(this);
	}

	static ::System::Void JNGDCCGFFMP()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + AFCEECMLJKL_JNGDCCGFFMP_OFFSET))();
	}

	::System::Void IFHNMAGGFAE()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + AFCEECMLJKL_IFHNMAGGFAE_OFFSET))(this);
	}
};
