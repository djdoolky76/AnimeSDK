#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
namespace System { class Action; }
namespace System { class Object; }

#define RPG_CLIENT_PIXAIR_PIXAIREQUIPASSEMBLEVIEWMODEL___C_CCTOR_OFFSET UNITYSDK_OFFSET(0x1E3541F0)
#define RPG_CLIENT_PIXAIR_PIXAIREQUIPASSEMBLEVIEWMODEL___C_CTOR_OFFSET UNITYSDK_OFFSET(0x1E354230)
#define RPG_CLIENT_PIXAIR_PIXAIREQUIPASSEMBLEVIEWMODEL___C___CTOR_B__0_0_OFFSET UNITYSDK_OFFSET(0x1E354240)

namespace RPG::Client::PixAir
{
	inline static constexpr unsigned int PixAirEquipAssembleViewModel___c_TypeDefinitionIndex = 82030;

	class PixAirEquipAssembleViewModel___c : public ::System::Object
	{
	public:
		static ::System::Object** StaticGet___9()
		{
			return (::System::Object**)UnitySDK::FromName("RPG.Client.PixAir", "<>c")->GetStaticField(0x34360);
		}

		static ::System::Action** StaticGet___9__0_0()
		{
			return (::System::Action**)UnitySDK::FromName("RPG.Client.PixAir", "<>c")->GetStaticField(0x34368);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + RPG_CLIENT_PIXAIR_PIXAIREQUIPASSEMBLEVIEWMODEL___C_CCTOR_OFFSET))();
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_PIXAIR_PIXAIREQUIPASSEMBLEVIEWMODEL___C_CTOR_OFFSET))(this);
		}

		::System::Void __ctor_b__0_0()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_PIXAIR_PIXAIREQUIPASSEMBLEVIEWMODEL___C___CTOR_B__0_0_OFFSET))(this);
		}

	};
}
