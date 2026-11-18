#pragma once
#include "unitysdk/unitysdk.h"

namespace UnityEngine { class CanvasGroup; }
namespace UnityEngine { class GameObject; }
namespace UnityEngine { class Transform; }
namespace UnityEngine::UI { class Graphic; }

#define MOLEMOLE_TWEENALPHA_BEGIN_OFFSET UNITYSDK_OFFSET(0x162FCCB0)
#define MOLEMOLE_TWEENALPHA_DFJPMOOOLHM_OFFSET UNITYSDK_OFFSET(0x162FCBD0)
#define MOLEMOLE_TWEENALPHA_FIOMCHNHDCF_OFFSET UNITYSDK_OFFSET(0x162FC6A0)
#define MOLEMOLE_TWEENALPHA_GET_VALUE_OFFSET UNITYSDK_OFFSET(0x162FC830)
#define MOLEMOLE_TWEENALPHA_NIGDIMFIAEJ_OFFSET UNITYSDK_OFFSET(0x162FCF50)
#define MOLEMOLE_TWEENALPHA_PDKAHFENOFB_OFFSET UNITYSDK_OFFSET(0x162FC8B0)
#define MOLEMOLE_TWEENALPHA_PECPJKGEJKM_OFFSET UNITYSDK_OFFSET(0x162FCE50)
#define MOLEMOLE_TWEENALPHA_PLFBKOLEIGI_OFFSET UNITYSDK_OFFSET(0x162FCA80)
#define MOLEMOLE_TWEENALPHA_PNAHDKPJLKK_OFFSET UNITYSDK_OFFSET(0x162FCE60)
#define MOLEMOLE_TWEENALPHA_SET_VALUE_OFFSET UNITYSDK_OFFSET(0x162FC840)
#define MOLEMOLE_TWEENALPHA_START_OFFSET UNITYSDK_OFFSET(0x162FC500)
#define MOLEMOLE_TWEENALPHA__CTOR_OFFSET UNITYSDK_OFFSET(0x162FCE30)

namespace MoleMole
{
	inline static constexpr unsigned int TweenAlpha_TypeDefinitionIndex = 78841;

	class TweenAlpha
	{
	public:
		::System::Boolean includeChildren; // 0x88
		::System::Boolean NMDFNFHHBDN; // 0x89
		::System::Byte _padding0[0x2];
		::System::Single GCAMMDBAPCD; // 0x8C
		::UnityEngine::Transform* KPHBLGMKOMD; // 0x90
		::Il2CppArray<::UnityEngine::UI::Graphic*>* LHIKEAKDOJO; // 0x98
		::UnityEngine::CanvasGroup* MCNOFHCGNJG; // 0xA0

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_TWEENALPHA__CTOR_OFFSET))(this);
		}

		::System::Void Start()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_TWEENALPHA_START_OFFSET))(this);
		}

		::System::Single get_value()
		{
			return ((::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_TWEENALPHA_GET_VALUE_OFFSET))(this);
		}

		::System::Void set_value(::System::Single EGEGIMGMJHN)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + MOLEMOLE_TWEENALPHA_SET_VALUE_OFFSET))(this, EGEGIMGMJHN);
		}

		::System::Void DFJPMOOOLHM(::System::Single CKELPHPMECF, ::System::Boolean GNFAABJPKPN)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single, ::System::Boolean))((::PBYTE)hIl2Cpp + MOLEMOLE_TWEENALPHA_DFJPMOOOLHM_OFFSET))(this, CKELPHPMECF, GNFAABJPKPN);
		}

		static ::MoleMole::TweenAlpha* Begin(::UnityEngine::GameObject* NJOAJLDJCCJ, ::System::Single KDEHMPGOCEP, ::System::Single PADJNMGMGHO, ::System::Single MDPPNMIPDMP, ::System::Single DLBFEAOALML)
		{
			return ((::MoleMole::TweenAlpha*(*)(::UnityEngine::GameObject*, ::System::Single, ::System::Single, ::System::Single, ::System::Single))((::PBYTE)hIl2Cpp + MOLEMOLE_TWEENALPHA_BEGIN_OFFSET))(NJOAJLDJCCJ, KDEHMPGOCEP, PADJNMGMGHO, MDPPNMIPDMP, DLBFEAOALML);
		}

		::System::Void PECPJKGEJKM(::System::Single MIALFKCCCPI)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + MOLEMOLE_TWEENALPHA_PECPJKGEJKM_OFFSET))(this, MIALFKCCCPI);
		}

		::System::Void PLFBKOLEIGI(::UnityEngine::Transform* ACDOKEGBJAO, ::System::Single KBNECHHGNEP)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Transform*, ::System::Single))((::PBYTE)hIl2Cpp + MOLEMOLE_TWEENALPHA_PLFBKOLEIGI_OFFSET))(this, ACDOKEGBJAO, KBNECHHGNEP);
		}

		::UnityEngine::CanvasGroup* FIOMCHNHDCF()
		{
			return ((::UnityEngine::CanvasGroup*(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_TWEENALPHA_FIOMCHNHDCF_OFFSET))(this);
		}

		::UnityEngine::Transform* PDKAHFENOFB()
		{
			return ((::UnityEngine::Transform*(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_TWEENALPHA_PDKAHFENOFB_OFFSET))(this);
		}

		::Il2CppArray<::UnityEngine::UI::Graphic*>* PNAHDKPJLKK()
		{
			return ((::Il2CppArray<::UnityEngine::UI::Graphic*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_TWEENALPHA_PNAHDKPJLKK_OFFSET))(this);
		}

		::System::Void NIGDIMFIAEJ()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_TWEENALPHA_NIGDIMFIAEJ_OFFSET))(this);
		}
	};
}
