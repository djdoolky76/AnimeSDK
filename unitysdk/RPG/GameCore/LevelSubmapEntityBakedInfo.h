#pragma once
#include "unitysdk/unitysdk.h"
class LELCKJPOPAO;
namespace System { class Object; }

#define RPG_GAMECORE_LEVELSUBMAPENTITYBAKEDINFO_DISPOSE_OFFSET UNITYSDK_OFFSET(0x7F0900)
#define RPG_GAMECORE_LEVELSUBMAPENTITYBAKEDINFO_EQUALS_1_OFFSET UNITYSDK_OFFSET(0x3F47F80)
#define RPG_GAMECORE_LEVELSUBMAPENTITYBAKEDINFO_EQUALS_OFFSET UNITYSDK_OFFSET(0xCB40)
#define RPG_GAMECORE_LEVELSUBMAPENTITYBAKEDINFO_GETHASHCODE_OFFSET UNITYSDK_OFFSET(0x7F6B30)
#define RPG_GAMECORE_LEVELSUBMAPENTITYBAKEDINFO_GET_GROUPID_OFFSET UNITYSDK_OFFSET(0x3F47F90)
#define RPG_GAMECORE_LEVELSUBMAPENTITYBAKEDINFO_GET_INSTANCEID_OFFSET UNITYSDK_OFFSET(0x3F47FF0)
#define RPG_GAMECORE_LEVELSUBMAPENTITYBAKEDINFO_GET_ISVALID_OFFSET UNITYSDK_OFFSET(0x7F6A70)
#define RPG_GAMECORE_LEVELSUBMAPENTITYBAKEDINFO_GET_OFFSET_OFFSET UNITYSDK_OFFSET(0xC8F0)
#define RPG_GAMECORE_LEVELSUBMAPENTITYBAKEDINFO_GET_POOL_OFFSET UNITYSDK_OFFSET(0x6C8DB0)
#define RPG_GAMECORE_LEVELSUBMAPENTITYBAKEDINFO_GET_SUBMAPID_OFFSET UNITYSDK_OFFSET(0x3F48050)
#define RPG_GAMECORE_LEVELSUBMAPENTITYBAKEDINFO_INIT_OFFSET UNITYSDK_OFFSET(0x6513E0)
#define RPG_GAMECORE_LEVELSUBMAPENTITYBAKEDINFO_OP_EQUALITY_OFFSET UNITYSDK_OFFSET(0x1F24FD70)
#define RPG_GAMECORE_LEVELSUBMAPENTITYBAKEDINFO_OP_IMPLICIT_OFFSET UNITYSDK_OFFSET(0x1F24FFB0)
#define RPG_GAMECORE_LEVELSUBMAPENTITYBAKEDINFO_OP_INEQUALITY_OFFSET UNITYSDK_OFFSET(0x1F24FE80)
#define RPG_GAMECORE_LEVELSUBMAPENTITYBAKEDINFO_OP_LOGICALNOT_OFFSET UNITYSDK_OFFSET(0x1F250060)
#define RPG_GAMECORE_LEVELSUBMAPENTITYBAKEDINFO_SET_GROUPID_OFFSET UNITYSDK_OFFSET(0x3F47FA0)
#define RPG_GAMECORE_LEVELSUBMAPENTITYBAKEDINFO_SET_INSTANCEID_OFFSET UNITYSDK_OFFSET(0x3F48000)
#define RPG_GAMECORE_LEVELSUBMAPENTITYBAKEDINFO_SET_SUBMAPID_OFFSET UNITYSDK_OFFSET(0x3F48060)

namespace RPG::GameCore
{
	inline static constexpr unsigned int LevelSubmapEntityBakedInfo_TypeDefinitionIndex = 10744;

	struct alignas(8) LevelSubmapEntityBakedInfo
	{
		::LELCKJPOPAO* _Pool; // 0x10
		::System::UInt32 _Offset; // 0x18
		::System::Void Init(::LELCKJPOPAO* a1, ::System::UInt32 a2)
		{
			return ((::System::Void(*)(::PVOID, ::LELCKJPOPAO*, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_GAMECORE_LEVELSUBMAPENTITYBAKEDINFO_INIT_OFFSET))(this, a1, a2);
		}

		::System::Boolean get_IsValid()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_LEVELSUBMAPENTITYBAKEDINFO_GET_ISVALID_OFFSET))(this);
		}

		::System::UInt32 get_Offset()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_LEVELSUBMAPENTITYBAKEDINFO_GET_OFFSET_OFFSET))(this);
		}

		::LELCKJPOPAO* get_Pool()
		{
			return ((::LELCKJPOPAO*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_LEVELSUBMAPENTITYBAKEDINFO_GET_POOL_OFFSET))(this);
		}

		::System::Void Dispose()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_LEVELSUBMAPENTITYBAKEDINFO_DISPOSE_OFFSET))(this);
		}

		/*
		static ::System::Boolean op_Equality(::RPG::GameCore::LevelSubmapEntityBakedInfo a1, ::System::Object* a2)
		{
			return ((::System::Boolean(*)(::RPG::GameCore::LevelSubmapEntityBakedInfo, ::System::Object*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_LEVELSUBMAPENTITYBAKEDINFO_OP_EQUALITY_OFFSET))(a1, a2);
		}
		*/

		/*
		static ::System::Boolean op_Inequality(::RPG::GameCore::LevelSubmapEntityBakedInfo a1, ::System::Object* a2)
		{
			return ((::System::Boolean(*)(::RPG::GameCore::LevelSubmapEntityBakedInfo, ::System::Object*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_LEVELSUBMAPENTITYBAKEDINFO_OP_INEQUALITY_OFFSET))(a1, a2);
		}
		*/

		/*
		::System::Boolean Equals(::RPG::GameCore::LevelSubmapEntityBakedInfo a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::RPG::GameCore::LevelSubmapEntityBakedInfo))((::PBYTE)hIl2Cpp + RPG_GAMECORE_LEVELSUBMAPENTITYBAKEDINFO_EQUALS_OFFSET))(this, a1);
		}
		*/

		::System::Boolean Equals_1(::System::Object* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_LEVELSUBMAPENTITYBAKEDINFO_EQUALS_1_OFFSET))(this, a1);
		}

		::System::Int32 GetHashCode()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_LEVELSUBMAPENTITYBAKEDINFO_GETHASHCODE_OFFSET))(this);
		}

		/*
		static ::System::Boolean op_Implicit(::RPG::GameCore::LevelSubmapEntityBakedInfo a1)
		{
			return ((::System::Boolean(*)(::RPG::GameCore::LevelSubmapEntityBakedInfo))((::PBYTE)hIl2Cpp + RPG_GAMECORE_LEVELSUBMAPENTITYBAKEDINFO_OP_IMPLICIT_OFFSET))(a1);
		}
		*/

		/*
		static ::System::Boolean op_LogicalNot(::RPG::GameCore::LevelSubmapEntityBakedInfo a1)
		{
			return ((::System::Boolean(*)(::RPG::GameCore::LevelSubmapEntityBakedInfo))((::PBYTE)hIl2Cpp + RPG_GAMECORE_LEVELSUBMAPENTITYBAKEDINFO_OP_LOGICALNOT_OFFSET))(a1);
		}
		*/

		::System::UInt32 get_GroupID()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_LEVELSUBMAPENTITYBAKEDINFO_GET_GROUPID_OFFSET))(this);
		}

		::System::Void set_GroupID(::System::UInt32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_GAMECORE_LEVELSUBMAPENTITYBAKEDINFO_SET_GROUPID_OFFSET))(this, a1);
		}

		::System::UInt32 get_InstanceID()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_LEVELSUBMAPENTITYBAKEDINFO_GET_INSTANCEID_OFFSET))(this);
		}

		::System::Void set_InstanceID(::System::UInt32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_GAMECORE_LEVELSUBMAPENTITYBAKEDINFO_SET_INSTANCEID_OFFSET))(this, a1);
		}

		::System::UInt32 get_SubmapID()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_LEVELSUBMAPENTITYBAKEDINFO_GET_SUBMAPID_OFFSET))(this);
		}

		::System::Void set_SubmapID(::System::UInt32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_GAMECORE_LEVELSUBMAPENTITYBAKEDINFO_SET_SUBMAPID_OFFSET))(this, a1);
		}

	};
}
