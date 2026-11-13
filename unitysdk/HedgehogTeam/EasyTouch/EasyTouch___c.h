#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/UnityEngine/EventSystems/RaycastResult.h"
namespace HedgehogTeam::EasyTouch { class ECamera; }
namespace System { class Object; }
namespace System { template <typename T1, typename T2> class Func_2; }
namespace System { template <typename T> class Predicate_1; }

#define HEDGEHOGTEAM_EASYTOUCH_EASYTOUCH___C_CCTOR_OFFSET UNITYSDK_OFFSET(0x1E97A8F0)
#define HEDGEHOGTEAM_EASYTOUCH_EASYTOUCH___C_CTOR_OFFSET UNITYSDK_OFFSET(0x1E97A920)
#define HEDGEHOGTEAM_EASYTOUCH_EASYTOUCH___C__ISSCREENPOSITIONOVERUI_B__261_0_OFFSET UNITYSDK_OFFSET(0x1E97A990)
#define HEDGEHOGTEAM_EASYTOUCH_EASYTOUCH___C__START_B__227_0_OFFSET UNITYSDK_OFFSET(0x1E97A930)

namespace HedgehogTeam::EasyTouch
{
	inline static constexpr unsigned int EasyTouch___c_TypeDefinitionIndex = 41309;

	class EasyTouch___c : public ::System::Object
	{
	public:
		static ::System::Predicate_1<::HedgehogTeam::EasyTouch::ECamera*>** StaticGet___9__227_0()
		{
			return (::System::Predicate_1<::HedgehogTeam::EasyTouch::ECamera*>**)UnitySDK::FromName("HedgehogTeam.EasyTouch", "<>c")->GetStaticField(0x5ECB0);
		}

		static ::System::Object** StaticGet___9()
		{
			return (::System::Object**)UnitySDK::FromName("HedgehogTeam.EasyTouch", "<>c")->GetStaticField(0x5ECB8);
		}

		static ::System::Func_2<::UnityEngine::EventSystems::RaycastResult, ::System::Boolean>** StaticGet___9__261_0()
		{
			return (::System::Func_2<::UnityEngine::EventSystems::RaycastResult, ::System::Boolean>**)UnitySDK::FromName("HedgehogTeam.EasyTouch", "<>c")->GetStaticField(0x5ECC0);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + HEDGEHOGTEAM_EASYTOUCH_EASYTOUCH___C_CCTOR_OFFSET))();
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + HEDGEHOGTEAM_EASYTOUCH_EASYTOUCH___C_CTOR_OFFSET))(this);
		}

		::System::Boolean _Start_b__227_0(::HedgehogTeam::EasyTouch::ECamera* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::HedgehogTeam::EasyTouch::ECamera*))((::PBYTE)hIl2Cpp + HEDGEHOGTEAM_EASYTOUCH_EASYTOUCH___C__START_B__227_0_OFFSET))(this, a1);
		}

		::System::Boolean _IsScreenPositionOverUI_b__261_0(::UnityEngine::EventSystems::RaycastResult a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::UnityEngine::EventSystems::RaycastResult))((::PBYTE)hIl2Cpp + HEDGEHOGTEAM_EASYTOUCH_EASYTOUCH___C__ISSCREENPOSITIONOVERUI_B__261_0_OFFSET))(this, a1);
		}

	};
}
