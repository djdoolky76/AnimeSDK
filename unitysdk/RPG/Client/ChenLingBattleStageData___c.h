#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class FCHFCKDICNA;
namespace System { class Object; }
namespace System { template <typename T> class Comparison_1; }

#define RPG_CLIENT_CHENLINGBATTLESTAGEDATA___C_CCTOR_OFFSET UNITYSDK_OFFSET(0xCA6C080)
#define RPG_CLIENT_CHENLINGBATTLESTAGEDATA___C_CTOR_OFFSET UNITYSDK_OFFSET(0xCA6C0B0)
#define RPG_CLIENT_CHENLINGBATTLESTAGEDATA___C___CTOR_B__0_0_OFFSET UNITYSDK_OFFSET(0xCA6C0C0)

namespace RPG::Client
{
	inline static constexpr unsigned int ChenLingBattleStageData___c_TypeDefinitionIndex = 61457;

	class ChenLingBattleStageData___c : public ::System::Object
	{
	public:
		static ::System::Object** StaticGet___9()
		{
			return (::System::Object**)UnitySDK::FromName("RPG.Client", "<>c")->GetStaticField(0x6F230);
		}

		static ::System::Comparison_1<::FCHFCKDICNA*>** StaticGet___9__0_0()
		{
			return (::System::Comparison_1<::FCHFCKDICNA*>**)UnitySDK::FromName("RPG.Client", "<>c")->GetStaticField(0x6F238);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + RPG_CLIENT_CHENLINGBATTLESTAGEDATA___C_CCTOR_OFFSET))();
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHENLINGBATTLESTAGEDATA___C_CTOR_OFFSET))(this);
		}

		::System::Int32 __ctor_b__0_0(::FCHFCKDICNA* a1, ::FCHFCKDICNA* a2)
		{
			return ((::System::Int32(*)(::PVOID, ::FCHFCKDICNA*, ::FCHFCKDICNA*))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHENLINGBATTLESTAGEDATA___C___CTOR_B__0_0_OFFSET))(this, a1, a2);
		}

	};
}
