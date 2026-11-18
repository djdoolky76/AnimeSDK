#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Foundation/AssetPath.h"
#include "unitysdk/UnityEngine/MonoBehaviour.h"

class DJGGAKHLGON;
class EDINNMNPKOD;
class JJPDGONFBFB;
class LKPFJJGLLIN;
class MEIHNKANLLB;
namespace System { class String; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }
namespace System::Collections::Generic { template <typename T> class List_1; }
namespace UnityEngine { class RectTransform; }
namespace UnityEngine::UI { class Image; }

#define MOLEMOLE_PHOTOWALLTHEMEITEMTESTER_DCAEEGJKJNE_OFFSET UNITYSDK_OFFSET(0x13A03890)
#define MOLEMOLE_PHOTOWALLTHEMEITEMTESTER_GPFIONMBLCD_OFFSET UNITYSDK_OFFSET(0x13A03640)
#define MOLEMOLE_PHOTOWALLTHEMEITEMTESTER_PANCECMBNFK_OFFSET UNITYSDK_OFFSET(0x13A03830)
#define MOLEMOLE_PHOTOWALLTHEMEITEMTESTER_PJFGGIDHMED_OFFSET UNITYSDK_OFFSET(0x13A035F0)
#define MOLEMOLE_PHOTOWALLTHEMEITEMTESTER_RENDERDATA_OFFSET UNITYSDK_OFFSET(0x13A03560)
#define MOLEMOLE_PHOTOWALLTHEMEITEMTESTER__CTOR_OFFSET UNITYSDK_OFFSET(0x13A035A0)

namespace MoleMole
{
	inline static constexpr unsigned int PhotoWallThemeItemTester_TypeDefinitionIndex = 59667;

	class PhotoWallThemeItemTester : public ::UnityEngine::MonoBehaviour
	{
	public:
		::System::String* Json; // 0x18
		::UnityEngine::RectTransform* ImageRateCompare; // 0x20
		::UnityEngine::UI::Image* WallImage; // 0x28
		::JJPDGONFBFB* EFFAONJBCOG; // 0x30
		::System::Collections::Generic::Dictionary_2<::Foundation::AssetPath, ::System::Collections::Generic::List_1<::DJGGAKHLGON*>*>* BMCLACNAPBE; // 0x38

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_PHOTOWALLTHEMEITEMTESTER__CTOR_OFFSET))(this);
		}

		::System::Void RenderData()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_PHOTOWALLTHEMEITEMTESTER_RENDERDATA_OFFSET))(this);
		}

		::System::Void PJFGGIDHMED(::LKPFJJGLLIN* DFBFFAGIFKE, ::MEIHNKANLLB* KMJMCCHHFHH)
		{
			return ((::System::Void(*)(::PVOID, ::LKPFJJGLLIN*, ::MEIHNKANLLB*))((::PBYTE)hIl2Cpp + MOLEMOLE_PHOTOWALLTHEMEITEMTESTER_PJFGGIDHMED_OFFSET))(this, DFBFFAGIFKE, KMJMCCHHFHH);
		}

		::DJGGAKHLGON* GPFIONMBLCD(::Foundation::AssetPath CJBJONJDOLI, ::System::Int32 NDBLHECDMIM, ::LKPFJJGLLIN* GAGGKIBNIGC, ::MEIHNKANLLB* KMJMCCHHFHH)
		{
			return ((::DJGGAKHLGON*(*)(::PVOID, ::Foundation::AssetPath, ::System::Int32, ::LKPFJJGLLIN*, ::MEIHNKANLLB*))((::PBYTE)hIl2Cpp + MOLEMOLE_PHOTOWALLTHEMEITEMTESTER_GPFIONMBLCD_OFFSET))(this, CJBJONJDOLI, NDBLHECDMIM, GAGGKIBNIGC, KMJMCCHHFHH);
		}

		::System::Void PANCECMBNFK(::JJPDGONFBFB* HAHFDEPIHCP, ::LKPFJJGLLIN* GAGGKIBNIGC, ::MEIHNKANLLB* KMJMCCHHFHH)
		{
			return ((::System::Void(*)(::PVOID, ::JJPDGONFBFB*, ::LKPFJJGLLIN*, ::MEIHNKANLLB*))((::PBYTE)hIl2Cpp + MOLEMOLE_PHOTOWALLTHEMEITEMTESTER_PANCECMBNFK_OFFSET))(this, HAHFDEPIHCP, GAGGKIBNIGC, KMJMCCHHFHH);
		}

		::System::Int32 DCAEEGJKJNE(::EDINNMNPKOD* HAAEBCOBKFF, ::EDINNMNPKOD* BFMMEICFNCD)
		{
			return ((::System::Int32(*)(::PVOID, ::EDINNMNPKOD*, ::EDINNMNPKOD*))((::PBYTE)hIl2Cpp + MOLEMOLE_PHOTOWALLTHEMEITEMTESTER_DCAEEGJKJNE_OFFSET))(this, HAAEBCOBKFF, BFMMEICFNCD);
		}
	};
}
