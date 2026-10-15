#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
namespace RPG::Client { class ToggleButton; }
namespace System { class Object; }
namespace System { template <typename T> class Predicate_1; }

#define RPG_CLIENT_TOGGLEBUTTONGROUP___C_CCTOR_OFFSET UNITYSDK_OFFSET(0xE2A94C0)
#define RPG_CLIENT_TOGGLEBUTTONGROUP___C_CTOR_OFFSET UNITYSDK_OFFSET(0xE2A9500)
#define RPG_CLIENT_TOGGLEBUTTONGROUP___C__ANYTOGGLESON_B__3_0_OFFSET UNITYSDK_OFFSET(0xE2A9510)

namespace RPG::Client
{
	inline static constexpr unsigned int ToggleButtonGroup___c_TypeDefinitionIndex = 72692;

	class ToggleButtonGroup___c : public ::System::Object
	{
	public:
		static ::System::Predicate_1<::RPG::Client::ToggleButton*>** StaticGet___9__3_0()
		{
			return (::System::Predicate_1<::RPG::Client::ToggleButton*>**)UnitySDK::FromName("RPG.Client", "<>c")->GetStaticField(0x1A7E0);
		}

		static ::System::Object** StaticGet___9()
		{
			return (::System::Object**)UnitySDK::FromName("RPG.Client", "<>c")->GetStaticField(0x1A7E8);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + RPG_CLIENT_TOGGLEBUTTONGROUP___C_CCTOR_OFFSET))();
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_TOGGLEBUTTONGROUP___C_CTOR_OFFSET))(this);
		}

		::System::Boolean _AnyTogglesOn_b__3_0(::RPG::Client::ToggleButton* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::RPG::Client::ToggleButton*))((::PBYTE)hIl2Cpp + RPG_CLIENT_TOGGLEBUTTONGROUP___C__ANYTOGGLESON_B__3_0_OFFSET))(this, a1);
		}

	};
}
