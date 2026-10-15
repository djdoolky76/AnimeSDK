#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class MCOFKOEJGGL;
namespace System { class Object; }
namespace System { template <typename T1, typename T2> class Func_2; }

#define RPG_CLIENT_TEAMBUILDRECIPE___C_CCTOR_OFFSET UNITYSDK_OFFSET(0xE1CB640)
#define RPG_CLIENT_TEAMBUILDRECIPE___C_CTOR_OFFSET UNITYSDK_OFFSET(0xE1CB680)
#define RPG_CLIENT_TEAMBUILDRECIPE___C__CREATE_B__13_0_OFFSET UNITYSDK_OFFSET(0xE1CB690)

namespace RPG::Client
{
	class TeamBuildRecipe___c : public ::System::Object
	{
	public:
		static ::System::Object** StaticGet___9()
		{
			return (::System::Object**)UnitySDK::FromName("RPG.Client", "<>c")->GetStaticField(0xF900);
		}

		static ::System::Func_2<::MCOFKOEJGGL*, ::System::UInt32>** StaticGet___9__13_0()
		{
			return (::System::Func_2<::MCOFKOEJGGL*, ::System::UInt32>**)UnitySDK::FromName("RPG.Client", "<>c")->GetStaticField(0xF908);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + RPG_CLIENT_TEAMBUILDRECIPE___C_CCTOR_OFFSET))();
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_TEAMBUILDRECIPE___C_CTOR_OFFSET))(this);
		}

		::System::UInt32 _Create_b__13_0(::MCOFKOEJGGL* a1)
		{
			return ((::System::UInt32(*)(::PVOID, ::MCOFKOEJGGL*))((::PBYTE)hIl2Cpp + RPG_CLIENT_TEAMBUILDRECIPE___C__CREATE_B__13_0_OFFSET))(this, a1);
		}

	};
}
