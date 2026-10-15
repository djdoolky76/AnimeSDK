#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Entitas/VisualDebugging/Unity/EntityBehaviour.h"
class EFODGECFLLC;
class HIOEAKHGILF;
class IJHPDDHMEHA;
namespace Entitas { class IComponent; }
namespace Entitas { class IContext; }
namespace Entitas { class IEntity; }
namespace Entitas::VisualDebugging::Unity { class EntityBehaviour; }
namespace RPG::Client::LittleGame::FiveDim { class FiveDimEntityBehaviour; }
namespace System { class String; }
namespace System { template <typename T1, typename T2> class Func_2; }
namespace System::Collections::Generic { template <typename T> class Stack_1; }

#define RPG_CLIENT_LITTLEGAME_FIVEDIM_FIVEDIMENTITYBEHAVIOUR_CLIDFBKPBDI_OFFSET UNITYSDK_OFFSET(0xD42A330)
#define RPG_CLIENT_LITTLEGAME_FIVEDIM_FIVEDIMENTITYBEHAVIOUR_CTOR_OFFSET UNITYSDK_OFFSET(0xD42B240)
#define RPG_CLIENT_LITTLEGAME_FIVEDIM_FIVEDIMENTITYBEHAVIOUR_DAANFKBGCCA_OFFSET UNITYSDK_OFFSET(0xD42A900)
#define RPG_CLIENT_LITTLEGAME_FIVEDIM_FIVEDIMENTITYBEHAVIOUR_HJAGKGDHELE_OFFSET UNITYSDK_OFFSET(0xD42AE00)
#define RPG_CLIENT_LITTLEGAME_FIVEDIM_FIVEDIMENTITYBEHAVIOUR_INIT_OFFSET UNITYSDK_OFFSET(0xD429900)
#define RPG_CLIENT_LITTLEGAME_FIVEDIM_FIVEDIMENTITYBEHAVIOUR_KFLJFLFFLAP_OFFSET UNITYSDK_OFFSET(0xD42A750)
#define RPG_CLIENT_LITTLEGAME_FIVEDIM_FIVEDIMENTITYBEHAVIOUR_NPONPKJEJAO_OFFSET UNITYSDK_OFFSET(0xD42B000)
#define RPG_CLIENT_LITTLEGAME_FIVEDIM_FIVEDIMENTITYBEHAVIOUR_OHCFJMEEDMO_OFFSET UNITYSDK_OFFSET(0xD429DC0)
#define RPG_CLIENT_LITTLEGAME_FIVEDIM_FIVEDIMENTITYBEHAVIOUR_ONDESTROY_OFFSET UNITYSDK_OFFSET(0xD42AC40)
#define RPG_CLIENT_LITTLEGAME_FIVEDIM_FIVEDIMENTITYBEHAVIOUR_ONENTITYRELEASED_OFFSET UNITYSDK_OFFSET(0xD42AA90)
#define RPG_CLIENT_LITTLEGAME_FIVEDIM_FIVEDIMENTITYBEHAVIOUR_SETQUERYENTITYBEHAVIOUR_OFFSET UNITYSDK_OFFSET(0xD429B00)
#define RPG_CLIENT_LITTLEGAME_FIVEDIM_FIVEDIMENTITYBEHAVIOUR_UPDATE_OFFSET UNITYSDK_OFFSET(0xD429B50)

namespace RPG::Client::LittleGame::FiveDim
{
	inline static constexpr unsigned int FiveDimEntityBehaviour_TypeDefinitionIndex = 76869;

	class FiveDimEntityBehaviour : public ::Entitas::VisualDebugging::Unity::EntityBehaviour
	{
	public:
		::HIOEAKHGILF* KAKEIDJDNHJ; // 0x38
		::EFODGECFLLC* EEFMDEHLLFI; // 0x40
		::IJHPDDHMEHA* DODNHKCLIGO; // 0x48
		::System::Func_2<::Entitas::IEntity*, ::RPG::Client::LittleGame::FiveDim::FiveDimEntityBehaviour*>* BIDDMADPNJB; // 0x50
		static ::System::Boolean* StaticGet_s_ShowDebugFollowCameraBounds()
		{
			return (::System::Boolean*)UnitySDK::FromName("RPG.Client.LittleGame.FiveDim", "FiveDimEntityBehaviour")->GetStaticField(0x7F20);
		}

		static ::System::Boolean* StaticGet_s_ShowBriefBillboard()
		{
			return (::System::Boolean*)UnitySDK::FromName("RPG.Client.LittleGame.FiveDim", "FiveDimEntityBehaviour")->GetStaticField(0x7F21);
		}

		static ::System::Boolean* StaticGet_s_ShowDebugSurface()
		{
			return (::System::Boolean*)UnitySDK::FromName("RPG.Client.LittleGame.FiveDim", "FiveDimEntityBehaviour")->GetStaticField(0x7F22);
		}

		static ::System::Boolean* StaticGet_s_ShowDebugBillBoard()
		{
			return (::System::Boolean*)UnitySDK::FromName("RPG.Client.LittleGame.FiveDim", "FiveDimEntityBehaviour")->GetStaticField(0x7F23);
		}

		// static const ::System::Object DFOHPAMBNFF; // 0x0
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_LITTLEGAME_FIVEDIM_FIVEDIMENTITYBEHAVIOUR_CTOR_OFFSET))(this);
		}

		::System::Void Init(::Entitas::IContext* a1, ::Entitas::IEntity* a2, ::System::Collections::Generic::Stack_1<::Entitas::VisualDebugging::Unity::EntityBehaviour*>* a3)
		{
			return ((::System::Void(*)(::PVOID, ::Entitas::IContext*, ::Entitas::IEntity*, ::System::Collections::Generic::Stack_1<::Entitas::VisualDebugging::Unity::EntityBehaviour*>*))((::PBYTE)hIl2Cpp + RPG_CLIENT_LITTLEGAME_FIVEDIM_FIVEDIMENTITYBEHAVIOUR_INIT_OFFSET))(this, a1, a2, a3);
		}

		::System::Void SetQueryEntityBehaviour(::System::Func_2<::Entitas::IEntity*, ::RPG::Client::LittleGame::FiveDim::FiveDimEntityBehaviour*>* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Func_2<::Entitas::IEntity*, ::RPG::Client::LittleGame::FiveDim::FiveDimEntityBehaviour*>*))((::PBYTE)hIl2Cpp + RPG_CLIENT_LITTLEGAME_FIVEDIM_FIVEDIMENTITYBEHAVIOUR_SETQUERYENTITYBEHAVIOUR_OFFSET))(this, a1);
		}

		::System::Void Update()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_LITTLEGAME_FIVEDIM_FIVEDIMENTITYBEHAVIOUR_UPDATE_OFFSET))(this);
		}

		::System::Void OHCFJMEEDMO()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_LITTLEGAME_FIVEDIM_FIVEDIMENTITYBEHAVIOUR_OHCFJMEEDMO_OFFSET))(this);
		}

		::System::Void CLIDFBKPBDI()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_LITTLEGAME_FIVEDIM_FIVEDIMENTITYBEHAVIOUR_CLIDFBKPBDI_OFFSET))(this);
		}

		::System::Void KFLJFLFFLAP()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_LITTLEGAME_FIVEDIM_FIVEDIMENTITYBEHAVIOUR_KFLJFLFFLAP_OFFSET))(this);
		}

		::System::Boolean DAANFKBGCCA(::System::UInt32 a1, ::System::String* a2)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::UInt32, ::System::String*))((::PBYTE)hIl2Cpp + RPG_CLIENT_LITTLEGAME_FIVEDIM_FIVEDIMENTITYBEHAVIOUR_DAANFKBGCCA_OFFSET))(this, a1, a2);
		}

		::System::Void onEntityReleased(::Entitas::IEntity* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Entitas::IEntity*))((::PBYTE)hIl2Cpp + RPG_CLIENT_LITTLEGAME_FIVEDIM_FIVEDIMENTITYBEHAVIOUR_ONENTITYRELEASED_OFFSET))(this, a1);
		}

		::System::Void OnDestroy()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_LITTLEGAME_FIVEDIM_FIVEDIMENTITYBEHAVIOUR_ONDESTROY_OFFSET))(this);
		}

		::System::Void HJAGKGDHELE(::Entitas::IEntity* a1, ::System::Int32 a2, ::Entitas::IComponent* a3)
		{
			return ((::System::Void(*)(::PVOID, ::Entitas::IEntity*, ::System::Int32, ::Entitas::IComponent*))((::PBYTE)hIl2Cpp + RPG_CLIENT_LITTLEGAME_FIVEDIM_FIVEDIMENTITYBEHAVIOUR_HJAGKGDHELE_OFFSET))(this, a1, a2, a3);
		}

		::System::Void NPONPKJEJAO(::Entitas::IEntity* a1, ::System::Int32 a2, ::Entitas::IComponent* a3)
		{
			return ((::System::Void(*)(::PVOID, ::Entitas::IEntity*, ::System::Int32, ::Entitas::IComponent*))((::PBYTE)hIl2Cpp + RPG_CLIENT_LITTLEGAME_FIVEDIM_FIVEDIMENTITYBEHAVIOUR_NPONPKJEJAO_OFFSET))(this, a1, a2, a3);
		}

	};
}
