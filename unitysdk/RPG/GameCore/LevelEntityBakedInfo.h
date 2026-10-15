#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/GHNHKDMEDJI.h"
#include "unitysdk/RPG/GameCore/ConfigDataPoolListUnmanaged_1.h"
class LELCKJPOPAO;
namespace System { class Object; }

#define RPG_GAMECORE_LEVELENTITYBAKEDINFO_DISPOSE_OFFSET UNITYSDK_OFFSET(0x3C2DCD0)
#define RPG_GAMECORE_LEVELENTITYBAKEDINFO_EQUALS_1_OFFSET UNITYSDK_OFFSET(0x3C3F5D0)
#define RPG_GAMECORE_LEVELENTITYBAKEDINFO_EQUALS_OFFSET UNITYSDK_OFFSET(0x2F874F0)
#define RPG_GAMECORE_LEVELENTITYBAKEDINFO_GETHASHCODE_OFFSET UNITYSDK_OFFSET(0x2FB1A20)
#define RPG_GAMECORE_LEVELENTITYBAKEDINFO_GET_ARTREGIONIDLIST_OFFSET UNITYSDK_OFFSET(0x3C3F5E0)
#define RPG_GAMECORE_LEVELENTITYBAKEDINFO_GET_ID_OFFSET UNITYSDK_OFFSET(0x3C3F650)
#define RPG_GAMECORE_LEVELENTITYBAKEDINFO_GET_ISVALID_OFFSET UNITYSDK_OFFSET(0x2FB1820)
#define RPG_GAMECORE_LEVELENTITYBAKEDINFO_GET_NAVMAP_OFFSET UNITYSDK_OFFSET(0x3C3F6B0)
#define RPG_GAMECORE_LEVELENTITYBAKEDINFO_GET_OFFSET_OFFSET UNITYSDK_OFFSET(0xACE0)
#define RPG_GAMECORE_LEVELENTITYBAKEDINFO_GET_POOL_OFFSET UNITYSDK_OFFSET(0x1D30)
#define RPG_GAMECORE_LEVELENTITYBAKEDINFO_GET_REGIONID_OFFSET UNITYSDK_OFFSET(0x3C3F720)
#define RPG_GAMECORE_LEVELENTITYBAKEDINFO_INIT_OFFSET UNITYSDK_OFFSET(0x140C0)
#define RPG_GAMECORE_LEVELENTITYBAKEDINFO_OP_EQUALITY_OFFSET UNITYSDK_OFFSET(0x1D77D5E0)
#define RPG_GAMECORE_LEVELENTITYBAKEDINFO_OP_IMPLICIT_OFFSET UNITYSDK_OFFSET(0x1D77D930)
#define RPG_GAMECORE_LEVELENTITYBAKEDINFO_OP_INEQUALITY_OFFSET UNITYSDK_OFFSET(0x1D77D6D0)
#define RPG_GAMECORE_LEVELENTITYBAKEDINFO_OP_LOGICALNOT_OFFSET UNITYSDK_OFFSET(0x1D77D9E0)
#define RPG_GAMECORE_LEVELENTITYBAKEDINFO_SET_ARTREGIONIDLIST_OFFSET UNITYSDK_OFFSET(0x3C3F600)
#define RPG_GAMECORE_LEVELENTITYBAKEDINFO_SET_ID_OFFSET UNITYSDK_OFFSET(0x3C3F660)
#define RPG_GAMECORE_LEVELENTITYBAKEDINFO_SET_NAVMAP_OFFSET UNITYSDK_OFFSET(0x3C3F6D0)
#define RPG_GAMECORE_LEVELENTITYBAKEDINFO_SET_REGIONID_OFFSET UNITYSDK_OFFSET(0x3C3F730)

namespace RPG::GameCore
{
	inline static constexpr unsigned int LevelEntityBakedInfo_TypeDefinitionIndex = 10711;

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
