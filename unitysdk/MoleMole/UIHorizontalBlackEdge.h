#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/MoleMole/UIHorizontalBlackEdge_HPNIAJDJFLH.h"
#include "unitysdk/System/Nullable_1.h"
#include "unitysdk/UnityEngine/MonoBehaviour.h"
#include "unitysdk/System/ValueTuple_2.h"

namespace UnityEngine { class Canvas; }
namespace UnityEngine { class CanvasGroup; }
namespace UnityEngine { class RectTransform; }

#define MOLEMOLE_UIHORIZONTALBLACKEDGE_BMOGOLBNPCF_OFFSET UNITYSDK_OFFSET(0x182AF8E0)
#define MOLEMOLE_UIHORIZONTALBLACKEDGE_CALCULATELAYOUT_OFFSET UNITYSDK_OFFSET(0x182AE480)
#define MOLEMOLE_UIHORIZONTALBLACKEDGE_DJFLFBMCHLH_OFFSET UNITYSDK_OFFSET(0x182AF930)
#define MOLEMOLE_UIHORIZONTALBLACKEDGE_ECMOHBMFKFP_OFFSET UNITYSDK_OFFSET(0x182AF800)
#define MOLEMOLE_UIHORIZONTALBLACKEDGE_GETPIXELSCREENSIZEEXCLUDEHORIZONTALBLACKEDGE_OFFSET UNITYSDK_OFFSET(0x182AF6B0)
#define MOLEMOLE_UIHORIZONTALBLACKEDGE_INIT_OFFSET UNITYSDK_OFFSET(0x182AE260)
#define MOLEMOLE_UIHORIZONTALBLACKEDGE_INLEAIPJAHP_OFFSET UNITYSDK_OFFSET(0x182AF4B0)
#define MOLEMOLE_UIHORIZONTALBLACKEDGE_ONDESTROY_OFFSET UNITYSDK_OFFSET(0x182AE3D0)
#define MOLEMOLE_UIHORIZONTALBLACKEDGE_ONENABLE_OFFSET UNITYSDK_OFFSET(0x182AE1D0)
#define MOLEMOLE_UIHORIZONTALBLACKEDGE_PIOOPLAPDPK_OFFSET UNITYSDK_OFFSET(0x182AF8F0)
#define MOLEMOLE_UIHORIZONTALBLACKEDGE__CTOR_OFFSET UNITYSDK_OFFSET(0x182AF7B0)

namespace MoleMole
{
	inline static constexpr unsigned int UIHorizontalBlackEdge_TypeDefinitionIndex = 38356;

	class UIHorizontalBlackEdge : public ::UnityEngine::MonoBehaviour
	{
	public:
		::MoleMole::UIHorizontalBlackEdge_HPNIAJDJFLH EJHGOKAMACC; // 0x18
		::System::Byte _padding0[0x4];
		::UnityEngine::CanvasGroup* HAEHJMCNKJB; // 0x20
		::System::Nullable_1<::System::Int32> NNDEPIABPMF; // 0x28
		::UnityEngine::RectTransform* LMAMOJPPHKE; // 0x30
		::System::Boolean _isLeft; // 0x38
		::System::Byte _padding1[0x7];
		::UnityEngine::Canvas* LHHCBJMINFM; // 0x40
		::System::Boolean _ADPHDBHIELK_k__BackingField; // 0x48

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIHORIZONTALBLACKEDGE__CTOR_OFFSET))(this);
		}

		::System::Void OnEnable()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIHORIZONTALBLACKEDGE_ONENABLE_OFFSET))(this);
		}

		::System::Void Init(::UnityEngine::RectTransform* IAPKABMDJNF, ::System::Boolean FIEDPDAJPBB, ::System::Nullable_1<::System::Int32> KMOHKCADPNA)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::RectTransform*, ::System::Boolean, ::System::Nullable_1<::System::Int32>))((::PBYTE)hIl2Cpp + MOLEMOLE_UIHORIZONTALBLACKEDGE_INIT_OFFSET))(this, IAPKABMDJNF, FIEDPDAJPBB, KMOHKCADPNA);
		}

		::System::Void OnDestroy()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIHORIZONTALBLACKEDGE_ONDESTROY_OFFSET))(this);
		}

		::System::Void CalculateLayout()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIHORIZONTALBLACKEDGE_CALCULATELAYOUT_OFFSET))(this);
		}

		static ::System::ValueTuple_2<::System::Int32, ::System::Int32> GetPixelScreenSizeExcludeHorizontalBlackEdge()
		{
			return ((::System::ValueTuple_2<::System::Int32, ::System::Int32>(*)())((::PBYTE)hIl2Cpp + MOLEMOLE_UIHORIZONTALBLACKEDGE_GETPIXELSCREENSIZEEXCLUDEHORIZONTALBLACKEDGE_OFFSET))();
		}

		::System::Void ECMOHBMFKFP(::System::Int32 KMOHKCADPNA, ::System::Int32 JHFKDGBCOBA, ::System::Single KGHNBNOMMJI)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32, ::System::Int32, ::System::Single))((::PBYTE)hIl2Cpp + MOLEMOLE_UIHORIZONTALBLACKEDGE_ECMOHBMFKFP_OFFSET))(this, KMOHKCADPNA, JHFKDGBCOBA, KGHNBNOMMJI);
		}

		::UnityEngine::Canvas* INLEAIPJAHP()
		{
			return ((::UnityEngine::Canvas*(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIHORIZONTALBLACKEDGE_INLEAIPJAHP_OFFSET))(this);
		}

		::System::Void BMOGOLBNPCF(::System::Boolean EGEGIMGMJHN)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + MOLEMOLE_UIHORIZONTALBLACKEDGE_BMOGOLBNPCF_OFFSET))(this, EGEGIMGMJHN);
		}

		::System::Void PIOOPLAPDPK()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIHORIZONTALBLACKEDGE_PIOOPLAPDPK_OFFSET))(this);
		}

		::System::Boolean DJFLFBMCHLH()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIHORIZONTALBLACKEDGE_DJFLFBMCHLH_OFFSET))(this);
		}
	};
}
