#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
namespace RPG::Client { class ISubMissionGroupData; }
namespace RPG::Client { class SubMissionData; }
namespace System { class Object; }
namespace System { template <typename T1, typename T2> class Func_2; }
namespace System { template <typename T> class Comparison_1; }

#define RPG_CLIENT_MAINMISSIONDATA___C_CCTOR_OFFSET UNITYSDK_OFFSET(0xD5097F0)
#define RPG_CLIENT_MAINMISSIONDATA___C_CTOR_OFFSET UNITYSDK_OFFSET(0xD509820)
#define RPG_CLIENT_MAINMISSIONDATA___C__ADDSUBMISSION_B__106_0_OFFSET UNITYSDK_OFFSET(0xD509830)
#define RPG_CLIENT_MAINMISSIONDATA___C__GETSUBMISSIONGROUPS_B__108_0_OFFSET UNITYSDK_OFFSET(0xD509C70)
#define RPG_CLIENT_MAINMISSIONDATA___C__GETSUBMISSIONGROUPS_B__108_1_OFFSET UNITYSDK_OFFSET(0xD509F60)
#define RPG_CLIENT_MAINMISSIONDATA___C__INITMISSIONDATA_B__107_0_OFFSET UNITYSDK_OFFSET(0xD509A50)

namespace RPG::Client
{
	class MainMissionData___c : public ::System::Object
	{
	public:
		static ::System::Comparison_1<::RPG::Client::ISubMissionGroupData*>** StaticGet___9__108_1()
		{
			return (::System::Comparison_1<::RPG::Client::ISubMissionGroupData*>**)UnitySDK::FromName("RPG.Client", "<>c")->GetStaticField(0x40770);
		}

		static ::System::Object** StaticGet___9()
		{
			return (::System::Object**)UnitySDK::FromName("RPG.Client", "<>c")->GetStaticField(0x40778);
		}

		static ::System::Comparison_1<::RPG::Client::SubMissionData*>** StaticGet___9__106_0()
		{
			return (::System::Comparison_1<::RPG::Client::SubMissionData*>**)UnitySDK::FromName("RPG.Client", "<>c")->GetStaticField(0x40780);
		}

		static ::System::Comparison_1<::RPG::Client::SubMissionData*>** StaticGet___9__107_0()
		{
			return (::System::Comparison_1<::RPG::Client::SubMissionData*>**)UnitySDK::FromName("RPG.Client", "<>c")->GetStaticField(0x40788);
		}

		static ::System::Func_2<::RPG::Client::ISubMissionGroupData*, ::System::Boolean>** StaticGet___9__108_0()
		{
			return (::System::Func_2<::RPG::Client::ISubMissionGroupData*, ::System::Boolean>**)UnitySDK::FromName("RPG.Client", "<>c")->GetStaticField(0x40790);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + RPG_CLIENT_MAINMISSIONDATA___C_CCTOR_OFFSET))();
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MAINMISSIONDATA___C_CTOR_OFFSET))(this);
		}

		::System::Int32 _AddSubMission_b__106_0(::RPG::Client::SubMissionData* a1, ::RPG::Client::SubMissionData* a2)
		{
			return ((::System::Int32(*)(::PVOID, ::RPG::Client::SubMissionData*, ::RPG::Client::SubMissionData*))((::PBYTE)hIl2Cpp + RPG_CLIENT_MAINMISSIONDATA___C__ADDSUBMISSION_B__106_0_OFFSET))(this, a1, a2);
		}

		::System::Int32 _InitMissionData_b__107_0(::RPG::Client::SubMissionData* a1, ::RPG::Client::SubMissionData* a2)
		{
			return ((::System::Int32(*)(::PVOID, ::RPG::Client::SubMissionData*, ::RPG::Client::SubMissionData*))((::PBYTE)hIl2Cpp + RPG_CLIENT_MAINMISSIONDATA___C__INITMISSIONDATA_B__107_0_OFFSET))(this, a1, a2);
		}

		::System::Boolean _GetSubMissionGroups_b__108_0(::RPG::Client::ISubMissionGroupData* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::RPG::Client::ISubMissionGroupData*))((::PBYTE)hIl2Cpp + RPG_CLIENT_MAINMISSIONDATA___C__GETSUBMISSIONGROUPS_B__108_0_OFFSET))(this, a1);
		}

		::System::Int32 _GetSubMissionGroups_b__108_1(::RPG::Client::ISubMissionGroupData* a1, ::RPG::Client::ISubMissionGroupData* a2)
		{
			return ((::System::Int32(*)(::PVOID, ::RPG::Client::ISubMissionGroupData*, ::RPG::Client::ISubMissionGroupData*))((::PBYTE)hIl2Cpp + RPG_CLIENT_MAINMISSIONDATA___C__GETSUBMISSIONGROUPS_B__108_1_OFFSET))(this, a1, a2);
		}

	};
}
