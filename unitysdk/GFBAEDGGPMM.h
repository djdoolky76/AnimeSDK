#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class MFBOKDKKHBJ;
namespace RPG::Client::NavMap { class MappingInfoNode; }

#define GFBAEDGGPMM_CTOR_OFFSET UNITYSDK_OFFSET(0x159E87D0)
#define GFBAEDGGPMM_GET_MAPPINGINFONODE_OFFSET UNITYSDK_OFFSET(0x159E8790)
#define GFBAEDGGPMM_GET_SHORTESTPATH_OFFSET UNITYSDK_OFFSET(0x159E87B0)
#define GFBAEDGGPMM_SET_MAPPINGINFONODE_OFFSET UNITYSDK_OFFSET(0x159E87A0)
#define GFBAEDGGPMM_SET_SHORTESTPATH_OFFSET UNITYSDK_OFFSET(0x159E87C0)

inline static constexpr unsigned int GFBAEDGGPMM_TypeDefinitionIndex = 74581;

	class GFBAEDGGPMM : public ::System::Object
	{
	public:
		::RPG::Client::NavMap::MappingInfoNode* _MappingInfoNode_k__BackingField; // 0x10
		::MFBOKDKKHBJ* _ShortestPath_k__BackingField; // 0x18
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + GFBAEDGGPMM_CTOR_OFFSET))(this);
		}

		::RPG::Client::NavMap::MappingInfoNode* get_MappingInfoNode()
		{
			return ((::RPG::Client::NavMap::MappingInfoNode*(*)(::PVOID))((::PBYTE)hIl2Cpp + GFBAEDGGPMM_GET_MAPPINGINFONODE_OFFSET))(this);
		}

		::System::Void set_MappingInfoNode(::RPG::Client::NavMap::MappingInfoNode* a1)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::NavMap::MappingInfoNode*))((::PBYTE)hIl2Cpp + GFBAEDGGPMM_SET_MAPPINGINFONODE_OFFSET))(this, a1);
		}

		::MFBOKDKKHBJ* get_ShortestPath()
		{
			return ((::MFBOKDKKHBJ*(*)(::PVOID))((::PBYTE)hIl2Cpp + GFBAEDGGPMM_GET_SHORTESTPATH_OFFSET))(this);
		}

		::System::Void set_ShortestPath(::MFBOKDKKHBJ* a1)
		{
			return ((::System::Void(*)(::PVOID, ::MFBOKDKKHBJ*))((::PBYTE)hIl2Cpp + GFBAEDGGPMM_SET_SHORTESTPATH_OFFSET))(this, a1);
		}

	};
