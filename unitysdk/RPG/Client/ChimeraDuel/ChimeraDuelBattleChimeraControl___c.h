#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
namespace System { class Object; }

#define RPG_CLIENT_CHIMERADUEL_CHIMERADUELBATTLECHIMERACONTROL___C_CCTOR_OFFSET UNITYSDK_OFFSET(0x1DFE2BB0)
#define RPG_CLIENT_CHIMERADUEL_CHIMERADUELBATTLECHIMERACONTROL___C_CTOR_OFFSET UNITYSDK_OFFSET(0x1DFE2BF0)

namespace RPG::Client::ChimeraDuel
{
	inline static constexpr unsigned int ChimeraDuelBattleChimeraControl___c_TypeDefinitionIndex = 84030;

	class ChimeraDuelBattleChimeraControl___c : public ::System::Object
	{
	public:
		static ::System::Object** StaticGet___9()
		{
			return (::System::Object**)UnitySDK::FromName("RPG.Client.ChimeraDuel", "<>c")->GetStaticField(0xEAF0);
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
