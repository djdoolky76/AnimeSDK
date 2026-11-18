#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/MoleMole/Vector2Int.h"
#include "unitysdk/Share/GridDir.h"
#include "unitysdk/MoleMole/FlowCanvas/Nodes/HollowEntityGetCanMoveNeighborPosition_Param.h"

namespace System::Collections::Generic { template <typename T> class IList_1; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define MOLEMOLE_FLOWCANVAS_NODES_HOLLOWENTITYGETCANMOVENEIGHBORPOSITION_INVOKE_OFFSET UNITYSDK_OFFSET(0x135650E0)
#define MOLEMOLE_FLOWCANVAS_NODES_HOLLOWENTITYGETCANMOVENEIGHBORPOSITION__CCTOR_OFFSET UNITYSDK_OFFSET(0x13565690)
#define MOLEMOLE_FLOWCANVAS_NODES_HOLLOWENTITYGETCANMOVENEIGHBORPOSITION__CTOR_OFFSET UNITYSDK_OFFSET(0x135655E0)

namespace MoleMole::FlowCanvas::Nodes
{
	inline static constexpr unsigned int HollowEntityGetCanMoveNeighborPosition_TypeDefinitionIndex = 52587;

	class HollowEntityGetCanMoveNeighborPosition
	{
	public:
		static ::Il2CppArray<::Share::GridDir>** StaticGet_GRID_DIR_FOUR()
		{
			return (::Il2CppArray<::Share::GridDir>**)Il2CppClass::FromTypeDefinitionIndex(HollowEntityGetCanMoveNeighborPosition_TypeDefinitionIndex)->GetStaticField(0x50BF0);
		}
		::System::Collections::Generic::List_1<::MoleMole::Vector2Int>* _canMoveNeighborIndex; // 0x30

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_FLOWCANVAS_NODES_HOLLOWENTITYGETCANMOVENEIGHBORPOSITION__CTOR_OFFSET))(this);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + MOLEMOLE_FLOWCANVAS_NODES_HOLLOWENTITYGETCANMOVENEIGHBORPOSITION__CCTOR_OFFSET))();
		}

		::System::Collections::Generic::IList_1<::MoleMole::Vector2Int>* Invoke(::System::UInt32 entityRuntimeID, ::MoleMole::FlowCanvas::Nodes::HollowEntityGetCanMoveNeighborPosition_Param param)
		{
			return ((::System::Collections::Generic::IList_1<::MoleMole::Vector2Int>*(*)(::PVOID, ::System::UInt32, ::MoleMole::FlowCanvas::Nodes::HollowEntityGetCanMoveNeighborPosition_Param))((::PBYTE)hIl2Cpp + MOLEMOLE_FLOWCANVAS_NODES_HOLLOWENTITYGETCANMOVENEIGHBORPOSITION_INVOKE_OFFSET))(this, entityRuntimeID, param);
		}
	};
}
