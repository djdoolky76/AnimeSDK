#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace Foundation::AssetLoadGraph { class AssetLoadGraphRuntime; }
namespace System { class String; }

#define FOUNDATION_ASSETLOADGRAPH_ASSETLOADGRAPHHANDLE_ASSETLOADGRAPHHANDLECHECKER_FINALIZE_OFFSET UNITYSDK_OFFSET(0x1F9C6580)
#define FOUNDATION_ASSETLOADGRAPH_ASSETLOADGRAPHHANDLE_ASSETLOADGRAPHHANDLECHECKER_GET_USEHANDLECHECKER_OFFSET UNITYSDK_OFFSET(0x1F9C6340)
#define FOUNDATION_ASSETLOADGRAPH_ASSETLOADGRAPHHANDLE_ASSETLOADGRAPHHANDLECHECKER_GET_USELOADSTACK_OFFSET UNITYSDK_OFFSET(0x1F9C6400)
#define FOUNDATION_ASSETLOADGRAPH_ASSETLOADGRAPHHANDLE_ASSETLOADGRAPHHANDLECHECKER_MARKDISPOSED_OFFSET UNITYSDK_OFFSET(0x1F9C5E30)
#define FOUNDATION_ASSETLOADGRAPH_ASSETLOADGRAPHHANDLE_ASSETLOADGRAPHHANDLECHECKER_SET_USEHANDLECHECKER_OFFSET UNITYSDK_OFFSET(0x1F9C63A0)
#define FOUNDATION_ASSETLOADGRAPH_ASSETLOADGRAPHHANDLE_ASSETLOADGRAPHHANDLECHECKER_SET_USELOADSTACK_OFFSET UNITYSDK_OFFSET(0x1F9C6460)
#define FOUNDATION_ASSETLOADGRAPH_ASSETLOADGRAPHHANDLE_ASSETLOADGRAPHHANDLECHECKER__CCTOR_OFFSET UNITYSDK_OFFSET(0x1F9C64C0)
#define FOUNDATION_ASSETLOADGRAPH_ASSETLOADGRAPHHANDLE_ASSETLOADGRAPHHANDLECHECKER__CTOR_OFFSET UNITYSDK_OFFSET(0x1F9C5680)

namespace Foundation::AssetLoadGraph
{
	inline static constexpr unsigned int AssetLoadGraphHandle_AssetLoadGraphHandleChecker_TypeDefinitionIndex = 8624;

	class AssetLoadGraphHandle_AssetLoadGraphHandleChecker : public ::System::Object
	{
	public:
		static ::System::Boolean* StaticGet__UseHandleChecker_k__BackingField()
		{
			return (::System::Boolean*)Il2CppClass::FromTypeDefinitionIndex(AssetLoadGraphHandle_AssetLoadGraphHandleChecker_TypeDefinitionIndex)->GetStaticField(0x3A20);
		}
		static ::System::Boolean* StaticGet__UseLoadStack_k__BackingField()
		{
			return (::System::Boolean*)Il2CppClass::FromTypeDefinitionIndex(AssetLoadGraphHandle_AssetLoadGraphHandleChecker_TypeDefinitionIndex)->GetStaticField(0x3A21);
		}
		::System::String* _loadStack; // 0x10
		::Foundation::AssetLoadGraph::AssetLoadGraphRuntime* _runtime; // 0x18
		::System::Boolean _disposed; // 0x20

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + FOUNDATION_ASSETLOADGRAPH_ASSETLOADGRAPHHANDLE_ASSETLOADGRAPHHANDLECHECKER__CCTOR_OFFSET))();
		}

		::System::Void _ctor(::Foundation::AssetLoadGraph::AssetLoadGraphRuntime* runtime)
		{
			return ((::System::Void(*)(::PVOID, ::Foundation::AssetLoadGraph::AssetLoadGraphRuntime*))((::PBYTE)hIl2Cpp + FOUNDATION_ASSETLOADGRAPH_ASSETLOADGRAPHHANDLE_ASSETLOADGRAPHHANDLECHECKER__CTOR_OFFSET))(this, runtime);
		}

		static ::System::Boolean get_UseHandleChecker()
		{
			return ((::System::Boolean(*)())((::PBYTE)hIl2Cpp + FOUNDATION_ASSETLOADGRAPH_ASSETLOADGRAPHHANDLE_ASSETLOADGRAPHHANDLECHECKER_GET_USEHANDLECHECKER_OFFSET))();
		}

		static ::System::Void set_UseHandleChecker(::System::Boolean value)
		{
			return ((::System::Void(*)(::System::Boolean))((::PBYTE)hIl2Cpp + FOUNDATION_ASSETLOADGRAPH_ASSETLOADGRAPHHANDLE_ASSETLOADGRAPHHANDLECHECKER_SET_USEHANDLECHECKER_OFFSET))(value);
		}

		static ::System::Boolean get_UseLoadStack()
		{
			return ((::System::Boolean(*)())((::PBYTE)hIl2Cpp + FOUNDATION_ASSETLOADGRAPH_ASSETLOADGRAPHHANDLE_ASSETLOADGRAPHHANDLECHECKER_GET_USELOADSTACK_OFFSET))();
		}

		static ::System::Void set_UseLoadStack(::System::Boolean value)
		{
			return ((::System::Void(*)(::System::Boolean))((::PBYTE)hIl2Cpp + FOUNDATION_ASSETLOADGRAPH_ASSETLOADGRAPHHANDLE_ASSETLOADGRAPHHANDLECHECKER_SET_USELOADSTACK_OFFSET))(value);
		}

		::System::Void Finalize()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + FOUNDATION_ASSETLOADGRAPH_ASSETLOADGRAPHHANDLE_ASSETLOADGRAPHHANDLECHECKER_FINALIZE_OFFSET))(this);
		}

		::System::Void MarkDisposed()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + FOUNDATION_ASSETLOADGRAPH_ASSETLOADGRAPHHANDLE_ASSETLOADGRAPHHANDLECHECKER_MARKDISPOSED_OFFSET))(this);
		}
	};
}
