#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace UnityEngine { class Material; }

#define OIBDKPJMDLO_ENIDFLBJBIN_BADADMHEFEK_OFFSET UNITYSDK_OFFSET(0x14F795A0)
#define OIBDKPJMDLO_ENIDFLBJBIN_CMAFELDKGIC_OFFSET UNITYSDK_OFFSET(0x14F79510)
#define OIBDKPJMDLO_ENIDFLBJBIN_ICDAPAGJJLC_OFFSET UNITYSDK_OFFSET(0x14F79490)
#define OIBDKPJMDLO_ENIDFLBJBIN_NLNMOLGEIKI_OFFSET UNITYSDK_OFFSET(0x14F79410)
#define OIBDKPJMDLO_ENIDFLBJBIN__CTOR_OFFSET UNITYSDK_OFFSET(0x14F79400)

inline static constexpr unsigned int OIBDKPJMDLO_ENIDFLBJBIN_TypeDefinitionIndex = 52475;

class OIBDKPJMDLO_ENIDFLBJBIN : public ::System::Object
{
public:
	::UnityEngine::Material* EBIDGDBLDPI; // 0x10

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + OIBDKPJMDLO_ENIDFLBJBIN__CTOR_OFFSET))(this);
	}

	::System::Single NLNMOLGEIKI()
	{
		return ((::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + OIBDKPJMDLO_ENIDFLBJBIN_NLNMOLGEIKI_OFFSET))(this);
	}

	::System::Single ICDAPAGJJLC()
	{
		return ((::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + OIBDKPJMDLO_ENIDFLBJBIN_ICDAPAGJJLC_OFFSET))(this);
	}

	::System::Void CMAFELDKGIC(::System::Single HAAEBCOBKFF)
	{
		return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + OIBDKPJMDLO_ENIDFLBJBIN_CMAFELDKGIC_OFFSET))(this, HAAEBCOBKFF);
	}

	::System::Void BADADMHEFEK(::System::Single HAAEBCOBKFF)
	{
		return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + OIBDKPJMDLO_ENIDFLBJBIN_BADADMHEFEK_OFFSET))(this, HAAEBCOBKFF);
	}
};
