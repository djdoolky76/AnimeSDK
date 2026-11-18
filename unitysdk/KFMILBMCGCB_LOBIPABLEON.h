#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace System { class String; }

#define KFMILBMCGCB_LOBIPABLEON__CCTOR_OFFSET UNITYSDK_OFFSET(0x15B88F00)

inline static constexpr unsigned int KFMILBMCGCB_LOBIPABLEON_TypeDefinitionIndex = 63620;

class KFMILBMCGCB_LOBIPABLEON : public ::System::Object
{
public:
	static ::System::String** StaticGet_DCGJHLGOFLN()
	{
		return (::System::String**)Il2CppClass::FromTypeDefinitionIndex(KFMILBMCGCB_LOBIPABLEON_TypeDefinitionIndex)->GetStaticField(0x35920);
	}
	static ::System::String** StaticGet_FAGKECGOEBM()
	{
		return (::System::String**)Il2CppClass::FromTypeDefinitionIndex(KFMILBMCGCB_LOBIPABLEON_TypeDefinitionIndex)->GetStaticField(0x35928);
	}
	static ::System::String** StaticGet_ENOOLJJBIAB()
	{
		return (::System::String**)Il2CppClass::FromTypeDefinitionIndex(KFMILBMCGCB_LOBIPABLEON_TypeDefinitionIndex)->GetStaticField(0x35930);
	}

	static ::System::Void _cctor()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + KFMILBMCGCB_LOBIPABLEON__CCTOR_OFFSET))();
	}
};
