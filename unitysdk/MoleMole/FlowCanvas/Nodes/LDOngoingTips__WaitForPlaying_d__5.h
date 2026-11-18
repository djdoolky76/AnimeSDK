#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class OCMAPKJMHOF;
namespace FlowCanvas { class FlowOutput; }

#define MOLEMOLE_FLOWCANVAS_NODES_LDONGOINGTIPS__WAITFORPLAYING_D__5_MOVENEXT_OFFSET UNITYSDK_OFFSET(0x1B4B2AD0)
#define MOLEMOLE_FLOWCANVAS_NODES_LDONGOINGTIPS__WAITFORPLAYING_D__5_SYSTEM_COLLECTIONS_GENERIC_IENUMERATOR_SYSTEM_OBJECT__GET_CURRENT_OFFSET UNITYSDK_OFFSET(0x1B4B2D00)
#define MOLEMOLE_FLOWCANVAS_NODES_LDONGOINGTIPS__WAITFORPLAYING_D__5_SYSTEM_COLLECTIONS_IENUMERATOR_GET_CURRENT_OFFSET UNITYSDK_OFFSET(0x1B4B2D60)
#define MOLEMOLE_FLOWCANVAS_NODES_LDONGOINGTIPS__WAITFORPLAYING_D__5_SYSTEM_COLLECTIONS_IENUMERATOR_RESET_OFFSET UNITYSDK_OFFSET(0x1B4B2D10)
#define MOLEMOLE_FLOWCANVAS_NODES_LDONGOINGTIPS__WAITFORPLAYING_D__5_SYSTEM_IDISPOSABLE_DISPOSE_OFFSET UNITYSDK_OFFSET(0x1B4B2AC0)
#define MOLEMOLE_FLOWCANVAS_NODES_LDONGOINGTIPS__WAITFORPLAYING_D__5__CTOR_OFFSET UNITYSDK_OFFSET(0x1B4B2AB0)

namespace MoleMole::FlowCanvas::Nodes
{
	inline static constexpr unsigned int LDOngoingTips__WaitForPlaying_d__5_TypeDefinitionIndex = 83007;

	template <typename T1, typename T2, typename T3, typename T4, typename T5>
	class LDOngoingTips__WaitForPlaying_d__5 : public ::System::Object
	{
	public:
		::OCMAPKJMHOF* inLevel; // 0x10
		::FlowCanvas::FlowOutput* finish; // 0x18
		::System::Object* __2__current; // 0x20
		::System::Object* __8__1; // 0x28
		::System::Int32 __1__state; // 0x30
		::System::Int32 groupID; // 0x34

		::System::Void _ctor(::System::Int32 __1__state)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + MOLEMOLE_FLOWCANVAS_NODES_LDONGOINGTIPS__WAITFORPLAYING_D__5__CTOR_OFFSET))(this, __1__state);
		}

		::System::Void System_IDisposable_Dispose()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_FLOWCANVAS_NODES_LDONGOINGTIPS__WAITFORPLAYING_D__5_SYSTEM_IDISPOSABLE_DISPOSE_OFFSET))(this);
		}

		::System::Boolean MoveNext()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_FLOWCANVAS_NODES_LDONGOINGTIPS__WAITFORPLAYING_D__5_MOVENEXT_OFFSET))(this);
		}

		::System::Object* System_Collections_Generic_IEnumerator_System_Object__get_Current()
		{
			return ((::System::Object*(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_FLOWCANVAS_NODES_LDONGOINGTIPS__WAITFORPLAYING_D__5_SYSTEM_COLLECTIONS_GENERIC_IENUMERATOR_SYSTEM_OBJECT__GET_CURRENT_OFFSET))(this);
		}

		::System::Void System_Collections_IEnumerator_Reset()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_FLOWCANVAS_NODES_LDONGOINGTIPS__WAITFORPLAYING_D__5_SYSTEM_COLLECTIONS_IENUMERATOR_RESET_OFFSET))(this);
		}

		::System::Object* System_Collections_IEnumerator_get_Current()
		{
			return ((::System::Object*(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_FLOWCANVAS_NODES_LDONGOINGTIPS__WAITFORPLAYING_D__5_SYSTEM_COLLECTIONS_IENUMERATOR_GET_CURRENT_OFFSET))(this);
		}
	};
}
