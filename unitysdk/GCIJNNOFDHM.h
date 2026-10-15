#pragma once
#include "unitysdk/unitysdk.h"
class LOJIKMHLCBL;
class OINNEGOFKAA;
namespace RPG::AvatarSystem { class Avatar; }
namespace RPG::AvatarSystem { class IAvatar; }
namespace System { class Object; }
namespace System { class String; }
namespace System::Text { class StringBuilder; }

#define GCIJNNOFDHM_CTOR_OFFSET UNITYSDK_OFFSET(0x2E79EE0)
#define GCIJNNOFDHM_DECONSTRUCT_OFFSET UNITYSDK_OFFSET(0x2E7A000)
#define GCIJNNOFDHM_EQUALS_1_OFFSET UNITYSDK_OFFSET(0x2E79FC0)
#define GCIJNNOFDHM_EQUALS_OFFSET UNITYSDK_OFFSET(0x2E79F40)
#define GCIJNNOFDHM_GETHASHCODE_OFFSET UNITYSDK_OFFSET(0x2E79F30)
#define GCIJNNOFDHM_GET_EQUIPMENTSNAPSHOT_OFFSET UNITYSDK_OFFSET(0x94F0)
#define GCIJNNOFDHM_GET_ORIGINVERSION_OFFSET UNITYSDK_OFFSET(0x3260)
#define GCIJNNOFDHM_GET_ORIGIN_OFFSET UNITYSDK_OFFSET(0x1D30)
#define GCIJNNOFDHM_GET_RELICSNAPSHOT_OFFSET UNITYSDK_OFFSET(0xAD00)
#define GCIJNNOFDHM_GET_UPGRADE_OFFSET UNITYSDK_OFFSET(0x1D40)
#define GCIJNNOFDHM_OP_EQUALITY_OFFSET UNITYSDK_OFFSET(0x1597C040)
#define GCIJNNOFDHM_OP_INEQUALITY_OFFSET UNITYSDK_OFFSET(0x1597BFF0)
#define GCIJNNOFDHM_PRINTMEMBERS_OFFSET UNITYSDK_OFFSET(0x2E79F10)
#define GCIJNNOFDHM_SET_EQUIPMENTSNAPSHOT_OFFSET UNITYSDK_OFFSET(0x9500)
#define GCIJNNOFDHM_SET_ORIGINVERSION_OFFSET UNITYSDK_OFFSET(0xDDA70)
#define GCIJNNOFDHM_SET_ORIGIN_OFFSET UNITYSDK_OFFSET(0x94B0)
#define GCIJNNOFDHM_SET_RELICSNAPSHOT_OFFSET UNITYSDK_OFFSET(0xAD10)
#define GCIJNNOFDHM_SET_UPGRADE_OFFSET UNITYSDK_OFFSET(0x94C0)
#define GCIJNNOFDHM_TOSTRING_OFFSET UNITYSDK_OFFSET(0x2E79F00)

	struct alignas(8) GCIJNNOFDHM
	{
		::RPG::AvatarSystem::IAvatar* _Origin_k__BackingField; // 0x10
		::RPG::AvatarSystem::Avatar* _Upgrade_k__BackingField; // 0x18
		::System::UInt32 _OriginVersion_k__BackingField; // 0x20
		::System::Byte _padding0[0x4];
		::OINNEGOFKAA* _EquipmentSnapshot_k__BackingField; // 0x28
		::LOJIKMHLCBL* _RelicSnapshot_k__BackingField; // 0x30
		::System::Void _ctor(::RPG::AvatarSystem::IAvatar* a1, ::RPG::AvatarSystem::Avatar* a2, ::System::UInt32 a3, ::OINNEGOFKAA* a4, ::LOJIKMHLCBL* a5)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::AvatarSystem::IAvatar*, ::RPG::AvatarSystem::Avatar*, ::System::UInt32, ::OINNEGOFKAA*, ::LOJIKMHLCBL*))((::PBYTE)hIl2Cpp + GCIJNNOFDHM_CTOR_OFFSET))(this, a1, a2, a3, a4, a5);
		}

		::RPG::AvatarSystem::IAvatar* get_Origin()
		{
			return ((::RPG::AvatarSystem::IAvatar*(*)(::PVOID))((::PBYTE)hIl2Cpp + GCIJNNOFDHM_GET_ORIGIN_OFFSET))(this);
		}

		::System::Void set_Origin(::RPG::AvatarSystem::IAvatar* a1)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::AvatarSystem::IAvatar*))((::PBYTE)hIl2Cpp + GCIJNNOFDHM_SET_ORIGIN_OFFSET))(this, a1);
		}

		::RPG::AvatarSystem::Avatar* get_Upgrade()
		{
			return ((::RPG::AvatarSystem::Avatar*(*)(::PVOID))((::PBYTE)hIl2Cpp + GCIJNNOFDHM_GET_UPGRADE_OFFSET))(this);
		}

		::System::Void set_Upgrade(::RPG::AvatarSystem::Avatar* a1)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::AvatarSystem::Avatar*))((::PBYTE)hIl2Cpp + GCIJNNOFDHM_SET_UPGRADE_OFFSET))(this, a1);
		}

		::System::UInt32 get_OriginVersion()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + GCIJNNOFDHM_GET_ORIGINVERSION_OFFSET))(this);
		}

		::System::Void set_OriginVersion(::System::UInt32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + GCIJNNOFDHM_SET_ORIGINVERSION_OFFSET))(this, a1);
		}

		::OINNEGOFKAA* get_EquipmentSnapshot()
		{
			return ((::OINNEGOFKAA*(*)(::PVOID))((::PBYTE)hIl2Cpp + GCIJNNOFDHM_GET_EQUIPMENTSNAPSHOT_OFFSET))(this);
		}

		::System::Void set_EquipmentSnapshot(::OINNEGOFKAA* a1)
		{
			return ((::System::Void(*)(::PVOID, ::OINNEGOFKAA*))((::PBYTE)hIl2Cpp + GCIJNNOFDHM_SET_EQUIPMENTSNAPSHOT_OFFSET))(this, a1);
		}

		::LOJIKMHLCBL* get_RelicSnapshot()
		{
			return ((::LOJIKMHLCBL*(*)(::PVOID))((::PBYTE)hIl2Cpp + GCIJNNOFDHM_GET_RELICSNAPSHOT_OFFSET))(this);
		}

		::System::Void set_RelicSnapshot(::LOJIKMHLCBL* a1)
		{
			return ((::System::Void(*)(::PVOID, ::LOJIKMHLCBL*))((::PBYTE)hIl2Cpp + GCIJNNOFDHM_SET_RELICSNAPSHOT_OFFSET))(this, a1);
		}

		::System::String* ToString()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + GCIJNNOFDHM_TOSTRING_OFFSET))(this);
		}

		::System::Boolean PrintMembers(::System::Text::StringBuilder* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Text::StringBuilder*))((::PBYTE)hIl2Cpp + GCIJNNOFDHM_PRINTMEMBERS_OFFSET))(this, a1);
		}

		/*
		static ::System::Boolean op_Inequality(::GCIJNNOFDHM a1, ::GCIJNNOFDHM a2)
		{
			return ((::System::Boolean(*)(::GCIJNNOFDHM, ::GCIJNNOFDHM))((::PBYTE)hIl2Cpp + GCIJNNOFDHM_OP_INEQUALITY_OFFSET))(a1, a2);
		}
		*/

		/*
		static ::System::Boolean op_Equality(::GCIJNNOFDHM a1, ::GCIJNNOFDHM a2)
		{
			return ((::System::Boolean(*)(::GCIJNNOFDHM, ::GCIJNNOFDHM))((::PBYTE)hIl2Cpp + GCIJNNOFDHM_OP_EQUALITY_OFFSET))(a1, a2);
		}
		*/

		::System::Int32 GetHashCode()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + GCIJNNOFDHM_GETHASHCODE_OFFSET))(this);
		}

		::System::Boolean Equals(::System::Object* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + GCIJNNOFDHM_EQUALS_OFFSET))(this, a1);
		}

		/*
		::System::Boolean Equals_1(::GCIJNNOFDHM a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::GCIJNNOFDHM))((::PBYTE)hIl2Cpp + GCIJNNOFDHM_EQUALS_1_OFFSET))(this, a1);
		}
		*/

		::System::Void Deconstruct(::RPG::AvatarSystem::IAvatar* a1, ::RPG::AvatarSystem::Avatar* a2, ::System::UInt32 a3, ::OINNEGOFKAA* a4, ::LOJIKMHLCBL* a5)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::AvatarSystem::IAvatar*, ::RPG::AvatarSystem::Avatar*, ::System::UInt32, ::OINNEGOFKAA*, ::LOJIKMHLCBL*))((::PBYTE)hIl2Cpp + GCIJNNOFDHM_DECONSTRUCT_OFFSET))(this, a1, a2, a3, a4, a5);
		}

	};
