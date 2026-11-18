#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace FlowCanvas { template <typename T> class ValueHandler_1; }

#define MOLEMOLE_FLOWCANVAS_NODES_LD_LISTENAVATARDEATHCOUNTNODE___C__CCTOR_OFFSET UNITYSDK_OFFSET(0x1430C220)
#define MOLEMOLE_FLOWCANVAS_NODES_LD_LISTENAVATARDEATHCOUNTNODE___C__CTOR_OFFSET UNITYSDK_OFFSET(0x1430C260)
#define MOLEMOLE_FLOWCANVAS_NODES_LD_LISTENAVATARDEATHCOUNTNODE___C__REGISTERPORTS_B__2_1_OFFSET UNITYSDK_OFFSET(0x1430C270)

namespace MoleMole::FlowCanvas::Nodes
{
	inline static constexpr unsigned int LD_ListenAvatarDeathCountNode___c_TypeDefinitionIndex = 39107;

	class LD_ListenAvatarDeathCountNode___c : public ::System::Object
	{
	public:
		static ::System::Object** StaticGet___9()
		{
			return (::System::Object**)Il2CppClass::FromTypeDefinitionIndex(LD_ListenAvatarDeathCountNode___c_TypeDefinitionIndex)->GetStaticField(0x48780);
		}
		static ::FlowCanvas::ValueHandler_1<::System::Int32>** StaticGet___9__2_1()
		{
			return (::FlowCanvas::ValueHandler_1<::System::Int32>**)Il2CppClass::FromTypeDefinitionIndex(LD_ListenAvatarDeathCountNode___c_TypeDefinitionIndex)->GetStaticField(0x48788);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + MOLEMOLE_FLOWCANVAS_NODES_LD_LISTENAVATARDEATHCOUNTNODE___C__CCTOR_OFFSET))();
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_FLOWCANVAS_NODES_LD_LISTENAVATARDEATHCOUNTNODE___C__CTOR_OFFSET))(this);
		}

		::System::Int32 _RegisterPorts_b__2_1()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_FLOWCANVAS_NODES_LD_LISTENAVATARDEATHCOUNTNODE___C__REGISTERPORTS_B__2_1_OFFSET))(this);
		}
	};
}
