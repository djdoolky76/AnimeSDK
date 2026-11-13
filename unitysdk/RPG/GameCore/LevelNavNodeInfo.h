#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/ConfigDataPoolListPoolMember_1.h"
#include "unitysdk/RPG/GameCore/LevelNavNodeInnerGraphInfo.h"
#include "unitysdk/RPG/GameCore/LevelNavNodeTransitInfo.h"
class LELCKJPOPAO;
namespace RPG::GameCore { class StageVolumeConfigV2; }
namespace System { class Object; }

#define RPG_GAMECORE_LEVELNAVNODEINFO_DISPOSE_OFFSET UNITYSDK_OFFSET(0x7F0900)
#define RPG_GAMECORE_LEVELNAVNODEINFO_EQUALS_1_OFFSET UNITYSDK_OFFSET(0x3F033F0)
#define RPG_GAMECORE_LEVELNAVNODEINFO_EQUALS_OFFSET UNITYSDK_OFFSET(0xCB40)
#define RPG_GAMECORE_LEVELNAVNODEINFO_GETHASHCODE_OFFSET UNITYSDK_OFFSET(0x7F6B30)
#define RPG_GAMECORE_LEVELNAVNODEINFO_GET_ID_OFFSET UNITYSDK_OFFSET(0x3F03400)
#define RPG_GAMECORE_LEVELNAVNODEINFO_GET_INNERGRAPH_OFFSET UNITYSDK_OFFSET(0x3F03460)
#define RPG_GAMECORE_LEVELNAVNODEINFO_GET_ISVALID_OFFSET UNITYSDK_OFFSET(0x7F6A70)
#define RPG_GAMECORE_LEVELNAVNODEINFO_GET_OFFSET_OFFSET UNITYSDK_OFFSET(0xC8F0)
#define RPG_GAMECORE_LEVELNAVNODEINFO_GET_POOL_OFFSET UNITYSDK_OFFSET(0x6C8DB0)
#define RPG_GAMECORE_LEVELNAVNODEINFO_GET_PRIORITY_OFFSET UNITYSDK_OFFSET(0x3F034D0)
#define RPG_GAMECORE_LEVELNAVNODEINFO_GET_TRANSITLIST_OFFSET UNITYSDK_OFFSET(0x3F03530)
#define RPG_GAMECORE_LEVELNAVNODEINFO_GET_VOLUMELIST_OFFSET UNITYSDK_OFFSET(0x3F035A0)
#define RPG_GAMECORE_LEVELNAVNODEINFO_INIT_OFFSET UNITYSDK_OFFSET(0x6513E0)
#define RPG_GAMECORE_LEVELNAVNODEINFO_OP_EQUALITY_OFFSET UNITYSDK_OFFSET(0x1D93D620)
#define RPG_GAMECORE_LEVELNAVNODEINFO_OP_IMPLICIT_OFFSET UNITYSDK_OFFSET(0x1D93D970)
#define RPG_GAMECORE_LEVELNAVNODEINFO_OP_INEQUALITY_OFFSET UNITYSDK_OFFSET(0x1D93D710)
#define RPG_GAMECORE_LEVELNAVNODEINFO_OP_LOGICALNOT_OFFSET UNITYSDK_OFFSET(0x1D93DA20)
#define RPG_GAMECORE_LEVELNAVNODEINFO_SET_ID_OFFSET UNITYSDK_OFFSET(0x3F03410)
#define RPG_GAMECORE_LEVELNAVNODEINFO_SET_INNERGRAPH_OFFSET UNITYSDK_OFFSET(0x3F03480)
#define RPG_GAMECORE_LEVELNAVNODEINFO_SET_PRIORITY_OFFSET UNITYSDK_OFFSET(0x3F034E0)
#define RPG_GAMECORE_LEVELNAVNODEINFO_SET_TRANSITLIST_OFFSET UNITYSDK_OFFSET(0x3F03550)
#define RPG_GAMECORE_LEVELNAVNODEINFO_SET_VOLUMELIST_OFFSET UNITYSDK_OFFSET(0x3F035B0)

namespace RPG::GameCore
{
	inline static constexpr unsigned int LevelNavNodeInfo_TypeDefinitionIndex = 10733;

	struct alignas(8) LevelNavNodeInfo
	{
		::LELCKJPOPAO* _Pool; // 0x10
		::System::UInt32 _Offset; // 0x18
		::System::Void Init(::LELCKJPOPAO* a1, ::System::UInt32 a2)
		{
			return ((::System::Void(*)(::PVOID, ::LELCKJPOPAO*, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_GAMECORE_LEVELNAVNODEINFO_INIT_OFFSET))(this, a1, a2);
		}

		::System::Boolean get_IsValid()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_LEVELNAVNODEINFO_GET_ISVALID_OFFSET))(this);
		}

		::System::UInt32 get_Offset()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_LEVELNAVNODEINFO_GET_OFFSET_OFFSET))(this);
		}

		::LELCKJPOPAO* get_Pool()
		{
			return ((::LELCKJPOPAO*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_LEVELNAVNODEINFO_GET_POOL_OFFSET))(this);
		}

		::System::Void Dispose()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_LEVELNAVNODEINFO_DISPOSE_OFFSET))(this);
		}

		/*
		static ::System::Boolean op_Equality(::RPG::GameCore::LevelNavNodeInfo a1, ::System::Object* a2)
		{
			return ((::System::Boolean(*)(::RPG::GameCore::LevelNavNodeInfo, ::System::Object*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_LEVELNAVNODEINFO_OP_EQUALITY_OFFSET))(a1, a2);
		}
		*/

		/*
		static ::System::Boolean op_Inequality(::RPG::GameCore::LevelNavNodeInfo a1, ::System::Object* a2)
		{
			return ((::System::Boolean(*)(::RPG::GameCore::LevelNavNodeInfo, ::System::Object*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_LEVELNAVNODEINFO_OP_INEQUALITY_OFFSET))(a1, a2);
		}
		*/

		/*
		::System::Boolean Equals(::RPG::GameCore::LevelNavNodeInfo a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::RPG::GameCore::LevelNavNodeInfo))((::PBYTE)hIl2Cpp + RPG_GAMECORE_LEVELNAVNODEINFO_EQUALS_OFFSET))(this, a1);
		}
		*/

		::System::Boolean Equals_1(::System::Object* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_LEVELNAVNODEINFO_EQUALS_1_OFFSET))(this, a1);
		}

		::System::Int32 GetHashCode()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_LEVELNAVNODEINFO_GETHASHCODE_OFFSET))(this);
		}

		/*
		static ::System::Boolean op_Implicit(::RPG::GameCore::LevelNavNodeInfo a1)
		{
			return ((::System::Boolean(*)(::RPG::GameCore::LevelNavNodeInfo))((::PBYTE)hIl2Cpp + RPG_GAMECORE_LEVELNAVNODEINFO_OP_IMPLICIT_OFFSET))(a1);
		}
		*/

		/*
		static ::System::Boolean op_LogicalNot(::RPG::GameCore::LevelNavNodeInfo a1)
		{
			return ((::System::Boolean(*)(::RPG::GameCore::LevelNavNodeInfo))((::PBYTE)hIl2Cpp + RPG_GAMECORE_LEVELNAVNODEINFO_OP_LOGICALNOT_OFFSET))(a1);
		}
		*/

		::System::UInt32 get_ID()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_LEVELNAVNODEINFO_GET_ID_OFFSET))(this);
		}

		::System::Void set_ID(::System::UInt32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_GAMECORE_LEVELNAVNODEINFO_SET_ID_OFFSET))(this, a1);
		}

		::RPG::GameCore::LevelNavNodeInnerGraphInfo get_InnerGraph()
		{
			return ((::RPG::GameCore::LevelNavNodeInnerGraphInfo(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_LEVELNAVNODEINFO_GET_INNERGRAPH_OFFSET))(this);
		}

		::System::Void set_InnerGraph(::RPG::GameCore::LevelNavNodeInnerGraphInfo a1)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::LevelNavNodeInnerGraphInfo))((::PBYTE)hIl2Cpp + RPG_GAMECORE_LEVELNAVNODEINFO_SET_INNERGRAPH_OFFSET))(this, a1);
		}

		::System::UInt32 get_Priority()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_LEVELNAVNODEINFO_GET_PRIORITY_OFFSET))(this);
		}

		::System::Void set_Priority(::System::UInt32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_GAMECORE_LEVELNAVNODEINFO_SET_PRIORITY_OFFSET))(this, a1);
		}

		::RPG::GameCore::ConfigDataPoolListPoolMember_1<::RPG::GameCore::LevelNavNodeTransitInfo> get_TransitList()
		{
			return ((::RPG::GameCore::ConfigDataPoolListPoolMember_1<::RPG::GameCore::LevelNavNodeTransitInfo>(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_LEVELNAVNODEINFO_GET_TRANSITLIST_OFFSET))(this);
		}

		::System::Void set_TransitList(::RPG::GameCore::ConfigDataPoolListPoolMember_1<::RPG::GameCore::LevelNavNodeTransitInfo> a1)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::ConfigDataPoolListPoolMember_1<::RPG::GameCore::LevelNavNodeTransitInfo>))((::PBYTE)hIl2Cpp + RPG_GAMECORE_LEVELNAVNODEINFO_SET_TRANSITLIST_OFFSET))(this, a1);
		}

		::Il2CppArray<::RPG::GameCore::StageVolumeConfigV2*>* get_VolumeList()
		{
			return ((::Il2CppArray<::RPG::GameCore::StageVolumeConfigV2*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_LEVELNAVNODEINFO_GET_VOLUMELIST_OFFSET))(this);
		}

		::System::Void set_VolumeList(::Il2CppArray<::RPG::GameCore::StageVolumeConfigV2*>* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Il2CppArray<::RPG::GameCore::StageVolumeConfigV2*>*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_LEVELNAVNODEINFO_SET_VOLUMELIST_OFFSET))(this, a1);
		}

	};
}
