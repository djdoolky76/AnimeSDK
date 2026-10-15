#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
namespace RPG::Client { class ActivityBenefitV2Round; }
namespace System { class Object; }
namespace System { template <typename T1, typename T2> class Func_2; }

#define DBNGNLBAOAG___C_CCTOR_OFFSET UNITYSDK_OFFSET(0xE233CC0)
#define DBNGNLBAOAG___C_CTOR_OFFSET UNITYSDK_OFFSET(0xE233D00)
#define DBNGNLBAOAG___C__ISALLREWARDCLAIMED_B__10_0_OFFSET UNITYSDK_OFFSET(0xE233D10)

inline static constexpr unsigned int DBNGNLBAOAG___c_TypeDefinitionIndex = 61409;

	class DBNGNLBAOAG___c : public ::System::Object
	{
	public:
		static ::System::Func_2<::RPG::Client::ActivityBenefitV2Round*, ::System::Boolean>** StaticGet___9__10_0()
		{
			return (::System::Func_2<::RPG::Client::ActivityBenefitV2Round*, ::System::Boolean>**)UnitySDK::FromName("", "<>c")->GetStaticField(0x5E4E0);
		}

		static ::System::Object** StaticGet___9()
		{
			return (::System::Object**)UnitySDK::FromName("", "<>c")->GetStaticField(0x5E4E8);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + DBNGNLBAOAG___C_CCTOR_OFFSET))();
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + DBNGNLBAOAG___C_CTOR_OFFSET))(this);
		}

		::System::Boolean _IsAllRewardClaimed_b__10_0(::RPG::Client::ActivityBenefitV2Round* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::RPG::Client::ActivityBenefitV2Round*))((::PBYTE)hIl2Cpp + DBNGNLBAOAG___C__ISALLREWARDCLAIMED_B__10_0_OFFSET))(this, a1);
		}

	};
