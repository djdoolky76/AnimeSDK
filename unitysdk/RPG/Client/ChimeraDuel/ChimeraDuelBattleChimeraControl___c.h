#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
namespace System { class Object; }

#define RPG_CLIENT_CHIMERADUEL_CHIMERADUELBATTLECHIMERACONTROL___C_CCTOR_OFFSET UNITYSDK_OFFSET(0xD4784D0)
#define RPG_CLIENT_CHIMERADUEL_CHIMERADUELBATTLECHIMERACONTROL___C_CTOR_OFFSET UNITYSDK_OFFSET(0xD478510)

namespace RPG::Client::ChimeraDuel
{
	inline static constexpr unsigned int ChimeraDuelBattleChimeraControl___c_TypeDefinitionIndex = 84031;

	class ChimeraDuelBattleChimeraControl___c : public ::System::Object
	{
	public:
		static ::System::Object** StaticGet___9()
		{
			return (::System::Object**)UnitySDK::FromName("RPG.Client.ChimeraDuel", "<>c")->GetStaticField(0xED30);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + RPG_CLIENT_CHIMERADUEL_CHIMERADUELBATTLECHIMERACONTROL___C_CCTOR_OFFSET))();
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHIMERADUEL_CHIMERADUELBATTLECHIMERACONTROL___C_CTOR_OFFSET))(this);
		}

	};
}
