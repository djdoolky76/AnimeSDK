#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/CCONENNDJNF.h"
#include "unitysdk/MoleMole/Config/SpecialDamageTextType.h"
#include "unitysdk/MoleMole/UIInLevelDamageTextBaseController.h"
#include "unitysdk/UnityEngine/Vector2.h"
#include "unitysdk/UnityEngine/Vector3.h"

namespace MoleMole::Battle { class Entity; }
namespace System::Collections::Generic { template <typename T> class List_1; }
namespace UnityEngine { class Animation; }
namespace UnityEngine { class ParticleSystem; }
namespace UnityEngine { class RectTransform; }

#define MOLEMOLE_UIINLEVELSPECIALDAMAGETEXTBASECONTROLLER_GETDAMAGETEXTLENGTH_OFFSET UNITYSDK_OFFSET(0x19607220)
#define MOLEMOLE_UIINLEVELSPECIALDAMAGETEXTBASECONTROLLER_INITSPECIALDAMAGETEXTTYPE_OFFSET UNITYSDK_OFFSET(0x19606D60)
#define MOLEMOLE_UIINLEVELSPECIALDAMAGETEXTBASECONTROLLER_INITVIEWCONTROL_OFFSET UNITYSDK_OFFSET(0x19607B70)
#define MOLEMOLE_UIINLEVELSPECIALDAMAGETEXTBASECONTROLLER_JHLFCLOAPFH_OFFSET UNITYSDK_OFFSET(0x19606C60)
#define MOLEMOLE_UIINLEVELSPECIALDAMAGETEXTBASECONTROLLER_ONDISABLE_OFFSET UNITYSDK_OFFSET(0x19606CD0)
#define MOLEMOLE_UIINLEVELSPECIALDAMAGETEXTBASECONTROLLER_ONPAUSEGAMESTATECHANGED_OFFSET UNITYSDK_OFFSET(0x19607270)
#define MOLEMOLE_UIINLEVELSPECIALDAMAGETEXTBASECONTROLLER_ONUIINIT_OFFSET UNITYSDK_OFFSET(0x196069C0)
#define MOLEMOLE_UIINLEVELSPECIALDAMAGETEXTBASECONTROLLER_ONUPDATETEXT_OFFSET UNITYSDK_OFFSET(0x19606A20)
#define MOLEMOLE_UIINLEVELSPECIALDAMAGETEXTBASECONTROLLER_SETUPVIEW_OFFSET UNITYSDK_OFFSET(0x19606FE0)
#define MOLEMOLE_UIINLEVELSPECIALDAMAGETEXTBASECONTROLLER__CTOR_OFFSET UNITYSDK_OFFSET(0x19607BB0)
#define MOLEMOLE_UIINLEVELSPECIALDAMAGETEXTBASECONTROLLER___BASE_GETDAMAGETEXTLENGTH_OFFSET UNITYSDK_OFFSET(0x19607C60)
#define MOLEMOLE_UIINLEVELSPECIALDAMAGETEXTBASECONTROLLER___BASE_ONPAUSEGAMESTATECHANGED_OFFSET UNITYSDK_OFFSET(0x19607CF0)
#define MOLEMOLE_UIINLEVELSPECIALDAMAGETEXTBASECONTROLLER___BASE_ONUIINIT_OFFSET UNITYSDK_OFFSET(0x19607C50)
#define MOLEMOLE_UIINLEVELSPECIALDAMAGETEXTBASECONTROLLER___BASE_ONUPDATETEXT_OFFSET UNITYSDK_OFFSET(0x19607D90)

namespace MoleMole
{
	inline static constexpr unsigned int UIInLevelSpecialDamageTextBaseController_TypeDefinitionIndex = 71700;

	class UIInLevelSpecialDamageTextBaseController : public ::MoleMole::UIInLevelDamageTextBaseController
	{
	public:
		::UnityEngine::RectTransform* _rectTran; // 0x398
		::System::Single _effectAnimTimer; // 0x3A0
		::System::Boolean _isEffectAnimPlaying; // 0x3A4
		::System::Byte _padding0[0x3];
		::MoleMole::Config::SpecialDamageTextType _specialDamageTextType; // 0x3A8
		::System::Single _specialDamageEffectAnimTime; // 0x3AC
		::System::Single _specialDamageTextLength; // 0x3B0
		::System::Byte _padding1[0x4];
		::System::Collections::Generic::List_1<::UnityEngine::Animation*>* _animationList; // 0x3B8
		::System::Collections::Generic::List_1<::UnityEngine::ParticleSystem*>* _psList; // 0x3C0

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIINLEVELSPECIALDAMAGETEXTBASECONTROLLER__CTOR_OFFSET))(this);
		}

		::System::Void OnUIInit()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIINLEVELSPECIALDAMAGETEXTBASECONTROLLER_ONUIINIT_OFFSET))(this);
		}

		::System::Void OnUpdateText(::System::Single deltaTime)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + MOLEMOLE_UIINLEVELSPECIALDAMAGETEXTBASECONTROLLER_ONUPDATETEXT_OFFSET))(this, deltaTime);
		}

		::System::Void OnDisable()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIINLEVELSPECIALDAMAGETEXTBASECONTROLLER_ONDISABLE_OFFSET))(this);
		}

		::System::Void InitSpecialDamageTextType(::MoleMole::Config::SpecialDamageTextType specialDamageTextType)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::Config::SpecialDamageTextType))((::PBYTE)hIl2Cpp + MOLEMOLE_UIINLEVELSPECIALDAMAGETEXTBASECONTROLLER_INITSPECIALDAMAGETEXTTYPE_OFFSET))(this, specialDamageTextType);
		}

		::System::Void SetupView(::MoleMole::Config::SpecialDamageTextType specialDamageTextType, ::UnityEngine::Vector3 worldPos, ::MoleMole::Battle::Entity* attackee, ::UnityEngine::Vector2 screenSpacePosOffset, ::CCONENNDJNF targetFollowType)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::Config::SpecialDamageTextType, ::UnityEngine::Vector3, ::MoleMole::Battle::Entity*, ::UnityEngine::Vector2, ::CCONENNDJNF))((::PBYTE)hIl2Cpp + MOLEMOLE_UIINLEVELSPECIALDAMAGETEXTBASECONTROLLER_SETUPVIEW_OFFSET))(this, specialDamageTextType, worldPos, attackee, screenSpacePosOffset, targetFollowType);
		}

		::System::Single GetDamageTextLength()
		{
			return ((::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIINLEVELSPECIALDAMAGETEXTBASECONTROLLER_GETDAMAGETEXTLENGTH_OFFSET))(this);
		}

		::System::Void OnPauseGameStateChanged(::System::Boolean isPause)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + MOLEMOLE_UIINLEVELSPECIALDAMAGETEXTBASECONTROLLER_ONPAUSEGAMESTATECHANGED_OFFSET))(this, isPause);
		}

		::System::Void InitViewControl()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIINLEVELSPECIALDAMAGETEXTBASECONTROLLER_INITVIEWCONTROL_OFFSET))(this);
		}

		::System::Void __base_OnUIInit()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIINLEVELSPECIALDAMAGETEXTBASECONTROLLER___BASE_ONUIINIT_OFFSET))(this);
		}

		::System::Single __base_GetDamageTextLength()
		{
			return ((::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIINLEVELSPECIALDAMAGETEXTBASECONTROLLER___BASE_GETDAMAGETEXTLENGTH_OFFSET))(this);
		}

		::System::Void __base_OnPauseGameStateChanged(::System::Boolean P0)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + MOLEMOLE_UIINLEVELSPECIALDAMAGETEXTBASECONTROLLER___BASE_ONPAUSEGAMESTATECHANGED_OFFSET))(this, P0);
		}

		::System::Void __base_OnUpdateText(::System::Single P0)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + MOLEMOLE_UIINLEVELSPECIALDAMAGETEXTBASECONTROLLER___BASE_ONUPDATETEXT_OFFSET))(this, P0);
		}

		::System::Void JHLFCLOAPFH()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIINLEVELSPECIALDAMAGETEXTBASECONTROLLER_JHLFCLOAPFH_OFFSET))(this);
		}
	};
}
