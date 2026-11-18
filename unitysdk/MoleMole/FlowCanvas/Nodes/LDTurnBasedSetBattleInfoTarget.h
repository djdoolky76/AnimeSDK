#pragma once
#include "unitysdk/unitysdk.h"

namespace System { class Object; }
namespace System { class String; }

#define MOLEMOLE_FLOWCANVAS_NODES_LDTURNBASEDSETBATTLEINFOTARGET_INVOKE_OFFSET UNITYSDK_OFFSET(0x146656E0)
#define MOLEMOLE_FLOWCANVAS_NODES_LDTURNBASEDSETBATTLEINFOTARGET__CTOR_OFFSET UNITYSDK_OFFSET(0x14665890)

namespace MoleMole::FlowCanvas::Nodes
{
	inline static constexpr unsigned int LDTurnBasedSetBattleInfoTarget_TypeDefinitionIndex = 64951;

	class LDTurnBasedSetBattleInfoTarget
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_FLOWCANVAS_NODES_LDTURNBASEDSETBATTLEINFOTARGET__CTOR_OFFSET))(this);
		}

		::System::Void Invoke(::System::String* textKey, ::Il2CppArray<::System::Object*>* textArgs)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*, ::Il2CppArray<::System::Object*>*))((::PBYTE)hIl2Cpp + MOLEMOLE_FLOWCANVAS_NODES_LDTURNBASEDSETBATTLEINFOTARGET_INVOKE_OFFSET))(this, textKey, textArgs);
		}
	};
}
