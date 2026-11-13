#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/RPG/Client/TextID.h"
class IEPCGBKKCHB;
namespace System { class String; }

#define RPG_CLIENT_PETMARBLEBATTLETITLE_CTOR_OFFSET UNITYSDK_OFFSET(0x18D5ABA0)
#define RPG_CLIENT_PETMARBLEBATTLETITLE_GET_DESC_OFFSET UNITYSDK_OFFSET(0x18D5AFE0)
#define RPG_CLIENT_PETMARBLEBATTLETITLE_GET_ID_OFFSET UNITYSDK_OFFSET(0x18D5AEF0)
#define RPG_CLIENT_PETMARBLEBATTLETITLE_GET_ISHAVETITLE_OFFSET UNITYSDK_OFFSET(0x18D5AF10)
#define RPG_CLIENT_PETMARBLEBATTLETITLE_GET_NAME_OFFSET UNITYSDK_OFFSET(0x18D5AF60)
#define RPG_CLIENT_PETMARBLEBATTLETITLE_GET_QUALITY_OFFSET UNITYSDK_OFFSET(0x18D5B0B0)
#define RPG_CLIENT_PETMARBLEBATTLETITLE_GET__DESCPARAMS_OFFSET UNITYSDK_OFFSET(0x18D5B120)
#define RPG_CLIENT_PETMARBLEBATTLETITLE_GET__VALUE_OFFSET UNITYSDK_OFFSET(0x18D5B100)
#define RPG_CLIENT_PETMARBLEBATTLETITLE_SET_ID_OFFSET UNITYSDK_OFFSET(0x18D5AF00)
#define RPG_CLIENT_PETMARBLEBATTLETITLE_SET__DESCPARAMS_OFFSET UNITYSDK_OFFSET(0x18D5B130)
#define RPG_CLIENT_PETMARBLEBATTLETITLE_SET__VALUE_OFFSET UNITYSDK_OFFSET(0x18D5B110)
#define RPG_CLIENT_PETMARBLEBATTLETITLE__COMBINEUSINGSELECTMANY_OFFSET UNITYSDK_OFFSET(0x18D5AD90)

namespace RPG::Client
{
	inline static constexpr unsigned int PetMarbleBattleTitle_TypeDefinitionIndex = 67748;

	class PetMarbleBattleTitle : public ::System::Object
	{
	public:
		::IEPCGBKKCHB* _Row; // 0x10
		::Il2CppArray<::System::Int32>* __DescParams_k__BackingField; // 0x18
		::System::Int32 __Value_k__BackingField; // 0x20
		::System::UInt32 _ID_k__BackingField; // 0x24
		::System::Void _ctor(::System::UInt32 a1, ::System::Int32 a2)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32, ::System::Int32))((::PBYTE)hIl2Cpp + RPG_CLIENT_PETMARBLEBATTLETITLE_CTOR_OFFSET))(this, a1, a2);
		}

		::Il2CppArray<::System::Int32>* _CombineUsingSelectMany(::Il2CppArray<::Il2CppArray<::System::Int32>*>* a1)
		{
			return ((::Il2CppArray<::System::Int32>*(*)(::PVOID, ::Il2CppArray<::Il2CppArray<::System::Int32>*>*))((::PBYTE)hIl2Cpp + RPG_CLIENT_PETMARBLEBATTLETITLE__COMBINEUSINGSELECTMANY_OFFSET))(this, a1);
		}

		::System::UInt32 get_ID()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_PETMARBLEBATTLETITLE_GET_ID_OFFSET))(this);
		}

		::System::Void set_ID(::System::UInt32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_PETMARBLEBATTLETITLE_SET_ID_OFFSET))(this, a1);
		}

		::System::Boolean get_IsHaveTitle()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_PETMARBLEBATTLETITLE_GET_ISHAVETITLE_OFFSET))(this);
		}

		::RPG::Client::TextID get_Name()
		{
			return ((::RPG::Client::TextID(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_PETMARBLEBATTLETITLE_GET_NAME_OFFSET))(this);
		}

		::System::String* get_Desc()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_PETMARBLEBATTLETITLE_GET_DESC_OFFSET))(this);
		}

		::System::Int32 get_Quality()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_PETMARBLEBATTLETITLE_GET_QUALITY_OFFSET))(this);
		}

		::System::Int32 get__Value()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_PETMARBLEBATTLETITLE_GET__VALUE_OFFSET))(this);
		}

		::System::Void set__Value(::System::Int32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + RPG_CLIENT_PETMARBLEBATTLETITLE_SET__VALUE_OFFSET))(this, a1);
		}

		::Il2CppArray<::System::Int32>* get__DescParams()
		{
			return ((::Il2CppArray<::System::Int32>*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_PETMARBLEBATTLETITLE_GET__DESCPARAMS_OFFSET))(this);
		}

		::System::Void set__DescParams(::Il2CppArray<::System::Int32>* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Il2CppArray<::System::Int32>*))((::PBYTE)hIl2Cpp + RPG_CLIENT_PETMARBLEBATTLETITLE_SET__DESCPARAMS_OFFSET))(this, a1);
		}

	};
}
