#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/LittleGame/BaseMonoGenericView.h"
#include "unitysdk/RPG/Client/LittleGame/BaseMonoGenericView_AttachPointInfo.h"
class EFODGECFLLC;
class EMJIDLCDFMI;
class HIOEAKHGILF;
class PEEDLCHFAFL;
namespace Entitas { class IContext; }
namespace Entitas { class IEntity; }
namespace System { class String; }

#define RPG_CLIENT_LITTLEGAME_FIVEDIM_FIVEDIMEMPTYVIEW_CTOR_OFFSET UNITYSDK_OFFSET(0xD4298E0)
#define RPG_CLIENT_LITTLEGAME_FIVEDIM_FIVEDIMEMPTYVIEW_GETENTITY_OFFSET UNITYSDK_OFFSET(0xD4293D0)
#define RPG_CLIENT_LITTLEGAME_FIVEDIM_FIVEDIMEMPTYVIEW_INITIALIZE_OFFSET UNITYSDK_OFFSET(0xD429410)
#define RPG_CLIENT_LITTLEGAME_FIVEDIM_FIVEDIMEMPTYVIEW_RELEASE_OFFSET UNITYSDK_OFFSET(0xD4294E0)
#define RPG_CLIENT_LITTLEGAME_FIVEDIM_FIVEDIMEMPTYVIEW__CREATEDYNAMICATTACHPOINT_OFFSET UNITYSDK_OFFSET(0xD4297B0)
#define RPG_CLIENT_LITTLEGAME_FIVEDIM_FIVEDIMEMPTYVIEW__CREATESTATICATTACHPOINT_OFFSET UNITYSDK_OFFSET(0xD429550)

namespace RPG::Client::LittleGame::FiveDim
{
	inline static constexpr unsigned int FiveDimEmptyView_TypeDefinitionIndex = 77173;

	class FiveDimEmptyView : public ::RPG::Client::LittleGame::BaseMonoGenericView
	{
	public:
		::EFODGECFLLC* EEFMDEHLLFI; // 0x20
		::PEEDLCHFAFL* PDENFEFCAGN; // 0x28
		::HIOEAKHGILF* KAKEIDJDNHJ; // 0x30
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_LITTLEGAME_FIVEDIM_FIVEDIMEMPTYVIEW_CTOR_OFFSET))(this);
		}

		::Entitas::IEntity* GetEntity()
		{
			return ((::Entitas::IEntity*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_LITTLEGAME_FIVEDIM_FIVEDIMEMPTYVIEW_GETENTITY_OFFSET))(this);
		}

		::System::Void Initialize(::Entitas::IContext* a1, ::EMJIDLCDFMI* a2, ::Entitas::IEntity* a3)
		{
			return ((::System::Void(*)(::PVOID, ::Entitas::IContext*, ::EMJIDLCDFMI*, ::Entitas::IEntity*))((::PBYTE)hIl2Cpp + RPG_CLIENT_LITTLEGAME_FIVEDIM_FIVEDIMEMPTYVIEW_INITIALIZE_OFFSET))(this, a1, a2, a3);
		}

		::System::Void Release(::System::String* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + RPG_CLIENT_LITTLEGAME_FIVEDIM_FIVEDIMEMPTYVIEW_RELEASE_OFFSET))(this, a1);
		}

		::System::Void _CreateStaticAttachPoint(::RPG::Client::LittleGame::BaseMonoGenericView_AttachPointInfo a1)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::LittleGame::BaseMonoGenericView_AttachPointInfo))((::PBYTE)hIl2Cpp + RPG_CLIENT_LITTLEGAME_FIVEDIM_FIVEDIMEMPTYVIEW__CREATESTATICATTACHPOINT_OFFSET))(this, a1);
		}

		::System::Void _CreateDynamicAttachPoint(::RPG::Client::LittleGame::BaseMonoGenericView_AttachPointInfo a1)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::LittleGame::BaseMonoGenericView_AttachPointInfo))((::PBYTE)hIl2Cpp + RPG_CLIENT_LITTLEGAME_FIVEDIM_FIVEDIMEMPTYVIEW__CREATEDYNAMICATTACHPOINT_OFFSET))(this, a1);
		}

	};
}
