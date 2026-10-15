#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/LittleGame/BaseMonoGenericView.h"
class EHOFEPBAHNK;
class EMJIDLCDFMI;
class OCPOIDCNJDA;
class OMPCEECHGJK;
namespace Entitas { class IContext; }
namespace Entitas { class IEntity; }
namespace System { class String; }

#define RPG_CLIENT_LITTLEGAME_PINGPONG_PINGPONGVIEW_CTOR_OFFSET UNITYSDK_OFFSET(0xD479AB0)
#define RPG_CLIENT_LITTLEGAME_PINGPONG_PINGPONGVIEW_GETENTITY_OFFSET UNITYSDK_OFFSET(0xD479D70)
#define RPG_CLIENT_LITTLEGAME_PINGPONG_PINGPONGVIEW_INITIALIZE_OFFSET UNITYSDK_OFFSET(0xD479BD0)
#define RPG_CLIENT_LITTLEGAME_PINGPONG_PINGPONGVIEW_RELEASE_OFFSET UNITYSDK_OFFSET(0xD479CD0)

namespace RPG::Client::LittleGame::PingPong
{
	class PingPongView : public ::RPG::Client::LittleGame::BaseMonoGenericView
	{
	public:
		::EHOFEPBAHNK* EEFMDEHLLFI; // 0x20
		::OMPCEECHGJK* PDENFEFCAGN; // 0x28
		::OCPOIDCNJDA* KAKEIDJDNHJ; // 0x30
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_LITTLEGAME_PINGPONG_PINGPONGVIEW_CTOR_OFFSET))(this);
		}

		::System::Void Initialize(::Entitas::IContext* a1, ::EMJIDLCDFMI* a2, ::Entitas::IEntity* a3)
		{
			return ((::System::Void(*)(::PVOID, ::Entitas::IContext*, ::EMJIDLCDFMI*, ::Entitas::IEntity*))((::PBYTE)hIl2Cpp + RPG_CLIENT_LITTLEGAME_PINGPONG_PINGPONGVIEW_INITIALIZE_OFFSET))(this, a1, a2, a3);
		}

		::System::Void Release(::System::String* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + RPG_CLIENT_LITTLEGAME_PINGPONG_PINGPONGVIEW_RELEASE_OFFSET))(this, a1);
		}

		::Entitas::IEntity* GetEntity()
		{
			return ((::Entitas::IEntity*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_LITTLEGAME_PINGPONG_PINGPONGVIEW_GETENTITY_OFFSET))(this);
		}

	};
}
