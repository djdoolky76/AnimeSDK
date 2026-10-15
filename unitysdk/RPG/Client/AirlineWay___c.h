#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
namespace RPG::Client { class AirlineVariableScalePoint; }
namespace RPG::Client { class AirlineWay_BKDFMLDIINE; }
namespace System { class Object; }
namespace System { template <typename T> class Comparison_1; }

#define RPG_CLIENT_AIRLINEWAY___C_CCTOR_OFFSET UNITYSDK_OFFSET(0xC645860)
#define RPG_CLIENT_AIRLINEWAY___C_CTOR_OFFSET UNITYSDK_OFFSET(0xC645890)
#define RPG_CLIENT_AIRLINEWAY___C__AWAKE_B__54_0_OFFSET UNITYSDK_OFFSET(0xC6458A0)
#define RPG_CLIENT_AIRLINEWAY___C__INITRACINGBOOSTRINGS_B__63_0_OFFSET UNITYSDK_OFFSET(0xC6458E0)

namespace RPG::Client
{
	inline static constexpr unsigned int AirlineWay___c_TypeDefinitionIndex = 59777;

	class AirlineWay___c : public ::System::Object
	{
	public:
		static ::System::Comparison_1<::System::Object*>** StaticGet___9__63_0()
		{
			return (::System::Comparison_1<::System::Object*>**)UnitySDK::FromName("RPG.Client", "<>c")->GetStaticField(0x50630);
		}

		static ::System::Object** StaticGet___9()
		{
			return (::System::Object**)UnitySDK::FromName("RPG.Client", "<>c")->GetStaticField(0x50638);
		}

		static ::System::Comparison_1<::RPG::Client::AirlineVariableScalePoint*>** StaticGet___9__54_0()
		{
			return (::System::Comparison_1<::RPG::Client::AirlineVariableScalePoint*>**)UnitySDK::FromName("RPG.Client", "<>c")->GetStaticField(0x50640);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + RPG_CLIENT_AIRLINEWAY___C_CCTOR_OFFSET))();
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_AIRLINEWAY___C_CTOR_OFFSET))(this);
		}

		::System::Int32 _Awake_b__54_0(::RPG::Client::AirlineVariableScalePoint* a1, ::RPG::Client::AirlineVariableScalePoint* a2)
		{
			return ((::System::Int32(*)(::PVOID, ::RPG::Client::AirlineVariableScalePoint*, ::RPG::Client::AirlineVariableScalePoint*))((::PBYTE)hIl2Cpp + RPG_CLIENT_AIRLINEWAY___C__AWAKE_B__54_0_OFFSET))(this, a1, a2);
		}

		::System::Int32 _InitRacingBoostRings_b__63_0(::RPG::Client::AirlineWay_BKDFMLDIINE* a1, ::RPG::Client::AirlineWay_BKDFMLDIINE* a2)
		{
			return ((::System::Int32(*)(::PVOID, ::RPG::Client::AirlineWay_BKDFMLDIINE*, ::RPG::Client::AirlineWay_BKDFMLDIINE*))((::PBYTE)hIl2Cpp + RPG_CLIENT_AIRLINEWAY___C__INITRACINGBOOSTRINGS_B__63_0_OFFSET))(this, a1, a2);
		}

	};
}
