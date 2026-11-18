#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/MoleMole/HollowChessboard/HollowCell.h"
#include "unitysdk/MoleMole/Vector2Int.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/UnityEngine/Vector3.h"

class DGDNKBFMHME;
class FBAMLABJMKF;
namespace DG::Tweening { class TweenCallback; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }
namespace UnityEngine { class AnimationCurve; }

#define FBAMLABJMKF_CONNCJCBMNE_CMMGKKIMGAJ_OFFSET UNITYSDK_OFFSET(0x14AB8EB0)
#define FBAMLABJMKF_CONNCJCBMNE_HIPGGJBLNGC_OFFSET UNITYSDK_OFFSET(0x14AB9B50)
#define FBAMLABJMKF_CONNCJCBMNE_NFLAPIOJNJC_OFFSET UNITYSDK_OFFSET(0x14AB91A0)
#define FBAMLABJMKF_CONNCJCBMNE_NOGNEFCEFGL_OFFSET UNITYSDK_OFFSET(0x14AB8D10)
#define FBAMLABJMKF_CONNCJCBMNE__CTOR_OFFSET UNITYSDK_OFFSET(0x14AB8D00)

inline static constexpr unsigned int FBAMLABJMKF_CONNCJCBMNE_TypeDefinitionIndex = 78143;

class FBAMLABJMKF_CONNCJCBMNE : public ::System::Object
{
public:
	::UnityEngine::AnimationCurve* KNMLMBHEMJA; // 0x10
	::DG::Tweening::TweenCallback* FLAEADBPGAF; // 0x18
	::DG::Tweening::TweenCallback* JFBJFLADNFG; // 0x20
	::FBAMLABJMKF* KLHPEBKNIFB; // 0x28
	::System::Collections::Generic::Dictionary_2<::MoleMole::HollowChessboard::HollowCell, ::System::Single>* HNGCBBGIPOL; // 0x30
	::UnityEngine::AnimationCurve* NCMIEMAFBEA; // 0x38
	::MoleMole::Vector2Int FGAAIFGMJBH; // 0x40
	::System::Single MGLJGGEEFNI; // 0x48
	::System::Single KLPCGFELNFI; // 0x4C
	::System::Single KCDBNGPJCPF; // 0x50
	::UnityEngine::Vector3 LPOIBLLILAA; // 0x54
	::System::Boolean DPPDDIJBLAG; // 0x60

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + FBAMLABJMKF_CONNCJCBMNE__CTOR_OFFSET))(this);
	}

	::System::Void NOGNEFCEFGL()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + FBAMLABJMKF_CONNCJCBMNE_NOGNEFCEFGL_OFFSET))(this);
	}

	::System::Void CMMGKKIMGAJ()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + FBAMLABJMKF_CONNCJCBMNE_CMMGKKIMGAJ_OFFSET))(this);
	}

	::System::Void NFLAPIOJNJC(::DGDNKBFMHME* HFMHOELKCAJ)
	{
		return ((::System::Void(*)(::PVOID, ::DGDNKBFMHME*))((::PBYTE)hIl2Cpp + FBAMLABJMKF_CONNCJCBMNE_NFLAPIOJNJC_OFFSET))(this, HFMHOELKCAJ);
	}

	::System::Void HIPGGJBLNGC()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + FBAMLABJMKF_CONNCJCBMNE_HIPGGJBLNGC_OFFSET))(this);
	}
};
