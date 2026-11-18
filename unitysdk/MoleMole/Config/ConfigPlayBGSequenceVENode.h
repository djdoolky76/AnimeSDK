#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/MoleMole/Config/ConfigUIBaseActionNode.h"

class ADCIIHIOAMH;
namespace System { class String; }
namespace System::Collections::Generic { template <typename T> class IEnumerable_1; }
namespace System::Collections::Generic { template <typename T> class List_1; }
namespace UnityEngine { class AnimationCurve; }

#define MOLEMOLE_CONFIG_CONFIGPLAYBGSEQUENCEVENODE_GETALLVEKEY_OFFSET UNITYSDK_OFFSET(0x192A1A50)
#define MOLEMOLE_CONFIG_CONFIGPLAYBGSEQUENCEVENODE_GETUIANIMATIONNODE_OFFSET UNITYSDK_OFFSET(0x192A19D0)
#define MOLEMOLE_CONFIG_CONFIGPLAYBGSEQUENCEVENODE__CTOR_OFFSET UNITYSDK_OFFSET(0x192A1AD0)

namespace MoleMole::Config
{
	inline static constexpr unsigned int ConfigPlayBGSequenceVENode_TypeDefinitionIndex = 76862;

	class ConfigPlayBGSequenceVENode : public ::MoleMole::Config::ConfigUIBaseActionNode
	{
	public:
		::UnityEngine::AnimationCurve* AlphaCurve; // 0x18
		::System::String* ChangeVEEffectPath; // 0x20
		::System::Collections::Generic::List_1<::System::String*>* VEPool; // 0x28
		::System::String* SwitchEndEffectPath; // 0x30
		::System::String* SwitchStartEffectPath; // 0x38
		::System::Single durationTime; // 0x40
		::System::Boolean isOnlyVisbile; // 0x44

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_CONFIGPLAYBGSEQUENCEVENODE__CTOR_OFFSET))(this);
		}

		::ADCIIHIOAMH* GetUIAnimationNode()
		{
			return ((::ADCIIHIOAMH*(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_CONFIGPLAYBGSEQUENCEVENODE_GETUIANIMATIONNODE_OFFSET))(this);
		}

		::System::Collections::Generic::IEnumerable_1<::System::String*>* GetAllVEKey()
		{
			return ((::System::Collections::Generic::IEnumerable_1<::System::String*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_CONFIGPLAYBGSEQUENCEVENODE_GETALLVEKEY_OFFSET))(this);
		}
	};
}
