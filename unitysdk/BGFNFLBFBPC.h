#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class BGFNFLBFBPC;
class CJDIAHDLCNJ;
class CNAICCGGDOH;
namespace System { class String; }
namespace System::Collections::Generic { template <typename T> class IEnumerable_1; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define BGFNFLBFBPC_BPLPBPMEODA_OFFSET UNITYSDK_OFFSET(0xB1826C0)
#define BGFNFLBFBPC_CTOR_OFFSET UNITYSDK_OFFSET(0xB1827A0)
#define BGFNFLBFBPC_GET_ASSISTSCORE_OFFSET UNITYSDK_OFFSET(0xB182870)
#define BGFNFLBFBPC_GET_AVATARLIST_OFFSET UNITYSDK_OFFSET(0xB182850)
#define BGFNFLBFBPC_GET_BATTLEREPLAYKEY_OFFSET UNITYSDK_OFFSET(0xB182830)
#define BGFNFLBFBPC_GET_DAMAGEHP_OFFSET UNITYSDK_OFFSET(0xB1827D0)
#define BGFNFLBFBPC_GET_DAMAGESCORE_OFFSET UNITYSDK_OFFSET(0xB182890)
#define BGFNFLBFBPC_GET_FINALHITSCORE_OFFSET UNITYSDK_OFFSET(0xB1828B0)
#define BGFNFLBFBPC_GET_ISFINALHIT_OFFSET UNITYSDK_OFFSET(0xB1827F0)
#define BGFNFLBFBPC_GET_OVERKILLDAMAGEHP_OFFSET UNITYSDK_OFFSET(0xB182810)
#define BGFNFLBFBPC_GET_UID_OFFSET UNITYSDK_OFFSET(0xB1827B0)
#define BGFNFLBFBPC_MMFIOKJJMJO_OFFSET UNITYSDK_OFFSET(0xB182150)
#define BGFNFLBFBPC_SET_ASSISTSCORE_OFFSET UNITYSDK_OFFSET(0xB182880)
#define BGFNFLBFBPC_SET_AVATARLIST_OFFSET UNITYSDK_OFFSET(0xB182860)
#define BGFNFLBFBPC_SET_BATTLEREPLAYKEY_OFFSET UNITYSDK_OFFSET(0xB182840)
#define BGFNFLBFBPC_SET_DAMAGEHP_OFFSET UNITYSDK_OFFSET(0xB1827E0)
#define BGFNFLBFBPC_SET_DAMAGESCORE_OFFSET UNITYSDK_OFFSET(0xB1828A0)
#define BGFNFLBFBPC_SET_FINALHITSCORE_OFFSET UNITYSDK_OFFSET(0xB1828C0)
#define BGFNFLBFBPC_SET_ISFINALHIT_OFFSET UNITYSDK_OFFSET(0xB182800)
#define BGFNFLBFBPC_SET_OVERKILLDAMAGEHP_OFFSET UNITYSDK_OFFSET(0xB182820)
#define BGFNFLBFBPC_SET_UID_OFFSET UNITYSDK_OFFSET(0xB1827C0)

inline static constexpr unsigned int BGFNFLBFBPC_TypeDefinitionIndex = 66757;

	class BGFNFLBFBPC : public ::System::Object
	{
	public:
		::System::Collections::Generic::List_1<::CNAICCGGDOH*>* _AvatarList_k__BackingField; // 0x10
		::System::String* _BattleReplayKey_k__BackingField; // 0x18
		::System::Boolean _IsFinalHit_k__BackingField; // 0x20
		::System::Byte _padding0[0x3];
		::System::UInt32 _DamageHp_k__BackingField; // 0x24
		::System::UInt32 _Uid_k__BackingField; // 0x28
		::System::UInt32 _FinalHitScore_k__BackingField; // 0x2C
		::System::UInt32 _OverKillDamageHp_k__BackingField; // 0x30
		::System::UInt32 _AssistScore_k__BackingField; // 0x34
		::System::UInt32 _DamageScore_k__BackingField; // 0x38
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + BGFNFLBFBPC_CTOR_OFFSET))(this);
		}

		static ::System::Collections::Generic::List_1<::BGFNFLBFBPC*>* MMFIOKJJMJO(::System::Collections::Generic::IEnumerable_1<::CJDIAHDLCNJ*>* a1)
		{
			return ((::System::Collections::Generic::List_1<::BGFNFLBFBPC*>*(*)(::System::Collections::Generic::IEnumerable_1<::CJDIAHDLCNJ*>*))((::PBYTE)hIl2Cpp + BGFNFLBFBPC_MMFIOKJJMJO_OFFSET))(a1);
		}

		static ::BGFNFLBFBPC* BPLPBPMEODA(::CJDIAHDLCNJ* a1)
		{
			return ((::BGFNFLBFBPC*(*)(::CJDIAHDLCNJ*))((::PBYTE)hIl2Cpp + BGFNFLBFBPC_BPLPBPMEODA_OFFSET))(a1);
		}

		::System::UInt32 get_Uid()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + BGFNFLBFBPC_GET_UID_OFFSET))(this);
		}

		::System::Void set_Uid(::System::UInt32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + BGFNFLBFBPC_SET_UID_OFFSET))(this, a1);
		}

		::System::UInt32 get_DamageHp()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + BGFNFLBFBPC_GET_DAMAGEHP_OFFSET))(this);
		}

		::System::Void set_DamageHp(::System::UInt32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + BGFNFLBFBPC_SET_DAMAGEHP_OFFSET))(this, a1);
		}

		::System::Boolean get_IsFinalHit()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + BGFNFLBFBPC_GET_ISFINALHIT_OFFSET))(this);
		}

		::System::Void set_IsFinalHit(::System::Boolean a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + BGFNFLBFBPC_SET_ISFINALHIT_OFFSET))(this, a1);
		}

		::System::UInt32 get_OverKillDamageHp()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + BGFNFLBFBPC_GET_OVERKILLDAMAGEHP_OFFSET))(this);
		}

		::System::Void set_OverKillDamageHp(::System::UInt32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + BGFNFLBFBPC_SET_OVERKILLDAMAGEHP_OFFSET))(this, a1);
		}

		::System::String* get_BattleReplayKey()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + BGFNFLBFBPC_GET_BATTLEREPLAYKEY_OFFSET))(this);
		}

		::System::Void set_BattleReplayKey(::System::String* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + BGFNFLBFBPC_SET_BATTLEREPLAYKEY_OFFSET))(this, a1);
		}

		::System::Collections::Generic::List_1<::CNAICCGGDOH*>* get_AvatarList()
		{
			return ((::System::Collections::Generic::List_1<::CNAICCGGDOH*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + BGFNFLBFBPC_GET_AVATARLIST_OFFSET))(this);
		}

		::System::Void set_AvatarList(::System::Collections::Generic::List_1<::CNAICCGGDOH*>* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Collections::Generic::List_1<::CNAICCGGDOH*>*))((::PBYTE)hIl2Cpp + BGFNFLBFBPC_SET_AVATARLIST_OFFSET))(this, a1);
		}

		::System::UInt32 get_AssistScore()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + BGFNFLBFBPC_GET_ASSISTSCORE_OFFSET))(this);
		}

		::System::Void set_AssistScore(::System::UInt32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + BGFNFLBFBPC_SET_ASSISTSCORE_OFFSET))(this, a1);
		}

		::System::UInt32 get_DamageScore()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + BGFNFLBFBPC_GET_DAMAGESCORE_OFFSET))(this);
		}

		::System::Void set_DamageScore(::System::UInt32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + BGFNFLBFBPC_SET_DAMAGESCORE_OFFSET))(this, a1);
		}

		::System::UInt32 get_FinalHitScore()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + BGFNFLBFBPC_GET_FINALHITSCORE_OFFSET))(this);
		}

		::System::Void set_FinalHitScore(::System::UInt32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + BGFNFLBFBPC_SET_FINALHITSCORE_OFFSET))(this, a1);
		}

	};
