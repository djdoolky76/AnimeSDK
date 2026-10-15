#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/ConfigDataPoolListPoolMember_1.h"
#include "unitysdk/RPG/GameCore/LevelNavNodeInnerConnectInfo.h"
#include "unitysdk/RPG/GameCore/LevelNavNodeInnerNodeInfo.h"
#include "unitysdk/RPG/GameCore/LevelNavNodeInnerTransitInfo.h"
class LELCKJPOPAO;
namespace System { class Object; }

#define RPG_GAMECORE_LEVELNAVNODEINNERGRAPHINFO_DISPOSE_OFFSET UNITYSDK_OFFSET(0x3C2D5A0)
#define RPG_GAMECORE_LEVELNAVNODEINNERGRAPHINFO_EQUALS_1_OFFSET UNITYSDK_OFFSET(0x3C3F540)
#define RPG_GAMECORE_LEVELNAVNODEINNERGRAPHINFO_EQUALS_OFFSET UNITYSDK_OFFSET(0x2F86B50)
#define RPG_GAMECORE_LEVELNAVNODEINNERGRAPHINFO_GETHASHCODE_OFFSET UNITYSDK_OFFSET(0x2FB1140)
#define RPG_GAMECORE_LEVELNAVNODEINNERGRAPHINFO_GET_CONNECTLIST_OFFSET UNITYSDK_OFFSET(0x3C3F550)
#define RPG_GAMECORE_LEVELNAVNODEINNERGRAPHINFO_GET_INNERNODELIST_OFFSET UNITYSDK_OFFSET(0x3C3F5C0)
#define RPG_GAMECORE_LEVELNAVNODEINNERGRAPHINFO_GET_INNERTRANSITLIST_OFFSET UNITYSDK_OFFSET(0x3C3F630)
#define RPG_GAMECORE_LEVELNAVNODEINNERGRAPHINFO_GET_ISVALID_OFFSET UNITYSDK_OFFSET(0x2FB0F40)
#define RPG_GAMECORE_LEVELNAVNODEINNERGRAPHINFO_GET_OFFSET_OFFSET UNITYSDK_OFFSET(0xACE0)
#define RPG_GAMECORE_LEVELNAVNODEINNERGRAPHINFO_GET_POOL_OFFSET UNITYSDK_OFFSET(0x1D30)
#define RPG_GAMECORE_LEVELNAVNODEINNERGRAPHINFO_INIT_OFFSET UNITYSDK_OFFSET(0x14160)
#define RPG_GAMECORE_LEVELNAVNODEINNERGRAPHINFO_OP_EQUALITY_OFFSET UNITYSDK_OFFSET(0x1D7BB590)
#define RPG_GAMECORE_LEVELNAVNODEINNERGRAPHINFO_OP_IMPLICIT_OFFSET UNITYSDK_OFFSET(0x1D7BB8E0)
#define RPG_GAMECORE_LEVELNAVNODEINNERGRAPHINFO_OP_INEQUALITY_OFFSET UNITYSDK_OFFSET(0x1D7BB680)
#define RPG_GAMECORE_LEVELNAVNODEINNERGRAPHINFO_OP_LOGICALNOT_OFFSET UNITYSDK_OFFSET(0x1D7BB990)
#define RPG_GAMECORE_LEVELNAVNODEINNERGRAPHINFO_SET_CONNECTLIST_OFFSET UNITYSDK_OFFSET(0x3C3F570)
#define RPG_GAMECORE_LEVELNAVNODEINNERGRAPHINFO_SET_INNERNODELIST_OFFSET UNITYSDK_OFFSET(0x3C3F5E0)
#define RPG_GAMECORE_LEVELNAVNODEINNERGRAPHINFO_SET_INNERTRANSITLIST_OFFSET UNITYSDK_OFFSET(0x3C3F650)

namespace RPG::GameCore
{
	struct alignas(8) LevelNavNodeInnerGraphInfo
	{
		::LELCKJPOPAO* _Pool; // 0x10
		::System::UInt32 _Offset; // 0x18
		::System::Void Init(::LELCKJPOPAO* a1, ::System::UInt32 a2)
		{
			return ((::System::Void(*)(::PVOID, ::LELCKJPOPAO*, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_GAMECORE_LEVELNAVNODEINNERGRAPHINFO_INIT_OFFSET))(this, a1, a2);
		}

		::System::Boolean get_IsValid()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_LEVELNAVNODEINNERGRAPHINFO_GET_ISVALID_OFFSET))(this);
		}

		::System::UInt32 get_Offset()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_LEVELNAVNODEINNERGRAPHINFO_GET_OFFSET_OFFSET))(this);
		}

		::LELCKJPOPAO* get_Pool()
		{
			return ((::LELCKJPOPAO*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_LEVELNAVNODEINNERGRAPHINFO_GET_POOL_OFFSET))(this);
		}

		::System::Void Dispose()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_LEVELNAVNODEINNERGRAPHINFO_DISPOSE_OFFSET))(this);
		}

		/*
		static ::System::Boolean op_Equality(::RPG::GameCore::LevelNavNodeInnerGraphInfo a1, ::System::Object* a2)
		{
			return ((::System::Boolean(*)(::RPG::GameCore::LevelNavNodeInnerGraphInfo, ::System::Object*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_LEVELNAVNODEINNERGRAPHINFO_OP_EQUALITY_OFFSET))(a1, a2);
		}
		*/

		/*
		static ::System::Boolean op_Inequality(::RPG::GameCore::LevelNavNodeInnerGraphInfo a1, ::System::Object* a2)
		{
			return ((::System::Boolean(*)(::RPG::GameCore::LevelNavNodeInnerGraphInfo, ::System::Object*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_LEVELNAVNODEINNERGRAPHINFO_OP_INEQUALITY_OFFSET))(a1, a2);
		}
		*/

		/*
		::System::Boolean Equals(::RPG::GameCore::LevelNavNodeInnerGraphInfo a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::RPG::GameCore::LevelNavNodeInnerGraphInfo))((::PBYTE)hIl2Cpp + RPG_GAMECORE_LEVELNAVNODEINNERGRAPHINFO_EQUALS_OFFSET))(this, a1);
		}
		*/

		::System::Boolean Equals_1(::System::Object* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_LEVELNAVNODEINNERGRAPHINFO_EQUALS_1_OFFSET))(this, a1);
		}

		::System::Int32 GetHashCode()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_LEVELNAVNODEINNERGRAPHINFO_GETHASHCODE_OFFSET))(this);
		}

		/*
		static ::System::Boolean op_Implicit(::RPG::GameCore::LevelNavNodeInnerGraphInfo a1)
		{
			return ((::System::Boolean(*)(::RPG::GameCore::LevelNavNodeInnerGraphInfo))((::PBYTE)hIl2Cpp + RPG_GAMECORE_LEVELNAVNODEINNERGRAPHINFO_OP_IMPLICIT_OFFSET))(a1);
		}
		*/

		/*
		static ::System::Boolean op_LogicalNot(::RPG::GameCore::LevelNavNodeInnerGraphInfo a1)
		{
			return ((::System::Boolean(*)(::RPG::GameCore::LevelNavNodeInnerGraphInfo))((::PBYTE)hIl2Cpp + RPG_GAMECORE_LEVELNAVNODEINNERGRAPHINFO_OP_LOGICALNOT_OFFSET))(a1);
		}
		*/

		::RPG::GameCore::ConfigDataPoolListPoolMember_1<::RPG::GameCore::LevelNavNodeInnerConnectInfo> get_ConnectList()
		{
			return ((::RPG::GameCore::ConfigDataPoolListPoolMember_1<::RPG::GameCore::LevelNavNodeInnerConnectInfo>(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_LEVELNAVNODEINNERGRAPHINFO_GET_CONNECTLIST_OFFSET))(this);
		}

		::System::Void set_ConnectList(::RPG::GameCore::ConfigDataPoolListPoolMember_1<::RPG::GameCore::LevelNavNodeInnerConnectInfo> a1)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::ConfigDataPoolListPoolMember_1<::RPG::GameCore::LevelNavNodeInnerConnectInfo>))((::PBYTE)hIl2Cpp + RPG_GAMECORE_LEVELNAVNODEINNERGRAPHINFO_SET_CONNECTLIST_OFFSET))(this, a1);
		}

		::RPG::GameCore::ConfigDataPoolListPoolMember_1<::RPG::GameCore::LevelNavNodeInnerNodeInfo> get_InnerNodeList()
		{
			return ((::RPG::GameCore::ConfigDataPoolListPoolMember_1<::RPG::GameCore::LevelNavNodeInnerNodeInfo>(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_LEVELNAVNODEINNERGRAPHINFO_GET_INNERNODELIST_OFFSET))(this);
		}

		::System::Void set_InnerNodeList(::RPG::GameCore::ConfigDataPoolListPoolMember_1<::RPG::GameCore::LevelNavNodeInnerNodeInfo> a1)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::ConfigDataPoolListPoolMember_1<::RPG::GameCore::LevelNavNodeInnerNodeInfo>))((::PBYTE)hIl2Cpp + RPG_GAMECORE_LEVELNAVNODEINNERGRAPHINFO_SET_INNERNODELIST_OFFSET))(this, a1);
		}

		::RPG::GameCore::ConfigDataPoolListPoolMember_1<::RPG::GameCore::LevelNavNodeInnerTransitInfo> get_InnerTransitList()
		{
			return ((::RPG::GameCore::ConfigDataPoolListPoolMember_1<::RPG::GameCore::LevelNavNodeInnerTransitInfo>(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_LEVELNAVNODEINNERGRAPHINFO_GET_INNERTRANSITLIST_OFFSET))(this);
		}

		::System::Void set_InnerTransitList(::RPG::GameCore::ConfigDataPoolListPoolMember_1<::RPG::GameCore::LevelNavNodeInnerTransitInfo> a1)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::ConfigDataPoolListPoolMember_1<::RPG::GameCore::LevelNavNodeInnerTransitInfo>))((::PBYTE)hIl2Cpp + RPG_GAMECORE_LEVELNAVNODEINNERGRAPHINFO_SET_INNERTRANSITLIST_OFFSET))(this, a1);
		}

	};
}
