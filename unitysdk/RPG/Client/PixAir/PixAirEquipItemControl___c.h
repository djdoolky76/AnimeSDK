#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
namespace System { class Object; }

#define RPG_CLIENT_PIXAIR_PIXAIREQUIPITEMCONTROL___C_CCTOR_OFFSET UNITYSDK_OFFSET(0xDB43D50)
#define RPG_CLIENT_PIXAIR_PIXAIREQUIPITEMCONTROL___C_CTOR_OFFSET UNITYSDK_OFFSET(0xDB43D90)

namespace RPG::Client::PixAir
{
	inline static constexpr unsigned int PixAirEquipItemControl___c_TypeDefinitionIndex = 79230;

	class PixAirEquipItemControl___c : public ::System::Object
	{
	public:
		static ::System::Object** StaticGet___9()
		{
			return (::System::Object**)UnitySDK::FromName("RPG.Client.PixAir", "<>c")->GetStaticField(0x23B30);
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
