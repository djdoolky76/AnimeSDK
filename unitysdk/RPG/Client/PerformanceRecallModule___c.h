#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
namespace System { class Action; }
namespace System { class Object; }

#define RPG_CLIENT_PERFORMANCERECALLMODULE___C_CCTOR_OFFSET UNITYSDK_OFFSET(0xDA9B2B0)
#define RPG_CLIENT_PERFORMANCERECALLMODULE___C_CTOR_OFFSET UNITYSDK_OFFSET(0xDA9B2E0)
#define RPG_CLIENT_PERFORMANCERECALLMODULE___C___REFRESHUNLOCKEDCONDITIONDATA_B__23_0_OFFSET UNITYSDK_OFFSET(0xDA9B2F0)

namespace RPG::Client
{
	inline static constexpr unsigned int PerformanceRecallModule___c_TypeDefinitionIndex = 66445;

	class PerformanceRecallModule___c : public ::System::Object
	{
	public:
		static ::System::Object** StaticGet___9()
		{
			return (::System::Object**)UnitySDK::FromName("RPG.Client", "<>c")->GetStaticField(0x142C0);
		}

		static ::System::Action** StaticGet___9__23_0()
		{
			return (::System::Action**)UnitySDK::FromName("RPG.Client", "<>c")->GetStaticField(0x142C8);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + RPG_CLIENT_PERFORMANCERECALLMODULE___C_CCTOR_OFFSET))();
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_PERFORMANCERECALLMODULE___C_CTOR_OFFSET))(this);
		}

		::System::Void __RefreshUnlockedConditionData_b__23_0()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_PERFORMANCERECALLMODULE___C___REFRESHUNLOCKEDCONDITIONDATA_B__23_0_OFFSET))(this);
		}

	};
}
