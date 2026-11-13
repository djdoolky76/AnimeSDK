#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/EntityRelationMemberType.h"
#include "unitysdk/RPG/GameCore/EntityRelationType.h"
#include "unitysdk/System/Object.h"
class AHHPBAJCGNL;
namespace RPG { template <typename T> class PoolList_1; }
namespace RPG::GameCore { class GameEntity; }
namespace RPG::GameCore { class TurnBasedGameMode; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define AGFIJHNPHOJ_AGAPPJBHCFK_OFFSET UNITYSDK_OFFSET(0x18DD37C0)
#define AGFIJHNPHOJ_BLGHPDKACIH_OFFSET UNITYSDK_OFFSET(0x18DD4620)
#define AGFIJHNPHOJ_CTOR_OFFSET UNITYSDK_OFFSET(0x18DD3710)
#define AGFIJHNPHOJ_GPOIABJLEPF_OFFSET UNITYSDK_OFFSET(0x18DD42E0)
#define AGFIJHNPHOJ_HBLHDCNEOEA_OFFSET UNITYSDK_OFFSET(0x18DD4200)
#define AGFIJHNPHOJ_HFDJPGCPJLB_OFFSET UNITYSDK_OFFSET(0x18DD3FF0)
#define AGFIJHNPHOJ_HGNHEJEBIJH_OFFSET UNITYSDK_OFFSET(0x18DD44E0)
#define AGFIJHNPHOJ_KACGKGILGDN_OFFSET UNITYSDK_OFFSET(0x18DD3EE0)
#define AGFIJHNPHOJ_LHDIMNAHKAA_OFFSET UNITYSDK_OFFSET(0x18DD3CD0)
#define AGFIJHNPHOJ_MDKOJHDADPB_OFFSET UNITYSDK_OFFSET(0x18DD46D0)
#define AGFIJHNPHOJ_MMCJFENMOCL_OFFSET UNITYSDK_OFFSET(0x18DD3A70)
#define AGFIJHNPHOJ_NBBMINIOAIP_OFFSET UNITYSDK_OFFSET(0x18DD40A0)

inline static constexpr unsigned int AGFIJHNPHOJ_TypeDefinitionIndex = 56202;

	class AGFIJHNPHOJ : public ::System::Object
	{
	public:
		::System::Collections::Generic::List_1<::AHHPBAJCGNL*>* HPGMBOKOGAA; // 0x10
		::System::Collections::Generic::Dictionary_2<::RPG::GameCore::GameEntity*, ::RPG::PoolList_1<::AHHPBAJCGNL*>*>* IFIOACKDCIF; // 0x18
		::RPG::GameCore::TurnBasedGameMode* BHJDJDPLCLP; // 0x20
		::System::Void _ctor(::RPG::GameCore::TurnBasedGameMode* a1)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::TurnBasedGameMode*))((::PBYTE)hIl2Cpp + AGFIJHNPHOJ_CTOR_OFFSET))(this, a1);
		}

		::System::Boolean AGAPPJBHCFK(::RPG::GameCore::EntityRelationMemberType a1, ::RPG::GameCore::GameEntity* a2, ::AHHPBAJCGNL* a3)
		{
			return ((::System::Boolean(*)(::PVOID, ::RPG::GameCore::EntityRelationMemberType, ::RPG::GameCore::GameEntity*, ::AHHPBAJCGNL*))((::PBYTE)hIl2Cpp + AGFIJHNPHOJ_AGAPPJBHCFK_OFFSET))(this, a1, a2, a3);
		}

		::System::Boolean LHDIMNAHKAA(::RPG::GameCore::GameEntity* a1, ::AHHPBAJCGNL* a2)
		{
			return ((::System::Boolean(*)(::PVOID, ::RPG::GameCore::GameEntity*, ::AHHPBAJCGNL*))((::PBYTE)hIl2Cpp + AGFIJHNPHOJ_LHDIMNAHKAA_OFFSET))(this, a1, a2);
		}

		::System::Void KACGKGILGDN(::RPG::GameCore::GameEntity* a1)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::GameEntity*))((::PBYTE)hIl2Cpp + AGFIJHNPHOJ_KACGKGILGDN_OFFSET))(this, a1);
		}

		::System::Void HFDJPGCPJLB(::AHHPBAJCGNL* a1)
		{
			return ((::System::Void(*)(::PVOID, ::AHHPBAJCGNL*))((::PBYTE)hIl2Cpp + AGFIJHNPHOJ_HFDJPGCPJLB_OFFSET))(this, a1);
		}

		::System::Void MMCJFENMOCL(::AHHPBAJCGNL* a1, ::RPG::GameCore::GameEntity* a2)
		{
			return ((::System::Void(*)(::PVOID, ::AHHPBAJCGNL*, ::RPG::GameCore::GameEntity*))((::PBYTE)hIl2Cpp + AGFIJHNPHOJ_MMCJFENMOCL_OFFSET))(this, a1, a2);
		}

		::AHHPBAJCGNL* NBBMINIOAIP(::RPG::GameCore::EntityRelationType a1)
		{
			return ((::AHHPBAJCGNL*(*)(::PVOID, ::RPG::GameCore::EntityRelationType))((::PBYTE)hIl2Cpp + AGFIJHNPHOJ_NBBMINIOAIP_OFFSET))(this, a1);
		}

		::System::Void HBLHDCNEOEA(::AHHPBAJCGNL* a1)
		{
			return ((::System::Void(*)(::PVOID, ::AHHPBAJCGNL*))((::PBYTE)hIl2Cpp + AGFIJHNPHOJ_HBLHDCNEOEA_OFFSET))(this, a1);
		}

		::AHHPBAJCGNL* GPOIABJLEPF(::RPG::GameCore::EntityRelationType a1, ::System::Boolean a2)
		{
			return ((::AHHPBAJCGNL*(*)(::PVOID, ::RPG::GameCore::EntityRelationType, ::System::Boolean))((::PBYTE)hIl2Cpp + AGFIJHNPHOJ_GPOIABJLEPF_OFFSET))(this, a1, a2);
		}

		::AHHPBAJCGNL* HGNHEJEBIJH(::RPG::GameCore::GameEntity* a1, ::RPG::GameCore::EntityRelationType a2)
		{
			return ((::AHHPBAJCGNL*(*)(::PVOID, ::RPG::GameCore::GameEntity*, ::RPG::GameCore::EntityRelationType))((::PBYTE)hIl2Cpp + AGFIJHNPHOJ_HGNHEJEBIJH_OFFSET))(this, a1, a2);
		}

		::System::Collections::Generic::List_1<::AHHPBAJCGNL*>* BLGHPDKACIH(::RPG::GameCore::GameEntity* a1)
		{
			return ((::System::Collections::Generic::List_1<::AHHPBAJCGNL*>*(*)(::PVOID, ::RPG::GameCore::GameEntity*))((::PBYTE)hIl2Cpp + AGFIJHNPHOJ_BLGHPDKACIH_OFFSET))(this, a1);
		}

		::System::Void MDKOJHDADPB(::RPG::GameCore::EntityRelationType a1, ::System::Collections::Generic::List_1<::AHHPBAJCGNL*>* a2)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::EntityRelationType, ::System::Collections::Generic::List_1<::AHHPBAJCGNL*>*))((::PBYTE)hIl2Cpp + AGFIJHNPHOJ_MDKOJHDADPB_OFFSET))(this, a1, a2);
		}

	};
