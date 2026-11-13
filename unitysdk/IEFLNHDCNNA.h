#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/JJDFGMMMCMI.h"
#include "unitysdk/RPG/Client/GridFightUpdateSummarizer.h"
#include "unitysdk/RPG/GameCore/GridFightNodeType.h"
class AINFNFIDGFF;
class BAAGMMIDHDB;
class CHCHAJIANIM;
class LAIKGBIIFIH;
class NJKFOJJDGGG;
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }
namespace System::Collections::Generic { template <typename T> class IList_1; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define IEFLNHDCNNA_CTOR_OFFSET UNITYSDK_OFFSET(0x177AF3F0)
#define IEFLNHDCNNA_UPDATEAFTER_OFFSET UNITYSDK_OFFSET(0x177AEE30)
#define IEFLNHDCNNA_UPDATEALLSTAGEROUTENODES_OFFSET UNITYSDK_OFFSET(0x177AEDE0)
#define IEFLNHDCNNA_UPDATEBEFORE_OFFSET UNITYSDK_OFFSET(0x177AE4D0)
#define IEFLNHDCNNA_UPDATEMODIFIER_OFFSET UNITYSDK_OFFSET(0x177AEA90)
#define IEFLNHDCNNA_UPDATEPENDINGACTION_OFFSET UNITYSDK_OFFSET(0x177AE850)
#define IEFLNHDCNNA_UPDATESTAGEROUTENODE_OFFSET UNITYSDK_OFFSET(0x177AED90)
#define IEFLNHDCNNA_UPDATESTAGE_OFFSET UNITYSDK_OFFSET(0x177AEAF0)

inline static constexpr unsigned int IEFLNHDCNNA_TypeDefinitionIndex = 67007;

	class IEFLNHDCNNA : public ::RPG::Client::GridFightUpdateSummarizer
	{
	public:
		::System::Collections::Generic::List_1<::System::UInt32>* NNGMFCEECBB; // 0x10
		::System::Collections::Generic::Dictionary_2<::System::UInt32, ::RPG::GameCore::GridFightNodeType>* GOELLLLHDGP; // 0x18
		::System::Boolean PCJNAOMLPLJ; // 0x20
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + IEFLNHDCNNA_CTOR_OFFSET))(this);
		}

		::System::Void UpdateBefore(::JJDFGMMMCMI a1, ::System::Collections::Generic::IList_1<::System::UInt32>* a2)
		{
			return ((::System::Void(*)(::PVOID, ::JJDFGMMMCMI, ::System::Collections::Generic::IList_1<::System::UInt32>*))((::PBYTE)hIl2Cpp + IEFLNHDCNNA_UPDATEBEFORE_OFFSET))(this, a1, a2);
		}

		::System::Void UpdatePendingAction(::CHCHAJIANIM* a1)
		{
			return ((::System::Void(*)(::PVOID, ::CHCHAJIANIM*))((::PBYTE)hIl2Cpp + IEFLNHDCNNA_UPDATEPENDINGACTION_OFFSET))(this, a1);
		}

		::System::Void UpdateModifier(::NJKFOJJDGGG* a1)
		{
			return ((::System::Void(*)(::PVOID, ::NJKFOJJDGGG*))((::PBYTE)hIl2Cpp + IEFLNHDCNNA_UPDATEMODIFIER_OFFSET))(this, a1);
		}

		::System::Void UpdateStage(::AINFNFIDGFF* a1)
		{
			return ((::System::Void(*)(::PVOID, ::AINFNFIDGFF*))((::PBYTE)hIl2Cpp + IEFLNHDCNNA_UPDATESTAGE_OFFSET))(this, a1);
		}

		::System::Void UpdateStageRouteNode(::BAAGMMIDHDB* a1)
		{
			return ((::System::Void(*)(::PVOID, ::BAAGMMIDHDB*))((::PBYTE)hIl2Cpp + IEFLNHDCNNA_UPDATESTAGEROUTENODE_OFFSET))(this, a1);
		}

		::System::Void UpdateAllStageRouteNodes(::LAIKGBIIFIH* a1)
		{
			return ((::System::Void(*)(::PVOID, ::LAIKGBIIFIH*))((::PBYTE)hIl2Cpp + IEFLNHDCNNA_UPDATEALLSTAGEROUTENODES_OFFSET))(this, a1);
		}

		::System::Void UpdateAfter(::JJDFGMMMCMI a1)
		{
			return ((::System::Void(*)(::PVOID, ::JJDFGMMMCMI))((::PBYTE)hIl2Cpp + IEFLNHDCNNA_UPDATEAFTER_OFFSET))(this, a1);
		}

	};
