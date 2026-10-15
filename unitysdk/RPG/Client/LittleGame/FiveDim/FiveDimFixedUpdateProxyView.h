#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/LittleGame/FiveDim/FiveDimView.h"
class EMJIDLCDFMI;
namespace Entitas { class IContext; }
namespace Entitas { class IEntity; }
namespace RPG::Client { class FiveDimManager; }
namespace System { class String; }
namespace System::Collections { class IEnumerator; }
namespace UnityEngine { class Coroutine; }

#define RPG_CLIENT_LITTLEGAME_FIVEDIM_FIVEDIMFIXEDUPDATEPROXYVIEW_CTOR_OFFSET UNITYSDK_OFFSET(0xD42C950)
#define RPG_CLIENT_LITTLEGAME_FIVEDIM_FIVEDIMFIXEDUPDATEPROXYVIEW_FIXEDUPDATE_OFFSET UNITYSDK_OFFSET(0xD42C7F0)
#define RPG_CLIENT_LITTLEGAME_FIVEDIM_FIVEDIMFIXEDUPDATEPROXYVIEW_INITIALIZE_OFFSET UNITYSDK_OFFSET(0xD42C5D0)
#define RPG_CLIENT_LITTLEGAME_FIVEDIM_FIVEDIMFIXEDUPDATEPROXYVIEW_LPLHMPHBIFA_OFFSET UNITYSDK_OFFSET(0xD42C720)
#define RPG_CLIENT_LITTLEGAME_FIVEDIM_FIVEDIMFIXEDUPDATEPROXYVIEW_OABJIFMOLIH_OFFSET UNITYSDK_OFFSET(0xD42C8D0)
#define RPG_CLIENT_LITTLEGAME_FIVEDIM_FIVEDIMFIXEDUPDATEPROXYVIEW_RELEASE_OFFSET UNITYSDK_OFFSET(0xD42C780)

namespace RPG::Client::LittleGame::FiveDim
{
	inline static constexpr unsigned int FiveDimFixedUpdateProxyView_TypeDefinitionIndex = 77174;

	class FiveDimFixedUpdateProxyView : public ::RPG::Client::LittleGame::FiveDim::FiveDimView
	{
	public:
		::UnityEngine::Coroutine* FNADMCIINLH; // 0x208
		::RPG::Client::FiveDimManager* EEOHCCOCEDI; // 0x210
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_LITTLEGAME_FIVEDIM_FIVEDIMFIXEDUPDATEPROXYVIEW_CTOR_OFFSET))(this);
		}

		::System::Void Initialize(::Entitas::IContext* a1, ::EMJIDLCDFMI* a2, ::Entitas::IEntity* a3)
		{
			return ((::System::Void(*)(::PVOID, ::Entitas::IContext*, ::EMJIDLCDFMI*, ::Entitas::IEntity*))((::PBYTE)hIl2Cpp + RPG_CLIENT_LITTLEGAME_FIVEDIM_FIVEDIMFIXEDUPDATEPROXYVIEW_INITIALIZE_OFFSET))(this, a1, a2, a3);
		}

		::System::Void Release(::System::String* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + RPG_CLIENT_LITTLEGAME_FIVEDIM_FIVEDIMFIXEDUPDATEPROXYVIEW_RELEASE_OFFSET))(this, a1);
		}

		::System::Void FixedUpdate()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_LITTLEGAME_FIVEDIM_FIVEDIMFIXEDUPDATEPROXYVIEW_FIXEDUPDATE_OFFSET))(this);
		}

		::System::Void OABJIFMOLIH()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_LITTLEGAME_FIVEDIM_FIVEDIMFIXEDUPDATEPROXYVIEW_OABJIFMOLIH_OFFSET))(this);
		}

		::System::Collections::IEnumerator* LPLHMPHBIFA()
		{
			return ((::System::Collections::IEnumerator*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_LITTLEGAME_FIVEDIM_FIVEDIMFIXEDUPDATEPROXYVIEW_LPLHMPHBIFA_OFFSET))(this);
		}

	};
}
