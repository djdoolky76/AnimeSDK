#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class JBIDJHKBOFD;
namespace RPG::Client { class ItemDisplayData; }
namespace RPG::GameCore { class IdleLiveSubNodeRow; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define JBIDJHKBOFD_BPLPBPMEODA_OFFSET UNITYSDK_OFFSET(0x19A73050)
#define JBIDJHKBOFD_CLCHLEJIIBG_OFFSET UNITYSDK_OFFSET(0x19A73260)
#define JBIDJHKBOFD_CTOR_OFFSET UNITYSDK_OFFSET(0x19A731E0)
#define JBIDJHKBOFD_FFILOEDGLPG_OFFSET UNITYSDK_OFFSET(0x19A732A0)
#define JBIDJHKBOFD_GET_INDEX_OFFSET UNITYSDK_OFFSET(0x19A73000)
#define JBIDJHKBOFD_GET_RECOMMENDCRYSTALNUM_OFFSET UNITYSDK_OFFSET(0x19A73030)
#define JBIDJHKBOFD_GET_RECOMMENDDUNGEONFLOOR_OFFSET UNITYSDK_OFFSET(0x19A73040)
#define JBIDJHKBOFD_GET_STAGEBATTLEPOWER_OFFSET UNITYSDK_OFFSET(0x19A73020)
#define JBIDJHKBOFD_GET_STAGEID_OFFSET UNITYSDK_OFFSET(0x19A72FF0)
#define JBIDJHKBOFD_SET_INDEX_OFFSET UNITYSDK_OFFSET(0x19A73010)

inline static constexpr unsigned int JBIDJHKBOFD_TypeDefinitionIndex = 77484;

	class JBIDJHKBOFD : public ::System::Object
	{
	public:
		::System::Collections::Generic::List_1<::RPG::Client::ItemDisplayData*>* OCDPGEFHLEL; // 0x10
		::System::UInt32 GDCIAPGBAHN; // 0x18
		::System::Byte _padding0[0x4];
		::System::UInt64 _RecommendCrystalNum_k__BackingField; // 0x20
		::System::UInt64 _StageBattlePower_k__BackingField; // 0x28
		::System::UInt16 _RecommendDungeonFloor_k__BackingField; // 0x30
		::System::Byte _padding1[0x2];
		::System::UInt32 _Index_k__BackingField; // 0x34
		::System::UInt32 LCPFLGOINEN; // 0x38
		::System::UInt32 _StageId_k__BackingField; // 0x3C
		::System::Void _ctor(::RPG::GameCore::IdleLiveSubNodeRow* a1)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::IdleLiveSubNodeRow*))((::PBYTE)hIl2Cpp + JBIDJHKBOFD_CTOR_OFFSET))(this, a1);
		}

		::System::UInt32 get_StageId()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + JBIDJHKBOFD_GET_STAGEID_OFFSET))(this);
		}

		::System::UInt32 get_Index()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + JBIDJHKBOFD_GET_INDEX_OFFSET))(this);
		}

		::System::Void set_Index(::System::UInt32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + JBIDJHKBOFD_SET_INDEX_OFFSET))(this, a1);
		}

		::System::UInt64 get_StageBattlePower()
		{
			return ((::System::UInt64(*)(::PVOID))((::PBYTE)hIl2Cpp + JBIDJHKBOFD_GET_STAGEBATTLEPOWER_OFFSET))(this);
		}

		::System::UInt64 get_RecommendCrystalNum()
		{
			return ((::System::UInt64(*)(::PVOID))((::PBYTE)hIl2Cpp + JBIDJHKBOFD_GET_RECOMMENDCRYSTALNUM_OFFSET))(this);
		}

		::System::UInt16 get_RecommendDungeonFloor()
		{
			return ((::System::UInt16(*)(::PVOID))((::PBYTE)hIl2Cpp + JBIDJHKBOFD_GET_RECOMMENDDUNGEONFLOOR_OFFSET))(this);
		}

		static ::JBIDJHKBOFD* BPLPBPMEODA(::System::UInt32 a1)
		{
			return ((::JBIDJHKBOFD*(*)(::System::UInt32))((::PBYTE)hIl2Cpp + JBIDJHKBOFD_BPLPBPMEODA_OFFSET))(a1);
		}

		::System::UInt32 CLCHLEJIIBG()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + JBIDJHKBOFD_CLCHLEJIIBG_OFFSET))(this);
		}

		::System::Collections::Generic::List_1<::RPG::Client::ItemDisplayData*>* FFILOEDGLPG()
		{
			return ((::System::Collections::Generic::List_1<::RPG::Client::ItemDisplayData*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + JBIDJHKBOFD_FFILOEDGLPG_OFFSET))(this);
		}

	};
