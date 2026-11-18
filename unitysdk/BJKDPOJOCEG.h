#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class ANAPNFPOMNG;

#define BJKDPOJOCEG_NLCHKEPJAJE_OFFSET UNITYSDK_OFFSET(0x169F7A10)
#define BJKDPOJOCEG__CCTOR_OFFSET UNITYSDK_OFFSET(0x169F7BD0)
#define BJKDPOJOCEG__CTOR_OFFSET UNITYSDK_OFFSET(0x169F7BC0)

inline static constexpr unsigned int BJKDPOJOCEG_TypeDefinitionIndex = 64339;

class BJKDPOJOCEG : public ::System::Object
{
public:
	static ::BJKDPOJOCEG** StaticGet_NJLLMPCDOEB()
	{
		return (::BJKDPOJOCEG**)Il2CppClass::FromTypeDefinitionIndex(BJKDPOJOCEG_TypeDefinitionIndex)->GetStaticField(0x3E9C0);
	}

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + BJKDPOJOCEG__CTOR_OFFSET))(this);
	}

	static ::System::Void _cctor()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + BJKDPOJOCEG__CCTOR_OFFSET))();
	}

	::ANAPNFPOMNG* NLCHKEPJAJE(::System::Int32 OBNIAHNMHPF)
	{
		return ((::ANAPNFPOMNG*(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + BJKDPOJOCEG_NLCHKEPJAJE_OFFSET))(this, OBNIAHNMHPF);
	}
};
