#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/ConfigDataPoolListUnmanaged_1.h"
class LELCKJPOPAO;
namespace System { class Object; }

#define RPG_GAMECORE_LEVELNPCBAKEDINFO_DISPOSE_OFFSET UNITYSDK_OFFSET(0x7F0900)
#define RPG_GAMECORE_LEVELNPCBAKEDINFO_EQUALS_1_OFFSET UNITYSDK_OFFSET(0x3F03250)
#define RPG_GAMECORE_LEVELNPCBAKEDINFO_EQUALS_OFFSET UNITYSDK_OFFSET(0xCB40)
#define RPG_GAMECORE_LEVELNPCBAKEDINFO_GETHASHCODE_OFFSET UNITYSDK_OFFSET(0x7F6B30)
#define RPG_GAMECORE_LEVELNPCBAKEDINFO_GET_CONNECTWITHSUBMISSIONIDLIST_OFFSET UNITYSDK_OFFSET(0x3F03260)
#define RPG_GAMECORE_LEVELNPCBAKEDINFO_GET_ID_OFFSET UNITYSDK_OFFSET(0x3F032D0)
#define RPG_GAMECORE_LEVELNPCBAKEDINFO_GET_ISVALID_OFFSET UNITYSDK_OFFSET(0x7F6A70)
#define RPG_GAMECORE_LEVELNPCBAKEDINFO_GET_OFFSET_OFFSET UNITYSDK_OFFSET(0xC8F0)
#define RPG_GAMECORE_LEVELNPCBAKEDINFO_GET_POOL_OFFSET UNITYSDK_OFFSET(0x6C8DB0)
#define RPG_GAMECORE_LEVELNPCBAKEDINFO_INIT_OFFSET UNITYSDK_OFFSET(0x6513E0)
#define RPG_GAMECORE_LEVELNPCBAKEDINFO_OP_EQUALITY_OFFSET UNITYSDK_OFFSET(0x1D939230)
#define RPG_GAMECORE_LEVELNPCBAKEDINFO_OP_IMPLICIT_OFFSET UNITYSDK_OFFSET(0x1D939470)
#define RPG_GAMECORE_LEVELNPCBAKEDINFO_OP_INEQUALITY_OFFSET UNITYSDK_OFFSET(0x1D939340)
#define RPG_GAMECORE_LEVELNPCBAKEDINFO_OP_LOGICALNOT_OFFSET UNITYSDK_OFFSET(0x1D939520)
#define RPG_GAMECORE_LEVELNPCBAKEDINFO_SET_CONNECTWITHSUBMISSIONIDLIST_OFFSET UNITYSDK_OFFSET(0x3F03280)
#define RPG_GAMECORE_LEVELNPCBAKEDINFO_SET_ID_OFFSET UNITYSDK_OFFSET(0x3F032E0)

namespace RPG::GameCore
{
	inline static constexpr unsigned int LevelNPCBakedInfo_TypeDefinitionIndex = 10731;

	struct alignas(8) LevelNPCBakedInfo
	{
		::LELCKJPOPAO* _Pool; // 0x10
		::System::UInt32 _Offset; // 0x18
		::System::Void Init(::LELCKJPOPAO* a1, ::System::UInt32 a2)
		{
			return ((::System::Void(*)(::PVOID, ::LELCKJPOPAO*, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_GAMECORE_LEVELNPCBAKEDINFO_INIT_OFFSET))(this, a1, a2);
		}

		::System::Boolean get_IsValid()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_LEVELNPCBAKEDINFO_GET_ISVALID_OFFSET))(this);
		}

		::System::UInt32 get_Offset()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_LEVELNPCBAKEDINFO_GET_OFFSET_OFFSET))(this);
		}

		::LELCKJPOPAO* get_Pool()
		{
			return ((::LELCKJPOPAO*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_LEVELNPCBAKEDINFO_GET_POOL_OFFSET))(this);
		}

		::System::Void Dispose()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_LEVELNPCBAKEDINFO_DISPOSE_OFFSET))(this);
		}

		/*
		static ::System::Boolean op_Equality(::RPG::GameCore::LevelNPCBakedInfo a1, ::System::Object* a2)
		{
			return ((::System::Boolean(*)(::RPG::GameCore::LevelNPCBakedInfo, ::System::Object*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_LEVELNPCBAKEDINFO_OP_EQUALITY_OFFSET))(a1, a2);
		}
		*/

		/*
		static ::System::Boolean op_Inequality(::RPG::GameCore::LevelNPCBakedInfo a1, ::System::Object* a2)
		{
			return ((::System::Boolean(*)(::RPG::GameCore::LevelNPCBakedInfo, ::System::Object*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_LEVELNPCBAKEDINFO_OP_INEQUALITY_OFFSET))(a1, a2);
		}
		*/

		/*
		::System::Boolean Equals(::RPG::GameCore::LevelNPCBakedInfo a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::RPG::GameCore::LevelNPCBakedInfo))((::PBYTE)hIl2Cpp + RPG_GAMECORE_LEVELNPCBAKEDINFO_EQUALS_OFFSET))(this, a1);
		}
		*/

		::System::Boolean Equals_1(::System::Object* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_LEVELNPCBAKEDINFO_EQUALS_1_OFFSET))(this, a1);
		}

		::System::Int32 GetHashCode()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_LEVELNPCBAKEDINFO_GETHASHCODE_OFFSET))(this);
		}

		/*
		static ::System::Boolean op_Implicit(::RPG::GameCore::LevelNPCBakedInfo a1)
		{
			return ((::System::Boolean(*)(::RPG::GameCore::LevelNPCBakedInfo))((::PBYTE)hIl2Cpp + RPG_GAMECORE_LEVELNPCBAKEDINFO_OP_IMPLICIT_OFFSET))(a1);
		}
		*/

		/*
		static ::System::Boolean op_LogicalNot(::RPG::GameCore::LevelNPCBakedInfo a1)
		{
			return ((::System::Boolean(*)(::RPG::GameCore::LevelNPCBakedInfo))((::PBYTE)hIl2Cpp + RPG_GAMECORE_LEVELNPCBAKEDINFO_OP_LOGICALNOT_OFFSET))(a1);
		}
		*/

		::RPG::GameCore::ConfigDataPoolListUnmanaged_1<::System::UInt32> get_ConnectWithSubMissionIDList()
		{
			return ((::RPG::GameCore::ConfigDataPoolListUnmanaged_1<::System::UInt32>(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_LEVELNPCBAKEDINFO_GET_CONNECTWITHSUBMISSIONIDLIST_OFFSET))(this);
		}

		::System::Void set_ConnectWithSubMissionIDList(::RPG::GameCore::ConfigDataPoolListUnmanaged_1<::System::UInt32> a1)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::ConfigDataPoolListUnmanaged_1<::System::UInt32>))((::PBYTE)hIl2Cpp + RPG_GAMECORE_LEVELNPCBAKEDINFO_SET_CONNECTWITHSUBMISSIONIDLIST_OFFSET))(this, a1);
		}

		::System::UInt32 get_ID()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_LEVELNPCBAKEDINFO_GET_ID_OFFSET))(this);
		}

		::System::Void set_ID(::System::UInt32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_GAMECORE_LEVELNPCBAKEDINFO_SET_ID_OFFSET))(this, a1);
		}

	};
}
