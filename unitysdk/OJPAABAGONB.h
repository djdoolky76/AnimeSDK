#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Foundation/Unreal/FTransform3D.h"
#include "unitysdk/NPIAGDEBHHF.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/UnityEngine/Quaternion.h"
#include "unitysdk/UnityEngine/Vector3.h"
#include "unitysdk/UnityEngine/Vector3Int.h"

class CKMDLAPFIPM;
class HMIMFKLIHFO;
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define OJPAABAGONB_CFDBOJMILAO_OFFSET UNITYSDK_OFFSET(0x11B38DF0)
#define OJPAABAGONB_FMFBJLAKLBH_OFFSET UNITYSDK_OFFSET(0x11B380A0)
#define OJPAABAGONB_HLAABLIIDMH_OFFSET UNITYSDK_OFFSET(0x11B38500)
#define OJPAABAGONB_JNBGBKMJGAG_OFFSET UNITYSDK_OFFSET(0x11B38310)
#define OJPAABAGONB_KIAGMMPLJHI_OFFSET UNITYSDK_OFFSET(0x11B38A30)
#define OJPAABAGONB_MGOLGOOKPCB_OFFSET UNITYSDK_OFFSET(0x11B386E0)
#define OJPAABAGONB_PAPECAHHOEP_OFFSET UNITYSDK_OFFSET(0x11B38850)
#define OJPAABAGONB__CTOR_OFFSET UNITYSDK_OFFSET(0x11B37F10)

inline static constexpr unsigned int OJPAABAGONB_TypeDefinitionIndex = 61503;

class OJPAABAGONB : public ::System::Object
{
public:
	::System::Collections::Generic::Dictionary_2<::UnityEngine::Vector3Int, ::NPIAGDEBHHF>* GACMIDOHCOO; // 0x10
	::UnityEngine::Vector3 BAPBGCKGNED; // 0x18
	::UnityEngine::Vector3 JCIAEAGLLME; // 0x24
	::UnityEngine::Quaternion PDPCHNLLFDJ; // 0x30
	::Foundation::Unreal::FTransform3D MIAGNNDKCNK; // 0x40

	::System::Void _ctor(::UnityEngine::Vector3 MPLDDNMCECG, ::UnityEngine::Vector3 CAPCEPBIOEI, ::UnityEngine::Quaternion OBHKNPEMPJJ)
	{
		return ((::System::Void(*)(::PVOID, ::UnityEngine::Vector3, ::UnityEngine::Vector3, ::UnityEngine::Quaternion))((::PBYTE)hIl2Cpp + OJPAABAGONB__CTOR_OFFSET))(this, MPLDDNMCECG, CAPCEPBIOEI, OBHKNPEMPJJ);
	}

	::Foundation::Unreal::FTransform3D FMFBJLAKLBH(::UnityEngine::Vector3Int EKPEBNCLJPM)
	{
		return ((::Foundation::Unreal::FTransform3D(*)(::PVOID, ::UnityEngine::Vector3Int))((::PBYTE)hIl2Cpp + OJPAABAGONB_FMFBJLAKLBH_OFFSET))(this, EKPEBNCLJPM);
	}

	::System::Void JNBGBKMJGAG(::HMIMFKLIHFO* GAHAAAFKBKA, ::System::Boolean JPIPHCNAEOC)
	{
		return ((::System::Void(*)(::PVOID, ::HMIMFKLIHFO*, ::System::Boolean))((::PBYTE)hIl2Cpp + OJPAABAGONB_JNBGBKMJGAG_OFFSET))(this, GAHAAAFKBKA, JPIPHCNAEOC);
	}

	::System::Void MGOLGOOKPCB(::UnityEngine::Vector3Int EKPEBNCLJPM, ::HMIMFKLIHFO* GAHAAAFKBKA, ::System::Boolean KOPBDLBEPPA)
	{
		return ((::System::Void(*)(::PVOID, ::UnityEngine::Vector3Int, ::HMIMFKLIHFO*, ::System::Boolean))((::PBYTE)hIl2Cpp + OJPAABAGONB_MGOLGOOKPCB_OFFSET))(this, EKPEBNCLJPM, GAHAAAFKBKA, KOPBDLBEPPA);
	}

	static ::System::Void HLAABLIIDMH(::NPIAGDEBHHF HLEALLPILJJ, ::HMIMFKLIHFO* GAHAAAFKBKA, ::System::Boolean JPIPHCNAEOC)
	{
		return ((::System::Void(*)(::NPIAGDEBHHF, ::HMIMFKLIHFO*, ::System::Boolean))((::PBYTE)hIl2Cpp + OJPAABAGONB_HLAABLIIDMH_OFFSET))(HLEALLPILJJ, GAHAAAFKBKA, JPIPHCNAEOC);
	}

	::System::Void KIAGMMPLJHI(::CKMDLAPFIPM*& MIIOAJMPLFB, ::HMIMFKLIHFO* GAHAAAFKBKA, ::System::Collections::Generic::List_1<::UnityEngine::Vector3Int>* ILBJFJFCHEM, ::System::Boolean KOPBDLBEPPA)
	{
		return ((::System::Void(*)(::PVOID, ::CKMDLAPFIPM*&, ::HMIMFKLIHFO*, ::System::Collections::Generic::List_1<::UnityEngine::Vector3Int>*, ::System::Boolean))((::PBYTE)hIl2Cpp + OJPAABAGONB_KIAGMMPLJHI_OFFSET))(this, MIIOAJMPLFB, GAHAAAFKBKA, ILBJFJFCHEM, KOPBDLBEPPA);
	}

	static ::System::Void PAPECAHHOEP(::NPIAGDEBHHF HLEALLPILJJ, ::HMIMFKLIHFO* GAHAAAFKBKA, ::System::Boolean KOPBDLBEPPA)
	{
		return ((::System::Void(*)(::NPIAGDEBHHF, ::HMIMFKLIHFO*, ::System::Boolean))((::PBYTE)hIl2Cpp + OJPAABAGONB_PAPECAHHOEP_OFFSET))(HLEALLPILJJ, GAHAAAFKBKA, KOPBDLBEPPA);
	}

	::System::Void CFDBOJMILAO(::UnityEngine::Vector3Int EKPEBNCLJPM, ::HMIMFKLIHFO* GAHAAAFKBKA)
	{
		return ((::System::Void(*)(::PVOID, ::UnityEngine::Vector3Int, ::HMIMFKLIHFO*))((::PBYTE)hIl2Cpp + OJPAABAGONB_CFDBOJMILAO_OFFSET))(this, EKPEBNCLJPM, GAHAAAFKBKA);
	}
};
