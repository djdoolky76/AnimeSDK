#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
namespace RPG::GameCore { class GameEntity; }
namespace System { class Object; }
namespace System { template <typename T1, typename T2> class Func_2; }
namespace System { template <typename T> class Action_1; }

#define NNMPPHHHEIK___C_CCTOR_OFFSET UNITYSDK_OFFSET(0xBCD5310)
#define NNMPPHHHEIK___C_CTOR_OFFSET UNITYSDK_OFFSET(0xBCD5340)
#define NNMPPHHHEIK___C__PLAYENTITYHITANIM_B__64_0_OFFSET UNITYSDK_OFFSET(0xBCD5350)
#define NNMPPHHHEIK___C__PLAYENTITYHITANIM_B__64_1_OFFSET UNITYSDK_OFFSET(0xBCD53B0)
#define NNMPPHHHEIK___C__PLAYENTITYHITANIM_B__64_2_OFFSET UNITYSDK_OFFSET(0xBCD5410)

inline static constexpr unsigned int NNMPPHHHEIK___c_TypeDefinitionIndex = 59038;

	class NNMPPHHHEIK___c : public ::System::Object
	{
	public:
		static ::System::Func_2<::RPG::GameCore::GameEntity*, ::System::Boolean>** StaticGet___9__64_0()
		{
			return (::System::Func_2<::RPG::GameCore::GameEntity*, ::System::Boolean>**)UnitySDK::FromName("", "<>c")->GetStaticField(0x567E0);
		}

		static ::System::Object** StaticGet___9()
		{
			return (::System::Object**)UnitySDK::FromName("", "<>c")->GetStaticField(0x567E8);
		}

		static ::System::Action_1<::RPG::GameCore::GameEntity*>** StaticGet___9__64_2()
		{
			return (::System::Action_1<::RPG::GameCore::GameEntity*>**)UnitySDK::FromName("", "<>c")->GetStaticField(0x567F0);
		}

		static ::System::Func_2<::RPG::GameCore::GameEntity*, ::System::Boolean>** StaticGet___9__64_1()
		{
			return (::System::Func_2<::RPG::GameCore::GameEntity*, ::System::Boolean>**)UnitySDK::FromName("", "<>c")->GetStaticField(0x567F8);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + NNMPPHHHEIK___C_CCTOR_OFFSET))();
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + NNMPPHHHEIK___C_CTOR_OFFSET))(this);
		}

		::System::Boolean _PlayEntityHitAnim_b__64_0(::RPG::GameCore::GameEntity* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::RPG::GameCore::GameEntity*))((::PBYTE)hIl2Cpp + NNMPPHHHEIK___C__PLAYENTITYHITANIM_B__64_0_OFFSET))(this, a1);
		}

		::System::Boolean _PlayEntityHitAnim_b__64_1(::RPG::GameCore::GameEntity* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::RPG::GameCore::GameEntity*))((::PBYTE)hIl2Cpp + NNMPPHHHEIK___C__PLAYENTITYHITANIM_B__64_1_OFFSET))(this, a1);
		}

		::System::Void _PlayEntityHitAnim_b__64_2(::RPG::GameCore::GameEntity* a1)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::GameEntity*))((::PBYTE)hIl2Cpp + NNMPPHHHEIK___C__PLAYENTITYHITANIM_B__64_2_OFFSET))(this, a1);
		}

	};
