#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace ABC::CustomRenderPipeline { class RendererData; }
namespace UnityEngine { class ComputeShader; }
namespace UnityEngine { class Material; }
namespace UnityEngine { class Shader; }

#define BA8E322398FEDDAF_F97B389C173BBBF6_ABF8F7151B8365D1_OFFSET UNITYSDK_OFFSET(0x27A7C10)
#define BA8E322398FEDDAF_F97B389C173BBBF6_E6FFCC95791B7633_OFFSET UNITYSDK_OFFSET(0x27A7CD0)
#define BA8E322398FEDDAF_F97B389C173BBBF6__CTOR_OFFSET UNITYSDK_OFFSET(0x27A7F60)

inline static constexpr unsigned int BA8E322398FEDDAF_F97B389C173BBBF6_TypeDefinitionIndex = 16627;

class BA8E322398FEDDAF_F97B389C173BBBF6 : public ::System::Object
{
public:
	::UnityEngine::Material* E2983985E34F2B71; // 0x10
	::UnityEngine::Material* A2F291238E7F82E4; // 0x18
	::UnityEngine::Material* F1F28BD056F222BD; // 0x20
	::UnityEngine::Material* F11B2F1D01C105C1; // 0x28
	::UnityEngine::Material* FB4A354B612612B2; // 0x30
	::UnityEngine::ComputeShader* A94B7FD334EE30A4; // 0x38
	::UnityEngine::ComputeShader* A6F5532B808F58E6; // 0x40
	::UnityEngine::ComputeShader* FEF2FA65C2D9E5A9; // 0x48
	::UnityEngine::Material* F6C58BDAF6F61CD2; // 0x50
	::UnityEngine::Material* BA6AAEA3DF4A42E5; // 0x58
	::UnityEngine::Material* BFEA7B8B588F827E; // 0x60
	::UnityEngine::Material* F3B028926B0AEE16; // 0x68
	::UnityEngine::Material* AD0D5E40AACF75A5; // 0x70

	::System::Void _ctor(::ABC::CustomRenderPipeline::RendererData* BA167A4B3C26D87D)
	{
		return ((::System::Void(*)(::PVOID, ::ABC::CustomRenderPipeline::RendererData*))((::PBYTE)hIl2Cpp + BA8E322398FEDDAF_F97B389C173BBBF6__CTOR_OFFSET))(this, BA167A4B3C26D87D);
	}

	::UnityEngine::Material* E6FFCC95791B7633(::UnityEngine::Shader* AD3E0DEBA7CD1D82)
	{
		return ((::UnityEngine::Material*(*)(::PVOID, ::UnityEngine::Shader*))((::PBYTE)hIl2Cpp + BA8E322398FEDDAF_F97B389C173BBBF6_E6FFCC95791B7633_OFFSET))(this, AD3E0DEBA7CD1D82);
	}

	::System::Void ABF8F7151B8365D1()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + BA8E322398FEDDAF_F97B389C173BBBF6_ABF8F7151B8365D1_OFFSET))(this);
	}
};
