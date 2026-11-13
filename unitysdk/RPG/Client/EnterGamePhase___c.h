#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
namespace System { class Action; }
namespace System { class Object; }
namespace System { template <typename T> class Action_1; }

#define RPG_CLIENT_ENTERGAMEPHASE___C_CCTOR_OFFSET UNITYSDK_OFFSET(0x1A6D56E0)
#define RPG_CLIENT_ENTERGAMEPHASE___C_CTOR_OFFSET UNITYSDK_OFFSET(0x1A6D5710)
#define RPG_CLIENT_ENTERGAMEPHASE___C___STARTLOGIN_B__27_0_OFFSET UNITYSDK_OFFSET(0x1A6D57F0)
#define RPG_CLIENT_ENTERGAMEPHASE___C___SUBPACKAGECHECKED_B__15_1_OFFSET UNITYSDK_OFFSET(0x1A6D5720)

namespace RPG::Client
{
	inline static constexpr unsigned int EnterGamePhase___c_TypeDefinitionIndex = 62531;

	class EnterGamePhase___c : public ::System::Object
	{
	public:
		static ::System::Object** StaticGet___9()
		{
			return (::System::Object**)UnitySDK::FromName("RPG.Client", "<>c")->GetStaticField(0x52F80);
		}

		static ::System::Action_1<::System::Boolean>** StaticGet___9__15_1()
		{
			return (::System::Action_1<::System::Boolean>**)UnitySDK::FromName("RPG.Client", "<>c")->GetStaticField(0x52F88);
		}

		static ::System::Action** StaticGet___9__27_0()
		{
			return (::System::Action**)UnitySDK::FromName("RPG.Client", "<>c")->GetStaticField(0x52F90);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + RPG_CLIENT_ENTERGAMEPHASE___C_CCTOR_OFFSET))();
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ENTERGAMEPHASE___C_CTOR_OFFSET))(this);
		}

		::System::Void __SubPackageChecked_b__15_1(::System::Boolean a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + RPG_CLIENT_ENTERGAMEPHASE___C___SUBPACKAGECHECKED_B__15_1_OFFSET))(this, a1);
		}

		::System::Void __StartLogin_b__27_0()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ENTERGAMEPHASE___C___STARTLOGIN_B__27_0_OFFSET))(this);
		}

	};
}
