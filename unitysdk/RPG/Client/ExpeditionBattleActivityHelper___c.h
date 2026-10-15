#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
namespace System { class Object; }
namespace System { class String; }
namespace System { template <typename T1, typename T2> class Func_2; }

#define RPG_CLIENT_EXPEDITIONBATTLEACTIVITYHELPER___C_CCTOR_OFFSET UNITYSDK_OFFSET(0xCE45BC0)
#define RPG_CLIENT_EXPEDITIONBATTLEACTIVITYHELPER___C_CTOR_OFFSET UNITYSDK_OFFSET(0xCE45C00)
#define RPG_CLIENT_EXPEDITIONBATTLEACTIVITYHELPER___C__GETRANDOMMONSTERICONPATHS_B__4_0_OFFSET UNITYSDK_OFFSET(0xCE45C10)

namespace RPG::Client
{
	inline static constexpr unsigned int ExpeditionBattleActivityHelper___c_TypeDefinitionIndex = 61617;

	class ExpeditionBattleActivityHelper___c : public ::System::Object
	{
	public:
		static ::System::Func_2<::System::UInt32, ::System::String*>** StaticGet___9__4_0()
		{
			return (::System::Func_2<::System::UInt32, ::System::String*>**)UnitySDK::FromName("RPG.Client", "<>c")->GetStaticField(0x56090);
		}

		static ::System::Object** StaticGet___9()
		{
			return (::System::Object**)UnitySDK::FromName("RPG.Client", "<>c")->GetStaticField(0x56098);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + RPG_CLIENT_EXPEDITIONBATTLEACTIVITYHELPER___C_CCTOR_OFFSET))();
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_EXPEDITIONBATTLEACTIVITYHELPER___C_CTOR_OFFSET))(this);
		}

		::System::String* _GetRandomMonsterIconPaths_b__4_0(::System::UInt32 a1)
		{
			return ((::System::String*(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_EXPEDITIONBATTLEACTIVITYHELPER___C__GETRANDOMMONSTERICONPATHS_B__4_0_OFFSET))(this, a1);
		}

	};
}
