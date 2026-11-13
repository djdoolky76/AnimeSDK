#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
namespace System { class Object; }

#define RPG_CLIENT_PIXAIR_PIXAIREQUIPITEMCONTROL___C_CCTOR_OFFSET UNITYSDK_OFFSET(0x1E35E5A0)
#define RPG_CLIENT_PIXAIR_PIXAIREQUIPITEMCONTROL___C_CTOR_OFFSET UNITYSDK_OFFSET(0x1E35E5E0)

namespace RPG::Client::PixAir
{
	inline static constexpr unsigned int PixAirEquipItemControl___c_TypeDefinitionIndex = 82006;

	class PixAirEquipItemControl___c : public ::System::Object
	{
	public:
		static ::System::Object** StaticGet___9()
		{
			return (::System::Object**)UnitySDK::FromName("RPG.Client.PixAir", "<>c")->GetStaticField(0x36CC0);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + RPG_CLIENT_PIXAIR_PIXAIREQUIPITEMCONTROL___C_CCTOR_OFFSET))();
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_PIXAIR_PIXAIREQUIPITEMCONTROL___C_CTOR_OFFSET))(this);
		}

	};
}
