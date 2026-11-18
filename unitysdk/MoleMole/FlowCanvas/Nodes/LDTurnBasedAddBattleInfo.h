#pragma once
#include "unitysdk/unitysdk.h"

namespace MoleMole::Battle { class Entity; }
namespace System { class Object; }

#define MOLEMOLE_FLOWCANVAS_NODES_LDTURNBASEDADDBATTLEINFO_INVOKE_OFFSET UNITYSDK_OFFSET(0x10D18AE0)
#define MOLEMOLE_FLOWCANVAS_NODES_LDTURNBASEDADDBATTLEINFO__CTOR_OFFSET UNITYSDK_OFFSET(0x10D18CB0)

namespace MoleMole::FlowCanvas::Nodes
{
	inline static constexpr unsigned int LDTurnBasedAddBattleInfo_TypeDefinitionIndex = 60914;

	class LDTurnBasedAddBattleInfo
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_FLOWCANVAS_NODES_LDTURNBASEDADDBATTLEINFO__CTOR_OFFSET))(this);
		}

		::System::Void Invoke(::System::Int32 infoConfigID, ::Il2CppArray<::System::Object*>* textArgs, ::MoleMole::Battle::Entity* target)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32, ::Il2CppArray<::System::Object*>*, ::MoleMole::Battle::Entity*))((::PBYTE)hIl2Cpp + MOLEMOLE_FLOWCANVAS_NODES_LDTURNBASEDADDBATTLEINFO_INVOKE_OFFSET))(this, infoConfigID, textArgs, target);
		}
	};
}
