#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
namespace RPG::Client { class IRogueTournPersonaRoomAttribute; }
namespace System { class Object; }
namespace System { template <typename T1, typename T2> class Func_2; }

#define RPG_CLIENT_ROGUETOURNPERSONAGAMELEVELPRESETROOMDATA___C_CCTOR_OFFSET UNITYSDK_OFFSET(0xE010020)
#define RPG_CLIENT_ROGUETOURNPERSONAGAMELEVELPRESETROOMDATA___C_CTOR_OFFSET UNITYSDK_OFFSET(0xE010060)
#define RPG_CLIENT_ROGUETOURNPERSONAGAMELEVELPRESETROOMDATA___C__GETDEBUGINFO_B__38_0_OFFSET UNITYSDK_OFFSET(0xE010070)

namespace RPG::Client
{
	inline static constexpr unsigned int RogueTournPersonaGameLevelPresetRoomData___c_TypeDefinitionIndex = 67715;

	class RogueTournPersonaGameLevelPresetRoomData___c : public ::System::Object
	{
	public:
		static ::System::Func_2<::RPG::Client::IRogueTournPersonaRoomAttribute*, ::System::UInt32>** StaticGet___9__38_0()
		{
			return (::System::Func_2<::RPG::Client::IRogueTournPersonaRoomAttribute*, ::System::UInt32>**)UnitySDK::FromName("RPG.Client", "<>c")->GetStaticField(0x6ADD0);
		}

		static ::System::Object** StaticGet___9()
		{
			return (::System::Object**)UnitySDK::FromName("RPG.Client", "<>c")->GetStaticField(0x6ADD8);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + RPG_CLIENT_ROGUETOURNPERSONAGAMELEVELPRESETROOMDATA___C_CCTOR_OFFSET))();
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ROGUETOURNPERSONAGAMELEVELPRESETROOMDATA___C_CTOR_OFFSET))(this);
		}

		::System::UInt32 _GetDebugInfo_b__38_0(::RPG::Client::IRogueTournPersonaRoomAttribute* a1)
		{
			return ((::System::UInt32(*)(::PVOID, ::RPG::Client::IRogueTournPersonaRoomAttribute*))((::PBYTE)hIl2Cpp + RPG_CLIENT_ROGUETOURNPERSONAGAMELEVELPRESETROOMDATA___C__GETDEBUGINFO_B__38_0_OFFSET))(this, a1);
		}

	};
}
