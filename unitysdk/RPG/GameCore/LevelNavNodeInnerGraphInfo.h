#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/ConfigDataPoolListPoolMember_1.h"
#include "unitysdk/RPG/GameCore/LevelNavNodeInnerConnectInfo.h"
#include "unitysdk/RPG/GameCore/LevelNavNodeInnerNodeInfo.h"
#include "unitysdk/RPG/GameCore/LevelNavNodeInnerTransitInfo.h"
class LELCKJPOPAO;
namespace System { class Object; }

#define RPG_GAMECORE_LEVELNAVNODEINNERGRAPHINFO_DISPOSE_OFFSET UNITYSDK_OFFSET(0x3E7C580)
#define RPG_GAMECORE_LEVELNAVNODEINNERGRAPHINFO_EQUALS_1_OFFSET UNITYSDK_OFFSET(0x3E8EC90)
#define RPG_GAMECORE_LEVELNAVNODEINNERGRAPHINFO_EQUALS_OFFSET UNITYSDK_OFFSET(0x31619E0)
#define RPG_GAMECORE_LEVELNAVNODEINNERGRAPHINFO_GETHASHCODE_OFFSET UNITYSDK_OFFSET(0x318C7A0)
#define RPG_GAMECORE_LEVELNAVNODEINNERGRAPHINFO_GET_CONNECTLIST_OFFSET UNITYSDK_OFFSET(0x3E8ECA0)
#define RPG_GAMECORE_LEVELNAVNODEINNERGRAPHINFO_GET_INNERNODELIST_OFFSET UNITYSDK_OFFSET(0x3E8ED10)
#define RPG_GAMECORE_LEVELNAVNODEINNERGRAPHINFO_GET_INNERTRANSITLIST_OFFSET UNITYSDK_OFFSET(0x3E8ED80)
#define RPG_GAMECORE_LEVELNAVNODEINNERGRAPHINFO_GET_ISVALID_OFFSET UNITYSDK_OFFSET(0x318C5A0)
#define RPG_GAMECORE_LEVELNAVNODEINNERGRAPHINFO_GET_OFFSET_OFFSET UNITYSDK_OFFSET(0xACE0)
#define RPG_GAMECORE_LEVELNAVNODEINNERGRAPHINFO_GET_POOL_OFFSET UNITYSDK_OFFSET(0x1D30)
#define RPG_GAMECORE_LEVELNAVNODEINNERGRAPHINFO_INIT_OFFSET UNITYSDK_OFFSET(0x18D10)
#define RPG_GAMECORE_LEVELNAVNODEINNERGRAPHINFO_OP_EQUALITY_OFFSET UNITYSDK_OFFSET(0x1E9FD490)
#define RPG_GAMECORE_LEVELNAVNODEINNERGRAPHINFO_OP_IMPLICIT_OFFSET UNITYSDK_OFFSET(0x1E9FD7E0)
#define RPG_GAMECORE_LEVELNAVNODEINNERGRAPHINFO_OP_INEQUALITY_OFFSET UNITYSDK_OFFSET(0x1E9FD580)
#define RPG_GAMECORE_LEVELNAVNODEINNERGRAPHINFO_OP_LOGICALNOT_OFFSET UNITYSDK_OFFSET(0x1E9FD890)
#define RPG_GAMECORE_LEVELNAVNODEINNERGRAPHINFO_SET_CONNECTLIST_OFFSET UNITYSDK_OFFSET(0x3E8ECC0)
#define RPG_GAMECORE_LEVELNAVNODEINNERGRAPHINFO_SET_INNERNODELIST_OFFSET UNITYSDK_OFFSET(0x3E8ED30)
#define RPG_GAMECORE_LEVELNAVNODEINNERGRAPHINFO_SET_INNERTRANSITLIST_OFFSET UNITYSDK_OFFSET(0x3E8EDA0)

namespace RPG::GameCore
{
	inline static constexpr unsigned int LevelNavNodeInnerGraphInfo_TypeDefinitionIndex = 10735;

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
