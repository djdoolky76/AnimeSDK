#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/UnityEngine/Vector2.h"
class FGPFBKDIOEL;
class ILCGHLHKHDE;
namespace UnityEngine { class RectTransform; }
namespace UnityEngine::EventSystems { class PointerEventData; }

#define BLDKPADGMOJ_BPAGENONDNL_OFFSET UNITYSDK_OFFSET(0xBA6AE70)
#define BLDKPADGMOJ_CCTOR_OFFSET UNITYSDK_OFFSET(0xBA6B320)
#define BLDKPADGMOJ_CTOR_OFFSET UNITYSDK_OFFSET(0xBA6B2C0)
#define BLDKPADGMOJ_ELBHEDGCLGE_OFFSET UNITYSDK_OFFSET(0xBA6B080)
#define BLDKPADGMOJ_FGNEDBFODMO_OFFSET UNITYSDK_OFFSET(0xBA6A9D0)
#define BLDKPADGMOJ_FIDFGDIKNJO_OFFSET UNITYSDK_OFFSET(0xBA6B1F0)
#define BLDKPADGMOJ_FMPJNNLKPHM_OFFSET UNITYSDK_OFFSET(0xBA6AFF0)
#define BLDKPADGMOJ_HADOHLNHHGB_OFFSET UNITYSDK_OFFSET(0xBA6ADE0)
#define BLDKPADGMOJ_JLANKNHFKCN_OFFSET UNITYSDK_OFFSET(0xBA6A800)
#define BLDKPADGMOJ_OINBDMGFFJL_OFFSET UNITYSDK_OFFSET(0xBA6A4F0)

inline static constexpr unsigned int BLDKPADGMOJ_TypeDefinitionIndex = 80697;

	class BLDKPADGMOJ : public ::System::Object
	{
	public:
		::UnityEngine::RectTransform* OIFKLJACCPG; // 0x10
		::ILCGHLHKHDE* NHJIMBADBEN; // 0x18
		::System::Boolean FEECGHPBFKN; // 0x20
		::System::Boolean GBPGADIEINF; // 0x21
		::System::Byte _padding0[0x2];
		::UnityEngine::Vector2 KFEJGBAKKEF; // 0x24
		static ::UnityEngine::Vector2* StaticGet_LJFPBMIPPPK()
		{
			return (::UnityEngine::Vector2*)UnitySDK::FromName("", "BLDKPADGMOJ")->GetStaticField(0x15A10);
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + BLDKPADGMOJ_CTOR_OFFSET))(this);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + BLDKPADGMOJ_CCTOR_OFFSET))();
		}

		::System::Void OINBDMGFFJL(::FGPFBKDIOEL* a1)
		{
			return ((::System::Void(*)(::PVOID, ::FGPFBKDIOEL*))((::PBYTE)hIl2Cpp + BLDKPADGMOJ_OINBDMGFFJL_OFFSET))(this, a1);
		}

		::System::Void JLANKNHFKCN()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + BLDKPADGMOJ_JLANKNHFKCN_OFFSET))(this);
		}

		::System::Void HADOHLNHHGB()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + BLDKPADGMOJ_HADOHLNHHGB_OFFSET))(this);
		}

		::System::Void BPAGENONDNL(::UnityEngine::EventSystems::PointerEventData* a1)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::EventSystems::PointerEventData*))((::PBYTE)hIl2Cpp + BLDKPADGMOJ_BPAGENONDNL_OFFSET))(this, a1);
		}

		::System::Void ELBHEDGCLGE(::UnityEngine::EventSystems::PointerEventData* a1)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::EventSystems::PointerEventData*))((::PBYTE)hIl2Cpp + BLDKPADGMOJ_ELBHEDGCLGE_OFFSET))(this, a1);
		}

		::System::Void FIDFGDIKNJO(::UnityEngine::EventSystems::PointerEventData* a1)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::EventSystems::PointerEventData*))((::PBYTE)hIl2Cpp + BLDKPADGMOJ_FIDFGDIKNJO_OFFSET))(this, a1);
		}

		::System::Boolean FGNEDBFODMO(::UnityEngine::Vector2 a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::UnityEngine::Vector2))((::PBYTE)hIl2Cpp + BLDKPADGMOJ_FGNEDBFODMO_OFFSET))(this, a1);
		}

		::System::Void FMPJNNLKPHM()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + BLDKPADGMOJ_FMPJNNLKPHM_OFFSET))(this);
		}

	};
