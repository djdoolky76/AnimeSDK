#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/AttackDamageType.h"
#include "unitysdk/RPG/GameCore/MonsterWeaknessSpecialType.h"
#include "unitysdk/RPG/GameCore/WeaknessStackOperationType.h"
#include "unitysdk/RPG/GameCore/WeaknessState.h"
#include "unitysdk/System/Collections/Generic/KeyValuePair_2.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/DFHMKNLKLKB.h"
class BOFJDFJMKGA;
namespace RPG::GameCore { class CharacterWeakness; }
namespace RPG::GameCore { class GameEntity; }
namespace System::Collections::Generic { template <typename T> class IReadOnlyList_1; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define RPG_GAMECORE_CHARACTERWEAKNESS_CCTOR_OFFSET UNITYSDK_OFFSET(0xFD87DB0)
#define RPG_GAMECORE_CHARACTERWEAKNESS_COPYFROM_OFFSET UNITYSDK_OFFSET(0xFD87A70)
#define RPG_GAMECORE_CHARACTERWEAKNESS_CTOR_OFFSET UNITYSDK_OFFSET(0xFD853B0)
#define RPG_GAMECORE_CHARACTERWEAKNESS_DISPOSE_OFFSET UNITYSDK_OFFSET(0xFD85510)
#define RPG_GAMECORE_CHARACTERWEAKNESS_DOSEARCHAVAILABLEINDEX_OFFSET UNITYSDK_OFFSET(0xFD87520)
#define RPG_GAMECORE_CHARACTERWEAKNESS_GETACTIVEWEAKNESS_OFFSET UNITYSDK_OFFSET(0xFD85D50)
#define RPG_GAMECORE_CHARACTERWEAKNESS_GETALLWEAKNESSINENUM_OFFSET UNITYSDK_OFFSET(0xFD85DD0)
#define RPG_GAMECORE_CHARACTERWEAKNESS_GETALLWEAKNESS_OFFSET UNITYSDK_OFFSET(0xFD85D90)
#define RPG_GAMECORE_CHARACTERWEAKNESS_GETATTACHEDWEAKNESSLIST_OFFSET UNITYSDK_OFFSET(0xFD85CC0)
#define RPG_GAMECORE_CHARACTERWEAKNESS_GETDEFAULTWEAKNESSLIST_OFFSET UNITYSDK_OFFSET(0xFD85C30)
#define RPG_GAMECORE_CHARACTERWEAKNESS_GETOVERRIDEWEAKNESSLIST_OFFSET UNITYSDK_OFFSET(0xFD85C80)
#define RPG_GAMECORE_CHARACTERWEAKNESS_GETSECRETWEAKNESSLIST_OFFSET UNITYSDK_OFFSET(0xFD85D00)
#define RPG_GAMECORE_CHARACTERWEAKNESS_GET_SPECIALWEAKNESSLIST_OFFSET UNITYSDK_OFFSET(0xFD87DA0)
#define RPG_GAMECORE_CHARACTERWEAKNESS_HASSECRET_OFFSET UNITYSDK_OFFSET(0xFD85F50)
#define RPG_GAMECORE_CHARACTERWEAKNESS_INITDEFAULTWEAKNESS_OFFSET UNITYSDK_OFFSET(0xFD85580)
#define RPG_GAMECORE_CHARACTERWEAKNESS_ISPROTECTED_OFFSET UNITYSDK_OFFSET(0xFD85E10)
#define RPG_GAMECORE_CHARACTERWEAKNESS_ISSECRET_OFFSET UNITYSDK_OFFSET(0xFD85EB0)
#define RPG_GAMECORE_CHARACTERWEAKNESS_REFRESHACTIVEWEAKNESSLIST_OFFSET UNITYSDK_OFFSET(0xFD85760)
#define RPG_GAMECORE_CHARACTERWEAKNESS_REFRESHATTACHWEAKNESSLIST_OFFSET UNITYSDK_OFFSET(0xFD87680)
#define RPG_GAMECORE_CHARACTERWEAKNESS_REFRESHOVERRIDEWEAKNESSLIST_OFFSET UNITYSDK_OFFSET(0xFD85600)
#define RPG_GAMECORE_CHARACTERWEAKNESS_REFRESHPROTECTWEAKNESSLIST_OFFSET UNITYSDK_OFFSET(0xFD877A0)
#define RPG_GAMECORE_CHARACTERWEAKNESS_REFRESHSECRETWEAKNESSLIST_OFFSET UNITYSDK_OFFSET(0xFD878C0)
#define RPG_GAMECORE_CHARACTERWEAKNESS_RESERVEATTACHSTACK_OFFSET UNITYSDK_OFFSET(0xFD872D0)
#define RPG_GAMECORE_CHARACTERWEAKNESS_RESERVEOVERRIDESTACK_OFFSET UNITYSDK_OFFSET(0xFD87150)
#define RPG_GAMECORE_CHARACTERWEAKNESS_RESERVEPROTECTSTACK_OFFSET UNITYSDK_OFFSET(0xFD87210)
#define RPG_GAMECORE_CHARACTERWEAKNESS_RESERVESECRETSTACK_OFFSET UNITYSDK_OFFSET(0xFD87390)
#define RPG_GAMECORE_CHARACTERWEAKNESS_RESERVE_OFFSET UNITYSDK_OFFSET(0xFD87450)
#define RPG_GAMECORE_CHARACTERWEAKNESS_RESETOVERRIDEWEAKNESS_OFFSET UNITYSDK_OFFSET(0xFD87020)
#define RPG_GAMECORE_CHARACTERWEAKNESS_RESETWEAKNESSATTACH_OFFSET UNITYSDK_OFFSET(0xFD86EF0)
#define RPG_GAMECORE_CHARACTERWEAKNESS_RESETWEAKNESSPROTECTED_OFFSET UNITYSDK_OFFSET(0xFD86DC0)
#define RPG_GAMECORE_CHARACTERWEAKNESS_RESETWEAKNESSSECRET_OFFSET UNITYSDK_OFFSET(0xFD86C90)
#define RPG_GAMECORE_CHARACTERWEAKNESS_RESETWEAKNESS_OFFSET UNITYSDK_OFFSET(0xFD86BC0)
#define RPG_GAMECORE_CHARACTERWEAKNESS_SEARCHAVAILABLEINDEX_OFFSET UNITYSDK_OFFSET(0xFD87610)
#define RPG_GAMECORE_CHARACTERWEAKNESS_STACKWEAKNESSATTACH_OFFSET UNITYSDK_OFFSET(0xFD86480)
#define RPG_GAMECORE_CHARACTERWEAKNESS_STACKWEAKNESSOVERRIDE_OFFSET UNITYSDK_OFFSET(0xFD860A0)
#define RPG_GAMECORE_CHARACTERWEAKNESS_STACKWEAKNESSPROTECT_OFFSET UNITYSDK_OFFSET(0xFD86280)
#define RPG_GAMECORE_CHARACTERWEAKNESS_STACKWEAKNESSSECRET_OFFSET UNITYSDK_OFFSET(0xFD86680)
#define RPG_GAMECORE_CHARACTERWEAKNESS_STACKWEAKNESS_OFFSET UNITYSDK_OFFSET(0xFD85FA0)
#define RPG_GAMECORE_CHARACTERWEAKNESS_UNSTACKWEAKNESSATTACH_OFFSET UNITYSDK_OFFSET(0xFD86AA0)
#define RPG_GAMECORE_CHARACTERWEAKNESS_UNSTACKWEAKNESSOVERRIDE_OFFSET UNITYSDK_OFFSET(0xFD86980)
#define RPG_GAMECORE_CHARACTERWEAKNESS_UNSTACKWEAKNESSPROTECT_OFFSET UNITYSDK_OFFSET(0xFD86A10)
#define RPG_GAMECORE_CHARACTERWEAKNESS_UNSTACKWEAKNESSSECRET_OFFSET UNITYSDK_OFFSET(0xFD86B30)
#define RPG_GAMECORE_CHARACTERWEAKNESS_UNSTACKWEAKNESS_OFFSET UNITYSDK_OFFSET(0xFD86880)
#define RPG_GAMECORE_CHARACTERWEAKNESS_UPDATESPECIALWEAKNESS_OFFSET UNITYSDK_OFFSET(0xFD87C30)

namespace RPG::GameCore
{
	inline static constexpr unsigned int CharacterWeakness_TypeDefinitionIndex = 58964;

	class CharacterWeakness : public ::System::Object
	{
	public:
		::Il2CppArray<::System::Boolean>* _SecretOccupy; // 0x10
		::Il2CppArray<::RPG::GameCore::AttackDamageType>* _SecretStack; // 0x18
		::System::Collections::Generic::List_1<::System::Collections::Generic::KeyValuePair_2<::RPG::GameCore::AttackDamageType, ::RPG::GameCore::WeaknessState>>* _AllWeaknessListWithState; // 0x20
		::Il2CppArray<::RPG::GameCore::AttackDamageType>* _AttachStack; // 0x28
		::Il2CppArray<::System::Boolean>* _AttachOccupy; // 0x30
		::Il2CppArray<::System::Boolean>* _OverrideOccupy; // 0x38
		::Il2CppArray<::RPG::GameCore::AttackDamageType>* _OverrideStack; // 0x40
		::RPG::GameCore::GameEntity* _Owner; // 0x48
		::System::Collections::Generic::List_1<::RPG::GameCore::MonsterWeaknessSpecialType>* _SpecialWeaknessList; // 0x50
		::Il2CppArray<::System::Boolean>* _ProtectOccupy; // 0x58
		::Il2CppArray<::RPG::GameCore::AttackDamageType>* _ProtectStack; // 0x60
		::System::Boolean _ActiveListDirty; // 0x68
		::System::Boolean NotifyChangeEnable; // 0x69
		::System::Byte _padding0[0x2];
		::RPG::GameCore::AttackDamageType _OverridedWeaknessList; // 0x6C
		::RPG::GameCore::AttackDamageType _ProtectWeaknessList; // 0x70
		::RPG::GameCore::AttackDamageType _AllWeaknessList; // 0x74
		::RPG::GameCore::AttackDamageType _ActiveWeaknessList; // 0x78
		::RPG::GameCore::AttackDamageType _AttachedWeaknessList; // 0x7C
		::RPG::GameCore::AttackDamageType _DefaultWeaknessList; // 0x80
		::RPG::GameCore::AttackDamageType _SecretWeaknessList; // 0x84
		static ::System::Int32* StaticGet__DefaultStackSize()
		{
			return (::System::Int32*)UnitySDK::FromName("RPG.GameCore", "CharacterWeakness")->GetStaticField(0x15120);
		}

		::System::Void _ctor(::RPG::GameCore::GameEntity* a1)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::GameEntity*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_CHARACTERWEAKNESS_CTOR_OFFSET))(this, a1);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + RPG_GAMECORE_CHARACTERWEAKNESS_CCTOR_OFFSET))();
		}

		::System::Void Dispose()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_CHARACTERWEAKNESS_DISPOSE_OFFSET))(this);
		}

		::System::Void InitDefaultWeakness(::Il2CppArray<::RPG::GameCore::AttackDamageType>* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Il2CppArray<::RPG::GameCore::AttackDamageType>*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_CHARACTERWEAKNESS_INITDEFAULTWEAKNESS_OFFSET))(this, a1);
		}

		::RPG::GameCore::AttackDamageType GetDefaultWeaknessList()
		{
			return ((::RPG::GameCore::AttackDamageType(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_CHARACTERWEAKNESS_GETDEFAULTWEAKNESSLIST_OFFSET))(this);
		}

		::RPG::GameCore::AttackDamageType GetOverrideWeaknessList()
		{
			return ((::RPG::GameCore::AttackDamageType(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_CHARACTERWEAKNESS_GETOVERRIDEWEAKNESSLIST_OFFSET))(this);
		}

		::RPG::GameCore::AttackDamageType GetAttachedWeaknessList()
		{
			return ((::RPG::GameCore::AttackDamageType(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_CHARACTERWEAKNESS_GETATTACHEDWEAKNESSLIST_OFFSET))(this);
		}

		::RPG::GameCore::AttackDamageType GetSecretWeaknessList()
		{
			return ((::RPG::GameCore::AttackDamageType(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_CHARACTERWEAKNESS_GETSECRETWEAKNESSLIST_OFFSET))(this);
		}

		::RPG::GameCore::AttackDamageType GetActiveWeakness()
		{
			return ((::RPG::GameCore::AttackDamageType(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_CHARACTERWEAKNESS_GETACTIVEWEAKNESS_OFFSET))(this);
		}

		::System::Collections::Generic::List_1<::System::Collections::Generic::KeyValuePair_2<::RPG::GameCore::AttackDamageType, ::RPG::GameCore::WeaknessState>>* GetAllWeakness()
		{
			return ((::System::Collections::Generic::List_1<::System::Collections::Generic::KeyValuePair_2<::RPG::GameCore::AttackDamageType, ::RPG::GameCore::WeaknessState>>*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_CHARACTERWEAKNESS_GETALLWEAKNESS_OFFSET))(this);
		}

		::RPG::GameCore::AttackDamageType GetAllWeaknessInEnum()
		{
			return ((::RPG::GameCore::AttackDamageType(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_CHARACTERWEAKNESS_GETALLWEAKNESSINENUM_OFFSET))(this);
		}

		::System::Boolean IsProtected(::RPG::GameCore::AttackDamageType a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::RPG::GameCore::AttackDamageType))((::PBYTE)hIl2Cpp + RPG_GAMECORE_CHARACTERWEAKNESS_ISPROTECTED_OFFSET))(this, a1);
		}

		::System::Boolean IsSecret(::RPG::GameCore::AttackDamageType a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::RPG::GameCore::AttackDamageType))((::PBYTE)hIl2Cpp + RPG_GAMECORE_CHARACTERWEAKNESS_ISSECRET_OFFSET))(this, a1);
		}

		::System::Boolean HasSecret()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_CHARACTERWEAKNESS_HASSECRET_OFFSET))(this);
		}

		::System::Int32 StackWeakness(::RPG::GameCore::GameEntity* a1, ::RPG::GameCore::WeaknessStackOperationType a2, ::RPG::GameCore::AttackDamageType a3)
		{
			return ((::System::Int32(*)(::PVOID, ::RPG::GameCore::GameEntity*, ::RPG::GameCore::WeaknessStackOperationType, ::RPG::GameCore::AttackDamageType))((::PBYTE)hIl2Cpp + RPG_GAMECORE_CHARACTERWEAKNESS_STACKWEAKNESS_OFFSET))(this, a1, a2, a3);
		}

		::System::Void UnStackWeakness(::RPG::GameCore::GameEntity* a1, ::RPG::GameCore::WeaknessStackOperationType a2, ::System::Int32 a3)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::GameEntity*, ::RPG::GameCore::WeaknessStackOperationType, ::System::Int32))((::PBYTE)hIl2Cpp + RPG_GAMECORE_CHARACTERWEAKNESS_UNSTACKWEAKNESS_OFFSET))(this, a1, a2, a3);
		}

		::System::Void ResetWeakness(::RPG::GameCore::WeaknessStackOperationType a1, ::RPG::GameCore::AttackDamageType a2)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::WeaknessStackOperationType, ::RPG::GameCore::AttackDamageType))((::PBYTE)hIl2Cpp + RPG_GAMECORE_CHARACTERWEAKNESS_RESETWEAKNESS_OFFSET))(this, a1, a2);
		}

		::System::Void ReserveOverrideStack()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_CHARACTERWEAKNESS_RESERVEOVERRIDESTACK_OFFSET))(this);
		}

		::System::Void ReserveProtectStack()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_CHARACTERWEAKNESS_RESERVEPROTECTSTACK_OFFSET))(this);
		}

		::System::Void ReserveAttachStack()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_CHARACTERWEAKNESS_RESERVEATTACHSTACK_OFFSET))(this);
		}

		::System::Void ReserveSecretStack()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_CHARACTERWEAKNESS_RESERVESECRETSTACK_OFFSET))(this);
		}

		::System::Void Reserve(::RPG::GameCore::WeaknessStackOperationType a1)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::WeaknessStackOperationType))((::PBYTE)hIl2Cpp + RPG_GAMECORE_CHARACTERWEAKNESS_RESERVE_OFFSET))(this, a1);
		}

		::System::Int32 DoSearchAvailableIndex(::RPG::GameCore::WeaknessStackOperationType a1)
		{
			return ((::System::Int32(*)(::PVOID, ::RPG::GameCore::WeaknessStackOperationType))((::PBYTE)hIl2Cpp + RPG_GAMECORE_CHARACTERWEAKNESS_DOSEARCHAVAILABLEINDEX_OFFSET))(this, a1);
		}

		::System::Int32 SearchAvailableIndex(::RPG::GameCore::WeaknessStackOperationType a1)
		{
			return ((::System::Int32(*)(::PVOID, ::RPG::GameCore::WeaknessStackOperationType))((::PBYTE)hIl2Cpp + RPG_GAMECORE_CHARACTERWEAKNESS_SEARCHAVAILABLEINDEX_OFFSET))(this, a1);
		}

		::System::Int32 StackWeaknessOverride(::RPG::GameCore::AttackDamageType a1)
		{
			return ((::System::Int32(*)(::PVOID, ::RPG::GameCore::AttackDamageType))((::PBYTE)hIl2Cpp + RPG_GAMECORE_CHARACTERWEAKNESS_STACKWEAKNESSOVERRIDE_OFFSET))(this, a1);
		}

		::System::Int32 StackWeaknessAttach(::RPG::GameCore::AttackDamageType a1)
		{
			return ((::System::Int32(*)(::PVOID, ::RPG::GameCore::AttackDamageType))((::PBYTE)hIl2Cpp + RPG_GAMECORE_CHARACTERWEAKNESS_STACKWEAKNESSATTACH_OFFSET))(this, a1);
		}

		::System::Int32 StackWeaknessProtect(::RPG::GameCore::AttackDamageType a1)
		{
			return ((::System::Int32(*)(::PVOID, ::RPG::GameCore::AttackDamageType))((::PBYTE)hIl2Cpp + RPG_GAMECORE_CHARACTERWEAKNESS_STACKWEAKNESSPROTECT_OFFSET))(this, a1);
		}

		::System::Int32 StackWeaknessSecret(::RPG::GameCore::AttackDamageType a1)
		{
			return ((::System::Int32(*)(::PVOID, ::RPG::GameCore::AttackDamageType))((::PBYTE)hIl2Cpp + RPG_GAMECORE_CHARACTERWEAKNESS_STACKWEAKNESSSECRET_OFFSET))(this, a1);
		}

		::System::Void UnStackWeaknessOverride(::System::Int32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + RPG_GAMECORE_CHARACTERWEAKNESS_UNSTACKWEAKNESSOVERRIDE_OFFSET))(this, a1);
		}

		::System::Void UnStackWeaknessAttach(::System::Int32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + RPG_GAMECORE_CHARACTERWEAKNESS_UNSTACKWEAKNESSATTACH_OFFSET))(this, a1);
		}

		::System::Void UnStackWeaknessProtect(::System::Int32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + RPG_GAMECORE_CHARACTERWEAKNESS_UNSTACKWEAKNESSPROTECT_OFFSET))(this, a1);
		}

		::System::Void UnStackWeaknessSecret(::System::Int32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + RPG_GAMECORE_CHARACTERWEAKNESS_UNSTACKWEAKNESSSECRET_OFFSET))(this, a1);
		}

		::System::Void ResetWeaknessSecret(::RPG::GameCore::AttackDamageType a1)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::AttackDamageType))((::PBYTE)hIl2Cpp + RPG_GAMECORE_CHARACTERWEAKNESS_RESETWEAKNESSSECRET_OFFSET))(this, a1);
		}

		::System::Void ResetWeaknessProtected(::RPG::GameCore::AttackDamageType a1)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::AttackDamageType))((::PBYTE)hIl2Cpp + RPG_GAMECORE_CHARACTERWEAKNESS_RESETWEAKNESSPROTECTED_OFFSET))(this, a1);
		}

		::System::Void ResetWeaknessAttach(::RPG::GameCore::AttackDamageType a1)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::AttackDamageType))((::PBYTE)hIl2Cpp + RPG_GAMECORE_CHARACTERWEAKNESS_RESETWEAKNESSATTACH_OFFSET))(this, a1);
		}

		::System::Void ResetOverrideWeakness(::RPG::GameCore::AttackDamageType a1)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::AttackDamageType))((::PBYTE)hIl2Cpp + RPG_GAMECORE_CHARACTERWEAKNESS_RESETOVERRIDEWEAKNESS_OFFSET))(this, a1);
		}

		::System::Void RefreshOverrideWeaknessList()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_CHARACTERWEAKNESS_REFRESHOVERRIDEWEAKNESSLIST_OFFSET))(this);
		}

		::System::Void RefreshAttachWeaknessList()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_CHARACTERWEAKNESS_REFRESHATTACHWEAKNESSLIST_OFFSET))(this);
		}

		::System::Void RefreshProtectWeaknessList()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_CHARACTERWEAKNESS_REFRESHPROTECTWEAKNESSLIST_OFFSET))(this);
		}

		::System::Void RefreshSecretWeaknessList()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_CHARACTERWEAKNESS_REFRESHSECRETWEAKNESSLIST_OFFSET))(this);
		}

		::System::Void RefreshActiveWeaknessList()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_CHARACTERWEAKNESS_REFRESHACTIVEWEAKNESSLIST_OFFSET))(this);
		}

		::System::Void CopyFrom(::RPG::GameCore::CharacterWeakness* a1, ::DFHMKNLKLKB a2)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::CharacterWeakness*, ::DFHMKNLKLKB))((::PBYTE)hIl2Cpp + RPG_GAMECORE_CHARACTERWEAKNESS_COPYFROM_OFFSET))(this, a1, a2);
		}

		::System::Void UpdateSpecialWeakness(::BOFJDFJMKGA* a1)
		{
			return ((::System::Void(*)(::PVOID, ::BOFJDFJMKGA*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_CHARACTERWEAKNESS_UPDATESPECIALWEAKNESS_OFFSET))(this, a1);
		}

		::System::Collections::Generic::IReadOnlyList_1<::RPG::GameCore::MonsterWeaknessSpecialType>* get_SpecialWeaknessList()
		{
			return ((::System::Collections::Generic::IReadOnlyList_1<::RPG::GameCore::MonsterWeaknessSpecialType>*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_CHARACTERWEAKNESS_GET_SPECIALWEAKNESSLIST_OFFSET))(this);
		}

	};
}
