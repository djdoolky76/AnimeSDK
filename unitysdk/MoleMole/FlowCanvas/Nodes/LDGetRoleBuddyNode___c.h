#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace FlowCanvas { template <typename T> class ValueHandler_1; }
namespace MoleMole::Battle { class Entity; }

#define MOLEMOLE_FLOWCANVAS_NODES_LDGETROLEBUDDYNODE___C__CCTOR_OFFSET UNITYSDK_OFFSET(0x180D9000)
#define MOLEMOLE_FLOWCANVAS_NODES_LDGETROLEBUDDYNODE___C__CTOR_OFFSET UNITYSDK_OFFSET(0x180D9040)
#define MOLEMOLE_FLOWCANVAS_NODES_LDGETROLEBUDDYNODE___C__REGISTERPORTS_B__1_0_OFFSET UNITYSDK_OFFSET(0x180D9050)

namespace MoleMole::FlowCanvas::Nodes
{
	inline static constexpr unsigned int LDGetRoleBuddyNode___c_TypeDefinitionIndex = 58119;

	class LDGetRoleBuddyNode___c : public ::System::Object
	{
	public:
		static ::System::Object** StaticGet___9()
		{
			return (::System::Object**)Il2CppClass::FromTypeDefinitionIndex(LDGetRoleBuddyNode___c_TypeDefinitionIndex)->GetStaticField(0x520D0);
		}
		static ::FlowCanvas::ValueHandler_1<::MoleMole::Battle::Entity*>** StaticGet___9__1_0()
		{
			return (::FlowCanvas::ValueHandler_1<::MoleMole::Battle::Entity*>**)Il2CppClass::FromTypeDefinitionIndex(LDGetRoleBuddyNode___c_TypeDefinitionIndex)->GetStaticField(0x520D8);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + MOLEMOLE_FLOWCANVAS_NODES_LDGETROLEBUDDYNODE___C__CCTOR_OFFSET))();
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_FLOWCANVAS_NODES_LDGETROLEBUDDYNODE___C__CTOR_OFFSET))(this);
		}

		::MoleMole::Battle::Entity* _RegisterPorts_b__1_0()
		{
			return ((::MoleMole::Battle::Entity*(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_FLOWCANVAS_NODES_LDGETROLEBUDDYNODE___C__REGISTERPORTS_B__1_0_OFFSET))(this);
		}
	};
}
