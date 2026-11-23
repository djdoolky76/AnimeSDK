#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/ABC/CustomRenderPipeline/WindFieldUI_BE665D7D04E701B7.h"
#include "unitysdk/UnityEngine/MonoBehaviour.h"

namespace ABC::CustomRenderPipeline { class WindField; }
namespace UnityEngine { class TextMesh; }

#define ABC_CUSTOMRENDERPIPELINE_WINDFIELDUI_E02954280801633F_OFFSET UNITYSDK_OFFSET(0x2797E20)
#define ABC_CUSTOMRENDERPIPELINE_WINDFIELDUI_FDBCDBBFE02CD51A_OFFSET UNITYSDK_OFFSET(0x2797DC0)
#define ABC_CUSTOMRENDERPIPELINE_WINDFIELDUI__CTOR_OFFSET UNITYSDK_OFFSET(0x176D770)

namespace ABC::CustomRenderPipeline
{
	inline static constexpr unsigned int WindFieldUI_TypeDefinitionIndex = 16553;

	class WindFieldUI : public ::UnityEngine::MonoBehaviour
	{
	public:
		::ABC::CustomRenderPipeline::WindFieldUI_BE665D7D04E701B7 WindStrength; // 0x20
		::System::Byte _padding0[0x4];
		::UnityEngine::TextMesh* WindText; // 0x28
		::ABC::CustomRenderPipeline::WindField* F32D7BA4390D0004; // 0x30

		::System::Void FDBCDBBFE02CD51A()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + ABC_CUSTOMRENDERPIPELINE_WINDFIELDUI_FDBCDBBFE02CD51A_OFFSET))(this);
		}

		::System::Void E02954280801633F()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + ABC_CUSTOMRENDERPIPELINE_WINDFIELDUI_E02954280801633F_OFFSET))(this);
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + ABC_CUSTOMRENDERPIPELINE_WINDFIELDUI__CTOR_OFFSET))(this);
		}
	};
}
