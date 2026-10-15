#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class DIKFNDGHLPP;
namespace System { class Object; }
namespace System { template <typename T> class Predicate_1; }

#define RPG_CLIENT_FATEGAMEBROADCASTINFO___C_CCTOR_OFFSET UNITYSDK_OFFSET(0xCE81FA0)
#define RPG_CLIENT_FATEGAMEBROADCASTINFO___C_CTOR_OFFSET UNITYSDK_OFFSET(0xCE81FE0)
#define RPG_CLIENT_FATEGAMEBROADCASTINFO___C__REFRESHCURBROADCAST_B__2_0_OFFSET UNITYSDK_OFFSET(0xCE81FF0)

namespace RPG::Client
{
	inline static constexpr unsigned int FateGameBroadcastInfo___c_TypeDefinitionIndex = 63990;

	class FateGameBroadcastInfo___c : public ::System::Object
	{
	public:
		static ::System::Predicate_1<::DIKFNDGHLPP*>** StaticGet___9__2_0()
		{
			return (::System::Predicate_1<::DIKFNDGHLPP*>**)UnitySDK::FromName("RPG.Client", "<>c")->GetStaticField(0x4C420);
		}

		static ::System::Object** StaticGet___9()
		{
			return (::System::Object**)UnitySDK::FromName("RPG.Client", "<>c")->GetStaticField(0x4C428);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + RPG_CLIENT_FATEGAMEBROADCASTINFO___C_CCTOR_OFFSET))();
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_FATEGAMEBROADCASTINFO___C_CTOR_OFFSET))(this);
		}

		::System::Boolean _RefreshCurBroadcast_b__2_0(::DIKFNDGHLPP* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::DIKFNDGHLPP*))((::PBYTE)hIl2Cpp + RPG_CLIENT_FATEGAMEBROADCASTINFO___C__REFRESHCURBROADCAST_B__2_0_OFFSET))(this, a1);
		}

	};
}
