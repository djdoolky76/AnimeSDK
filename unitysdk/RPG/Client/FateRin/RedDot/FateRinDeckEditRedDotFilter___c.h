#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/FateRinHouguOwnerType.h"
#include "unitysdk/System/Object.h"
namespace System { class Object; }
namespace System { template <typename T1, typename T2> class Func_2; }

#define RPG_CLIENT_FATERIN_REDDOT_FATERINDECKEDITREDDOTFILTER___C_CCTOR_OFFSET UNITYSDK_OFFSET(0xCFA6590)
#define RPG_CLIENT_FATERIN_REDDOT_FATERINDECKEDITREDDOTFILTER___C_CTOR_OFFSET UNITYSDK_OFFSET(0xCFA65D0)
#define RPG_CLIENT_FATERIN_REDDOT_FATERINDECKEDITREDDOTFILTER___C__GETSUBKEYS_B__1_0_OFFSET UNITYSDK_OFFSET(0xCFA65E0)

namespace RPG::Client::FateRin::RedDot
{
	inline static constexpr unsigned int FateRinDeckEditRedDotFilter___c_TypeDefinitionIndex = 80738;

	class FateRinDeckEditRedDotFilter___c : public ::System::Object
	{
	public:
		static ::System::Func_2<::RPG::GameCore::FateRinHouguOwnerType, ::System::UInt32>** StaticGet___9__1_0()
		{
			return (::System::Func_2<::RPG::GameCore::FateRinHouguOwnerType, ::System::UInt32>**)UnitySDK::FromName("RPG.Client.FateRin.RedDot", "<>c")->GetStaticField(0x57510);
		}

		static ::System::Object** StaticGet___9()
		{
			return (::System::Object**)UnitySDK::FromName("RPG.Client.FateRin.RedDot", "<>c")->GetStaticField(0x57518);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + RPG_CLIENT_FATERIN_REDDOT_FATERINDECKEDITREDDOTFILTER___C_CCTOR_OFFSET))();
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_FATERIN_REDDOT_FATERINDECKEDITREDDOTFILTER___C_CTOR_OFFSET))(this);
		}

		::System::UInt32 _GetSubKeys_b__1_0(::RPG::GameCore::FateRinHouguOwnerType a1)
		{
			return ((::System::UInt32(*)(::PVOID, ::RPG::GameCore::FateRinHouguOwnerType))((::PBYTE)hIl2Cpp + RPG_CLIENT_FATERIN_REDDOT_FATERINDECKEDITREDDOTFILTER___C__GETSUBKEYS_B__1_0_OFFSET))(this, a1);
		}

	};
}
