#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
namespace System { class Object; }
namespace System { template <typename T1, typename T2> class Func_2; }

#define RPG_CLIENT_CHALLENGEAUTOSETTLERESULT___C_CCTOR_OFFSET UNITYSDK_OFFSET(0xD2D9FB0)
#define RPG_CLIENT_CHALLENGEAUTOSETTLERESULT___C_CTOR_OFFSET UNITYSDK_OFFSET(0xD2D9FF0)
#define RPG_CLIENT_CHALLENGEAUTOSETTLERESULT___C__ISVALID_B__3_0_OFFSET UNITYSDK_OFFSET(0xD2DA000)

namespace RPG::Client
{
	inline static constexpr unsigned int ChallengeAutoSettleResult___c_TypeDefinitionIndex = 64539;

	class ChallengeAutoSettleResult___c : public ::System::Object
	{
	public:
		static ::System::Func_2<::System::UInt32, ::System::Boolean>** StaticGet___9__3_0()
		{
			return (::System::Func_2<::System::UInt32, ::System::Boolean>**)UnitySDK::FromName("RPG.Client", "<>c")->GetStaticField(0x62630);
		}

		static ::System::Object** StaticGet___9()
		{
			return (::System::Object**)UnitySDK::FromName("RPG.Client", "<>c")->GetStaticField(0x62638);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + RPG_CLIENT_CHALLENGEAUTOSETTLERESULT___C_CCTOR_OFFSET))();
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHALLENGEAUTOSETTLERESULT___C_CTOR_OFFSET))(this);
		}

		::System::Boolean _IsValid_b__3_0(::System::UInt32 a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHALLENGEAUTOSETTLERESULT___C__ISVALID_B__3_0_OFFSET))(this, a1);
		}

	};
}
