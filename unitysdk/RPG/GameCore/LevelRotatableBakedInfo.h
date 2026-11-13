#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/ConfigDataPoolListPoolMember_1.h"
#include "unitysdk/RPG/GameCore/LevelRotatableRegionBakedInfo.h"
class LELCKJPOPAO;
namespace System { class Object; }

#define RPG_GAMECORE_LEVELROTATABLEBAKEDINFO_DISPOSE_OFFSET UNITYSDK_OFFSET(0x7F0900)
#define RPG_GAMECORE_LEVELROTATABLEBAKEDINFO_EQUALS_1_OFFSET UNITYSDK_OFFSET(0x3F47D30)
#define RPG_GAMECORE_LEVELROTATABLEBAKEDINFO_EQUALS_OFFSET UNITYSDK_OFFSET(0xCB40)
#define RPG_GAMECORE_LEVELROTATABLEBAKEDINFO_GETHASHCODE_OFFSET UNITYSDK_OFFSET(0x7F6B30)
#define RPG_GAMECORE_LEVELROTATABLEBAKEDINFO_GET_ISVALID_OFFSET UNITYSDK_OFFSET(0x7F6A70)
#define RPG_GAMECORE_LEVELROTATABLEBAKEDINFO_GET_OFFSET_OFFSET UNITYSDK_OFFSET(0xC8F0)
#define RPG_GAMECORE_LEVELROTATABLEBAKEDINFO_GET_POOL_OFFSET UNITYSDK_OFFSET(0x6C8DB0)
#define RPG_GAMECORE_LEVELROTATABLEBAKEDINFO_GET_ROTATABLEREGIONLIST_OFFSET UNITYSDK_OFFSET(0x3F47D40)
#define RPG_GAMECORE_LEVELROTATABLEBAKEDINFO_INIT_OFFSET UNITYSDK_OFFSET(0x6513E0)
#define RPG_GAMECORE_LEVELROTATABLEBAKEDINFO_OP_EQUALITY_OFFSET UNITYSDK_OFFSET(0x1F24DA30)
#define RPG_GAMECORE_LEVELROTATABLEBAKEDINFO_OP_IMPLICIT_OFFSET UNITYSDK_OFFSET(0x1F24DC70)
#define RPG_GAMECORE_LEVELROTATABLEBAKEDINFO_OP_INEQUALITY_OFFSET UNITYSDK_OFFSET(0x1F24DB40)
#define RPG_GAMECORE_LEVELROTATABLEBAKEDINFO_OP_LOGICALNOT_OFFSET UNITYSDK_OFFSET(0x1F24DD20)
#define RPG_GAMECORE_LEVELROTATABLEBAKEDINFO_SET_ROTATABLEREGIONLIST_OFFSET UNITYSDK_OFFSET(0x3F47D60)

namespace RPG::GameCore
{
	inline static constexpr unsigned int LevelRotatableBakedInfo_TypeDefinitionIndex = 10741;

	struct alignas(8) LevelRotatableBakedInfo
	{
		::LELCKJPOPAO* _Pool; // 0x10
		::System::UInt32 _Offset; // 0x18
		::System::Void Init(::LELCKJPOPAO* a1, ::System::UInt32 a2)
		{
			return ((::System::Void(*)(::PVOID, ::LELCKJPOPAO*, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_GAMECORE_LEVELROTATABLEBAKEDINFO_INIT_OFFSET))(this, a1, a2);
		}

		::System::Boolean get_IsValid()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_LEVELROTATABLEBAKEDINFO_GET_ISVALID_OFFSET))(this);
		}

		::System::UInt32 get_Offset()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_LEVELROTATABLEBAKEDINFO_GET_OFFSET_OFFSET))(this);
		}

		::LELCKJPOPAO* get_Pool()
		{
			return ((::LELCKJPOPAO*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_LEVELROTATABLEBAKEDINFO_GET_POOL_OFFSET))(this);
		}

		::System::Void Dispose()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_LEVELROTATABLEBAKEDINFO_DISPOSE_OFFSET))(this);
		}

		/*
		static ::System::Boolean op_Equality(::RPG::GameCore::LevelRotatableBakedInfo a1, ::System::Object* a2)
		{
			return ((::System::Boolean(*)(::RPG::GameCore::LevelRotatableBakedInfo, ::System::Object*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_LEVELROTATABLEBAKEDINFO_OP_EQUALITY_OFFSET))(a1, a2);
		}
		*/

		/*
		static ::System::Boolean op_Inequality(::RPG::GameCore::LevelRotatableBakedInfo a1, ::System::Object* a2)
		{
			return ((::System::Boolean(*)(::RPG::GameCore::LevelRotatableBakedInfo, ::System::Object*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_LEVELROTATABLEBAKEDINFO_OP_INEQUALITY_OFFSET))(a1, a2);
		}
		*/

		/*
		::System::Boolean Equals(::RPG::GameCore::LevelRotatableBakedInfo a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::RPG::GameCore::LevelRotatableBakedInfo))((::PBYTE)hIl2Cpp + RPG_GAMECORE_LEVELROTATABLEBAKEDINFO_EQUALS_OFFSET))(this, a1);
		}
		*/

		::System::Boolean Equals_1(::System::Object* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_LEVELROTATABLEBAKEDINFO_EQUALS_1_OFFSET))(this, a1);
		}

		::System::Int32 GetHashCode()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_LEVELROTATABLEBAKEDINFO_GETHASHCODE_OFFSET))(this);
		}

		/*
		static ::System::Boolean op_Implicit(::RPG::GameCore::LevelRotatableBakedInfo a1)
		{
			return ((::System::Boolean(*)(::RPG::GameCore::LevelRotatableBakedInfo))((::PBYTE)hIl2Cpp + RPG_GAMECORE_LEVELROTATABLEBAKEDINFO_OP_IMPLICIT_OFFSET))(a1);
		}
		*/

		/*
		static ::System::Boolean op_LogicalNot(::RPG::GameCore::LevelRotatableBakedInfo a1)
		{
			return ((::System::Boolean(*)(::RPG::GameCore::LevelRotatableBakedInfo))((::PBYTE)hIl2Cpp + RPG_GAMECORE_LEVELROTATABLEBAKEDINFO_OP_LOGICALNOT_OFFSET))(a1);
		}
		*/

		::RPG::GameCore::ConfigDataPoolListPoolMember_1<::RPG::GameCore::LevelRotatableRegionBakedInfo> get_RotatableRegionList()
		{
			return ((::RPG::GameCore::ConfigDataPoolListPoolMember_1<::RPG::GameCore::LevelRotatableRegionBakedInfo>(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_LEVELROTATABLEBAKEDINFO_GET_ROTATABLEREGIONLIST_OFFSET))(this);
		}

		::System::Void set_RotatableRegionList(::RPG::GameCore::ConfigDataPoolListPoolMember_1<::RPG::GameCore::LevelRotatableRegionBakedInfo> a1)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::ConfigDataPoolListPoolMember_1<::RPG::GameCore::LevelRotatableRegionBakedInfo>))((::PBYTE)hIl2Cpp + RPG_GAMECORE_LEVELROTATABLEBAKEDINFO_SET_ROTATABLEREGIONLIST_OFFSET))(this, a1);
		}

	};
}
