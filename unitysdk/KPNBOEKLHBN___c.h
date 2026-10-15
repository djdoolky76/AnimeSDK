#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
namespace RPG::Client { class MainMissionData; }
namespace System { class Object; }
namespace System { template <typename T1, typename T2> class Func_2; }

#define KPNBOEKLHBN___C_CCTOR_OFFSET UNITYSDK_OFFSET(0xB5C2BC0)
#define KPNBOEKLHBN___C_CTOR_OFFSET UNITYSDK_OFFSET(0xB5C2BF0)
#define KPNBOEKLHBN___C__TRYTRACKINGNEXTMISSION_B__0_0_OFFSET UNITYSDK_OFFSET(0xB5C2C00)
#define KPNBOEKLHBN___C__TRYTRACKINGNEXTMISSION_B__0_2_OFFSET UNITYSDK_OFFSET(0xB5C2C30)

inline static constexpr unsigned int KPNBOEKLHBN___c_TypeDefinitionIndex = 66177;

	class KPNBOEKLHBN___c : public ::System::Object
	{
	public:
		static ::System::Func_2<::RPG::Client::MainMissionData*, ::System::UInt32>** StaticGet___9__0_2()
		{
			return (::System::Func_2<::RPG::Client::MainMissionData*, ::System::UInt32>**)UnitySDK::FromName("", "<>c")->GetStaticField(0x65D10);
		}

		static ::System::Object** StaticGet___9()
		{
			return (::System::Object**)UnitySDK::FromName("", "<>c")->GetStaticField(0x65D18);
		}

		static ::System::Func_2<::RPG::Client::MainMissionData*, ::System::UInt32>** StaticGet___9__0_0()
		{
			return (::System::Func_2<::RPG::Client::MainMissionData*, ::System::UInt32>**)UnitySDK::FromName("", "<>c")->GetStaticField(0x65D20);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + KPNBOEKLHBN___C_CCTOR_OFFSET))();
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + KPNBOEKLHBN___C_CTOR_OFFSET))(this);
		}

		::System::UInt32 _TryTrackingNextMission_b__0_0(::RPG::Client::MainMissionData* a1)
		{
			return ((::System::UInt32(*)(::PVOID, ::RPG::Client::MainMissionData*))((::PBYTE)hIl2Cpp + KPNBOEKLHBN___C__TRYTRACKINGNEXTMISSION_B__0_0_OFFSET))(this, a1);
		}

		::System::UInt32 _TryTrackingNextMission_b__0_2(::RPG::Client::MainMissionData* a1)
		{
			return ((::System::UInt32(*)(::PVOID, ::RPG::Client::MainMissionData*))((::PBYTE)hIl2Cpp + KPNBOEKLHBN___C__TRYTRACKINGNEXTMISSION_B__0_2_OFFSET))(this, a1);
		}

	};
