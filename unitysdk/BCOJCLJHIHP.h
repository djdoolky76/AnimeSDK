#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/StringHash.h"
#include "unitysdk/BCOJCLJHIHP_KBLBKFGCEOO.h"
class KOCDIMHKAMH;
class PJJEJBLIDHH;
namespace Google::Protobuf::Collections { template <typename T> class RepeatedField_1; }
namespace RPG { template <typename T> class PoolList_1; }
namespace RPG::GameCore { class BattleGridFightAvatarData; }
namespace RPG::GameCore { class GridFightManager; }
namespace RPG::GameCore { class TaskContext; }
namespace System { class Object; }
namespace System { class String; }
namespace System { template <typename T> class Comparison_1; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define BCOJCLJHIHP_CTOR_OFFSET UNITYSDK_OFFSET(0x19D85B40)
#define BCOJCLJHIHP_IDODFDKIFEB_OFFSET UNITYSDK_OFFSET(0x19D86DA0)
#define BCOJCLJHIHP_ILCIPIBLPBM_OFFSET UNITYSDK_OFFSET(0x19D86980)
#define BCOJCLJHIHP_KCHJNMPPFIP_OFFSET UNITYSDK_OFFSET(0x19D86CF0)
#define BCOJCLJHIHP_MBHCNECCAKI_OFFSET UNITYSDK_OFFSET(0x19D86C60)
#define BCOJCLJHIHP_ODANKLKFABG_OFFSET UNITYSDK_OFFSET(0x19D86720)
#define BCOJCLJHIHP_ONTASKBEGIN_OFFSET UNITYSDK_OFFSET(0x19D86530)

inline static constexpr unsigned int BCOJCLJHIHP_TypeDefinitionIndex = 56629;

	class BCOJCLJHIHP
	{
	public:
		::Il2CppArray<::RPG::GameCore::StringHash>* BJILIDMMDLD; // 0x28
		::System::Collections::Generic::List_1<::System::Object*>* MLDKIJFCBGF; // 0x30
		::Il2CppArray<::System::String*>* LAMMOGGABKD; // 0x38
		::System::Comparison_1<::System::Object*>* OPOPFDFJIAE; // 0x40
		::RPG::GameCore::StringHash ACHIMJEIALE; // 0x48
		::System::UInt32 PIOGECOLFBA; // 0x4C
		// static const ::System::Object BPDEBGHKKJL; // 0x0
		::System::Void _ctor(::RPG::GameCore::TaskContext* a1, ::PJJEJBLIDHH* a2)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::TaskContext*, ::PJJEJBLIDHH*))((::PBYTE)hIl2Cpp + BCOJCLJHIHP_CTOR_OFFSET))(this, a1, a2);
		}

		::System::Void OnTaskBegin()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + BCOJCLJHIHP_ONTASKBEGIN_OFFSET))(this);
		}

		::System::Void ILCIPIBLPBM(::RPG::GameCore::GridFightManager* a1, ::Google::Protobuf::Collections::RepeatedField_1<::KOCDIMHKAMH*>* a2)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::GridFightManager*, ::Google::Protobuf::Collections::RepeatedField_1<::KOCDIMHKAMH*>*))((::PBYTE)hIl2Cpp + BCOJCLJHIHP_ILCIPIBLPBM_OFFSET))(this, a1, a2);
		}

		::System::Boolean MBHCNECCAKI(::System::UInt32 a1, ::RPG::PoolList_1<::RPG::GameCore::BattleGridFightAvatarData*>* a2)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::UInt32, ::RPG::PoolList_1<::RPG::GameCore::BattleGridFightAvatarData*>*))((::PBYTE)hIl2Cpp + BCOJCLJHIHP_MBHCNECCAKI_OFFSET))(this, a1, a2);
		}

		::System::Boolean KCHJNMPPFIP(::RPG::PoolList_1<::RPG::GameCore::BattleGridFightAvatarData*>* a1, ::System::UInt32 a2)
		{
			return ((::System::Boolean(*)(::PVOID, ::RPG::PoolList_1<::RPG::GameCore::BattleGridFightAvatarData*>*, ::System::UInt32))((::PBYTE)hIl2Cpp + BCOJCLJHIHP_KCHJNMPPFIP_OFFSET))(this, a1, a2);
		}

		::System::Int32 IDODFDKIFEB(::BCOJCLJHIHP_KBLBKFGCEOO a1, ::BCOJCLJHIHP_KBLBKFGCEOO a2)
		{
			return ((::System::Int32(*)(::PVOID, ::BCOJCLJHIHP_KBLBKFGCEOO, ::BCOJCLJHIHP_KBLBKFGCEOO))((::PBYTE)hIl2Cpp + BCOJCLJHIHP_IDODFDKIFEB_OFFSET))(this, a1, a2);
		}

		::System::Void ODANKLKFABG()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + BCOJCLJHIHP_ODANKLKFABG_OFFSET))(this);
		}

	};
