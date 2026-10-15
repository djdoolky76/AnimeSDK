#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
namespace System { class Action; }
namespace System { class Object; }

#define RPG_CLIENT_MAP___C_CCTOR_OFFSET UNITYSDK_OFFSET(0xD5239D0)
#define RPG_CLIENT_MAP___C_CTOR_OFFSET UNITYSDK_OFFSET(0xD523A00)
#define RPG_CLIENT_MAP___C__LOADSTAGEONSTEP2_B__19_0_OFFSET UNITYSDK_OFFSET(0xD523A10)

namespace RPG::Client
{
	inline static constexpr unsigned int Map___c_TypeDefinitionIndex = 60872;

	class Map___c : public ::System::Object
	{
	public:
		static ::System::Action** StaticGet___9__19_0()
		{
			return (::System::Action**)UnitySDK::FromName("RPG.Client", "<>c")->GetStaticField(0x41DA0);
		}

		static ::System::Object** StaticGet___9()
		{
			return (::System::Object**)UnitySDK::FromName("RPG.Client", "<>c")->GetStaticField(0x41DA8);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + RPG_CLIENT_MAP___C_CCTOR_OFFSET))();
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MAP___C_CTOR_OFFSET))(this);
		}

		::System::Void _LoadStageOnStep2_b__19_0()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MAP___C__LOADSTAGEONSTEP2_B__19_0_OFFSET))(this);
		}

	};
}
