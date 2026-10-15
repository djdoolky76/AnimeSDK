#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Cinemachine/CinemachineShotBase.h"
#include "unitysdk/Cinemachine/SingleShotSettings.h"
#include "unitysdk/Cinemachine/ViewSide.h"
#include "unitysdk/UnityEngine/Vector3.h"

#define CINEMACHINE_CINEMACHINESINGLESHOT_CJHAHEGNLLL_OFFSET UNITYSDK_OFFSET(0xDF93E10)
#define CINEMACHINE_CINEMACHINESINGLESHOT_CTOR_OFFSET UNITYSDK_OFFSET(0xDF94EB0)
#define CINEMACHINE_CINEMACHINESINGLESHOT_DIGFCLAPLIA_OFFSET UNITYSDK_OFFSET(0xDF93E60)
#define CINEMACHINE_CINEMACHINESINGLESHOT_GET_ISVALID_OFFSET UNITYSDK_OFFSET(0xDF93F00)
#define CINEMACHINE_CINEMACHINESINGLESHOT_GKLOMDCGDOP_OFFSET UNITYSDK_OFFSET(0xDF93D70)
#define CINEMACHINE_CINEMACHINESINGLESHOT_HJICMGGGDOP_OFFSET UNITYSDK_OFFSET(0xDF93D20)
#define CINEMACHINE_CINEMACHINESINGLESHOT_HMHMKAJLNFB_OFFSET UNITYSDK_OFFSET(0xDF93EB0)
#define CINEMACHINE_CINEMACHINESINGLESHOT_KJMHEMCJDNJ_OFFSET UNITYSDK_OFFSET(0xDF93DC0)
#define CINEMACHINE_CINEMACHINESINGLESHOT_LCMAHACIANG_OFFSET UNITYSDK_OFFSET(0xDF93FF0)

namespace Cinemachine
{
	inline static constexpr unsigned int CinemachineSingleShot_TypeDefinitionIndex = 49644;

	class CinemachineSingleShot : public ::Cinemachine::CinemachineShotBase
	{
	public:
		::Cinemachine::ViewSide ViewSide; // 0x138
		::Cinemachine::SingleShotSettings Shot; // 0x13C
		::UnityEngine::Vector3 BoneSpace; // 0x150
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CINEMACHINE_CINEMACHINESINGLESHOT_CTOR_OFFSET))(this);
		}

		::System::Single HJICMGGGDOP()
		{
			return ((::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + CINEMACHINE_CINEMACHINESINGLESHOT_HJICMGGGDOP_OFFSET))(this);
		}

		::System::Single GKLOMDCGDOP()
		{
			return ((::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + CINEMACHINE_CINEMACHINESINGLESHOT_GKLOMDCGDOP_OFFSET))(this);
		}

		::System::Single KJMHEMCJDNJ()
		{
			return ((::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + CINEMACHINE_CINEMACHINESINGLESHOT_KJMHEMCJDNJ_OFFSET))(this);
		}

		::System::Single CJHAHEGNLLL()
		{
			return ((::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + CINEMACHINE_CINEMACHINESINGLESHOT_CJHAHEGNLLL_OFFSET))(this);
		}

		::System::Single DIGFCLAPLIA()
		{
			return ((::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + CINEMACHINE_CINEMACHINESINGLESHOT_DIGFCLAPLIA_OFFSET))(this);
		}

		::System::Int32 HMHMKAJLNFB()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + CINEMACHINE_CINEMACHINESINGLESHOT_HMHMKAJLNFB_OFFSET))(this);
		}

		::System::Boolean get_IsValid()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + CINEMACHINE_CINEMACHINESINGLESHOT_GET_ISVALID_OFFSET))(this);
		}

		::System::Boolean LCMAHACIANG()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + CINEMACHINE_CINEMACHINESINGLESHOT_LCMAHACIANG_OFFSET))(this);
		}

	};
}
