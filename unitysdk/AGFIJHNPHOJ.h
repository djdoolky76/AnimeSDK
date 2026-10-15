#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/EntityRelationMemberType.h"
#include "unitysdk/RPG/GameCore/EntityRelationType.h"
#include "unitysdk/System/Object.h"
class AHHPBAJCGNL;
namespace RPG { template <typename T> class PoolList_1; }
namespace RPG::GameCore { class GameEntity; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define AGFIJHNPHOJ_AGAPPJBHCFK_OFFSET UNITYSDK_OFFSET(0xCF2A0C0)
#define AGFIJHNPHOJ_BLGHPDKACIH_OFFSET UNITYSDK_OFFSET(0xCF2ACA0)
#define AGFIJHNPHOJ_CTOR_OFFSET UNITYSDK_OFFSET(0xCF2AEE0)
#define AGFIJHNPHOJ_GPOIABJLEPF_OFFSET UNITYSDK_OFFSET(0xCF2A960)
#define AGFIJHNPHOJ_HBLHDCNEOEA_OFFSET UNITYSDK_OFFSET(0xCF2A880)
#define AGFIJHNPHOJ_HFDJPGCPJLB_OFFSET UNITYSDK_OFFSET(0xCF2A670)
#define AGFIJHNPHOJ_HGNHEJEBIJH_OFFSET UNITYSDK_OFFSET(0xCF2AB60)
#define AGFIJHNPHOJ_KACGKGILGDN_OFFSET UNITYSDK_OFFSET(0xCF2A560)
#define AGFIJHNPHOJ_LHDIMNAHKAA_OFFSET UNITYSDK_OFFSET(0xCF2A360)
#define AGFIJHNPHOJ_MDKOJHDADPB_OFFSET UNITYSDK_OFFSET(0xCF2AD50)
#define AGFIJHNPHOJ_NBBMINIOAIP_OFFSET UNITYSDK_OFFSET(0xCF2A720)

inline static constexpr unsigned int AGFIJHNPHOJ_TypeDefinitionIndex = 55026;

	class AGFIJHNPHOJ : public ::System::Object
	{
	public:
		::System::Collections::Generic::List_1<::AHHPBAJCGNL*>* HPGMBOKOGAA; // 0x10
		::System::Collections::Generic::Dictionary_2<::RPG::GameCore::GameEntity*, ::RPG::PoolList_1<::AHHPBAJCGNL*>*>* IFIOACKDCIF; // 0x18
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + AGFIJHNPHOJ_CTOR_OFFSET))(this);
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
