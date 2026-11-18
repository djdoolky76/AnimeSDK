#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace MoleMole { class MonoLayoutTween; }
namespace System { class Action; }
namespace UnityEngine { class GameObject; }

#define MOLEMOLE_MONOLAYOUTTWEEN_BMJMENDPILB_HDMOFJCKLLJ_OFFSET UNITYSDK_OFFSET(0x18102A90)
#define MOLEMOLE_MONOLAYOUTTWEEN_BMJMENDPILB__CTOR_OFFSET UNITYSDK_OFFSET(0x18102A80)

namespace MoleMole
{
	inline static constexpr unsigned int MonoLayoutTween_BMJMENDPILB_TypeDefinitionIndex = 81375;

	class MonoLayoutTween_BMJMENDPILB : public ::System::Object
	{
	public:
		::MoleMole::MonoLayoutTween* KLHPEBKNIFB; // 0x10
		::UnityEngine::GameObject* HHEGAOJKGJM; // 0x18
		::System::Action* IHLBALNBGKM; // 0x20

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_MONOLAYOUTTWEEN_BMJMENDPILB__CTOR_OFFSET))(this);
		}

		::System::Void HDMOFJCKLLJ()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_MONOLAYOUTTWEEN_BMJMENDPILB_HDMOFJCKLLJ_OFFSET))(this);
		}
	};
}
