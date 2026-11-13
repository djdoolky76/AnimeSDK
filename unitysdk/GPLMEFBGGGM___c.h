#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
namespace RPG::GameCore { class GameEntity; }
namespace System { class Object; }
namespace System { template <typename T> class Action_1; }

#define GPLMEFBGGGM___C_CCTOR_OFFSET UNITYSDK_OFFSET(0x17DC0C60)
#define GPLMEFBGGGM___C_CTOR_OFFSET UNITYSDK_OFFSET(0x17DC0C90)
#define GPLMEFBGGGM___C___CREATESTORYPLAYER_B__4_1_OFFSET UNITYSDK_OFFSET(0x17DC0CA0)

inline static constexpr unsigned int GPLMEFBGGGM___c_TypeDefinitionIndex = 62138;

	class GPLMEFBGGGM___c : public ::System::Object
	{
	public:
		static ::System::Object** StaticGet___9()
		{
			return (::System::Object**)UnitySDK::FromName("", "<>c")->GetStaticField(0x72960);
		}

		static ::System::Action_1<::RPG::GameCore::GameEntity*>** StaticGet___9__4_1()
		{
			return (::System::Action_1<::RPG::GameCore::GameEntity*>**)UnitySDK::FromName("", "<>c")->GetStaticField(0x72968);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + GPLMEFBGGGM___C_CCTOR_OFFSET))();
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + GPLMEFBGGGM___C_CTOR_OFFSET))(this);
		}

		::System::Void __CreateStoryPlayer_b__4_1(::RPG::GameCore::GameEntity* a1)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::GameEntity*))((::PBYTE)hIl2Cpp + GPLMEFBGGGM___C___CREATESTORYPLAYER_B__4_1_OFFSET))(this, a1);
		}

	};
