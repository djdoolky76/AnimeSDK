#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/FlowCanvas/Nodes/FlowControlNode.h"

namespace FlowCanvas { template <typename T> class ValueOutput_1; }
namespace MoleMole::Battle { class Entity; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define MOLEMOLE_FLOWCANVAS_NODES_LDMPGETALLLOCALAVATARNODE_GETAVATAR1_OFFSET UNITYSDK_OFFSET(0x1A8EC070)
#define MOLEMOLE_FLOWCANVAS_NODES_LDMPGETALLLOCALAVATARNODE_GETAVATAR2_OFFSET UNITYSDK_OFFSET(0x1A8EC310)
#define MOLEMOLE_FLOWCANVAS_NODES_LDMPGETALLLOCALAVATARNODE_GETAVATAR3_OFFSET UNITYSDK_OFFSET(0x1A8EC440)
#define MOLEMOLE_FLOWCANVAS_NODES_LDMPGETALLLOCALAVATARNODE_GETAVATARBYPEERID_OFFSET UNITYSDK_OFFSET(0x1A8EC240)
#define MOLEMOLE_FLOWCANVAS_NODES_LDMPGETALLLOCALAVATARNODE_GETONLINEAVATARLIST_OFFSET UNITYSDK_OFFSET(0x1A8EC570)
#define MOLEMOLE_FLOWCANVAS_NODES_LDMPGETALLLOCALAVATARNODE_REGISTERPORTS_OFFSET UNITYSDK_OFFSET(0x1A8EBEC0)
#define MOLEMOLE_FLOWCANVAS_NODES_LDMPGETALLLOCALAVATARNODE__CTOR_OFFSET UNITYSDK_OFFSET(0x1A8EC810)

namespace MoleMole::FlowCanvas::Nodes
{
	inline static constexpr unsigned int LDMpGetAllLocalAvatarNode_TypeDefinitionIndex = 86634;

	class LDMpGetAllLocalAvatarNode : public ::FlowCanvas::Nodes::FlowControlNode
	{
	public:
		::FlowCanvas::ValueOutput_1<::System::Collections::Generic::List_1<::MoleMole::Battle::Entity*>*>* valueOutputOnlineAvatarList; // 0xA8
		::FlowCanvas::ValueOutput_1<::MoleMole::Battle::Entity*>* valueOutputAvatar3; // 0xB0
		::FlowCanvas::ValueOutput_1<::MoleMole::Battle::Entity*>* valueOutputAvatar2; // 0xB8
		::FlowCanvas::ValueOutput_1<::MoleMole::Battle::Entity*>* valueOutputAvatar1; // 0xC0

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_FLOWCANVAS_NODES_LDMPGETALLLOCALAVATARNODE__CTOR_OFFSET))(this);
		}

		::System::Void RegisterPorts()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_FLOWCANVAS_NODES_LDMPGETALLLOCALAVATARNODE_REGISTERPORTS_OFFSET))(this);
		}

		::MoleMole::Battle::Entity* GetAvatar1()
		{
			return ((::MoleMole::Battle::Entity*(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_FLOWCANVAS_NODES_LDMPGETALLLOCALAVATARNODE_GETAVATAR1_OFFSET))(this);
		}

		::MoleMole::Battle::Entity* GetAvatar2()
		{
			return ((::MoleMole::Battle::Entity*(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_FLOWCANVAS_NODES_LDMPGETALLLOCALAVATARNODE_GETAVATAR2_OFFSET))(this);
		}

		::MoleMole::Battle::Entity* GetAvatar3()
		{
			return ((::MoleMole::Battle::Entity*(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_FLOWCANVAS_NODES_LDMPGETALLLOCALAVATARNODE_GETAVATAR3_OFFSET))(this);
		}

		::MoleMole::Battle::Entity* GetAvatarByPeerId(::System::UInt32 peerId)
		{
			return ((::MoleMole::Battle::Entity*(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + MOLEMOLE_FLOWCANVAS_NODES_LDMPGETALLLOCALAVATARNODE_GETAVATARBYPEERID_OFFSET))(this, peerId);
		}

		::System::Collections::Generic::List_1<::MoleMole::Battle::Entity*>* GetOnlineAvatarList()
		{
			return ((::System::Collections::Generic::List_1<::MoleMole::Battle::Entity*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_FLOWCANVAS_NODES_LDMPGETALLLOCALAVATARNODE_GETONLINEAVATARLIST_OFFSET))(this);
		}
	};
}
