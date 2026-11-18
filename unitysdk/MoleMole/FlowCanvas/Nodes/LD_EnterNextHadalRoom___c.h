#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class IFFKIHMPGJK_PGPENLLCLDF;
namespace System { template <typename T> class Action_1; }

#define MOLEMOLE_FLOWCANVAS_NODES_LD_ENTERNEXTHADALROOM___C__CCTOR_OFFSET UNITYSDK_OFFSET(0x139E27E0)
#define MOLEMOLE_FLOWCANVAS_NODES_LD_ENTERNEXTHADALROOM___C__CTOR_OFFSET UNITYSDK_OFFSET(0x139E2820)
#define MOLEMOLE_FLOWCANVAS_NODES_LD_ENTERNEXTHADALROOM___C___TRYLOADNEXTHADALROOM_B__9_1_OFFSET UNITYSDK_OFFSET(0x139E2830)

namespace MoleMole::FlowCanvas::Nodes
{
	inline static constexpr unsigned int LD_EnterNextHadalRoom___c_TypeDefinitionIndex = 64358;

	class LD_EnterNextHadalRoom___c : public ::System::Object
	{
	public:
		static ::System::Action_1<::System::Object*>** StaticGet___9__9_1()
		{
			return (::System::Action_1<::System::Object*>**)Il2CppClass::FromTypeDefinitionIndex(LD_EnterNextHadalRoom___c_TypeDefinitionIndex)->GetStaticField(0x44BA0);
		}
		static ::System::Object** StaticGet___9()
		{
			return (::System::Object**)Il2CppClass::FromTypeDefinitionIndex(LD_EnterNextHadalRoom___c_TypeDefinitionIndex)->GetStaticField(0x44BA8);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + MOLEMOLE_FLOWCANVAS_NODES_LD_ENTERNEXTHADALROOM___C__CCTOR_OFFSET))();
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_FLOWCANVAS_NODES_LD_ENTERNEXTHADALROOM___C__CTOR_OFFSET))(this);
		}

		::System::Void __TryLoadNextHadalRoom_b__9_1(::IFFKIHMPGJK_PGPENLLCLDF* tCtx)
		{
			return ((::System::Void(*)(::PVOID, ::IFFKIHMPGJK_PGPENLLCLDF*))((::PBYTE)hIl2Cpp + MOLEMOLE_FLOWCANVAS_NODES_LD_ENTERNEXTHADALROOM___C___TRYLOADNEXTHADALROOM_B__9_1_OFFSET))(this, tCtx);
		}
	};
}
