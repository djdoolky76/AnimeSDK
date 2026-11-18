#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/MoleMole/EffectSimulate/IEffectSimulate.h"
#include "unitysdk/OBFGHGBBLKE.h"
#include "unitysdk/OMIPJNGHENK.h"

namespace MoleMole::EffectSimulate { class IEvaluateCurve_JGFMIKGHIDN; }
namespace Sirenix::OdinInspector { template <typename T> class ValueDropdownList_1; }
namespace UnityEngine { class GameObject; }

#define MOLEMOLE_EFFECTSIMULATE_ESLOOPABLE_ACBPIKKBCNP_OFFSET UNITYSDK_OFFSET(0x180CD2F0)
#define MOLEMOLE_EFFECTSIMULATE_ESLOOPABLE_ADAFFFEDHIO_OFFSET UNITYSDK_OFFSET(0x180CDCA0)
#define MOLEMOLE_EFFECTSIMULATE_ESLOOPABLE_BDLECFLGBFE_OFFSET UNITYSDK_OFFSET(0x180CD100)
#define MOLEMOLE_EFFECTSIMULATE_ESLOOPABLE_CANOPGBDBGF_OFFSET UNITYSDK_OFFSET(0x180CD2B0)
#define MOLEMOLE_EFFECTSIMULATE_ESLOOPABLE_EEFKECPNBFF_OFFSET UNITYSDK_OFFSET(0x180CD180)
#define MOLEMOLE_EFFECTSIMULATE_ESLOOPABLE_GLGHBNEKAGD_OFFSET UNITYSDK_OFFSET(0x180CD210)
#define MOLEMOLE_EFFECTSIMULATE_ESLOOPABLE_KKEIDPBDGHA_OFFSET UNITYSDK_OFFSET(0x180CD5B0)
#define MOLEMOLE_EFFECTSIMULATE_ESLOOPABLE_KLPGBDCNEGL_OFFSET UNITYSDK_OFFSET(0x180CDC60)
#define MOLEMOLE_EFFECTSIMULATE_ESLOOPABLE_KOCFLKFINKG_OFFSET UNITYSDK_OFFSET(0x180CD260)
#define MOLEMOLE_EFFECTSIMULATE_ESLOOPABLE_MHELGKFFODD_OFFSET UNITYSDK_OFFSET(0x180CD1C0)
#define MOLEMOLE_EFFECTSIMULATE_ESLOOPABLE_MLOKIDFFEPH_OFFSET UNITYSDK_OFFSET(0x180CDBD0)
#define MOLEMOLE_EFFECTSIMULATE_ESLOOPABLE_NDBLEBBHJMO_OFFSET UNITYSDK_OFFSET(0x180CD140)
#define MOLEMOLE_EFFECTSIMULATE_ESLOOPABLE_NHGGJEMHOEC_OFFSET UNITYSDK_OFFSET(0x180CDCF0)
#define MOLEMOLE_EFFECTSIMULATE_ESLOOPABLE_PKOOKCIHDHF_OFFSET UNITYSDK_OFFSET(0x180CCA10)
#define MOLEMOLE_EFFECTSIMULATE_ESLOOPABLE__CCTOR_OFFSET UNITYSDK_OFFSET(0x180CDA00)
#define MOLEMOLE_EFFECTSIMULATE_ESLOOPABLE__CTOR_OFFSET UNITYSDK_OFFSET(0x180CD030)

namespace MoleMole::EffectSimulate
{
	inline static constexpr unsigned int ESLoopable_TypeDefinitionIndex = 45754;

	class ESLoopable : public ::MoleMole::EffectSimulate::IEffectSimulate
	{
	public:
		static ::Sirenix::OdinInspector::ValueDropdownList_1<::OBFGHGBBLKE>** StaticGet_OnCurveEditModeValueDropDown()
		{
			return (::Sirenix::OdinInspector::ValueDropdownList_1<::OBFGHGBBLKE>**)Il2CppClass::FromTypeDefinitionIndex(ESLoopable_TypeDefinitionIndex)->GetStaticField(0x520C0);
		}
		// static const ::System::Int32 ORDER_LEAP_VAL = 0xA; // 0x0
		// static const ::System::Int32 COMMON_MAX_DRAW_ORDER = 0xA; // 0x0
		// static const ::System::String* PHASE_BUTTON_GROUP_NAME; // 0x0
		::OBFGHGBBLKE curveEditMode; // 0x48
		::OMIPJNGHENK curveShowMode; // 0x4C
		::MoleMole::EffectSimulate::IEvaluateCurve_JGFMIKGHIDN* m_stFadeOutCtx; // 0x50

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_EFFECTSIMULATE_ESLOOPABLE__CTOR_OFFSET))(this);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + MOLEMOLE_EFFECTSIMULATE_ESLOOPABLE__CCTOR_OFFSET))();
		}

		::System::Boolean BDLECFLGBFE()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_EFFECTSIMULATE_ESLOOPABLE_BDLECFLGBFE_OFFSET))(this);
		}

		::System::Void NDBLEBBHJMO()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_EFFECTSIMULATE_ESLOOPABLE_NDBLEBBHJMO_OFFSET))(this);
		}

		::System::Boolean EEFKECPNBFF()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_EFFECTSIMULATE_ESLOOPABLE_EEFKECPNBFF_OFFSET))(this);
		}

		::System::Single MHELGKFFODD()
		{
			return ((::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_EFFECTSIMULATE_ESLOOPABLE_MHELGKFFODD_OFFSET))(this);
		}

		::System::Single GLGHBNEKAGD()
		{
			return ((::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_EFFECTSIMULATE_ESLOOPABLE_GLGHBNEKAGD_OFFSET))(this);
		}

		::System::Single KOCFLKFINKG()
		{
			return ((::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_EFFECTSIMULATE_ESLOOPABLE_KOCFLKFINKG_OFFSET))(this);
		}

		::System::Boolean CANOPGBDBGF()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_EFFECTSIMULATE_ESLOOPABLE_CANOPGBDBGF_OFFSET))(this);
		}

		::System::Void PKOOKCIHDHF(::UnityEngine::GameObject* NJOAJLDJCCJ)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::GameObject*))((::PBYTE)hIl2Cpp + MOLEMOLE_EFFECTSIMULATE_ESLOOPABLE_PKOOKCIHDHF_OFFSET))(this, NJOAJLDJCCJ);
		}

		::System::Void ACBPIKKBCNP()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_EFFECTSIMULATE_ESLOOPABLE_ACBPIKKBCNP_OFFSET))(this);
		}

		::System::Single KKEIDPBDGHA(::System::Single& HIIOCANBKAM, ::System::Single& MDPPNMIPDMP)
		{
			return ((::System::Single(*)(::PVOID, ::System::Single&, ::System::Single&))((::PBYTE)hIl2Cpp + MOLEMOLE_EFFECTSIMULATE_ESLOOPABLE_KKEIDPBDGHA_OFFSET))(this, HIIOCANBKAM, MDPPNMIPDMP);
		}

		::System::Void MLOKIDFFEPH(::UnityEngine::GameObject* MIALFKCCCPI)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::GameObject*))((::PBYTE)hIl2Cpp + MOLEMOLE_EFFECTSIMULATE_ESLOOPABLE_MLOKIDFFEPH_OFFSET))(this, MIALFKCCCPI);
		}

		::MoleMole::EffectSimulate::IEvaluateCurve_JGFMIKGHIDN* KLPGBDCNEGL()
		{
			return ((::MoleMole::EffectSimulate::IEvaluateCurve_JGFMIKGHIDN*(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_EFFECTSIMULATE_ESLOOPABLE_KLPGBDCNEGL_OFFSET))(this);
		}

		::System::Void ADAFFFEDHIO()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_EFFECTSIMULATE_ESLOOPABLE_ADAFFFEDHIO_OFFSET))(this);
		}

		::System::Void NHGGJEMHOEC()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_EFFECTSIMULATE_ESLOOPABLE_NHGGJEMHOEC_OFFSET))(this);
		}
	};
}
