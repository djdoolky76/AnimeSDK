#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/FlowCanvas/Flow.h"

namespace FlowCanvas { class FlowHandler; }
namespace FlowCanvas { class ValueHandlerObject; }

#define FLOWCANVAS_BINDERCONNECTION___C__CCTOR_OFFSET UNITYSDK_OFFSET(0x1EA561F0)
#define FLOWCANVAS_BINDERCONNECTION___C__CTOR_OFFSET UNITYSDK_OFFSET(0x1EA56230)
#define FLOWCANVAS_BINDERCONNECTION___C__GATHERANDVALIDATESOURCEPORT_B__27_0_OFFSET UNITYSDK_OFFSET(0x1EA56240)
#define FLOWCANVAS_BINDERCONNECTION___C__GATHERANDVALIDATETARGETPORT_B__28_0_OFFSET UNITYSDK_OFFSET(0x1EA56290)

namespace FlowCanvas
{
	inline static constexpr unsigned int BinderConnection___c_TypeDefinitionIndex = 29602;

	class BinderConnection___c : public ::System::Object
	{
	public:
		static ::FlowCanvas::ValueHandlerObject** StaticGet___9__27_0()
		{
			return (::FlowCanvas::ValueHandlerObject**)Il2CppClass::FromTypeDefinitionIndex(BinderConnection___c_TypeDefinitionIndex)->GetStaticField(0x26A20);
		}
		static ::FlowCanvas::FlowHandler** StaticGet___9__28_0()
		{
			return (::FlowCanvas::FlowHandler**)Il2CppClass::FromTypeDefinitionIndex(BinderConnection___c_TypeDefinitionIndex)->GetStaticField(0x26A28);
		}
		static ::System::Object** StaticGet___9()
		{
			return (::System::Object**)Il2CppClass::FromTypeDefinitionIndex(BinderConnection___c_TypeDefinitionIndex)->GetStaticField(0x26A30);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + FLOWCANVAS_BINDERCONNECTION___C__CCTOR_OFFSET))();
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + FLOWCANVAS_BINDERCONNECTION___C__CTOR_OFFSET))(this);
		}

		::System::Object* _GatherAndValidateSourcePort_b__27_0()
		{
			return ((::System::Object*(*)(::PVOID))((::PBYTE)hIl2Cpp + FLOWCANVAS_BINDERCONNECTION___C__GATHERANDVALIDATESOURCEPORT_B__27_0_OFFSET))(this);
		}

		::System::Void _GatherAndValidateTargetPort_b__28_0(::FlowCanvas::Flow f)
		{
			return ((::System::Void(*)(::PVOID, ::FlowCanvas::Flow))((::PBYTE)hIl2Cpp + FLOWCANVAS_BINDERCONNECTION___C__GATHERANDVALIDATETARGETPORT_B__28_0_OFFSET))(this, f);
		}
	};
}
