#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
namespace RPG::Client { class ActivityTelevisionData; }
namespace System { class Object; }
namespace System { template <typename T1, typename T2> class Func_2; }

#define RPG_CLIENT_ACTIVITYTELEVISIONMODULE___C_CCTOR_OFFSET UNITYSDK_OFFSET(0xC5C3260)
#define RPG_CLIENT_ACTIVITYTELEVISIONMODULE___C_CTOR_OFFSET UNITYSDK_OFFSET(0xC5C3290)
#define RPG_CLIENT_ACTIVITYTELEVISIONMODULE___C___INITMODULERELATEDMISSIONDATA_B__38_0_OFFSET UNITYSDK_OFFSET(0xC5C32A0)

namespace RPG::Client
{
	inline static constexpr unsigned int ActivityTelevisionModule___c_TypeDefinitionIndex = 62000;

	class ActivityTelevisionModule___c : public ::System::Object
	{
	public:
		static ::System::Object** StaticGet___9()
		{
			return (::System::Object**)UnitySDK::FromName("RPG.Client", "<>c")->GetStaticField(0x40230);
		}

		static ::System::Func_2<::RPG::Client::ActivityTelevisionData*, ::System::UInt32>** StaticGet___9__38_0()
		{
			return (::System::Func_2<::RPG::Client::ActivityTelevisionData*, ::System::UInt32>**)UnitySDK::FromName("RPG.Client", "<>c")->GetStaticField(0x40238);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + RPG_CLIENT_ACTIVITYTELEVISIONMODULE___C_CCTOR_OFFSET))();
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ACTIVITYTELEVISIONMODULE___C_CTOR_OFFSET))(this);
		}

		::System::UInt32 __InitModuleRelatedMissionData_b__38_0(::RPG::Client::ActivityTelevisionData* a1)
		{
			return ((::System::UInt32(*)(::PVOID, ::RPG::Client::ActivityTelevisionData*))((::PBYTE)hIl2Cpp + RPG_CLIENT_ACTIVITYTELEVISIONMODULE___C___INITMODULERELATEDMISSIONDATA_B__38_0_OFFSET))(this, a1);
		}

	};
}
