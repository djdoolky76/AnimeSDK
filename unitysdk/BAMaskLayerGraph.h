#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/UnityEngine/Rendering/BANodeHash.h"
class BADefaultGraph;
class BAMaskLayerGraph;
namespace UnityEngine::Rendering { class BAGraphAsset; }
namespace UnityEngine::Rendering { class BatchAnimationInstance; }

#define BAMASKLAYERGRAPH_CTOR_OFFSET UNITYSDK_OFFSET(0x1CBE5210)
#define BAMASKLAYERGRAPH_GETGRAPH_OFFSET UNITYSDK_OFFSET(0x1CBE5510)
#define BAMASKLAYERGRAPH_GET_OFFSET UNITYSDK_OFFSET(0x1CBE53B0)
#define BAMASKLAYERGRAPH_INIT_OFFSET UNITYSDK_OFFSET(0x1CBE5220)
#define BAMASKLAYERGRAPH_PLAYCLIP_OFFSET UNITYSDK_OFFSET(0x1CBE53C0)

	class BAMaskLayerGraph : public ::System::Object
	{
	public:
		::UnityEngine::Rendering::BAGraphAsset* _boneMaskGraph; // 0x10
		::UnityEngine::Rendering::BANodeHash outputNode; // 0x18
		::UnityEngine::Rendering::BANodeHash sampleMaskNode; // 0x20
		::UnityEngine::Rendering::BANodeHash maskClipNode; // 0x28
		static ::BAMaskLayerGraph** StaticGet__Graph()
		{
			return (::BAMaskLayerGraph**)UnitySDK::FromName("", "BAMaskLayerGraph")->GetStaticField(0x2BD20);
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + BAMASKLAYERGRAPH_CTOR_OFFSET))(this);
		}

		::System::Void Init()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + BAMASKLAYERGRAPH_INIT_OFFSET))(this);
		}

		::UnityEngine::Rendering::BAGraphAsset* Get()
		{
			return ((::UnityEngine::Rendering::BAGraphAsset*(*)(::PVOID))((::PBYTE)hIl2Cpp + BAMASKLAYERGRAPH_GET_OFFSET))(this);
		}

		::System::Void PlayClip(::UnityEngine::Rendering::BatchAnimationInstance* a1, ::System::Int32 a2, ::System::Int32 a3, ::System::Boolean a4, ::BADefaultGraph* a5, ::System::Int32 a6)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Rendering::BatchAnimationInstance*, ::System::Int32, ::System::Int32, ::System::Boolean, ::BADefaultGraph*, ::System::Int32))((::PBYTE)hIl2Cpp + BAMASKLAYERGRAPH_PLAYCLIP_OFFSET))(this, a1, a2, a3, a4, a5, a6);
		}

		static ::BAMaskLayerGraph* GetGraph()
		{
			return ((::BAMaskLayerGraph*(*)())((::PBYTE)hIl2Cpp + BAMASKLAYERGRAPH_GETGRAPH_OFFSET))();
		}

	};
