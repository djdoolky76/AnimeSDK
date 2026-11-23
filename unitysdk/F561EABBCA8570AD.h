#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/B88870E9FB4B8C1A/F66B2D4167ED2B9B.h"
#include "unitysdk/System/Object.h"

namespace ABC::CustomRenderPipeline { class CustomPPMatPass; }
namespace UnityEngine { class Material; }

#define F561EABBCA8570AD_FD792C24FE49920B_OFFSET UNITYSDK_OFFSET(0x27BC390)
#define F561EABBCA8570AD__CTOR_OFFSET UNITYSDK_OFFSET(0x27BC480)

inline static constexpr unsigned int F561EABBCA8570AD_TypeDefinitionIndex = 16651;

class F561EABBCA8570AD : public ::System::Object
{
public:
	::B88870E9FB4B8C1A::F66B2D4167ED2B9B F476B975A55CF366; // 0x10
	::System::Byte _padding0[0x4];
	::UnityEngine::Material* F87551CF115BE5DD; // 0x18
	::System::Boolean FB6B312E44EFDC47; // 0x20
	::System::Boolean A26CB28A7B4744C5; // 0x21
	::System::Byte _padding1[0x2];
	::System::Int32 FAE85E2F3E0497AB; // 0x24
	::System::Single FF0A37159A523E06; // 0x28

	::System::Void FD792C24FE49920B(::ABC::CustomRenderPipeline::CustomPPMatPass* FCAB0683CBCB7042)
	{
		return ((::System::Void(*)(::PVOID, ::ABC::CustomRenderPipeline::CustomPPMatPass*))((::PBYTE)hIl2Cpp + F561EABBCA8570AD_FD792C24FE49920B_OFFSET))(this, FCAB0683CBCB7042);
	}

	::System::Void _ctor(::ABC::CustomRenderPipeline::CustomPPMatPass* FCAB0683CBCB7042)
	{
		return ((::System::Void(*)(::PVOID, ::ABC::CustomRenderPipeline::CustomPPMatPass*))((::PBYTE)hIl2Cpp + F561EABBCA8570AD__CTOR_OFFSET))(this, FCAB0683CBCB7042);
	}
};
