#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace MoleMole { class MonoBPLevelAnimation; }
namespace System { template <typename T> class Action_1; }
namespace UnityEngine { class AnimationCurve; }

#define MOLEMOLE_MONOBPLEVELANIMATION_JLNMHHAJGBM_HDICKPEOHNK_OFFSET UNITYSDK_OFFSET(0x15ABA080)
#define MOLEMOLE_MONOBPLEVELANIMATION_JLNMHHAJGBM_IDMMGMPCOJI_OFFSET UNITYSDK_OFFSET(0x15ABA0F0)
#define MOLEMOLE_MONOBPLEVELANIMATION_JLNMHHAJGBM__CTOR_OFFSET UNITYSDK_OFFSET(0x15ABA070)

namespace MoleMole
{
	inline static constexpr unsigned int MonoBPLevelAnimation_JLNMHHAJGBM_TypeDefinitionIndex = 67710;

	class MonoBPLevelAnimation_JLNMHHAJGBM : public ::System::Object
	{
	public:
		::MoleMole::MonoBPLevelAnimation* KLHPEBKNIFB; // 0x10
		::System::Action_1<::System::Single>* POKICALLNDP; // 0x18
		::UnityEngine::AnimationCurve* NLJOCJAIBAI; // 0x20
		::System::Action_1<::System::Single>* GMAICEDMLBN; // 0x28
		::System::Single IOJMEHCNGJA; // 0x30

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_MONOBPLEVELANIMATION_JLNMHHAJGBM__CTOR_OFFSET))(this);
		}

		::System::Void HDICKPEOHNK()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_MONOBPLEVELANIMATION_JLNMHHAJGBM_HDICKPEOHNK_OFFSET))(this);
		}

		::System::Void IDMMGMPCOJI()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_MONOBPLEVELANIMATION_JLNMHHAJGBM_IDMMGMPCOJI_OFFSET))(this);
		}
	};
}
