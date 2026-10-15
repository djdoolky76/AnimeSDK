#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Entitas/VisualDebugging/Unity/EntityBehaviour.h"
class HDIAALCMDNG;
class IJHPDDHMEHA;
class NGFHCJIAOLH;
namespace Entitas { class IComponent; }
namespace Entitas { class IContext; }
namespace Entitas { class IEntity; }
namespace Entitas::VisualDebugging::Unity { class EntityBehaviour; }
namespace System::Collections::Generic { template <typename T> class Stack_1; }

#define RPG_CLIENT_LITTLEGAME_CHENLINGFES_CHENLINGFESENTITYBEHAVIOUR_CTOR_OFFSET UNITYSDK_OFFSET(0xD40E040)
#define RPG_CLIENT_LITTLEGAME_CHENLINGFES_CHENLINGFESENTITYBEHAVIOUR_HJAGKGDHELE_OFFSET UNITYSDK_OFFSET(0xD40DD40)
#define RPG_CLIENT_LITTLEGAME_CHENLINGFES_CHENLINGFESENTITYBEHAVIOUR_INIT_OFFSET UNITYSDK_OFFSET(0xD40D020)
#define RPG_CLIENT_LITTLEGAME_CHENLINGFES_CHENLINGFESENTITYBEHAVIOUR_NPONPKJEJAO_OFFSET UNITYSDK_OFFSET(0xD40DEC0)
#define RPG_CLIENT_LITTLEGAME_CHENLINGFES_CHENLINGFESENTITYBEHAVIOUR_OHCFJMEEDMO_OFFSET UNITYSDK_OFFSET(0xD40D4D0)
#define RPG_CLIENT_LITTLEGAME_CHENLINGFES_CHENLINGFESENTITYBEHAVIOUR_ONDESTROY_OFFSET UNITYSDK_OFFSET(0xD40DB80)
#define RPG_CLIENT_LITTLEGAME_CHENLINGFES_CHENLINGFESENTITYBEHAVIOUR_ONENTITYRELEASED_OFFSET UNITYSDK_OFFSET(0xD40D9D0)
#define RPG_CLIENT_LITTLEGAME_CHENLINGFES_CHENLINGFESENTITYBEHAVIOUR_UPDATE_OFFSET UNITYSDK_OFFSET(0xD40D220)

namespace RPG::Client::LittleGame::ChenLingFes
{
	inline static constexpr unsigned int ChenLingFesEntityBehaviour_TypeDefinitionIndex = 77717;

	class ChenLingFesEntityBehaviour : public ::Entitas::VisualDebugging::Unity::EntityBehaviour
	{
	public:
		::NGFHCJIAOLH* KAKEIDJDNHJ; // 0x38
		::HDIAALCMDNG* EEFMDEHLLFI; // 0x40
		::IJHPDDHMEHA* DODNHKCLIGO; // 0x48
		static ::System::Boolean* StaticGet_s_ShowDebugBillBoard()
		{
			return (::System::Boolean*)UnitySDK::FromName("RPG.Client.LittleGame.ChenLingFes", "ChenLingFesEntityBehaviour")->GetStaticField(0x78E0);
		}

		// static const ::System::Object DFOHPAMBNFF; // 0x0
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_LITTLEGAME_CHENLINGFES_CHENLINGFESENTITYBEHAVIOUR_CTOR_OFFSET))(this);
		}

		::System::Void Init(::Entitas::IContext* a1, ::Entitas::IEntity* a2, ::System::Collections::Generic::Stack_1<::Entitas::VisualDebugging::Unity::EntityBehaviour*>* a3)
		{
			return ((::System::Void(*)(::PVOID, ::Entitas::IContext*, ::Entitas::IEntity*, ::System::Collections::Generic::Stack_1<::Entitas::VisualDebugging::Unity::EntityBehaviour*>*))((::PBYTE)hIl2Cpp + RPG_CLIENT_LITTLEGAME_CHENLINGFES_CHENLINGFESENTITYBEHAVIOUR_INIT_OFFSET))(this, a1, a2, a3);
		}

		::System::Void Update()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_LITTLEGAME_CHENLINGFES_CHENLINGFESENTITYBEHAVIOUR_UPDATE_OFFSET))(this);
		}

		::System::Void OHCFJMEEDMO()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_LITTLEGAME_CHENLINGFES_CHENLINGFESENTITYBEHAVIOUR_OHCFJMEEDMO_OFFSET))(this);
		}

		::System::Void onEntityReleased(::Entitas::IEntity* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Entitas::IEntity*))((::PBYTE)hIl2Cpp + RPG_CLIENT_LITTLEGAME_CHENLINGFES_CHENLINGFESENTITYBEHAVIOUR_ONENTITYRELEASED_OFFSET))(this, a1);
		}

		::System::Void OnDestroy()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_LITTLEGAME_CHENLINGFES_CHENLINGFESENTITYBEHAVIOUR_ONDESTROY_OFFSET))(this);
		}

		::System::Void HJAGKGDHELE(::Entitas::IEntity* a1, ::System::Int32 a2, ::Entitas::IComponent* a3)
		{
			return ((::System::Void(*)(::PVOID, ::Entitas::IEntity*, ::System::Int32, ::Entitas::IComponent*))((::PBYTE)hIl2Cpp + RPG_CLIENT_LITTLEGAME_CHENLINGFES_CHENLINGFESENTITYBEHAVIOUR_HJAGKGDHELE_OFFSET))(this, a1, a2, a3);
		}

		::System::Void NPONPKJEJAO(::Entitas::IEntity* a1, ::System::Int32 a2, ::Entitas::IComponent* a3)
		{
			return ((::System::Void(*)(::PVOID, ::Entitas::IEntity*, ::System::Int32, ::Entitas::IComponent*))((::PBYTE)hIl2Cpp + RPG_CLIENT_LITTLEGAME_CHENLINGFES_CHENLINGFESENTITYBEHAVIOUR_NPONPKJEJAO_OFFSET))(this, a1, a2, a3);
		}

	};
}
