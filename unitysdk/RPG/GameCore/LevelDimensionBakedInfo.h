#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/GJMPEIGLHJK.h"
#include "unitysdk/JPCONPIKIEK.h"
#include "unitysdk/RPG/GameCore/ConfigDataPoolListPoolMember_1.h"
#include "unitysdk/RPG/GameCore/LevelSubmapEntityBakedInfo.h"
class LELCKJPOPAO;
namespace System { class Object; }

#define RPG_GAMECORE_LEVELDIMENSIONBAKEDINFO_DISPOSE_OFFSET UNITYSDK_OFFSET(0x3C2D5A0)
#define RPG_GAMECORE_LEVELDIMENSIONBAKEDINFO_EQUALS_1_OFFSET UNITYSDK_OFFSET(0x3C3ECC0)
#define RPG_GAMECORE_LEVELDIMENSIONBAKEDINFO_EQUALS_OFFSET UNITYSDK_OFFSET(0x2F86B50)
#define RPG_GAMECORE_LEVELDIMENSIONBAKEDINFO_GETHASHCODE_OFFSET UNITYSDK_OFFSET(0x2FB1140)
#define RPG_GAMECORE_LEVELDIMENSIONBAKEDINFO_GET_GROUPLIST_OFFSET UNITYSDK_OFFSET(0x3C3ECD0)
#define RPG_GAMECORE_LEVELDIMENSIONBAKEDINFO_GET_ID_OFFSET UNITYSDK_OFFSET(0x3C3ED40)
#define RPG_GAMECORE_LEVELDIMENSIONBAKEDINFO_GET_ISVALID_OFFSET UNITYSDK_OFFSET(0x2FB0F40)
#define RPG_GAMECORE_LEVELDIMENSIONBAKEDINFO_GET_NAVMESHLARGEMONSTER_OFFSET UNITYSDK_OFFSET(0x3C3EDA0)
#define RPG_GAMECORE_LEVELDIMENSIONBAKEDINFO_GET_OFFSET_OFFSET UNITYSDK_OFFSET(0xACE0)
#define RPG_GAMECORE_LEVELDIMENSIONBAKEDINFO_GET_POOL_OFFSET UNITYSDK_OFFSET(0x1D30)
#define RPG_GAMECORE_LEVELDIMENSIONBAKEDINFO_GET_SUBMAPENTITYLIST_OFFSET UNITYSDK_OFFSET(0x3C3EE10)
#define RPG_GAMECORE_LEVELDIMENSIONBAKEDINFO_INIT_OFFSET UNITYSDK_OFFSET(0x14160)
#define RPG_GAMECORE_LEVELDIMENSIONBAKEDINFO_OP_EQUALITY_OFFSET UNITYSDK_OFFSET(0x1D7A8850)
#define RPG_GAMECORE_LEVELDIMENSIONBAKEDINFO_OP_IMPLICIT_OFFSET UNITYSDK_OFFSET(0x1D7A8BA0)
#define RPG_GAMECORE_LEVELDIMENSIONBAKEDINFO_OP_INEQUALITY_OFFSET UNITYSDK_OFFSET(0x1D7A8940)
#define RPG_GAMECORE_LEVELDIMENSIONBAKEDINFO_OP_LOGICALNOT_OFFSET UNITYSDK_OFFSET(0x1D7A8C50)
#define RPG_GAMECORE_LEVELDIMENSIONBAKEDINFO_SET_GROUPLIST_OFFSET UNITYSDK_OFFSET(0x3C3ECF0)
#define RPG_GAMECORE_LEVELDIMENSIONBAKEDINFO_SET_ID_OFFSET UNITYSDK_OFFSET(0x3C3ED50)
#define RPG_GAMECORE_LEVELDIMENSIONBAKEDINFO_SET_NAVMESHLARGEMONSTER_OFFSET UNITYSDK_OFFSET(0x3C3EDC0)
#define RPG_GAMECORE_LEVELDIMENSIONBAKEDINFO_SET_SUBMAPENTITYLIST_OFFSET UNITYSDK_OFFSET(0x3C3EE30)

namespace RPG::GameCore
{
	inline static constexpr unsigned int LevelDimensionBakedInfo_TypeDefinitionIndex = 10710;

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
