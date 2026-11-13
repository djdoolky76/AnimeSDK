#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/GJMPEIGLHJK.h"
#include "unitysdk/JPCONPIKIEK.h"
#include "unitysdk/RPG/GameCore/ConfigDataPoolListPoolMember_1.h"
#include "unitysdk/RPG/GameCore/LevelSubmapEntityBakedInfo.h"
class LELCKJPOPAO;
namespace System { class Object; }

#define RPG_GAMECORE_LEVELDIMENSIONBAKEDINFO_DISPOSE_OFFSET UNITYSDK_OFFSET(0x7F0900)
#define RPG_GAMECORE_LEVELDIMENSIONBAKEDINFO_EQUALS_1_OFFSET UNITYSDK_OFFSET(0x3F02EA0)
#define RPG_GAMECORE_LEVELDIMENSIONBAKEDINFO_EQUALS_OFFSET UNITYSDK_OFFSET(0xCB40)
#define RPG_GAMECORE_LEVELDIMENSIONBAKEDINFO_GETHASHCODE_OFFSET UNITYSDK_OFFSET(0x7F6B30)
#define RPG_GAMECORE_LEVELDIMENSIONBAKEDINFO_GET_GROUPLIST_OFFSET UNITYSDK_OFFSET(0x3F02EB0)
#define RPG_GAMECORE_LEVELDIMENSIONBAKEDINFO_GET_ID_OFFSET UNITYSDK_OFFSET(0x3F02F20)
#define RPG_GAMECORE_LEVELDIMENSIONBAKEDINFO_GET_ISVALID_OFFSET UNITYSDK_OFFSET(0x7F6A70)
#define RPG_GAMECORE_LEVELDIMENSIONBAKEDINFO_GET_NAVMESHLARGEMONSTER_OFFSET UNITYSDK_OFFSET(0x3F02F80)
#define RPG_GAMECORE_LEVELDIMENSIONBAKEDINFO_GET_OFFSET_OFFSET UNITYSDK_OFFSET(0xC8F0)
#define RPG_GAMECORE_LEVELDIMENSIONBAKEDINFO_GET_POOL_OFFSET UNITYSDK_OFFSET(0x6C8DB0)
#define RPG_GAMECORE_LEVELDIMENSIONBAKEDINFO_GET_SUBMAPENTITYLIST_OFFSET UNITYSDK_OFFSET(0x3F02FF0)
#define RPG_GAMECORE_LEVELDIMENSIONBAKEDINFO_INIT_OFFSET UNITYSDK_OFFSET(0x6513E0)
#define RPG_GAMECORE_LEVELDIMENSIONBAKEDINFO_OP_EQUALITY_OFFSET UNITYSDK_OFFSET(0x1D92DA90)
#define RPG_GAMECORE_LEVELDIMENSIONBAKEDINFO_OP_IMPLICIT_OFFSET UNITYSDK_OFFSET(0x1D92DDE0)
#define RPG_GAMECORE_LEVELDIMENSIONBAKEDINFO_OP_INEQUALITY_OFFSET UNITYSDK_OFFSET(0x1D92DB80)
#define RPG_GAMECORE_LEVELDIMENSIONBAKEDINFO_OP_LOGICALNOT_OFFSET UNITYSDK_OFFSET(0x1D92DE90)
#define RPG_GAMECORE_LEVELDIMENSIONBAKEDINFO_SET_GROUPLIST_OFFSET UNITYSDK_OFFSET(0x3F02ED0)
#define RPG_GAMECORE_LEVELDIMENSIONBAKEDINFO_SET_ID_OFFSET UNITYSDK_OFFSET(0x3F02F30)
#define RPG_GAMECORE_LEVELDIMENSIONBAKEDINFO_SET_NAVMESHLARGEMONSTER_OFFSET UNITYSDK_OFFSET(0x3F02FA0)
#define RPG_GAMECORE_LEVELDIMENSIONBAKEDINFO_SET_SUBMAPENTITYLIST_OFFSET UNITYSDK_OFFSET(0x3F03010)

namespace RPG::GameCore
{
	inline static constexpr unsigned int LevelDimensionBakedInfo_TypeDefinitionIndex = 10726;

	struct alignas(8) LevelDimensionBakedInfo
	{
		::LELCKJPOPAO* _Pool; // 0x10
		::System::UInt32 _Offset; // 0x18
		::System::Void Init(::LELCKJPOPAO* a1, ::System::UInt32 a2)
		{
			return ((::System::Void(*)(::PVOID, ::LELCKJPOPAO*, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_GAMECORE_LEVELDIMENSIONBAKEDINFO_INIT_OFFSET))(this, a1, a2);
		}

		::System::Boolean get_IsValid()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_LEVELDIMENSIONBAKEDINFO_GET_ISVALID_OFFSET))(this);
		}

		::System::UInt32 get_Offset()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_LEVELDIMENSIONBAKEDINFO_GET_OFFSET_OFFSET))(this);
		}

		::LELCKJPOPAO* get_Pool()
		{
			return ((::LELCKJPOPAO*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_LEVELDIMENSIONBAKEDINFO_GET_POOL_OFFSET))(this);
		}

		::System::Void Dispose()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_LEVELDIMENSIONBAKEDINFO_DISPOSE_OFFSET))(this);
		}

		/*
		static ::System::Boolean op_Equality(::RPG::GameCore::LevelDimensionBakedInfo a1, ::System::Object* a2)
		{
			return ((::System::Boolean(*)(::RPG::GameCore::LevelDimensionBakedInfo, ::System::Object*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_LEVELDIMENSIONBAKEDINFO_OP_EQUALITY_OFFSET))(a1, a2);
		}
		*/

		/*
		static ::System::Boolean op_Inequality(::RPG::GameCore::LevelDimensionBakedInfo a1, ::System::Object* a2)
		{
			return ((::System::Boolean(*)(::RPG::GameCore::LevelDimensionBakedInfo, ::System::Object*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_LEVELDIMENSIONBAKEDINFO_OP_INEQUALITY_OFFSET))(a1, a2);
		}
		*/

		/*
		::System::Boolean Equals(::RPG::GameCore::LevelDimensionBakedInfo a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::RPG::GameCore::LevelDimensionBakedInfo))((::PBYTE)hIl2Cpp + RPG_GAMECORE_LEVELDIMENSIONBAKEDINFO_EQUALS_OFFSET))(this, a1);
		}
		*/

		::System::Boolean Equals_1(::System::Object* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_LEVELDIMENSIONBAKEDINFO_EQUALS_1_OFFSET))(this, a1);
		}

		::System::Int32 GetHashCode()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_LEVELDIMENSIONBAKEDINFO_GETHASHCODE_OFFSET))(this);
		}

		/*
		static ::System::Boolean op_Implicit(::RPG::GameCore::LevelDimensionBakedInfo a1)
		{
			return ((::System::Boolean(*)(::RPG::GameCore::LevelDimensionBakedInfo))((::PBYTE)hIl2Cpp + RPG_GAMECORE_LEVELDIMENSIONBAKEDINFO_OP_IMPLICIT_OFFSET))(a1);
		}
		*/

		/*
		static ::System::Boolean op_LogicalNot(::RPG::GameCore::LevelDimensionBakedInfo a1)
		{
			return ((::System::Boolean(*)(::RPG::GameCore::LevelDimensionBakedInfo))((::PBYTE)hIl2Cpp + RPG_GAMECORE_LEVELDIMENSIONBAKEDINFO_OP_LOGICALNOT_OFFSET))(a1);
		}
		*/

		::RPG::GameCore::ConfigDataPoolListPoolMember_1<::GJMPEIGLHJK> get_GroupList()
		{
			return ((::RPG::GameCore::ConfigDataPoolListPoolMember_1<::GJMPEIGLHJK>(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_LEVELDIMENSIONBAKEDINFO_GET_GROUPLIST_OFFSET))(this);
		}

		::System::Void set_GroupList(::RPG::GameCore::ConfigDataPoolListPoolMember_1<::GJMPEIGLHJK> a1)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::ConfigDataPoolListPoolMember_1<::GJMPEIGLHJK>))((::PBYTE)hIl2Cpp + RPG_GAMECORE_LEVELDIMENSIONBAKEDINFO_SET_GROUPLIST_OFFSET))(this, a1);
		}

		::System::UInt32 get_ID()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_LEVELDIMENSIONBAKEDINFO_GET_ID_OFFSET))(this);
		}

		::System::Void set_ID(::System::UInt32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_GAMECORE_LEVELDIMENSIONBAKEDINFO_SET_ID_OFFSET))(this, a1);
		}

		::JPCONPIKIEK get_NavMeshLargeMonster()
		{
			return ((::JPCONPIKIEK(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_LEVELDIMENSIONBAKEDINFO_GET_NAVMESHLARGEMONSTER_OFFSET))(this);
		}

		::System::Void set_NavMeshLargeMonster(::JPCONPIKIEK a1)
		{
			return ((::System::Void(*)(::PVOID, ::JPCONPIKIEK))((::PBYTE)hIl2Cpp + RPG_GAMECORE_LEVELDIMENSIONBAKEDINFO_SET_NAVMESHLARGEMONSTER_OFFSET))(this, a1);
		}

		::RPG::GameCore::ConfigDataPoolListPoolMember_1<::RPG::GameCore::LevelSubmapEntityBakedInfo> get_SubmapEntityList()
		{
			return ((::RPG::GameCore::ConfigDataPoolListPoolMember_1<::RPG::GameCore::LevelSubmapEntityBakedInfo>(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_LEVELDIMENSIONBAKEDINFO_GET_SUBMAPENTITYLIST_OFFSET))(this);
		}

		::System::Void set_SubmapEntityList(::RPG::GameCore::ConfigDataPoolListPoolMember_1<::RPG::GameCore::LevelSubmapEntityBakedInfo> a1)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::ConfigDataPoolListPoolMember_1<::RPG::GameCore::LevelSubmapEntityBakedInfo>))((::PBYTE)hIl2Cpp + RPG_GAMECORE_LEVELDIMENSIONBAKEDINFO_SET_SUBMAPENTITYLIST_OFFSET))(this, a1);
		}

	};
}
