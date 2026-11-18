#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Foundation/AssetRequestHandle.h"
#include "unitysdk/LFDNJFMJNEN.h"
#include "unitysdk/MoleMole/GalGame/GalgameFilterType.h"

namespace UnityEngine { class Material; }
namespace UnityEngine { class Texture2D; }

#define IBFIJCLEIPP_GJAOPIJEAKG_OFFSET UNITYSDK_OFFSET(0xEBA9930)
#define IBFIJCLEIPP_HGMMFHIGDAG_OFFSET UNITYSDK_OFFSET(0xEBA94A0)
#define IBFIJCLEIPP_NPLCHMJJLEL_OFFSET UNITYSDK_OFFSET(0xEBA9C00)
#define IBFIJCLEIPP__CCTOR_OFFSET UNITYSDK_OFFSET(0xEBA98F0)
#define IBFIJCLEIPP__CTOR_OFFSET UNITYSDK_OFFSET(0xEBA9430)

inline static constexpr unsigned int IBFIJCLEIPP_TypeDefinitionIndex = 60571;

class IBFIJCLEIPP : public ::LFDNJFMJNEN
{
public:
	static ::System::Int32* StaticGet_ELJEHDPFKJG()
	{
		return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(IBFIJCLEIPP_TypeDefinitionIndex)->GetStaticField(0xEE70);
	}
	::UnityEngine::Texture2D* OEOPCLDBNMA; // 0x68
	::Foundation::AssetRequestHandle CAEAIFMFDMG; // 0x70

	::System::Void _ctor(::MoleMole::GalGame::GalgameFilterType GKNBCPNBFLH, ::UnityEngine::Material* PHCIDEOILEJ, ::Foundation::AssetRequestHandle JFMADLONCPD, ::UnityEngine::Material* MPFALCGCFDO, ::Foundation::AssetRequestHandle JFIICDCDGEM)
	{
		return ((::System::Void(*)(::PVOID, ::MoleMole::GalGame::GalgameFilterType, ::UnityEngine::Material*, ::Foundation::AssetRequestHandle, ::UnityEngine::Material*, ::Foundation::AssetRequestHandle))((::PBYTE)hIl2Cpp + IBFIJCLEIPP__CTOR_OFFSET))(this, GKNBCPNBFLH, PHCIDEOILEJ, JFMADLONCPD, MPFALCGCFDO, JFIICDCDGEM);
	}

	static ::System::Void _cctor()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + IBFIJCLEIPP__CCTOR_OFFSET))();
	}

	::System::Void HGMMFHIGDAG()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + IBFIJCLEIPP_HGMMFHIGDAG_OFFSET))(this);
	}

	::System::Void GJAOPIJEAKG(::UnityEngine::Texture2D* EEKBODLLPAO, ::Foundation::AssetRequestHandle DPNOPDDILDF)
	{
		return ((::System::Void(*)(::PVOID, ::UnityEngine::Texture2D*, ::Foundation::AssetRequestHandle))((::PBYTE)hIl2Cpp + IBFIJCLEIPP_GJAOPIJEAKG_OFFSET))(this, EEKBODLLPAO, DPNOPDDILDF);
	}

	::System::Void NPLCHMJJLEL()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + IBFIJCLEIPP_NPLCHMJJLEL_OFFSET))(this);
	}
};
