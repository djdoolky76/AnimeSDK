#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/MoleMole/Config/ConfigSetSection_Order.h"
#include "unitysdk/MoleMole/Config/ConfigUIBaseActionNode.h"
#include "unitysdk/MoleMole/Vector2Int.h"

class ADCIIHIOAMH;
namespace MoleMole::Config { class ChangeFGItem; }
namespace System { class String; }
namespace System::Collections::Generic { template <typename T> class List_1; }
namespace UnityEngine { class AnimationCurve; }

#define MOLEMOLE_CONFIG_CONFIGHOLLOWCHANGEFG_CUSTOMADDFUNCTION_OFFSET UNITYSDK_OFFSET(0x1653A690)
#define MOLEMOLE_CONFIG_CONFIGHOLLOWCHANGEFG_GETUIANIMATIONNODE_OFFSET UNITYSDK_OFFSET(0x1653A5D0)
#define MOLEMOLE_CONFIG_CONFIGHOLLOWCHANGEFG__CTOR_OFFSET UNITYSDK_OFFSET(0x1653A700)

namespace MoleMole::Config
{
	inline static constexpr unsigned int ConfigHollowChangeFG_TypeDefinitionIndex = 48418;

	class ConfigHollowChangeFG : public ::MoleMole::Config::ConfigUIBaseActionNode
	{
	public:
		::UnityEngine::AnimationCurve* FadeOutCurve; // 0x18
		::System::String* VideoPath; // 0x20
		::System::Collections::Generic::List_1<::MoleMole::Config::ChangeFGItem*>* ChangeFGItems; // 0x28
		::UnityEngine::AnimationCurve* FadeInCurve; // 0x30
		::MoleMole::Vector2Int StartRelativePos; // 0x38
		::System::Boolean Enable; // 0x40
		::System::Boolean UseSpecific; // 0x41
		::System::Boolean SelectAll; // 0x42
		::System::Boolean AutoFadeOut; // 0x43
		::System::Single TotalDuration; // 0x44
		::System::Single FadeInDuration; // 0x48
		::System::Single FadeOutDuration; // 0x4C
		::MoleMole::Vector2Int ColRow; // 0x50
		::MoleMole::Config::ConfigSetSection_Order ConfigOrder; // 0x58

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_CONFIGHOLLOWCHANGEFG__CTOR_OFFSET))(this);
		}

		::ADCIIHIOAMH* GetUIAnimationNode()
		{
			return ((::ADCIIHIOAMH*(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_CONFIGHOLLOWCHANGEFG_GETUIANIMATIONNODE_OFFSET))(this);
		}

		::MoleMole::Config::ChangeFGItem* CustomAddFunction()
		{
			return ((::MoleMole::Config::ChangeFGItem*(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_CONFIGHOLLOWCHANGEFG_CUSTOMADDFUNCTION_OFFSET))(this);
		}
	};
}
