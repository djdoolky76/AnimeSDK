#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/ExpeditionBattleBranchComparer.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/RPG/GameCore/FixPoint.h"
class EDKEDOENAKO;
class HGGNPGNCLAN;
namespace RPG::GameCore { class BaseExpeditionBattleAction; }
namespace RPG::GameCore { class BaseExpeditionBattleNode; }
namespace RPG::GameCore { class ExpeditionBattleLoopNode; }
namespace RPG::GameCore { class ExpeditionBattleNodeContainer; }
namespace RPG::GameCore { class ExpeditionBattleRandomBranchNode; }
namespace RPG::GameCore { class ExpeditionBattleSwitchBranchNode; }
namespace System { class Random; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define OCMEFIJDGIP_CCTOR_OFFSET UNITYSDK_OFFSET(0xBD705C0)
#define OCMEFIJDGIP_CTOR_OFFSET UNITYSDK_OFFSET(0xBD6F560)
#define OCMEFIJDGIP_DGPAEMAGGCK_OFFSET UNITYSDK_OFFSET(0xBD6F670)
#define OCMEFIJDGIP_DNHPKJHPJPL_OFFSET UNITYSDK_OFFSET(0xBD6F940)
#define OCMEFIJDGIP_JCCCLFKEMKE_OFFSET UNITYSDK_OFFSET(0xBD6FA60)
#define OCMEFIJDGIP_KFGJEKJHIMB_OFFSET UNITYSDK_OFFSET(0xBD6F570)
#define OCMEFIJDGIP_LCONKBMHIKE_OFFSET UNITYSDK_OFFSET(0xBD70080)
#define OCMEFIJDGIP_NMLJLCFINPE_OFFSET UNITYSDK_OFFSET(0xBD70130)
#define OCMEFIJDGIP_PJDBMNLMJPE_OFFSET UNITYSDK_OFFSET(0xBD704B0)
#define OCMEFIJDGIP_POCJJCKFKCD_OFFSET UNITYSDK_OFFSET(0xBD6FFE0)

inline static constexpr unsigned int OCMEFIJDGIP_TypeDefinitionIndex = 63884;

	class OCMEFIJDGIP : public ::System::Object
	{
	public:
		::HGGNPGNCLAN* ALOAMPOJALJ; // 0x10
		static ::System::Random** StaticGet_OLEEIPHBJKB()
		{
			return (::System::Random**)UnitySDK::FromName("", "OCMEFIJDGIP")->GetStaticField(0x5EF70);
		}

		::System::Void _ctor(::HGGNPGNCLAN* a1)
		{
			return ((::System::Void(*)(::PVOID, ::HGGNPGNCLAN*))((::PBYTE)hIl2Cpp + OCMEFIJDGIP_CTOR_OFFSET))(this, a1);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + OCMEFIJDGIP_CCTOR_OFFSET))();
		}

		::System::Collections::Generic::List_1<::RPG::GameCore::BaseExpeditionBattleAction*>* KFGJEKJHIMB(::RPG::GameCore::ExpeditionBattleNodeContainer* a1, ::EDKEDOENAKO* a2)
		{
			return ((::System::Collections::Generic::List_1<::RPG::GameCore::BaseExpeditionBattleAction*>*(*)(::PVOID, ::RPG::GameCore::ExpeditionBattleNodeContainer*, ::EDKEDOENAKO*))((::PBYTE)hIl2Cpp + OCMEFIJDGIP_KFGJEKJHIMB_OFFSET))(this, a1, a2);
		}

		::System::Void DGPAEMAGGCK(::RPG::GameCore::BaseExpeditionBattleNode* a1, ::EDKEDOENAKO* a2, ::System::Collections::Generic::List_1<::RPG::GameCore::BaseExpeditionBattleAction*>* a3)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::BaseExpeditionBattleNode*, ::EDKEDOENAKO*, ::System::Collections::Generic::List_1<::RPG::GameCore::BaseExpeditionBattleAction*>*))((::PBYTE)hIl2Cpp + OCMEFIJDGIP_DGPAEMAGGCK_OFFSET))(this, a1, a2, a3);
		}

		::System::Void LCONKBMHIKE(::Il2CppArray<::RPG::GameCore::BaseExpeditionBattleNode*>* a1, ::EDKEDOENAKO* a2, ::System::Collections::Generic::List_1<::RPG::GameCore::BaseExpeditionBattleAction*>* a3)
		{
			return ((::System::Void(*)(::PVOID, ::Il2CppArray<::RPG::GameCore::BaseExpeditionBattleNode*>*, ::EDKEDOENAKO*, ::System::Collections::Generic::List_1<::RPG::GameCore::BaseExpeditionBattleAction*>*))((::PBYTE)hIl2Cpp + OCMEFIJDGIP_LCONKBMHIKE_OFFSET))(this, a1, a2, a3);
		}

		::System::Void DNHPKJHPJPL(::RPG::GameCore::ExpeditionBattleSwitchBranchNode* a1, ::EDKEDOENAKO* a2, ::System::Collections::Generic::List_1<::RPG::GameCore::BaseExpeditionBattleAction*>* a3)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::ExpeditionBattleSwitchBranchNode*, ::EDKEDOENAKO*, ::System::Collections::Generic::List_1<::RPG::GameCore::BaseExpeditionBattleAction*>*))((::PBYTE)hIl2Cpp + OCMEFIJDGIP_DNHPKJHPJPL_OFFSET))(this, a1, a2, a3);
		}

		::System::Boolean NMLJLCFINPE(::RPG::GameCore::FixPoint a1, ::RPG::GameCore::FixPoint a2, ::RPG::GameCore::ExpeditionBattleBranchComparer a3)
		{
			return ((::System::Boolean(*)(::PVOID, ::RPG::GameCore::FixPoint, ::RPG::GameCore::FixPoint, ::RPG::GameCore::ExpeditionBattleBranchComparer))((::PBYTE)hIl2Cpp + OCMEFIJDGIP_NMLJLCFINPE_OFFSET))(this, a1, a2, a3);
		}

		::System::Void JCCCLFKEMKE(::RPG::GameCore::ExpeditionBattleRandomBranchNode* a1, ::EDKEDOENAKO* a2, ::System::Collections::Generic::List_1<::RPG::GameCore::BaseExpeditionBattleAction*>* a3)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::ExpeditionBattleRandomBranchNode*, ::EDKEDOENAKO*, ::System::Collections::Generic::List_1<::RPG::GameCore::BaseExpeditionBattleAction*>*))((::PBYTE)hIl2Cpp + OCMEFIJDGIP_JCCCLFKEMKE_OFFSET))(this, a1, a2, a3);
		}

		static ::System::Double PJDBMNLMJPE(::RPG::GameCore::FixPoint a1)
		{
			return ((::System::Double(*)(::RPG::GameCore::FixPoint))((::PBYTE)hIl2Cpp + OCMEFIJDGIP_PJDBMNLMJPE_OFFSET))(a1);
		}

		::System::Void POCJJCKFKCD(::RPG::GameCore::ExpeditionBattleLoopNode* a1, ::EDKEDOENAKO* a2, ::System::Collections::Generic::List_1<::RPG::GameCore::BaseExpeditionBattleAction*>* a3)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::ExpeditionBattleLoopNode*, ::EDKEDOENAKO*, ::System::Collections::Generic::List_1<::RPG::GameCore::BaseExpeditionBattleAction*>*))((::PBYTE)hIl2Cpp + OCMEFIJDGIP_POCJJCKFKCD_OFFSET))(this, a1, a2, a3);
		}

	};
