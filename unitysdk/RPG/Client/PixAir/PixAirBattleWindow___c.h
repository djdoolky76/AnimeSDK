#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
namespace System { class Object; }

#define RPG_CLIENT_PIXAIR_PIXAIRBATTLEWINDOW___C_CCTOR_OFFSET UNITYSDK_OFFSET(0x1E350E40)
#define RPG_CLIENT_PIXAIR_PIXAIRBATTLEWINDOW___C_CTOR_OFFSET UNITYSDK_OFFSET(0x1E350E80)

namespace RPG::Client::PixAir
{
	inline static constexpr unsigned int PixAirBattleWindow___c_TypeDefinitionIndex = 82014;

	class PixAirBattleWindow___c : public ::System::Object
	{
	public:
		static ::System::Object** StaticGet___9()
		{
			return (::System::Object**)UnitySDK::FromName("RPG.Client.PixAir", "<>c")->GetStaticField(0x33C90);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + RPG_CLIENT_PIXAIR_PIXAIRBATTLEWINDOW___C_CCTOR_OFFSET))();
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_PIXAIR_PIXAIRBATTLEWINDOW___C_CTOR_OFFSET))(this);
		}

	};
}
