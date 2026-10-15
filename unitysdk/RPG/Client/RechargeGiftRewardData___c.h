#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/IJHPILBBHDI_BBIBCFCKPJH_EGCFNCBLHJC.h"
#include "unitysdk/System/Object.h"
class IJHPILBBHDI;
namespace System { class Object; }
namespace System { template <typename T1, typename T2> class Func_2; }

#define RPG_CLIENT_RECHARGEGIFTREWARDDATA___C_CCTOR_OFFSET UNITYSDK_OFFSET(0xDE4B850)
#define RPG_CLIENT_RECHARGEGIFTREWARDDATA___C_CTOR_OFFSET UNITYSDK_OFFSET(0xDE4B880)
#define RPG_CLIENT_RECHARGEGIFTREWARDDATA___C__CREATEREWARDSDATA_B__9_0_OFFSET UNITYSDK_OFFSET(0xDE4B890)
#define RPG_CLIENT_RECHARGEGIFTREWARDDATA___C__CREATEREWARDSDATA_B__9_1_OFFSET UNITYSDK_OFFSET(0xDE4B8B0)

namespace RPG::Client
{
	inline static constexpr unsigned int RechargeGiftRewardData___c_TypeDefinitionIndex = 66796;

	class RechargeGiftRewardData___c : public ::System::Object
	{
	public:
		static ::System::Func_2<::IJHPILBBHDI*, ::System::Object*>** StaticGet___9__9_1()
		{
			return (::System::Func_2<::IJHPILBBHDI*, ::System::Object*>**)UnitySDK::FromName("RPG.Client", "<>c")->GetStaticField(0x5B360);
		}

		static ::System::Func_2<::IJHPILBBHDI*, ::System::UInt32>** StaticGet___9__9_0()
		{
			return (::System::Func_2<::IJHPILBBHDI*, ::System::UInt32>**)UnitySDK::FromName("RPG.Client", "<>c")->GetStaticField(0x5B368);
		}

		static ::System::Object** StaticGet___9()
		{
			return (::System::Object**)UnitySDK::FromName("RPG.Client", "<>c")->GetStaticField(0x5B370);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + RPG_CLIENT_RECHARGEGIFTREWARDDATA___C_CCTOR_OFFSET))();
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_RECHARGEGIFTREWARDDATA___C_CTOR_OFFSET))(this);
		}

		::System::UInt32 _CreateRewardsData_b__9_0(::IJHPILBBHDI* a1)
		{
			return ((::System::UInt32(*)(::PVOID, ::IJHPILBBHDI*))((::PBYTE)hIl2Cpp + RPG_CLIENT_RECHARGEGIFTREWARDDATA___C__CREATEREWARDSDATA_B__9_0_OFFSET))(this, a1);
		}

		::IJHPILBBHDI_BBIBCFCKPJH_EGCFNCBLHJC _CreateRewardsData_b__9_1(::IJHPILBBHDI* a1)
		{
			return ((::IJHPILBBHDI_BBIBCFCKPJH_EGCFNCBLHJC(*)(::PVOID, ::IJHPILBBHDI*))((::PBYTE)hIl2Cpp + RPG_CLIENT_RECHARGEGIFTREWARDDATA___C__CREATEREWARDSDATA_B__9_1_OFFSET))(this, a1);
		}

	};
}
