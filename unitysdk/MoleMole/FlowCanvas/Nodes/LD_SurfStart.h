#pragma once
#include "unitysdk/unitysdk.h"

namespace MoleMole::Battle { class Entity; }
namespace System { class String; }

#define MOLEMOLE_FLOWCANVAS_NODES_LD_SURFSTART_INVOKE_OFFSET UNITYSDK_OFFSET(0x180E8E60)
#define MOLEMOLE_FLOWCANVAS_NODES_LD_SURFSTART__CTOR_OFFSET UNITYSDK_OFFSET(0x180E8F30)

namespace MoleMole::FlowCanvas::Nodes
{
	inline static constexpr unsigned int LD_SurfStart_TypeDefinitionIndex = 46081;

	class LD_SurfStart
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_FLOWCANVAS_NODES_LD_SURFSTART__CTOR_OFFSET))(this);
		}

		::System::Void Invoke(::MoleMole::Battle::Entity* playerEntity, ::System::String* pathName, ::System::Boolean isReverse, ::System::String* spawnPoint)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::Battle::Entity*, ::System::String*, ::System::Boolean, ::System::String*))((::PBYTE)hIl2Cpp + MOLEMOLE_FLOWCANVAS_NODES_LD_SURFSTART_INVOKE_OFFSET))(this, playerEntity, pathName, isReverse, spawnPoint);
		}
	};
}
