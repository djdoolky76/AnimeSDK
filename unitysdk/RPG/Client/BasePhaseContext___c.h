#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class KDLEIHJGDAP;
namespace System { class Object; }
namespace System { template <typename T> class Action_1; }

#define RPG_CLIENT_BASEPHASECONTEXT___C_CCTOR_OFFSET UNITYSDK_OFFSET(0xC7F0DA0)
#define RPG_CLIENT_BASEPHASECONTEXT___C_CTOR_OFFSET UNITYSDK_OFFSET(0xC7F0DD0)
#define RPG_CLIENT_BASEPHASECONTEXT___C__DISPOSE_B__10_0_OFFSET UNITYSDK_OFFSET(0xC7F0E00)
#define RPG_CLIENT_BASEPHASECONTEXT___C__INIT_B__2_0_OFFSET UNITYSDK_OFFSET(0xC7F0DE0)

namespace RPG::Client
{
	inline static constexpr unsigned int BasePhaseContext___c_TypeDefinitionIndex = 61114;

	class BasePhaseContext___c : public ::System::Object
	{
	public:
		static ::System::Object** StaticGet___9()
		{
			return (::System::Object**)UnitySDK::FromName("RPG.Client", "<>c")->GetStaticField(0x57870);
		}

		static ::System::Action_1<::KDLEIHJGDAP*>** StaticGet___9__2_0()
		{
			return (::System::Action_1<::KDLEIHJGDAP*>**)UnitySDK::FromName("RPG.Client", "<>c")->GetStaticField(0x57878);
		}

		static ::System::Action_1<::KDLEIHJGDAP*>** StaticGet___9__10_0()
		{
			return (::System::Action_1<::KDLEIHJGDAP*>**)UnitySDK::FromName("RPG.Client", "<>c")->GetStaticField(0x57880);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + RPG_CLIENT_BASEPHASECONTEXT___C_CCTOR_OFFSET))();
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_BASEPHASECONTEXT___C_CTOR_OFFSET))(this);
		}

		::System::Void _init_b__2_0(::KDLEIHJGDAP* a1)
		{
			return ((::System::Void(*)(::PVOID, ::KDLEIHJGDAP*))((::PBYTE)hIl2Cpp + RPG_CLIENT_BASEPHASECONTEXT___C__INIT_B__2_0_OFFSET))(this, a1);
		}

		::System::Void _Dispose_b__10_0(::KDLEIHJGDAP* a1)
		{
			return ((::System::Void(*)(::PVOID, ::KDLEIHJGDAP*))((::PBYTE)hIl2Cpp + RPG_CLIENT_BASEPHASECONTEXT___C__DISPOSE_B__10_0_OFFSET))(this, a1);
		}

	};
}
