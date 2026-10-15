#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
namespace RPG::Client::LimaoNews { class LimaoNewsEmployeeCheckData; }
namespace System { class Object; }
namespace System { template <typename T> class Comparison_1; }

#define RPG_CLIENT_LIMAONEWS_LIMAONEWSMANAGEMENTWORKENTRANCEVIEWMODEL___C_CCTOR_OFFSET UNITYSDK_OFFSET(0xD3C3410)
#define RPG_CLIENT_LIMAONEWS_LIMAONEWSMANAGEMENTWORKENTRANCEVIEWMODEL___C_CTOR_OFFSET UNITYSDK_OFFSET(0xD3C3450)
#define RPG_CLIENT_LIMAONEWS_LIMAONEWSMANAGEMENTWORKENTRANCEVIEWMODEL___C___GETFIRSTRECRUITABLEEMPLOYEE_B__8_0_OFFSET UNITYSDK_OFFSET(0xD3C3460)

namespace RPG::Client::LimaoNews
{
	class LimaoNewsManagementWorkEntranceViewModel___c : public ::System::Object
	{
	public:
		static ::System::Comparison_1<::RPG::Client::LimaoNews::LimaoNewsEmployeeCheckData*>** StaticGet___9__8_0()
		{
			return (::System::Comparison_1<::RPG::Client::LimaoNews::LimaoNewsEmployeeCheckData*>**)UnitySDK::FromName("RPG.Client.LimaoNews", "<>c")->GetStaticField(0x210E0);
		}

		static ::System::Object** StaticGet___9()
		{
			return (::System::Object**)UnitySDK::FromName("RPG.Client.LimaoNews", "<>c")->GetStaticField(0x210E8);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + RPG_CLIENT_LIMAONEWS_LIMAONEWSMANAGEMENTWORKENTRANCEVIEWMODEL___C_CCTOR_OFFSET))();
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_LIMAONEWS_LIMAONEWSMANAGEMENTWORKENTRANCEVIEWMODEL___C_CTOR_OFFSET))(this);
		}

		::System::Int32 __GetFirstRecruitableEmployee_b__8_0(::RPG::Client::LimaoNews::LimaoNewsEmployeeCheckData* a1, ::RPG::Client::LimaoNews::LimaoNewsEmployeeCheckData* a2)
		{
			return ((::System::Int32(*)(::PVOID, ::RPG::Client::LimaoNews::LimaoNewsEmployeeCheckData*, ::RPG::Client::LimaoNews::LimaoNewsEmployeeCheckData*))((::PBYTE)hIl2Cpp + RPG_CLIENT_LIMAONEWS_LIMAONEWSMANAGEMENTWORKENTRANCEVIEWMODEL___C___GETFIRSTRECRUITABLEEMPLOYEE_B__8_0_OFFSET))(this, a1, a2);
		}

	};
}
