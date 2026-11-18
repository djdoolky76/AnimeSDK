#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace UnityEngine { class Material; }

#define JEJHNGDJCHI_KPLCIOEGGKO_OFFSET UNITYSDK_OFFSET(0x16ACD9A0)
#define JEJHNGDJCHI_MFNBDGKNGAA_OFFSET UNITYSDK_OFFSET(0x16ACDA20)
#define JEJHNGDJCHI__CCTOR_OFFSET UNITYSDK_OFFSET(0x16ACD960)
#define JEJHNGDJCHI__CTOR_OFFSET UNITYSDK_OFFSET(0x16ACD950)

inline static constexpr unsigned int JEJHNGDJCHI_TypeDefinitionIndex = 93094;

class JEJHNGDJCHI : public ::System::Object
{
public:
	static ::System::Int32* StaticGet_NJIHKHEPFNK()
	{
		return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(JEJHNGDJCHI_TypeDefinitionIndex)->GetStaticField(0x12D00);
	}
	::UnityEngine::Material* FEDEMLCMDIC; // 0x10

	::System::Void _ctor(::UnityEngine::Material* FEDEMLCMDIC)
	{
		return ((::System::Void(*)(::PVOID, ::UnityEngine::Material*))((::PBYTE)hIl2Cpp + JEJHNGDJCHI__CTOR_OFFSET))(this, FEDEMLCMDIC);
	}

	static ::System::Void _cctor()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + JEJHNGDJCHI__CCTOR_OFFSET))();
	}

	::System::Single KPLCIOEGGKO()
	{
		return ((::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + JEJHNGDJCHI_KPLCIOEGGKO_OFFSET))(this);
	}

	::System::Void MFNBDGKNGAA(::System::Single EGEGIMGMJHN)
	{
		return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + JEJHNGDJCHI_MFNBDGKNGAA_OFFSET))(this, EGEGIMGMJHN);
	}
};
