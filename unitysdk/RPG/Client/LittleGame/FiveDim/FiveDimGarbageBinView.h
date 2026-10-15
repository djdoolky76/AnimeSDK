#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/LittleGame/FiveDim/FiveDimPropView.h"
#include "unitysdk/UnityEngine/Vector3.h"
#include "unitysdk/UnityEngine/Bounds.h"
class EMJIDLCDFMI;
namespace Entitas { class IContext; }
namespace Entitas { class IEntity; }
namespace System { class String; }
namespace UnityEngine { class BoxCollider; }

#define RPG_CLIENT_LITTLEGAME_FIVEDIM_FIVEDIMGARBAGEBINVIEW_CAEIIDHCAMA_OFFSET UNITYSDK_OFFSET(0xD4345E0)
#define RPG_CLIENT_LITTLEGAME_FIVEDIM_FIVEDIMGARBAGEBINVIEW_CKADGNFLODD_OFFSET UNITYSDK_OFFSET(0xD434F90)
#define RPG_CLIENT_LITTLEGAME_FIVEDIM_FIVEDIMGARBAGEBINVIEW_CTOR_OFFSET UNITYSDK_OFFSET(0xD435080)
#define RPG_CLIENT_LITTLEGAME_FIVEDIM_FIVEDIMGARBAGEBINVIEW_GETVIEWBOUND_OFFSET UNITYSDK_OFFSET(0xD434E50)
#define RPG_CLIENT_LITTLEGAME_FIVEDIM_FIVEDIMGARBAGEBINVIEW_INITIALIZE_OFFSET UNITYSDK_OFFSET(0xD434200)
#define RPG_CLIENT_LITTLEGAME_FIVEDIM_FIVEDIMGARBAGEBINVIEW_RELEASE_OFFSET UNITYSDK_OFFSET(0xD4347C0)

namespace RPG::Client::LittleGame::FiveDim
{
	inline static constexpr unsigned int FiveDimGarbageBinView_TypeDefinitionIndex = 77176;

	class FiveDimGarbageBinView : public ::RPG::Client::LittleGame::FiveDim::FiveDimPropView
	{
	public:
		::UnityEngine::BoxCollider* GarbageBinMainCollider; // 0x208
		::UnityEngine::Vector3 EIKLCFAGEKP; // 0x210
		::UnityEngine::Vector3 EJLBICDOEPN; // 0x21C
		::System::Boolean OHAAJDGJPMJ; // 0x228
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_LITTLEGAME_FIVEDIM_FIVEDIMGARBAGEBINVIEW_CTOR_OFFSET))(this);
		}

		::System::Void Initialize(::Entitas::IContext* a1, ::EMJIDLCDFMI* a2, ::Entitas::IEntity* a3)
		{
			return ((::System::Void(*)(::PVOID, ::Entitas::IContext*, ::EMJIDLCDFMI*, ::Entitas::IEntity*))((::PBYTE)hIl2Cpp + RPG_CLIENT_LITTLEGAME_FIVEDIM_FIVEDIMGARBAGEBINVIEW_INITIALIZE_OFFSET))(this, a1, a2, a3);
		}

		::System::Void Release(::System::String* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + RPG_CLIENT_LITTLEGAME_FIVEDIM_FIVEDIMGARBAGEBINVIEW_RELEASE_OFFSET))(this, a1);
		}

		::System::Boolean GetViewBound(::UnityEngine::Bounds a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::UnityEngine::Bounds))((::PBYTE)hIl2Cpp + RPG_CLIENT_LITTLEGAME_FIVEDIM_FIVEDIMGARBAGEBINVIEW_GETVIEWBOUND_OFFSET))(this, a1);
		}

		::System::Void CKADGNFLODD()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_LITTLEGAME_FIVEDIM_FIVEDIMGARBAGEBINVIEW_CKADGNFLODD_OFFSET))(this);
		}

		::System::Void CAEIIDHCAMA(::System::Boolean a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + RPG_CLIENT_LITTLEGAME_FIVEDIM_FIVEDIMGARBAGEBINVIEW_CAEIIDHCAMA_OFFSET))(this, a1);
		}

	};
}
