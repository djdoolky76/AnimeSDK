#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/LittleGame/BaseMonoGenericView.h"
#include "unitysdk/UnityEngine/Quaternion.h"
#include "unitysdk/UnityEngine/Vector3.h"
class EFODGECFLLC;
class EMJIDLCDFMI;
class HIOEAKHGILF;
class PEEDLCHFAFL;
namespace Entitas { class IContext; }
namespace Entitas { class IEntity; }
namespace System { class String; }

#define RPG_CLIENT_LITTLEGAME_FIVEDIM_FIVEDIMUNSCALEDEMPTYVIEW_CREATEATTACHPOINT_OFFSET UNITYSDK_OFFSET(0xD444640)
#define RPG_CLIENT_LITTLEGAME_FIVEDIM_FIVEDIMUNSCALEDEMPTYVIEW_CTOR_OFFSET UNITYSDK_OFFSET(0xD444870)
#define RPG_CLIENT_LITTLEGAME_FIVEDIM_FIVEDIMUNSCALEDEMPTYVIEW_GETENTITY_OFFSET UNITYSDK_OFFSET(0xD4444C0)
#define RPG_CLIENT_LITTLEGAME_FIVEDIM_FIVEDIMUNSCALEDEMPTYVIEW_INITIALIZE_OFFSET UNITYSDK_OFFSET(0xD444500)
#define RPG_CLIENT_LITTLEGAME_FIVEDIM_FIVEDIMUNSCALEDEMPTYVIEW_RELEASE_OFFSET UNITYSDK_OFFSET(0xD4445D0)

namespace RPG::Client::LittleGame::FiveDim
{
	inline static constexpr unsigned int FiveDimUnscaledEmptyView_TypeDefinitionIndex = 77189;

	class FiveDimUnscaledEmptyView : public ::RPG::Client::LittleGame::BaseMonoGenericView
	{
	public:
		::EFODGECFLLC* EEFMDEHLLFI; // 0x20
		::PEEDLCHFAFL* PDENFEFCAGN; // 0x28
		::HIOEAKHGILF* KAKEIDJDNHJ; // 0x30
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_LITTLEGAME_FIVEDIM_FIVEDIMUNSCALEDEMPTYVIEW_CTOR_OFFSET))(this);
		}

		::Entitas::IEntity* GetEntity()
		{
			return ((::Entitas::IEntity*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_LITTLEGAME_FIVEDIM_FIVEDIMUNSCALEDEMPTYVIEW_GETENTITY_OFFSET))(this);
		}

		::System::Void Initialize(::Entitas::IContext* a1, ::EMJIDLCDFMI* a2, ::Entitas::IEntity* a3)
		{
			return ((::System::Void(*)(::PVOID, ::Entitas::IContext*, ::EMJIDLCDFMI*, ::Entitas::IEntity*))((::PBYTE)hIl2Cpp + RPG_CLIENT_LITTLEGAME_FIVEDIM_FIVEDIMUNSCALEDEMPTYVIEW_INITIALIZE_OFFSET))(this, a1, a2, a3);
		}

		::System::Void Release(::System::String* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + RPG_CLIENT_LITTLEGAME_FIVEDIM_FIVEDIMUNSCALEDEMPTYVIEW_RELEASE_OFFSET))(this, a1);
		}

		::System::Void CreateAttachPoint(::UnityEngine::Vector3 a1, ::UnityEngine::Quaternion a2, ::UnityEngine::Vector3 a3, ::System::String* a4)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Vector3, ::UnityEngine::Quaternion, ::UnityEngine::Vector3, ::System::String*))((::PBYTE)hIl2Cpp + RPG_CLIENT_LITTLEGAME_FIVEDIM_FIVEDIMUNSCALEDEMPTYVIEW_CREATEATTACHPOINT_OFFSET))(this, a1, a2, a3, a4);
		}

	};
}
