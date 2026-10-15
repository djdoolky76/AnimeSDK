#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
namespace RPG::Client { class RogueTournPersonaRoomAttributeData; }
namespace System { class Object; }
namespace System { template <typename T1, typename T2> class Func_2; }

#define RPG_CLIENT_ROGUETOURNPERSONAGAMEROOMCARDDATA___C_CCTOR_OFFSET UNITYSDK_OFFSET(0xE011D70)
#define RPG_CLIENT_ROGUETOURNPERSONAGAMEROOMCARDDATA___C_CTOR_OFFSET UNITYSDK_OFFSET(0xE011DA0)
#define RPG_CLIENT_ROGUETOURNPERSONAGAMEROOMCARDDATA___C__CLONE_B__2_0_OFFSET UNITYSDK_OFFSET(0xE011DB0)

namespace RPG::Client
{
	inline static constexpr unsigned int RogueTournPersonaGameRoomCardData___c_TypeDefinitionIndex = 67731;

	class RogueTournPersonaGameRoomCardData___c : public ::System::Object
	{
	public:
		static ::System::Func_2<::RPG::Client::RogueTournPersonaRoomAttributeData*, ::RPG::Client::RogueTournPersonaRoomAttributeData*>** StaticGet___9__2_0()
		{
			return (::System::Func_2<::RPG::Client::RogueTournPersonaRoomAttributeData*, ::RPG::Client::RogueTournPersonaRoomAttributeData*>**)UnitySDK::FromName("RPG.Client", "<>c")->GetStaticField(0x6AEB0);
		}

		static ::System::Object** StaticGet___9()
		{
			return (::System::Object**)UnitySDK::FromName("RPG.Client", "<>c")->GetStaticField(0x6AEB8);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + RPG_CLIENT_ROGUETOURNPERSONAGAMEROOMCARDDATA___C_CCTOR_OFFSET))();
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ROGUETOURNPERSONAGAMEROOMCARDDATA___C_CTOR_OFFSET))(this);
		}

		::RPG::Client::RogueTournPersonaRoomAttributeData* _Clone_b__2_0(::RPG::Client::RogueTournPersonaRoomAttributeData* a1)
		{
			return ((::RPG::Client::RogueTournPersonaRoomAttributeData*(*)(::PVOID, ::RPG::Client::RogueTournPersonaRoomAttributeData*))((::PBYTE)hIl2Cpp + RPG_CLIENT_ROGUETOURNPERSONAGAMEROOMCARDDATA___C__CLONE_B__2_0_OFFSET))(this, a1);
		}

	};
}
