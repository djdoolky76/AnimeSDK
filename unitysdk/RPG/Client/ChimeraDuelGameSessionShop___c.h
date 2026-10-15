#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class GBMLMONHJME;
namespace System { class Object; }
namespace System { template <typename T> class Predicate_1; }

#define RPG_CLIENT_CHIMERADUELGAMESESSIONSHOP___C_CCTOR_OFFSET UNITYSDK_OFFSET(0xCB245C0)
#define RPG_CLIENT_CHIMERADUELGAMESESSIONSHOP___C_CTOR_OFFSET UNITYSDK_OFFSET(0xCB24600)
#define RPG_CLIENT_CHIMERADUELGAMESESSIONSHOP___C__TRYTRIGGERPENDINGPERFORMANCE_B__49_0_OFFSET UNITYSDK_OFFSET(0xCB24610)

namespace RPG::Client
{
	inline static constexpr unsigned int ChimeraDuelGameSessionShop___c_TypeDefinitionIndex = 63321;

	class ChimeraDuelGameSessionShop___c : public ::System::Object
	{
	public:
		static ::System::Predicate_1<::GBMLMONHJME*>** StaticGet___9__49_0()
		{
			return (::System::Predicate_1<::GBMLMONHJME*>**)UnitySDK::FromName("RPG.Client", "<>c")->GetStaticField(0x10910);
		}

		static ::System::Object** StaticGet___9()
		{
			return (::System::Object**)UnitySDK::FromName("RPG.Client", "<>c")->GetStaticField(0x10918);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + RPG_CLIENT_CHIMERADUELGAMESESSIONSHOP___C_CCTOR_OFFSET))();
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHIMERADUELGAMESESSIONSHOP___C_CTOR_OFFSET))(this);
		}

		::System::Boolean _TryTriggerPendingPerformance_b__49_0(::GBMLMONHJME* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::GBMLMONHJME*))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHIMERADUELGAMESESSIONSHOP___C__TRYTRIGGERPENDINGPERFORMANCE_B__49_0_OFFSET))(this, a1);
		}

	};
}
