#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
namespace System { class Action; }
namespace System { class Object; }

#define ENVIROMENTSYSTEMV2SPACE_ENVIRONMENTSYSTEMV2___C_CCTOR_OFFSET UNITYSDK_OFFSET(0x136CDA20)
#define ENVIROMENTSYSTEMV2SPACE_ENVIRONMENTSYSTEMV2___C_CTOR_OFFSET UNITYSDK_OFFSET(0x136CDA60)
#define ENVIROMENTSYSTEMV2SPACE_ENVIRONMENTSYSTEMV2___C__SETACTIVEPROFILEAFTERASYNCRESLOADING_B__56_1_OFFSET UNITYSDK_OFFSET(0x136CDA70)

namespace EnviromentSystemV2Space
{
	inline static constexpr unsigned int EnvironmentSystemV2___c_TypeDefinitionIndex = 50547;

	class EnvironmentSystemV2___c : public ::System::Object
	{
	public:
		static ::System::Action** StaticGet___9__56_1()
		{
			return (::System::Action**)UnitySDK::FromName("EnviromentSystemV2Space", "<>c")->GetStaticField(0x386E0);
		}

		static ::System::Object** StaticGet___9()
		{
			return (::System::Object**)UnitySDK::FromName("EnviromentSystemV2Space", "<>c")->GetStaticField(0x386E8);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + ENVIROMENTSYSTEMV2SPACE_ENVIRONMENTSYSTEMV2___C_CCTOR_OFFSET))();
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + ENVIROMENTSYSTEMV2SPACE_ENVIRONMENTSYSTEMV2___C_CTOR_OFFSET))(this);
		}

		::System::Void _SetActiveProfileAfterAsyncResLoading_b__56_1()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + ENVIROMENTSYSTEMV2SPACE_ENVIRONMENTSYSTEMV2___C__SETACTIVEPROFILEAFTERASYNCRESLOADING_B__56_1_OFFSET))(this);
		}

	};
}
