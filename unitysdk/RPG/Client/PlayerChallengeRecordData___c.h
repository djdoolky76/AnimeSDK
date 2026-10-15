#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class OIHFMECAJBH;
namespace System { class Object; }
namespace System { template <typename T> class Comparison_1; }

#define RPG_CLIENT_PLAYERCHALLENGERECORDDATA___C_CCTOR_OFFSET UNITYSDK_OFFSET(0xDBEB710)
#define RPG_CLIENT_PLAYERCHALLENGERECORDDATA___C_CTOR_OFFSET UNITYSDK_OFFSET(0xDBEB750)
#define RPG_CLIENT_PLAYERCHALLENGERECORDDATA___C___SYNCLINEUP_B__2_0_OFFSET UNITYSDK_OFFSET(0xDBEB760)
#define RPG_CLIENT_PLAYERCHALLENGERECORDDATA___C___SYNCLINEUP_B__2_1_OFFSET UNITYSDK_OFFSET(0xDBEB7A0)

namespace RPG::Client
{
	inline static constexpr unsigned int PlayerChallengeRecordData___c_TypeDefinitionIndex = 64277;

	class PlayerChallengeRecordData___c : public ::System::Object
	{
	public:
		static ::System::Comparison_1<::OIHFMECAJBH*>** StaticGet___9__2_0()
		{
			return (::System::Comparison_1<::OIHFMECAJBH*>**)UnitySDK::FromName("RPG.Client", "<>c")->GetStaticField(0x39BA0);
		}

		static ::System::Object** StaticGet___9()
		{
			return (::System::Object**)UnitySDK::FromName("RPG.Client", "<>c")->GetStaticField(0x39BA8);
		}

		static ::System::Comparison_1<::OIHFMECAJBH*>** StaticGet___9__2_1()
		{
			return (::System::Comparison_1<::OIHFMECAJBH*>**)UnitySDK::FromName("RPG.Client", "<>c")->GetStaticField(0x39BB0);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + RPG_CLIENT_PLAYERCHALLENGERECORDDATA___C_CCTOR_OFFSET))();
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_PLAYERCHALLENGERECORDDATA___C_CTOR_OFFSET))(this);
		}

		::System::Int32 __SyncLineup_b__2_0(::OIHFMECAJBH* a1, ::OIHFMECAJBH* a2)
		{
			return ((::System::Int32(*)(::PVOID, ::OIHFMECAJBH*, ::OIHFMECAJBH*))((::PBYTE)hIl2Cpp + RPG_CLIENT_PLAYERCHALLENGERECORDDATA___C___SYNCLINEUP_B__2_0_OFFSET))(this, a1, a2);
		}

		::System::Int32 __SyncLineup_b__2_1(::OIHFMECAJBH* a1, ::OIHFMECAJBH* a2)
		{
			return ((::System::Int32(*)(::PVOID, ::OIHFMECAJBH*, ::OIHFMECAJBH*))((::PBYTE)hIl2Cpp + RPG_CLIENT_PLAYERCHALLENGERECORDDATA___C___SYNCLINEUP_B__2_1_OFFSET))(this, a1, a2);
		}

	};
}
