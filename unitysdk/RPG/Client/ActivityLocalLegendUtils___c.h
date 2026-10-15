#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
namespace RPG::Client { class MonsterData; }
namespace System { class Object; }
namespace System { template <typename T1, typename T2> class Func_2; }
namespace System { template <typename T> class Comparison_1; }

#define RPG_CLIENT_ACTIVITYLOCALLEGENDUTILS___C_CCTOR_OFFSET UNITYSDK_OFFSET(0xC531020)
#define RPG_CLIENT_ACTIVITYLOCALLEGENDUTILS___C_CTOR_OFFSET UNITYSDK_OFFSET(0xC531060)
#define RPG_CLIENT_ACTIVITYLOCALLEGENDUTILS___C__GETMONSTERDATALIST_B__2_0_OFFSET UNITYSDK_OFFSET(0xC531070)
#define RPG_CLIENT_ACTIVITYLOCALLEGENDUTILS___C__GETMONSTERDATALIST_B__2_1_OFFSET UNITYSDK_OFFSET(0xC531090)

namespace RPG::Client
{
	inline static constexpr unsigned int ActivityLocalLegendUtils___c_TypeDefinitionIndex = 61572;

	class ActivityLocalLegendUtils___c : public ::System::Object
	{
	public:
		static ::System::Comparison_1<::RPG::Client::MonsterData*>** StaticGet___9__2_1()
		{
			return (::System::Comparison_1<::RPG::Client::MonsterData*>**)UnitySDK::FromName("RPG.Client", "<>c")->GetStaticField(0x2C5B0);
		}

		static ::System::Func_2<::RPG::Client::MonsterData*, ::System::UInt32>** StaticGet___9__2_0()
		{
			return (::System::Func_2<::RPG::Client::MonsterData*, ::System::UInt32>**)UnitySDK::FromName("RPG.Client", "<>c")->GetStaticField(0x2C5B8);
		}

		static ::System::Object** StaticGet___9()
		{
			return (::System::Object**)UnitySDK::FromName("RPG.Client", "<>c")->GetStaticField(0x2C5C0);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + RPG_CLIENT_ACTIVITYLOCALLEGENDUTILS___C_CCTOR_OFFSET))();
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ACTIVITYLOCALLEGENDUTILS___C_CTOR_OFFSET))(this);
		}

		::System::UInt32 _GetMonsterDataList_b__2_0(::RPG::Client::MonsterData* a1)
		{
			return ((::System::UInt32(*)(::PVOID, ::RPG::Client::MonsterData*))((::PBYTE)hIl2Cpp + RPG_CLIENT_ACTIVITYLOCALLEGENDUTILS___C__GETMONSTERDATALIST_B__2_0_OFFSET))(this, a1);
		}

		::System::Int32 _GetMonsterDataList_b__2_1(::RPG::Client::MonsterData* a1, ::RPG::Client::MonsterData* a2)
		{
			return ((::System::Int32(*)(::PVOID, ::RPG::Client::MonsterData*, ::RPG::Client::MonsterData*))((::PBYTE)hIl2Cpp + RPG_CLIENT_ACTIVITYLOCALLEGENDUTILS___C__GETMONSTERDATALIST_B__2_1_OFFSET))(this, a1, a2);
		}

	};
}
