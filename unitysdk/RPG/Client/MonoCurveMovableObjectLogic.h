#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/ECurveObjectLogicState.h"
#include "unitysdk/System/Object.h"
class JAFALACGKMC;
namespace RPG::Client { class MonoCurveObjectLogic_Load; }

#define RPG_CLIENT_MONOCURVEMOVABLEOBJECTLOGIC_CAGCHKJHMPD_OFFSET UNITYSDK_OFFSET(0xD73BAA0)
#define RPG_CLIENT_MONOCURVEMOVABLEOBJECTLOGIC_CTOR_OFFSET UNITYSDK_OFFSET(0xD73BB90)
#define RPG_CLIENT_MONOCURVEMOVABLEOBJECTLOGIC_KGJKEJANMPD_OFFSET UNITYSDK_OFFSET(0xD73B950)
#define RPG_CLIENT_MONOCURVEMOVABLEOBJECTLOGIC_OBCCGHMKFHK_OFFSET UNITYSDK_OFFSET(0xD73BA00)

namespace RPG::Client
{
	class MonoCurveMovableObjectLogic : public ::System::Object
	{
	public:
		::RPG::GameCore::ECurveObjectLogicState state; // 0x10
		::System::Byte _padding0[0x4];
		::RPG::Client::MonoCurveObjectLogic_Load* load; // 0x18
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MONOCURVEMOVABLEOBJECTLOGIC_CTOR_OFFSET))(this);
		}

		::System::Boolean KGJKEJANMPD()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MONOCURVEMOVABLEOBJECTLOGIC_KGJKEJANMPD_OFFSET))(this);
		}

		::System::Boolean CAGCHKJHMPD()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MONOCURVEMOVABLEOBJECTLOGIC_CAGCHKJHMPD_OFFSET))(this);
		}

		::JAFALACGKMC* OBCCGHMKFHK()
		{
			return ((::JAFALACGKMC*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MONOCURVEMOVABLEOBJECTLOGIC_OBCCGHMKFHK_OFFSET))(this);
		}

	};
}
