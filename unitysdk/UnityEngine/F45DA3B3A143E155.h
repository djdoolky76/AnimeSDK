#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/UnityEngine/ComputePipelineStateCollectInfo.h"
#include "unitysdk/UnityEngine/GraphicsPipelineStateCollectInfo.h"

namespace UnityEngine { class ComputeShader; }
namespace UnityEngine { class Shader; }

#define UNITYENGINE_F45DA3B3A143E155_ADAE07D5B951D5EB_OFFSET UNITYSDK_OFFSET(0x414DA70)
#define UNITYENGINE_F45DA3B3A143E155_B4E32BA21FED596F_OFFSET UNITYSDK_OFFSET(0x414DB10)
#define UNITYENGINE_F45DA3B3A143E155_B8656BA1F9A15594_OFFSET UNITYSDK_OFFSET(0x414D9A0)
#define UNITYENGINE_F45DA3B3A143E155_E0A114FE73F17D91_OFFSET UNITYSDK_OFFSET(0x414DA20)
#define UNITYENGINE_F45DA3B3A143E155_F9BCBDD8B5A37221_OFFSET UNITYSDK_OFFSET(0x414DAC0)
#define UNITYENGINE_F45DA3B3A143E155_FEA6728517055701_OFFSET UNITYSDK_OFFSET(0x414D9E0)
#define UNITYENGINE_F45DA3B3A143E155__CTOR_OFFSET UNITYSDK_OFFSET(0x1666CA0)

namespace UnityEngine
{
	inline static constexpr unsigned int F45DA3B3A143E155_TypeDefinitionIndex = 17437;

	class F45DA3B3A143E155 : public ::System::Object
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_F45DA3B3A143E155__CTOR_OFFSET))(this);
		}

		static ::System::Void E0A114FE73F17D91(::UnityEngine::ComputeShader* AD3E0DEBA7CD1D82, ::UnityEngine::ComputePipelineStateCollectInfo& E74F929A53317801)
		{
			return ((::System::Void(*)(::UnityEngine::ComputeShader*, ::UnityEngine::ComputePipelineStateCollectInfo&))((::PBYTE)hIl2Cpp + UNITYENGINE_F45DA3B3A143E155_E0A114FE73F17D91_OFFSET))(AD3E0DEBA7CD1D82, E74F929A53317801);
		}

		static ::System::Void F9BCBDD8B5A37221(::UnityEngine::Shader* AD3E0DEBA7CD1D82, ::UnityEngine::GraphicsPipelineStateCollectInfo& B29B366A07DEE78A)
		{
			return ((::System::Void(*)(::UnityEngine::Shader*, ::UnityEngine::GraphicsPipelineStateCollectInfo&))((::PBYTE)hIl2Cpp + UNITYENGINE_F45DA3B3A143E155_F9BCBDD8B5A37221_OFFSET))(AD3E0DEBA7CD1D82, B29B366A07DEE78A);
		}

		static ::System::UInt64 FEA6728517055701(::UnityEngine::ComputePipelineStateCollectInfo& B29880F033C1F232)
		{
			return ((::System::UInt64(*)(::UnityEngine::ComputePipelineStateCollectInfo&))((::PBYTE)hIl2Cpp + UNITYENGINE_F45DA3B3A143E155_FEA6728517055701_OFFSET))(B29880F033C1F232);
		}

		static ::System::Void ADAE07D5B951D5EB(::UnityEngine::ComputeShader* AD3E0DEBA7CD1D82, ::UnityEngine::ComputePipelineStateCollectInfo E74F929A53317801)
		{
			return ((::System::Void(*)(::UnityEngine::ComputeShader*, ::UnityEngine::ComputePipelineStateCollectInfo))((::PBYTE)hIl2Cpp + UNITYENGINE_F45DA3B3A143E155_ADAE07D5B951D5EB_OFFSET))(AD3E0DEBA7CD1D82, E74F929A53317801);
		}

		static ::System::Void B4E32BA21FED596F(::UnityEngine::Shader* AD3E0DEBA7CD1D82, ::UnityEngine::GraphicsPipelineStateCollectInfo B29B366A07DEE78A)
		{
			return ((::System::Void(*)(::UnityEngine::Shader*, ::UnityEngine::GraphicsPipelineStateCollectInfo))((::PBYTE)hIl2Cpp + UNITYENGINE_F45DA3B3A143E155_B4E32BA21FED596F_OFFSET))(AD3E0DEBA7CD1D82, B29B366A07DEE78A);
		}

		static ::System::UInt64 B8656BA1F9A15594(::UnityEngine::GraphicsPipelineStateCollectInfo& B29880F033C1F232)
		{
			return ((::System::UInt64(*)(::UnityEngine::GraphicsPipelineStateCollectInfo&))((::PBYTE)hIl2Cpp + UNITYENGINE_F45DA3B3A143E155_B8656BA1F9A15594_OFFSET))(B29880F033C1F232);
		}
	};
}
