#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class ADBNDDAJGBP;
class FPDCINMDJCE;
namespace System { class Object; }
namespace System { template <typename T1, typename T2> class Func_2; }

#define RPG_CLIENT_CHALLENGEFRIENDRECOMMENDLINEUPDATA___C_CCTOR_OFFSET UNITYSDK_OFFSET(0xD2E8450)
#define RPG_CLIENT_CHALLENGEFRIENDRECOMMENDLINEUPDATA___C_CTOR_OFFSET UNITYSDK_OFFSET(0xD2E8490)
#define RPG_CLIENT_CHALLENGEFRIENDRECOMMENDLINEUPDATA___C___CREATERECOMMENDCHALLENGELINEUPSINFO_B__29_0_OFFSET UNITYSDK_OFFSET(0xD2E84A0)
#define RPG_CLIENT_CHALLENGEFRIENDRECOMMENDLINEUPDATA___C___CREATERECOMMENDCHALLENGELINEUPSINFO_B__29_1_OFFSET UNITYSDK_OFFSET(0xD2E8570)
#define RPG_CLIENT_CHALLENGEFRIENDRECOMMENDLINEUPDATA___C___CREATERECOMMENDCHALLENGELINEUPSINFO_B__29_2_OFFSET UNITYSDK_OFFSET(0xD2E8650)
#define RPG_CLIENT_CHALLENGEFRIENDRECOMMENDLINEUPDATA___C___CREATERECOMMENDCHALLENGELINEUPSINFO_B__29_3_OFFSET UNITYSDK_OFFSET(0xD2E86C0)

namespace RPG::Client
{
	inline static constexpr unsigned int ChallengeFriendRecommendLineupData___c_TypeDefinitionIndex = 64571;

	class ChallengeFriendRecommendLineupData___c : public ::System::Object
	{
	public:
		static ::System::Func_2<::FPDCINMDJCE*, ::ADBNDDAJGBP*>** StaticGet___9__29_2()
		{
			return (::System::Func_2<::FPDCINMDJCE*, ::ADBNDDAJGBP*>**)UnitySDK::FromName("RPG.Client", "<>c")->GetStaticField(0x65880);
		}

		static ::System::Func_2<::FPDCINMDJCE*, ::ADBNDDAJGBP*>** StaticGet___9__29_3()
		{
			return (::System::Func_2<::FPDCINMDJCE*, ::ADBNDDAJGBP*>**)UnitySDK::FromName("RPG.Client", "<>c")->GetStaticField(0x65888);
		}

		static ::System::Object** StaticGet___9()
		{
			return (::System::Object**)UnitySDK::FromName("RPG.Client", "<>c")->GetStaticField(0x65890);
		}

		static ::System::Func_2<::FPDCINMDJCE*, ::System::Boolean>** StaticGet___9__29_0()
		{
			return (::System::Func_2<::FPDCINMDJCE*, ::System::Boolean>**)UnitySDK::FromName("RPG.Client", "<>c")->GetStaticField(0x65898);
		}

		static ::System::Func_2<::FPDCINMDJCE*, ::System::Boolean>** StaticGet___9__29_1()
		{
			return (::System::Func_2<::FPDCINMDJCE*, ::System::Boolean>**)UnitySDK::FromName("RPG.Client", "<>c")->GetStaticField(0x658A0);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + RPG_CLIENT_CHALLENGEFRIENDRECOMMENDLINEUPDATA___C_CCTOR_OFFSET))();
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHALLENGEFRIENDRECOMMENDLINEUPDATA___C_CTOR_OFFSET))(this);
		}

		::System::Boolean __CreateRecommendChallengeLineupsInfo_b__29_0(::FPDCINMDJCE* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::FPDCINMDJCE*))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHALLENGEFRIENDRECOMMENDLINEUPDATA___C___CREATERECOMMENDCHALLENGELINEUPSINFO_B__29_0_OFFSET))(this, a1);
		}

		::System::Boolean __CreateRecommendChallengeLineupsInfo_b__29_1(::FPDCINMDJCE* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::FPDCINMDJCE*))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHALLENGEFRIENDRECOMMENDLINEUPDATA___C___CREATERECOMMENDCHALLENGELINEUPSINFO_B__29_1_OFFSET))(this, a1);
		}

		::ADBNDDAJGBP* __CreateRecommendChallengeLineupsInfo_b__29_2(::FPDCINMDJCE* a1)
		{
			return ((::ADBNDDAJGBP*(*)(::PVOID, ::FPDCINMDJCE*))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHALLENGEFRIENDRECOMMENDLINEUPDATA___C___CREATERECOMMENDCHALLENGELINEUPSINFO_B__29_2_OFFSET))(this, a1);
		}

		::ADBNDDAJGBP* __CreateRecommendChallengeLineupsInfo_b__29_3(::FPDCINMDJCE* a1)
		{
			return ((::ADBNDDAJGBP*(*)(::PVOID, ::FPDCINMDJCE*))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHALLENGEFRIENDRECOMMENDLINEUPDATA___C___CREATERECOMMENDCHALLENGELINEUPSINFO_B__29_3_OFFSET))(this, a1);
		}

	};
}
