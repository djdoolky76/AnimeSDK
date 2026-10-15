#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
namespace RPG::GameCore { class GameEntity; }
namespace System { class Action; }
namespace System { class Object; }

#define GPLMEFBGGGM___C_CCTOR_OFFSET UNITYSDK_OFFSET(0x15B5FF70)
#define GPLMEFBGGGM___C_CTOR_OFFSET UNITYSDK_OFFSET(0x15B5FFA0)
#define GPLMEFBGGGM___C___CREATESTORYPLAYER_B__4_1_OFFSET UNITYSDK_OFFSET(0x15B5FFB0)

	class GPLMEFBGGGM___c : public ::System::Object
	{
	public:
		static ::System::Action** StaticGet___9__4_1()
		{
			return (::System::Action**)UnitySDK::FromName("", "<>c")->GetStaticField(0x6D810);
		}

		static ::System::Object** StaticGet___9()
		{
			return (::System::Object**)UnitySDK::FromName("", "<>c")->GetStaticField(0x6D818);
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
