#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
namespace System { class Object; }
namespace System { class String; }
namespace System { template <typename T1, typename T2> class Func_2; }

#define RPG_CLIENT_EXPEDITIONBATTLEACTIVITYHELPER___C_CCTOR_OFFSET UNITYSDK_OFFSET(0xD80E4A0)
#define RPG_CLIENT_EXPEDITIONBATTLEACTIVITYHELPER___C_CTOR_OFFSET UNITYSDK_OFFSET(0xD80E4E0)
#define RPG_CLIENT_EXPEDITIONBATTLEACTIVITYHELPER___C__GETRANDOMMONSTERICONPATHS_B__4_0_OFFSET UNITYSDK_OFFSET(0xD80E4F0)

namespace RPG::Client
{
	inline static constexpr unsigned int ExpeditionBattleActivityHelper___c_TypeDefinitionIndex = 63015;

	class ExpeditionBattleActivityHelper___c : public ::System::Object
	{
	public:
		static ::System::Func_2<::System::UInt32, ::System::String*>** StaticGet___9__4_0()
		{
			return (::System::Func_2<::System::UInt32, ::System::String*>**)UnitySDK::FromName("RPG.Client", "<>c")->GetStaticField(0x522B0);
		}

		static ::System::Object** StaticGet___9()
		{
			return (::System::Object**)UnitySDK::FromName("RPG.Client", "<>c")->GetStaticField(0x522B8);
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
