#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class NLPDPEMHNOA;
namespace System { class Object; }
namespace System { template <typename T> class Predicate_1; }

#define RPG_CLIENT_ACTIVITYIDLELIVE_IDLELIVEIMGDANMUSERVICE___C_CCTOR_OFFSET UNITYSDK_OFFSET(0xCDDB510)
#define RPG_CLIENT_ACTIVITYIDLELIVE_IDLELIVEIMGDANMUSERVICE___C_CTOR_OFFSET UNITYSDK_OFFSET(0xCDDB550)
#define RPG_CLIENT_ACTIVITYIDLELIVE_IDLELIVEIMGDANMUSERVICE___C___CLEARENDEDIMAGEDANMUS_B__13_0_OFFSET UNITYSDK_OFFSET(0xCDDB560)

namespace RPG::Client::ActivityIdleLive
{
	inline static constexpr unsigned int IdleLiveImgDanmuService___c_TypeDefinitionIndex = 77678;

	class IdleLiveImgDanmuService___c : public ::System::Object
	{
	public:
		static ::System::Object** StaticGet___9()
		{
			return (::System::Object**)UnitySDK::FromName("RPG.Client.ActivityIdleLive", "<>c")->GetStaticField(0x1FDE0);
		}

		static ::System::Predicate_1<::NLPDPEMHNOA*>** StaticGet___9__13_0()
		{
			return (::System::Predicate_1<::NLPDPEMHNOA*>**)UnitySDK::FromName("RPG.Client.ActivityIdleLive", "<>c")->GetStaticField(0x1FDE8);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + RPG_CLIENT_ACTIVITYIDLELIVE_IDLELIVEIMGDANMUSERVICE___C_CCTOR_OFFSET))();
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ACTIVITYIDLELIVE_IDLELIVEIMGDANMUSERVICE___C_CTOR_OFFSET))(this);
		}

		::System::Boolean __ClearEndedImageDanmus_b__13_0(::NLPDPEMHNOA* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::NLPDPEMHNOA*))((::PBYTE)hIl2Cpp + RPG_CLIENT_ACTIVITYIDLELIVE_IDLELIVEIMGDANMUSERVICE___C___CLEARENDEDIMAGEDANMUS_B__13_0_OFFSET))(this, a1);
		}

	};
}
