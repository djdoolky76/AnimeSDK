#pragma once
#include "unitysdk/unitysdk.h"
class LELCKJPOPAO;
namespace RPG::GameCore { class LevelNavNodeConditionInfos; }
namespace System { class Object; }

#define RPG_GAMECORE_LEVELNAVNODEINNERTRANSITINFO_DISPOSE_OFFSET UNITYSDK_OFFSET(0x7F0900)
#define RPG_GAMECORE_LEVELNAVNODEINNERTRANSITINFO_EQUALS_1_OFFSET UNITYSDK_OFFSET(0x3F039A0)
#define RPG_GAMECORE_LEVELNAVNODEINNERTRANSITINFO_EQUALS_OFFSET UNITYSDK_OFFSET(0xCB40)
#define RPG_GAMECORE_LEVELNAVNODEINNERTRANSITINFO_GETHASHCODE_OFFSET UNITYSDK_OFFSET(0x7F6B30)
#define RPG_GAMECORE_LEVELNAVNODEINNERTRANSITINFO_GET_CONDITIONINFOS_OFFSET UNITYSDK_OFFSET(0x3F039B0)
#define RPG_GAMECORE_LEVELNAVNODEINNERTRANSITINFO_GET_FROMID_OFFSET UNITYSDK_OFFSET(0x3F03A10)
#define RPG_GAMECORE_LEVELNAVNODEINNERTRANSITINFO_GET_ISVALID_OFFSET UNITYSDK_OFFSET(0x7F6A70)
#define RPG_GAMECORE_LEVELNAVNODEINNERTRANSITINFO_GET_OFFSET_OFFSET UNITYSDK_OFFSET(0xC8F0)
#define RPG_GAMECORE_LEVELNAVNODEINNERTRANSITINFO_GET_POOL_OFFSET UNITYSDK_OFFSET(0x6C8DB0)
#define RPG_GAMECORE_LEVELNAVNODEINNERTRANSITINFO_GET_TOID_OFFSET UNITYSDK_OFFSET(0x3F03A70)
#define RPG_GAMECORE_LEVELNAVNODEINNERTRANSITINFO_INIT_OFFSET UNITYSDK_OFFSET(0x6513E0)
#define RPG_GAMECORE_LEVELNAVNODEINNERTRANSITINFO_OP_EQUALITY_OFFSET UNITYSDK_OFFSET(0x1D940630)
#define RPG_GAMECORE_LEVELNAVNODEINNERTRANSITINFO_OP_IMPLICIT_OFFSET UNITYSDK_OFFSET(0x1D940870)
#define RPG_GAMECORE_LEVELNAVNODEINNERTRANSITINFO_OP_INEQUALITY_OFFSET UNITYSDK_OFFSET(0x1D940740)
#define RPG_GAMECORE_LEVELNAVNODEINNERTRANSITINFO_OP_LOGICALNOT_OFFSET UNITYSDK_OFFSET(0x1D940920)
#define RPG_GAMECORE_LEVELNAVNODEINNERTRANSITINFO_SET_CONDITIONINFOS_OFFSET UNITYSDK_OFFSET(0x3F039C0)
#define RPG_GAMECORE_LEVELNAVNODEINNERTRANSITINFO_SET_FROMID_OFFSET UNITYSDK_OFFSET(0x3F03A20)
#define RPG_GAMECORE_LEVELNAVNODEINNERTRANSITINFO_SET_TOID_OFFSET UNITYSDK_OFFSET(0x3F03A80)

namespace RPG::GameCore
{
	inline static constexpr unsigned int LevelNavNodeInnerTransitInfo_TypeDefinitionIndex = 10737;

	struct alignas(8) LevelNavNodeInnerTransitInfo
	{
		::LELCKJPOPAO* _Pool; // 0x10
		::System::UInt32 _Offset; // 0x18
		::System::Void Init(::LELCKJPOPAO* a1, ::System::UInt32 a2)
		{
			return ((::System::Void(*)(::PVOID, ::LELCKJPOPAO*, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_GAMECORE_LEVELNAVNODEINNERTRANSITINFO_INIT_OFFSET))(this, a1, a2);
		}

		::System::Boolean get_IsValid()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_LEVELNAVNODEINNERTRANSITINFO_GET_ISVALID_OFFSET))(this);
		}

		::System::UInt32 get_Offset()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_LEVELNAVNODEINNERTRANSITINFO_GET_OFFSET_OFFSET))(this);
		}

		::LELCKJPOPAO* get_Pool()
		{
			return ((::LELCKJPOPAO*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_LEVELNAVNODEINNERTRANSITINFO_GET_POOL_OFFSET))(this);
		}

		::System::Void Dispose()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_LEVELNAVNODEINNERTRANSITINFO_DISPOSE_OFFSET))(this);
		}

		/*
		static ::System::Boolean op_Equality(::RPG::GameCore::LevelNavNodeInnerTransitInfo a1, ::System::Object* a2)
		{
			return ((::System::Boolean(*)(::RPG::GameCore::LevelNavNodeInnerTransitInfo, ::System::Object*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_LEVELNAVNODEINNERTRANSITINFO_OP_EQUALITY_OFFSET))(a1, a2);
		}
		*/

		/*
		static ::System::Boolean op_Inequality(::RPG::GameCore::LevelNavNodeInnerTransitInfo a1, ::System::Object* a2)
		{
			return ((::System::Boolean(*)(::RPG::GameCore::LevelNavNodeInnerTransitInfo, ::System::Object*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_LEVELNAVNODEINNERTRANSITINFO_OP_INEQUALITY_OFFSET))(a1, a2);
		}
		*/

		/*
		::System::Boolean Equals(::RPG::GameCore::LevelNavNodeInnerTransitInfo a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::RPG::GameCore::LevelNavNodeInnerTransitInfo))((::PBYTE)hIl2Cpp + RPG_GAMECORE_LEVELNAVNODEINNERTRANSITINFO_EQUALS_OFFSET))(this, a1);
		}
		*/

		::System::Boolean Equals_1(::System::Object* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_LEVELNAVNODEINNERTRANSITINFO_EQUALS_1_OFFSET))(this, a1);
		}

		::System::Int32 GetHashCode()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_LEVELNAVNODEINNERTRANSITINFO_GETHASHCODE_OFFSET))(this);
		}

		/*
		static ::System::Boolean op_Implicit(::RPG::GameCore::LevelNavNodeInnerTransitInfo a1)
		{
			return ((::System::Boolean(*)(::RPG::GameCore::LevelNavNodeInnerTransitInfo))((::PBYTE)hIl2Cpp + RPG_GAMECORE_LEVELNAVNODEINNERTRANSITINFO_OP_IMPLICIT_OFFSET))(a1);
		}
		*/

		/*
		static ::System::Boolean op_LogicalNot(::RPG::GameCore::LevelNavNodeInnerTransitInfo a1)
		{
			return ((::System::Boolean(*)(::RPG::GameCore::LevelNavNodeInnerTransitInfo))((::PBYTE)hIl2Cpp + RPG_GAMECORE_LEVELNAVNODEINNERTRANSITINFO_OP_LOGICALNOT_OFFSET))(a1);
		}
		*/

		::RPG::GameCore::LevelNavNodeConditionInfos* get_ConditionInfos()
		{
			return ((::RPG::GameCore::LevelNavNodeConditionInfos*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_LEVELNAVNODEINNERTRANSITINFO_GET_CONDITIONINFOS_OFFSET))(this);
		}

		::System::Void set_ConditionInfos(::RPG::GameCore::LevelNavNodeConditionInfos* a1)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::LevelNavNodeConditionInfos*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_LEVELNAVNODEINNERTRANSITINFO_SET_CONDITIONINFOS_OFFSET))(this, a1);
		}

		::System::UInt32 get_FromID()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_LEVELNAVNODEINNERTRANSITINFO_GET_FROMID_OFFSET))(this);
		}

		::System::Void set_FromID(::System::UInt32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_GAMECORE_LEVELNAVNODEINNERTRANSITINFO_SET_FROMID_OFFSET))(this, a1);
		}

		::System::UInt32 get_ToID()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_LEVELNAVNODEINNERTRANSITINFO_GET_TOID_OFFSET))(this);
		}

		::System::Void set_ToID(::System::UInt32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_GAMECORE_LEVELNAVNODEINNERTRANSITINFO_SET_TOID_OFFSET))(this, a1);
		}

	};
}
