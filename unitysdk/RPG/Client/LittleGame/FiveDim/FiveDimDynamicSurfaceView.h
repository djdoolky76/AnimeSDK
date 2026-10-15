#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/LittleGame/FiveDim/FiveDimView.h"
#include "unitysdk/UnityEngine/Vector3.h"
class EMJIDLCDFMI;
namespace Entitas { class IContext; }
namespace Entitas { class IEntity; }
namespace System { class String; }
namespace UnityEngine { class BoxCollider; }

#define RPG_CLIENT_LITTLEGAME_FIVEDIM_FIVEDIMDYNAMICSURFACEVIEW_CTOR_OFFSET UNITYSDK_OFFSET(0xD431FE0)
#define RPG_CLIENT_LITTLEGAME_FIVEDIM_FIVEDIMDYNAMICSURFACEVIEW_HIJDHCFHELC_OFFSET UNITYSDK_OFFSET(0xD431CE0)
#define RPG_CLIENT_LITTLEGAME_FIVEDIM_FIVEDIMDYNAMICSURFACEVIEW_INITIALIZE_OFFSET UNITYSDK_OFFSET(0xD431C60)
#define RPG_CLIENT_LITTLEGAME_FIVEDIM_FIVEDIMDYNAMICSURFACEVIEW_RELEASE_OFFSET UNITYSDK_OFFSET(0xD431F00)

namespace RPG::Client::LittleGame::FiveDim
{
	class FiveDimDynamicSurfaceView : public ::RPG::Client::LittleGame::FiveDim::FiveDimView
	{
	public:
		::UnityEngine::Vector3 EIKLCFAGEKP; // 0x208
		::UnityEngine::Vector3 EJLBICDOEPN; // 0x214
		::System::Boolean PENFGOBENKH; // 0x220
		::System::Byte _padding0[0x7];
		::UnityEngine::BoxCollider* SurfaceCollider; // 0x228
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_LITTLEGAME_FIVEDIM_FIVEDIMDYNAMICSURFACEVIEW_CTOR_OFFSET))(this);
		}

		::System::Void Initialize(::Entitas::IContext* a1, ::EMJIDLCDFMI* a2, ::Entitas::IEntity* a3)
		{
			return ((::System::Void(*)(::PVOID, ::Entitas::IContext*, ::EMJIDLCDFMI*, ::Entitas::IEntity*))((::PBYTE)hIl2Cpp + RPG_CLIENT_LITTLEGAME_FIVEDIM_FIVEDIMDYNAMICSURFACEVIEW_INITIALIZE_OFFSET))(this, a1, a2, a3);
		}

		::System::Void Release(::System::String* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + RPG_CLIENT_LITTLEGAME_FIVEDIM_FIVEDIMDYNAMICSURFACEVIEW_RELEASE_OFFSET))(this, a1);
		}

		::System::Void HIJDHCFHELC()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_LITTLEGAME_FIVEDIM_FIVEDIMDYNAMICSURFACEVIEW_HIJDHCFHELC_OFFSET))(this);
		}

	};
}
