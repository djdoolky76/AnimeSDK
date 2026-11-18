#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace UnityEngine { class Material; }

#define OIBDKPJMDLO_NOPJKGNBPKH_BNMPIDMBKMK_OFFSET UNITYSDK_OFFSET(0x16C17980)
#define OIBDKPJMDLO_NOPJKGNBPKH_GGCBKAICLAF_OFFSET UNITYSDK_OFFSET(0x16C17A90)
#define OIBDKPJMDLO_NOPJKGNBPKH_MNOMIIFAGCG_OFFSET UNITYSDK_OFFSET(0x16C17A00)
#define OIBDKPJMDLO_NOPJKGNBPKH__CTOR_OFFSET UNITYSDK_OFFSET(0x16C17970)

inline static constexpr unsigned int OIBDKPJMDLO_NOPJKGNBPKH_TypeDefinitionIndex = 52476;

class OIBDKPJMDLO_NOPJKGNBPKH : public ::System::Object
{
public:
	::UnityEngine::Material* EBIDGDBLDPI; // 0x10

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + OIBDKPJMDLO_NOPJKGNBPKH__CTOR_OFFSET))(this);
	}

	::System::Void BNMPIDMBKMK()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + OIBDKPJMDLO_NOPJKGNBPKH_BNMPIDMBKMK_OFFSET))(this);
	}

	::System::Void MNOMIIFAGCG(::System::Single HAAEBCOBKFF)
	{
		return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + OIBDKPJMDLO_NOPJKGNBPKH_MNOMIIFAGCG_OFFSET))(this, HAAEBCOBKFF);
	}

	::System::Single GGCBKAICLAF()
	{
		return ((::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + OIBDKPJMDLO_NOPJKGNBPKH_GGCBKAICLAF_OFFSET))(this);
	}
};
