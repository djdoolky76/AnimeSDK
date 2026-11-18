#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

#define MOLEMOLE_FLOWCANVAS_NODES_LDSHOOTGAMEGETSCORE___C__CCTOR_OFFSET UNITYSDK_OFFSET(0x12B3D0E0)
#define MOLEMOLE_FLOWCANVAS_NODES_LDSHOOTGAMEGETSCORE___C__CTOR_OFFSET UNITYSDK_OFFSET(0x12B3D120)
#define MOLEMOLE_FLOWCANVAS_NODES_LDSHOOTGAMEGETSCORE___C__REGISTERPORTS_G__GETSCORE_0_0_OFFSET UNITYSDK_OFFSET(0x12B3D130)

namespace MoleMole::FlowCanvas::Nodes
{
	inline static constexpr unsigned int LDShootGameGetScore___c_TypeDefinitionIndex = 90909;

	class LDShootGameGetScore___c : public ::System::Object
	{
	public:
		static ::System::Object** StaticGet___9()
		{
			return (::System::Object**)Il2CppClass::FromTypeDefinitionIndex(LDShootGameGetScore___c_TypeDefinitionIndex)->GetStaticField(0x3BE70);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + MOLEMOLE_FLOWCANVAS_NODES_LDSHOOTGAMEGETSCORE___C__CCTOR_OFFSET))();
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_FLOWCANVAS_NODES_LDSHOOTGAMEGETSCORE___C__CTOR_OFFSET))(this);
		}

		::System::Int32 _RegisterPorts_g__GetScore_0_0()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_FLOWCANVAS_NODES_LDSHOOTGAMEGETSCORE___C__REGISTERPORTS_G__GETSCORE_0_0_OFFSET))(this);
		}
	};
}
