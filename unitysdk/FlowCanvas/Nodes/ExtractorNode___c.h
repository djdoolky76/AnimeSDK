#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace System { class Type; }
namespace System { template <typename T1, typename T2> class Func_2; }

#define FLOWCANVAS_NODES_EXTRACTORNODE___C__CCTOR_OFFSET UNITYSDK_OFFSET(0x1E9C6CF0)
#define FLOWCANVAS_NODES_EXTRACTORNODE___C__CTOR_OFFSET UNITYSDK_OFFSET(0x1E9C6D30)
#define FLOWCANVAS_NODES_EXTRACTORNODE___C__GETEXTRACTORTYPE_B__1_0_OFFSET UNITYSDK_OFFSET(0x1E9C6D40)

namespace FlowCanvas::Nodes
{
	inline static constexpr unsigned int ExtractorNode___c_TypeDefinitionIndex = 29841;

	class ExtractorNode___c : public ::System::Object
	{
	public:
		static ::System::Object** StaticGet___9()
		{
			return (::System::Object**)Il2CppClass::FromTypeDefinitionIndex(ExtractorNode___c_TypeDefinitionIndex)->GetStaticField(0x26F40);
		}
		static ::System::Func_2<::System::Type*, ::System::Boolean>** StaticGet___9__1_0()
		{
			return (::System::Func_2<::System::Type*, ::System::Boolean>**)Il2CppClass::FromTypeDefinitionIndex(ExtractorNode___c_TypeDefinitionIndex)->GetStaticField(0x26F48);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + FLOWCANVAS_NODES_EXTRACTORNODE___C__CCTOR_OFFSET))();
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + FLOWCANVAS_NODES_EXTRACTORNODE___C__CTOR_OFFSET))(this);
		}

		::System::Boolean _GetExtractorType_b__1_0(::System::Type* t)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Type*))((::PBYTE)hIl2Cpp + FLOWCANVAS_NODES_EXTRACTORNODE___C__GETEXTRACTORTYPE_B__1_0_OFFSET))(this, t);
		}
	};
}
