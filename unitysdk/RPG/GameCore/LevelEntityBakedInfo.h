#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/GHNHKDMEDJI.h"
#include "unitysdk/RPG/GameCore/ConfigDataPoolListUnmanaged_1.h"
class LELCKJPOPAO;
namespace System { class Object; }

#define RPG_GAMECORE_LEVELENTITYBAKEDINFO_DISPOSE_OFFSET UNITYSDK_OFFSET(0x3C2D5A0)
#define RPG_GAMECORE_LEVELENTITYBAKEDINFO_EQUALS_1_OFFSET UNITYSDK_OFFSET(0x3C3EEA0)
#define RPG_GAMECORE_LEVELENTITYBAKEDINFO_EQUALS_OFFSET UNITYSDK_OFFSET(0x2F86B50)
#define RPG_GAMECORE_LEVELENTITYBAKEDINFO_GETHASHCODE_OFFSET UNITYSDK_OFFSET(0x2FB1140)
#define RPG_GAMECORE_LEVELENTITYBAKEDINFO_GET_ARTREGIONIDLIST_OFFSET UNITYSDK_OFFSET(0x3C3EEB0)
#define RPG_GAMECORE_LEVELENTITYBAKEDINFO_GET_ID_OFFSET UNITYSDK_OFFSET(0x3C3EF20)
#define RPG_GAMECORE_LEVELENTITYBAKEDINFO_GET_ISVALID_OFFSET UNITYSDK_OFFSET(0x2FB0F40)
#define RPG_GAMECORE_LEVELENTITYBAKEDINFO_GET_NAVMAP_OFFSET UNITYSDK_OFFSET(0x3C3EF80)
#define RPG_GAMECORE_LEVELENTITYBAKEDINFO_GET_OFFSET_OFFSET UNITYSDK_OFFSET(0xACE0)
#define RPG_GAMECORE_LEVELENTITYBAKEDINFO_GET_POOL_OFFSET UNITYSDK_OFFSET(0x1D30)
#define RPG_GAMECORE_LEVELENTITYBAKEDINFO_GET_REGIONID_OFFSET UNITYSDK_OFFSET(0x3C3EFF0)
#define RPG_GAMECORE_LEVELENTITYBAKEDINFO_INIT_OFFSET UNITYSDK_OFFSET(0x14160)
#define RPG_GAMECORE_LEVELENTITYBAKEDINFO_OP_EQUALITY_OFFSET UNITYSDK_OFFSET(0x1D7AB060)
#define RPG_GAMECORE_LEVELENTITYBAKEDINFO_OP_IMPLICIT_OFFSET UNITYSDK_OFFSET(0x1D7AB3B0)
#define RPG_GAMECORE_LEVELENTITYBAKEDINFO_OP_INEQUALITY_OFFSET UNITYSDK_OFFSET(0x1D7AB150)
#define RPG_GAMECORE_LEVELENTITYBAKEDINFO_OP_LOGICALNOT_OFFSET UNITYSDK_OFFSET(0x1D7AB460)
#define RPG_GAMECORE_LEVELENTITYBAKEDINFO_SET_ARTREGIONIDLIST_OFFSET UNITYSDK_OFFSET(0x3C3EED0)
#define RPG_GAMECORE_LEVELENTITYBAKEDINFO_SET_ID_OFFSET UNITYSDK_OFFSET(0x3C3EF30)
#define RPG_GAMECORE_LEVELENTITYBAKEDINFO_SET_NAVMAP_OFFSET UNITYSDK_OFFSET(0x3C3EFA0)
#define RPG_GAMECORE_LEVELENTITYBAKEDINFO_SET_REGIONID_OFFSET UNITYSDK_OFFSET(0x3C3F000)

namespace RPG::GameCore
{
	struct alignas(8) LevelEntityBakedInfo
	{
		::LELCKJPOPAO* _Pool; // 0x10
		::System::UInt32 _Offset; // 0x18
		::System::Void Init(::LELCKJPOPAO* a1, ::System::UInt32 a2)
		{
			return ((::System::Void(*)(::PVOID, ::LELCKJPOPAO*, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_GAMECORE_LEVELENTITYBAKEDINFO_INIT_OFFSET))(this, a1, a2);
		}

		::System::Boolean get_IsValid()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_LEVELENTITYBAKEDINFO_GET_ISVALID_OFFSET))(this);
		}

		::System::UInt32 get_Offset()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_LEVELENTITYBAKEDINFO_GET_OFFSET_OFFSET))(this);
		}

		::LELCKJPOPAO* get_Pool()
		{
			return ((::LELCKJPOPAO*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_LEVELENTITYBAKEDINFO_GET_POOL_OFFSET))(this);
		}

		::System::Void Dispose()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_LEVELENTITYBAKEDINFO_DISPOSE_OFFSET))(this);
		}

		/*
		static ::System::Boolean op_Equality(::RPG::GameCore::LevelEntityBakedInfo a1, ::System::Object* a2)
		{
			return ((::System::Boolean(*)(::RPG::GameCore::LevelEntityBakedInfo, ::System::Object*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_LEVELENTITYBAKEDINFO_OP_EQUALITY_OFFSET))(a1, a2);
		}
		*/

		/*
		static ::System::Boolean op_Inequality(::RPG::GameCore::LevelEntityBakedInfo a1, ::System::Object* a2)
		{
			return ((::System::Boolean(*)(::RPG::GameCore::LevelEntityBakedInfo, ::System::Object*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_LEVELENTITYBAKEDINFO_OP_INEQUALITY_OFFSET))(a1, a2);
		}
		*/

		/*
		::System::Boolean Equals(::RPG::GameCore::LevelEntityBakedInfo a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::RPG::GameCore::LevelEntityBakedInfo))((::PBYTE)hIl2Cpp + RPG_GAMECORE_LEVELENTITYBAKEDINFO_EQUALS_OFFSET))(this, a1);
		}
		*/

		::System::Boolean Equals_1(::System::Object* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_LEVELENTITYBAKEDINFO_EQUALS_1_OFFSET))(this, a1);
		}

		::System::Int32 GetHashCode()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_LEVELENTITYBAKEDINFO_GETHASHCODE_OFFSET))(this);
		}

		/*
		static ::System::Boolean op_Implicit(::RPG::GameCore::LevelEntityBakedInfo a1)
		{
			return ((::System::Boolean(*)(::RPG::GameCore::LevelEntityBakedInfo))((::PBYTE)hIl2Cpp + RPG_GAMECORE_LEVELENTITYBAKEDINFO_OP_IMPLICIT_OFFSET))(a1);
		}
		*/

		/*
		static ::System::Boolean op_LogicalNot(::RPG::GameCore::LevelEntityBakedInfo a1)
		{
			return ((::System::Boolean(*)(::RPG::GameCore::LevelEntityBakedInfo))((::PBYTE)hIl2Cpp + RPG_GAMECORE_LEVELENTITYBAKEDINFO_OP_LOGICALNOT_OFFSET))(a1);
		}
		*/

		::RPG::GameCore::ConfigDataPoolListUnmanaged_1<::System::UInt32> get_ArtRegionIDList()
		{
			return ((::RPG::GameCore::ConfigDataPoolListUnmanaged_1<::System::UInt32>(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_LEVELENTITYBAKEDINFO_GET_ARTREGIONIDLIST_OFFSET))(this);
		}

		::System::Void set_ArtRegionIDList(::RPG::GameCore::ConfigDataPoolListUnmanaged_1<::System::UInt32> a1)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::ConfigDataPoolListUnmanaged_1<::System::UInt32>))((::PBYTE)hIl2Cpp + RPG_GAMECORE_LEVELENTITYBAKEDINFO_SET_ARTREGIONIDLIST_OFFSET))(this, a1);
		}

		::System::UInt32 get_ID()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_LEVELENTITYBAKEDINFO_GET_ID_OFFSET))(this);
		}

		::System::Void set_ID(::System::UInt32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_GAMECORE_LEVELENTITYBAKEDINFO_SET_ID_OFFSET))(this, a1);
		}

		::GHNHKDMEDJI get_NavMap()
		{
			return ((::GHNHKDMEDJI(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_LEVELENTITYBAKEDINFO_GET_NAVMAP_OFFSET))(this);
		}

		::System::Void set_NavMap(::GHNHKDMEDJI a1)
		{
			return ((::System::Void(*)(::PVOID, ::GHNHKDMEDJI))((::PBYTE)hIl2Cpp + RPG_GAMECORE_LEVELENTITYBAKEDINFO_SET_NAVMAP_OFFSET))(this, a1);
		}

		::System::UInt32 get_RegionID()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_LEVELENTITYBAKEDINFO_GET_REGIONID_OFFSET))(this);
		}

		::System::Void set_RegionID(::System::UInt32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_GAMECORE_LEVELENTITYBAKEDINFO_SET_REGIONID_OFFSET))(this, a1);
		}

	};
}
