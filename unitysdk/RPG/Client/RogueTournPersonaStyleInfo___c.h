#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
namespace RPG::Client { class RogueTournPersonaGameStyleGiftData; }
namespace System { class Object; }
namespace System { template <typename T1, typename T2> class Func_2; }

#define RPG_CLIENT_ROGUETOURNPERSONASTYLEINFO___C_CCTOR_OFFSET UNITYSDK_OFFSET(0x1E0ED660)
#define RPG_CLIENT_ROGUETOURNPERSONASTYLEINFO___C_CTOR_OFFSET UNITYSDK_OFFSET(0x1E0ED690)
#define RPG_CLIENT_ROGUETOURNPERSONASTYLEINFO___C__GETGIFTSFORMENU_B__8_0_OFFSET UNITYSDK_OFFSET(0x1E0ED6A0)

namespace RPG::Client
{
	inline static constexpr unsigned int RogueTournPersonaStyleInfo___c_TypeDefinitionIndex = 69704;

	class RogueTournPersonaStyleInfo___c : public ::System::Object
	{
	public:
		static ::System::Func_2<::RPG::Client::RogueTournPersonaGameStyleGiftData*, ::System::Boolean>** StaticGet___9__8_0()
		{
			return (::System::Func_2<::RPG::Client::RogueTournPersonaGameStyleGiftData*, ::System::Boolean>**)UnitySDK::FromName("RPG.Client", "<>c")->GetStaticField(0x730E0);
		}

		static ::System::Object** StaticGet___9()
		{
			return (::System::Object**)UnitySDK::FromName("RPG.Client", "<>c")->GetStaticField(0x730E8);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + RPG_CLIENT_ROGUETOURNPERSONASTYLEINFO___C_CCTOR_OFFSET))();
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ROGUETOURNPERSONASTYLEINFO___C_CTOR_OFFSET))(this);
		}

		::System::Boolean _GetGiftsForMenu_b__8_0(::RPG::Client::RogueTournPersonaGameStyleGiftData* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::RPG::Client::RogueTournPersonaGameStyleGiftData*))((::PBYTE)hIl2Cpp + RPG_CLIENT_ROGUETOURNPERSONASTYLEINFO___C__GETGIFTSFORMENU_B__8_0_OFFSET))(this, a1);
		}

	};
}
