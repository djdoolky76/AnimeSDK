#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/RPG/Client/TextID.h"
class IEPCGBKKCHB;
namespace System { class String; }

#define RPG_CLIENT_PETMARBLEBATTLETITLE_CTOR_OFFSET UNITYSDK_OFFSET(0xE541A00)
#define RPG_CLIENT_PETMARBLEBATTLETITLE_GET_DESC_OFFSET UNITYSDK_OFFSET(0xE541E40)
#define RPG_CLIENT_PETMARBLEBATTLETITLE_GET_ID_OFFSET UNITYSDK_OFFSET(0xE541D50)
#define RPG_CLIENT_PETMARBLEBATTLETITLE_GET_ISHAVETITLE_OFFSET UNITYSDK_OFFSET(0xE541D70)
#define RPG_CLIENT_PETMARBLEBATTLETITLE_GET_NAME_OFFSET UNITYSDK_OFFSET(0xE541DC0)
#define RPG_CLIENT_PETMARBLEBATTLETITLE_GET_QUALITY_OFFSET UNITYSDK_OFFSET(0xE541F10)
#define RPG_CLIENT_PETMARBLEBATTLETITLE_GET__DESCPARAMS_OFFSET UNITYSDK_OFFSET(0xE541F80)
#define RPG_CLIENT_PETMARBLEBATTLETITLE_GET__VALUE_OFFSET UNITYSDK_OFFSET(0xE541F60)
#define RPG_CLIENT_PETMARBLEBATTLETITLE_SET_ID_OFFSET UNITYSDK_OFFSET(0xE541D60)
#define RPG_CLIENT_PETMARBLEBATTLETITLE_SET__DESCPARAMS_OFFSET UNITYSDK_OFFSET(0xE541F90)
#define RPG_CLIENT_PETMARBLEBATTLETITLE_SET__VALUE_OFFSET UNITYSDK_OFFSET(0xE541F70)
#define RPG_CLIENT_PETMARBLEBATTLETITLE__COMBINEUSINGSELECTMANY_OFFSET UNITYSDK_OFFSET(0xE541BF0)

namespace RPG::Client
{
	inline static constexpr unsigned int PetMarbleBattleTitle_TypeDefinitionIndex = 67748;

	class PetMarbleBattleTitle : public ::System::Object
	{
	public:
		::Il2CppArray<::System::Int32>* __DescParams_k__BackingField; // 0x10
		::IEPCGBKKCHB* _Row; // 0x18
		::System::UInt32 _ID_k__BackingField; // 0x20
		::System::Int32 __Value_k__BackingField; // 0x24
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
