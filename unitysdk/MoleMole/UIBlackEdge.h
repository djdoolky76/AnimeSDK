#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/MoleMole/UIBlackEdge_MCLHJPJBIIK.h"
#include "unitysdk/System/Nullable_1.h"
#include "unitysdk/UnityEngine/MonoBehaviour.h"
#include "unitysdk/System/ValueTuple_2.h"

namespace UnityEngine { class Canvas; }
namespace UnityEngine { class CanvasGroup; }
namespace UnityEngine { class RectTransform; }
namespace UnityEngine::UI { class Image; }

#define MOLEMOLE_UIBLACKEDGE_BMOGOLBNPCF_OFFSET UNITYSDK_OFFSET(0x188FDC60)
#define MOLEMOLE_UIBLACKEDGE_CALCULATELAYOUT_OFFSET UNITYSDK_OFFSET(0x188FC700)
#define MOLEMOLE_UIBLACKEDGE_DJFLFBMCHLH_OFFSET UNITYSDK_OFFSET(0x188FDB10)
#define MOLEMOLE_UIBLACKEDGE_GETPIXELSCREENSIZEEXCLUDEBLACKEDGE_OFFSET UNITYSDK_OFFSET(0x188FD9C0)
#define MOLEMOLE_UIBLACKEDGE_HAADJNGKGOO_OFFSET UNITYSDK_OFFSET(0x188FDB20)
#define MOLEMOLE_UIBLACKEDGE_INIT_OFFSET UNITYSDK_OFFSET(0x188FC450)
#define MOLEMOLE_UIBLACKEDGE_INLEAIPJAHP_OFFSET UNITYSDK_OFFSET(0x188FD7C0)
#define MOLEMOLE_UIBLACKEDGE_ONDESTROY_OFFSET UNITYSDK_OFFSET(0x188FC650)
#define MOLEMOLE_UIBLACKEDGE_ONENABLE_OFFSET UNITYSDK_OFFSET(0x188FC3C0)
#define MOLEMOLE_UIBLACKEDGE_PIOOPLAPDPK_OFFSET UNITYSDK_OFFSET(0x188FDC20)
#define MOLEMOLE_UIBLACKEDGE__CTOR_OFFSET UNITYSDK_OFFSET(0x188FDAC0)

namespace MoleMole
{
	inline static constexpr unsigned int UIBlackEdge_TypeDefinitionIndex = 83060;

	class UIBlackEdge : public ::UnityEngine::MonoBehaviour
	{
	public:
		::MoleMole::UIBlackEdge_MCLHJPJBIIK EJHGOKAMACC; // 0x18
		::System::Byte _padding0[0x4];
		::UnityEngine::CanvasGroup* HAEHJMCNKJB; // 0x20
		::UnityEngine::UI::Image* LEDEGAFKEJO; // 0x28
		::System::Nullable_1<::System::Int32> NNDEPIABPMF; // 0x30
		::UnityEngine::RectTransform* LMAMOJPPHKE; // 0x38
		::System::Boolean _isTop; // 0x40
		::System::Byte _padding1[0x7];
		::UnityEngine::Canvas* LHHCBJMINFM; // 0x48
		::System::Boolean _ADPHDBHIELK_k__BackingField; // 0x50

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIBLACKEDGE__CTOR_OFFSET))(this);
		}

		::System::Void OnEnable()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIBLACKEDGE_ONENABLE_OFFSET))(this);
		}

		::System::Void Init(::UnityEngine::RectTransform* IAPKABMDJNF, ::System::Boolean NGKPICICOHL, ::System::Nullable_1<::System::Int32> KMOHKCADPNA)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::RectTransform*, ::System::Boolean, ::System::Nullable_1<::System::Int32>))((::PBYTE)hIl2Cpp + MOLEMOLE_UIBLACKEDGE_INIT_OFFSET))(this, IAPKABMDJNF, NGKPICICOHL, KMOHKCADPNA);
		}

		::System::Void OnDestroy()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIBLACKEDGE_ONDESTROY_OFFSET))(this);
		}

		::System::Void CalculateLayout()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIBLACKEDGE_CALCULATELAYOUT_OFFSET))(this);
		}

		static ::System::ValueTuple_2<::System::Int32, ::System::Int32> GetPixelScreenSizeExcludeBlackEdge()
		{
			return ((::System::ValueTuple_2<::System::Int32, ::System::Int32>(*)())((::PBYTE)hIl2Cpp + MOLEMOLE_UIBLACKEDGE_GETPIXELSCREENSIZEEXCLUDEBLACKEDGE_OFFSET))();
		}

		::UnityEngine::Canvas* INLEAIPJAHP()
		{
			return ((::UnityEngine::Canvas*(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIBLACKEDGE_INLEAIPJAHP_OFFSET))(this);
		}

		::System::Boolean DJFLFBMCHLH()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIBLACKEDGE_DJFLFBMCHLH_OFFSET))(this);
		}

		::System::Void HAADJNGKGOO(::System::Int32 KMOHKCADPNA, ::System::Int32 JHFKDGBCOBA, ::System::Single KGHNBNOMMJI)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32, ::System::Int32, ::System::Single))((::PBYTE)hIl2Cpp + MOLEMOLE_UIBLACKEDGE_HAADJNGKGOO_OFFSET))(this, KMOHKCADPNA, JHFKDGBCOBA, KGHNBNOMMJI);
		}

		::System::Void PIOOPLAPDPK()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIBLACKEDGE_PIOOPLAPDPK_OFFSET))(this);
		}

		::System::Void BMOGOLBNPCF(::System::Boolean EGEGIMGMJHN)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + MOLEMOLE_UIBLACKEDGE_BMOGOLBNPCF_OFFSET))(this, EGEGIMGMJHN);
		}
	};
}
