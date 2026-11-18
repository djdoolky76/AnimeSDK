#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

#define FLOWCANVAS_NODES_LEGACY_PUREREFLECTEDMETHODNODE___C__DISPLAYCLASS8_2__CTOR_OFFSET UNITYSDK_OFFSET(0x1E7AA7F0)
#define FLOWCANVAS_NODES_LEGACY_PUREREFLECTEDMETHODNODE___C__DISPLAYCLASS8_2__REGISTERPORTS_B__3_OFFSET UNITYSDK_OFFSET(0x1E7AA800)

namespace FlowCanvas::Nodes::Legacy
{
	inline static constexpr unsigned int PureReflectedMethodNode___c__DisplayClass8_2_TypeDefinitionIndex = 30180;

	template <typename T1, typename T2>
	class PureReflectedMethodNode___c__DisplayClass8_2 : public ::System::Object
	{
	public:
		::System::Object* CS___8__locals2; // 0x10
		::System::Int32 i; // 0x18

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + FLOWCANVAS_NODES_LEGACY_PUREREFLECTEDMETHODNODE___C__DISPLAYCLASS8_2__CTOR_OFFSET))(this);
		}

		::System::Object* _RegisterPorts_b__3()
		{
			return ((::System::Object*(*)(::PVOID))((::PBYTE)hIl2Cpp + FLOWCANVAS_NODES_LEGACY_PUREREFLECTEDMETHODNODE___C__DISPLAYCLASS8_2__REGISTERPORTS_B__3_OFFSET))(this);
		}
	};
}
