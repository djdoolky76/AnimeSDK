#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace Coffee::UISoftMask { class GraphicConnector; }
namespace System { template <typename T> class Comparison_1; }

#define COFFEE_UISOFTMASK_GRAPHICCONNECTOR___C__ADDCONNECTOR_B__4_0_OFFSET UNITYSDK_OFFSET(0x1FCE7E80)
#define COFFEE_UISOFTMASK_GRAPHICCONNECTOR___C__CCTOR_OFFSET UNITYSDK_OFFSET(0x1FCE7E30)
#define COFFEE_UISOFTMASK_GRAPHICCONNECTOR___C__CTOR_OFFSET UNITYSDK_OFFSET(0x1FCE7E70)

namespace Coffee::UISoftMask
{
	inline static constexpr unsigned int GraphicConnector___c_TypeDefinitionIndex = 96117;

	class GraphicConnector___c : public ::System::Object
	{
	public:
		static ::System::Comparison_1<::Coffee::UISoftMask::GraphicConnector*>** StaticGet___9__4_0()
		{
			return (::System::Comparison_1<::Coffee::UISoftMask::GraphicConnector*>**)Il2CppClass::FromTypeDefinitionIndex(GraphicConnector___c_TypeDefinitionIndex)->GetStaticField(0x52CC0);
		}
		static ::System::Object** StaticGet___9()
		{
			return (::System::Object**)Il2CppClass::FromTypeDefinitionIndex(GraphicConnector___c_TypeDefinitionIndex)->GetStaticField(0x52CC8);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + COFFEE_UISOFTMASK_GRAPHICCONNECTOR___C__CCTOR_OFFSET))();
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + COFFEE_UISOFTMASK_GRAPHICCONNECTOR___C__CTOR_OFFSET))(this);
		}

		::System::Int32 _AddConnector_b__4_0(::Coffee::UISoftMask::GraphicConnector* x, ::Coffee::UISoftMask::GraphicConnector* y)
		{
			return ((::System::Int32(*)(::PVOID, ::Coffee::UISoftMask::GraphicConnector*, ::Coffee::UISoftMask::GraphicConnector*))((::PBYTE)hIl2Cpp + COFFEE_UISOFTMASK_GRAPHICCONNECTOR___C__ADDCONNECTOR_B__4_0_OFFSET))(this, x, y);
		}
	};
}
