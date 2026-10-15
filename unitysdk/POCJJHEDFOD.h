#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/Challenge/Tierce/ChallengeTierceAttackDamageType.h"
#include "unitysdk/System/Object.h"
class POCJJHEDFOD;
namespace System { class Object; }
namespace System { class String; }
namespace System { class Type; }
namespace System::Collections::Generic { template <typename T> class IReadOnlyList_1; }
namespace System::Text { class StringBuilder; }

#define POCJJHEDFOD_CTOR_1_OFFSET UNITYSDK_OFFSET(0xC3520E0)
#define POCJJHEDFOD_CTOR_OFFSET UNITYSDK_OFFSET(0xC3509A0)
#define POCJJHEDFOD_DECONSTRUCT_OFFSET UNITYSDK_OFFSET(0xC352120)
#define POCJJHEDFOD_EQUALS_1_OFFSET UNITYSDK_OFFSET(0xC351AD0)
#define POCJJHEDFOD_EQUALS_OFFSET UNITYSDK_OFFSET(0xC3519E0)
#define POCJJHEDFOD_GETHASHCODE_OFFSET UNITYSDK_OFFSET(0xC351280)
#define POCJJHEDFOD_GET_EQUALITYCONTRACT_OFFSET UNITYSDK_OFFSET(0xC3509D0)
#define POCJJHEDFOD_GET_EVENTIDS_OFFSET UNITYSDK_OFFSET(0xC350AA0)
#define POCJJHEDFOD_GET_EXTRAMONSTERIDS_OFFSET UNITYSDK_OFFSET(0xC350A60)
#define POCJJHEDFOD_GET_MAPENTRANCEID_OFFSET UNITYSDK_OFFSET(0xC350A00)
#define POCJJHEDFOD_GET_MAZECONFIGS_OFFSET UNITYSDK_OFFSET(0xC350A40)
#define POCJJHEDFOD_GET_MAZEGROUPID_OFFSET UNITYSDK_OFFSET(0xC350A20)
#define POCJJHEDFOD_GET_NPCMONSTERIDS_OFFSET UNITYSDK_OFFSET(0xC350A80)
#define POCJJHEDFOD_GET_RECOMMENDEDDAMAGETYPES_OFFSET UNITYSDK_OFFSET(0xC350AC0)
#define POCJJHEDFOD_OP_EQUALITY_OFFSET UNITYSDK_OFFSET(0xC3511E0)
#define POCJJHEDFOD_OP_INEQUALITY_OFFSET UNITYSDK_OFFSET(0xC351140)
#define POCJJHEDFOD_PRINTMEMBERS_OFFSET UNITYSDK_OFFSET(0xC350D20)
#define POCJJHEDFOD_SET_EVENTIDS_OFFSET UNITYSDK_OFFSET(0xC350AB0)
#define POCJJHEDFOD_SET_EXTRAMONSTERIDS_OFFSET UNITYSDK_OFFSET(0xC350A70)
#define POCJJHEDFOD_SET_MAPENTRANCEID_OFFSET UNITYSDK_OFFSET(0xC350A10)
#define POCJJHEDFOD_SET_MAZECONFIGS_OFFSET UNITYSDK_OFFSET(0xC350A50)
#define POCJJHEDFOD_SET_MAZEGROUPID_OFFSET UNITYSDK_OFFSET(0xC350A30)
#define POCJJHEDFOD_SET_NPCMONSTERIDS_OFFSET UNITYSDK_OFFSET(0xC350A90)
#define POCJJHEDFOD_SET_RECOMMENDEDDAMAGETYPES_OFFSET UNITYSDK_OFFSET(0xC350AD0)
#define POCJJHEDFOD_TOSTRING_OFFSET UNITYSDK_OFFSET(0xC350AE0)
#define POCJJHEDFOD__CLONE___OFFSET UNITYSDK_OFFSET(0xC352090)

inline static constexpr unsigned int POCJJHEDFOD_TypeDefinitionIndex = 81443;

	class POCJJHEDFOD : public ::System::Object
	{
	public:
		::System::Collections::Generic::IReadOnlyList_1<::RPG::Client::Challenge::Tierce::ChallengeTierceAttackDamageType>* _RecommendedDamageTypes_k__BackingField; // 0x10
		::System::Collections::Generic::IReadOnlyList_1<::System::UInt32>* _ExtraMonsterIDs_k__BackingField; // 0x18
		::System::Collections::Generic::IReadOnlyList_1<::System::UInt32>* _NpcMonsterIDs_k__BackingField; // 0x20
		::System::Collections::Generic::IReadOnlyList_1<::System::UInt32>* _EventIDs_k__BackingField; // 0x28
		::System::Collections::Generic::IReadOnlyList_1<::System::UInt32>* _MazeConfigs_k__BackingField; // 0x30
		::System::UInt32 _MazeGroupID_k__BackingField; // 0x38
		::System::UInt32 _MapEntranceID_k__BackingField; // 0x3C
		::System::Void _ctor(::System::UInt32 a1, ::System::UInt32 a2, ::System::Collections::Generic::IReadOnlyList_1<::System::UInt32>* a3, ::System::Collections::Generic::IReadOnlyList_1<::System::UInt32>* a4, ::System::Collections::Generic::IReadOnlyList_1<::System::UInt32>* a5, ::System::Collections::Generic::IReadOnlyList_1<::System::UInt32>* a6, ::System::Collections::Generic::IReadOnlyList_1<::RPG::Client::Challenge::Tierce::ChallengeTierceAttackDamageType>* a7)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32, ::System::UInt32, ::System::Collections::Generic::IReadOnlyList_1<::System::UInt32>*, ::System::Collections::Generic::IReadOnlyList_1<::System::UInt32>*, ::System::Collections::Generic::IReadOnlyList_1<::System::UInt32>*, ::System::Collections::Generic::IReadOnlyList_1<::System::UInt32>*, ::System::Collections::Generic::IReadOnlyList_1<::RPG::Client::Challenge::Tierce::ChallengeTierceAttackDamageType>*))((::PBYTE)hIl2Cpp + POCJJHEDFOD_CTOR_OFFSET))(this, a1, a2, a3, a4, a5, a6, a7);
		}

		::System::Void _ctor_1(::POCJJHEDFOD* a1)
		{
			return ((::System::Void(*)(::PVOID, ::POCJJHEDFOD*))((::PBYTE)hIl2Cpp + POCJJHEDFOD_CTOR_1_OFFSET))(this, a1);
		}

		::System::Type* get_EqualityContract()
		{
			return ((::System::Type*(*)(::PVOID))((::PBYTE)hIl2Cpp + POCJJHEDFOD_GET_EQUALITYCONTRACT_OFFSET))(this);
		}

		::System::UInt32 get_MapEntranceID()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + POCJJHEDFOD_GET_MAPENTRANCEID_OFFSET))(this);
		}

		::System::Void set_MapEntranceID(::System::UInt32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + POCJJHEDFOD_SET_MAPENTRANCEID_OFFSET))(this, a1);
		}

		::System::UInt32 get_MazeGroupID()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + POCJJHEDFOD_GET_MAZEGROUPID_OFFSET))(this);
		}

		::System::Void set_MazeGroupID(::System::UInt32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + POCJJHEDFOD_SET_MAZEGROUPID_OFFSET))(this, a1);
		}

		::System::Collections::Generic::IReadOnlyList_1<::System::UInt32>* get_MazeConfigs()
		{
			return ((::System::Collections::Generic::IReadOnlyList_1<::System::UInt32>*(*)(::PVOID))((::PBYTE)hIl2Cpp + POCJJHEDFOD_GET_MAZECONFIGS_OFFSET))(this);
		}

		::System::Void set_MazeConfigs(::System::Collections::Generic::IReadOnlyList_1<::System::UInt32>* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Collections::Generic::IReadOnlyList_1<::System::UInt32>*))((::PBYTE)hIl2Cpp + POCJJHEDFOD_SET_MAZECONFIGS_OFFSET))(this, a1);
		}

		::System::Collections::Generic::IReadOnlyList_1<::System::UInt32>* get_ExtraMonsterIDs()
		{
			return ((::System::Collections::Generic::IReadOnlyList_1<::System::UInt32>*(*)(::PVOID))((::PBYTE)hIl2Cpp + POCJJHEDFOD_GET_EXTRAMONSTERIDS_OFFSET))(this);
		}

		::System::Void set_ExtraMonsterIDs(::System::Collections::Generic::IReadOnlyList_1<::System::UInt32>* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Collections::Generic::IReadOnlyList_1<::System::UInt32>*))((::PBYTE)hIl2Cpp + POCJJHEDFOD_SET_EXTRAMONSTERIDS_OFFSET))(this, a1);
		}

		::System::Collections::Generic::IReadOnlyList_1<::System::UInt32>* get_NpcMonsterIDs()
		{
			return ((::System::Collections::Generic::IReadOnlyList_1<::System::UInt32>*(*)(::PVOID))((::PBYTE)hIl2Cpp + POCJJHEDFOD_GET_NPCMONSTERIDS_OFFSET))(this);
		}

		::System::Void set_NpcMonsterIDs(::System::Collections::Generic::IReadOnlyList_1<::System::UInt32>* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Collections::Generic::IReadOnlyList_1<::System::UInt32>*))((::PBYTE)hIl2Cpp + POCJJHEDFOD_SET_NPCMONSTERIDS_OFFSET))(this, a1);
		}

		::System::Collections::Generic::IReadOnlyList_1<::System::UInt32>* get_EventIDs()
		{
			return ((::System::Collections::Generic::IReadOnlyList_1<::System::UInt32>*(*)(::PVOID))((::PBYTE)hIl2Cpp + POCJJHEDFOD_GET_EVENTIDS_OFFSET))(this);
		}

		::System::Void set_EventIDs(::System::Collections::Generic::IReadOnlyList_1<::System::UInt32>* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Collections::Generic::IReadOnlyList_1<::System::UInt32>*))((::PBYTE)hIl2Cpp + POCJJHEDFOD_SET_EVENTIDS_OFFSET))(this, a1);
		}

		::System::Collections::Generic::IReadOnlyList_1<::RPG::Client::Challenge::Tierce::ChallengeTierceAttackDamageType>* get_RecommendedDamageTypes()
		{
			return ((::System::Collections::Generic::IReadOnlyList_1<::RPG::Client::Challenge::Tierce::ChallengeTierceAttackDamageType>*(*)(::PVOID))((::PBYTE)hIl2Cpp + POCJJHEDFOD_GET_RECOMMENDEDDAMAGETYPES_OFFSET))(this);
		}

		::System::Void set_RecommendedDamageTypes(::System::Collections::Generic::IReadOnlyList_1<::RPG::Client::Challenge::Tierce::ChallengeTierceAttackDamageType>* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Collections::Generic::IReadOnlyList_1<::RPG::Client::Challenge::Tierce::ChallengeTierceAttackDamageType>*))((::PBYTE)hIl2Cpp + POCJJHEDFOD_SET_RECOMMENDEDDAMAGETYPES_OFFSET))(this, a1);
		}

		::System::String* ToString()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + POCJJHEDFOD_TOSTRING_OFFSET))(this);
		}

		::System::Boolean PrintMembers(::System::Text::StringBuilder* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Text::StringBuilder*))((::PBYTE)hIl2Cpp + POCJJHEDFOD_PRINTMEMBERS_OFFSET))(this, a1);
		}

		static ::System::Boolean op_Inequality(::POCJJHEDFOD* a1, ::POCJJHEDFOD* a2)
		{
			return ((::System::Boolean(*)(::POCJJHEDFOD*, ::POCJJHEDFOD*))((::PBYTE)hIl2Cpp + POCJJHEDFOD_OP_INEQUALITY_OFFSET))(a1, a2);
		}

		static ::System::Boolean op_Equality(::POCJJHEDFOD* a1, ::POCJJHEDFOD* a2)
		{
			return ((::System::Boolean(*)(::POCJJHEDFOD*, ::POCJJHEDFOD*))((::PBYTE)hIl2Cpp + POCJJHEDFOD_OP_EQUALITY_OFFSET))(a1, a2);
		}

		::System::Int32 GetHashCode()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + POCJJHEDFOD_GETHASHCODE_OFFSET))(this);
		}

		::System::Boolean Equals(::System::Object* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + POCJJHEDFOD_EQUALS_OFFSET))(this, a1);
		}

		::System::Boolean Equals_1(::POCJJHEDFOD* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::POCJJHEDFOD*))((::PBYTE)hIl2Cpp + POCJJHEDFOD_EQUALS_1_OFFSET))(this, a1);
		}

		::POCJJHEDFOD* _Clone__()
		{
			return ((::POCJJHEDFOD*(*)(::PVOID))((::PBYTE)hIl2Cpp + POCJJHEDFOD__CLONE___OFFSET))(this);
		}

		::System::Void Deconstruct(::System::UInt32 a1, ::System::UInt32 a2, ::System::Object* a3, ::System::Object* a4, ::System::Object* a5, ::System::Object* a6, ::System::Object* a7)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32, ::System::UInt32, ::System::Object*, ::System::Object*, ::System::Object*, ::System::Object*, ::System::Object*))((::PBYTE)hIl2Cpp + POCJJHEDFOD_DECONSTRUCT_OFFSET))(this, a1, a2, a3, a4, a5, a6, a7);
		}

	};
