#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

#define OCPDCNFACFM__CCTOR_OFFSET UNITYSDK_OFFSET(0x13A4BA30)

inline static constexpr unsigned int OCPDCNFACFM_TypeDefinitionIndex = 43032;

class OCPDCNFACFM : public ::System::Object
{
public:
	static ::System::Boolean* StaticGet_JNLLEONJNGF()
	{
		return (::System::Boolean*)Il2CppClass::FromTypeDefinitionIndex(OCPDCNFACFM_TypeDefinitionIndex)->GetStaticField(0xA8F0);
	}
	static ::System::Boolean* StaticGet_GLOMCPPHEID()
	{
		return (::System::Boolean*)Il2CppClass::FromTypeDefinitionIndex(OCPDCNFACFM_TypeDefinitionIndex)->GetStaticField(0xA8F1);
	}
	static ::System::Boolean* StaticGet_LGMKONFHMAF()
	{
		return (::System::Boolean*)Il2CppClass::FromTypeDefinitionIndex(OCPDCNFACFM_TypeDefinitionIndex)->GetStaticField(0xA8F2);
	}
	static ::System::Boolean* StaticGet_DDMGFOGLLDO()
	{
		return (::System::Boolean*)Il2CppClass::FromTypeDefinitionIndex(OCPDCNFACFM_TypeDefinitionIndex)->GetStaticField(0xA8F3);
	}
	static ::System::Int32* StaticGet_KBGHILOGDME()
	{
		return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(OCPDCNFACFM_TypeDefinitionIndex)->GetStaticField(0xA8F4);
	}
	// static const ::System::Single EGNBCFMJHJA; // 0x0
	// static const ::System::Int32 GIFMBGKKAEC = 0x32; // 0x0
	// static const ::System::Int32 FHNAAKFIEHM = 0xA; // 0x0
	// static const ::System::Int32 JJHKGAEFAOK = 0x3C; // 0x0
	// static const ::System::Int32 NLEDKIDAFBE = 0x5; // 0x0

	static ::System::Void _cctor()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + OCPDCNFACFM__CCTOR_OFFSET))();
	}
};
