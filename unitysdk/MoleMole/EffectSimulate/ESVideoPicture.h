#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/MoleMole/EffectSimulate/ESLoopable.h"

namespace System { class String; }
namespace System::Collections::Generic { template <typename T> class List_1; }
namespace UnityEngine { class AnimationCurve; }
namespace UnityEngine { class GameObject; }
namespace UnityEngine { class Object; }
namespace UnityEngine { class Texture; }

#define MOLEMOLE_EFFECTSIMULATE_ESVIDEOPICTURE_ALJEEEAPCBH_OFFSET UNITYSDK_OFFSET(0x1CD917D0)
#define MOLEMOLE_EFFECTSIMULATE_ESVIDEOPICTURE_CODLOMLPMNC_OFFSET UNITYSDK_OFFSET(0x139CD860)
#define MOLEMOLE_EFFECTSIMULATE_ESVIDEOPICTURE_FDIABMLCLEE_OFFSET UNITYSDK_OFFSET(0x139CD9B0)
#define MOLEMOLE_EFFECTSIMULATE_ESVIDEOPICTURE_FOFNJCIGEFM_OFFSET UNITYSDK_OFFSET(0x139CD680)
#define MOLEMOLE_EFFECTSIMULATE_ESVIDEOPICTURE_GET__DURATION_OFFSET UNITYSDK_OFFSET(0x139CD410)
#define MOLEMOLE_EFFECTSIMULATE_ESVIDEOPICTURE_HLFIPMNAKCE_OFFSET UNITYSDK_OFFSET(0x139CD640)
#define MOLEMOLE_EFFECTSIMULATE_ESVIDEOPICTURE_INIMINGLIAG_OFFSET UNITYSDK_OFFSET(0x139CDE10)
#define MOLEMOLE_EFFECTSIMULATE_ESVIDEOPICTURE_LDMABODDLEM_OFFSET UNITYSDK_OFFSET(0x139CE330)
#define MOLEMOLE_EFFECTSIMULATE_ESVIDEOPICTURE_LLLIDJKOBEC_OFFSET UNITYSDK_OFFSET(0x139CD7C0)
#define MOLEMOLE_EFFECTSIMULATE_ESVIDEOPICTURE_MLOKIDFFEPH_OFFSET UNITYSDK_OFFSET(0x139CE460)
#define MOLEMOLE_EFFECTSIMULATE_ESVIDEOPICTURE_PKOOKCIHDHF_OFFSET UNITYSDK_OFFSET(0x1CD91780)
#define MOLEMOLE_EFFECTSIMULATE_ESVIDEOPICTURE__CTOR_OFFSET UNITYSDK_OFFSET(0x139CD560)

namespace MoleMole::EffectSimulate
{
	inline static constexpr unsigned int ESVideoPicture_TypeDefinitionIndex = 50312;

	class ESVideoPicture : public ::MoleMole::EffectSimulate::ESLoopable
	{
	public:
		// static const ::System::Int32 DRAW_ORDER = 0x14; // 0x0
		// static const ::System::String* LEAP_FRAME_GROUP_NAME; // 0x0
		::UnityEngine::AnimationCurve* playCurve; // 0x58
		::System::Int32 fps; // 0x60
		::System::Int32 beforeLeapFrame; // 0x64
		::System::Int32 afterLeapFrame; // 0x68
		::System::Byte _padding0[0x4];
		::System::String* materialProperty; // 0x70
		::UnityEngine::Object* fileFolder; // 0x78
		::System::Collections::Generic::List_1<::UnityEngine::Texture*>* textures; // 0x80

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_EFFECTSIMULATE_ESVIDEOPICTURE__CTOR_OFFSET))(this);
		}

		::System::Void PKOOKCIHDHF(::UnityEngine::GameObject* NJOAJLDJCCJ)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::GameObject*))((::PBYTE)hIl2Cpp + MOLEMOLE_EFFECTSIMULATE_ESVIDEOPICTURE_PKOOKCIHDHF_OFFSET))(this, NJOAJLDJCCJ);
		}

		::System::Void ALJEEEAPCBH(::System::Single HIIOCANBKAM)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + MOLEMOLE_EFFECTSIMULATE_ESVIDEOPICTURE_ALJEEEAPCBH_OFFSET))(this, HIIOCANBKAM);
		}

		::System::Single get__duration()
		{
			return ((::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_EFFECTSIMULATE_ESVIDEOPICTURE_GET__DURATION_OFFSET))(this);
		}

		::System::Void HLFIPMNAKCE()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_EFFECTSIMULATE_ESVIDEOPICTURE_HLFIPMNAKCE_OFFSET))(this);
		}

		::System::Collections::Generic::List_1<::System::String*>* FOFNJCIGEFM()
		{
			return ((::System::Collections::Generic::List_1<::System::String*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_EFFECTSIMULATE_ESVIDEOPICTURE_FOFNJCIGEFM_OFFSET))(this);
		}

		::System::Void LLLIDJKOBEC(::System::Single MIALFKCCCPI)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + MOLEMOLE_EFFECTSIMULATE_ESVIDEOPICTURE_LLLIDJKOBEC_OFFSET))(this, MIALFKCCCPI);
		}

		::System::Single CODLOMLPMNC()
		{
			return ((::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_EFFECTSIMULATE_ESVIDEOPICTURE_CODLOMLPMNC_OFFSET))(this);
		}

		::System::Void FDIABMLCLEE()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_EFFECTSIMULATE_ESVIDEOPICTURE_FDIABMLCLEE_OFFSET))(this);
		}

		::System::Single LDMABODDLEM()
		{
			return ((::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_EFFECTSIMULATE_ESVIDEOPICTURE_LDMABODDLEM_OFFSET))(this);
		}

		::System::Void INIMINGLIAG()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_EFFECTSIMULATE_ESVIDEOPICTURE_INIMINGLIAG_OFFSET))(this);
		}

		::System::Void MLOKIDFFEPH(::UnityEngine::GameObject* MIALFKCCCPI)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::GameObject*))((::PBYTE)hIl2Cpp + MOLEMOLE_EFFECTSIMULATE_ESVIDEOPICTURE_MLOKIDFFEPH_OFFSET))(this, MIALFKCCCPI);
		}
	};
}
