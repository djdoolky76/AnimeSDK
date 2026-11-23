#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/AC5272709773EA72.h"

namespace ABC::CustomRenderPipeline { class TerrainDecalComp; }
namespace ABC::CustomRenderPipeline { class TerrainVTManager; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }
template <typename T> class FCECB52A00C1344E;

#define F526C8A72E4D2CDC_ADF735A41C8B7604_OFFSET UNITYSDK_OFFSET(0x27AE5E0)
#define F526C8A72E4D2CDC_B180D86C62877D7E_OFFSET UNITYSDK_OFFSET(0x27AF3C0)
#define F526C8A72E4D2CDC_EC22F59F2C588175_OFFSET UNITYSDK_OFFSET(0x27AF6B0)
#define F526C8A72E4D2CDC_EC61F92C30598CFB_OFFSET UNITYSDK_OFFSET(0x27AE540)
#define F526C8A72E4D2CDC_F9A14C797A75716E_OFFSET UNITYSDK_OFFSET(0x27AF090)
#define F526C8A72E4D2CDC_FEBFC6CC3C2B1A46_OFFSET UNITYSDK_OFFSET(0x27AF140)
#define F526C8A72E4D2CDC__CTOR_OFFSET UNITYSDK_OFFSET(0x27AFB40)

inline static constexpr unsigned int F526C8A72E4D2CDC_TypeDefinitionIndex = 16611;

class F526C8A72E4D2CDC
{
public:
	::ABC::CustomRenderPipeline::TerrainVTManager* E3F7322C520B1D5A; // 0x10
	::FCECB52A00C1344E<::ABC::CustomRenderPipeline::TerrainDecalComp*>* F7B039623C21B598; // 0x18
	::System::Collections::Generic::Dictionary_2<::AC5272709773EA72, ::FCECB52A00C1344E<::ABC::CustomRenderPipeline::TerrainDecalComp*>*>* E17AD248D1BCBD19; // 0x20

	::FCECB52A00C1344E<::AC5272709773EA72>* ADF735A41C8B7604(::ABC::CustomRenderPipeline::TerrainDecalComp* A567F659199E4401)
	{
		return ((::FCECB52A00C1344E<::AC5272709773EA72>*(*)(::PVOID, ::ABC::CustomRenderPipeline::TerrainDecalComp*))((::PBYTE)hIl2Cpp + F526C8A72E4D2CDC_ADF735A41C8B7604_OFFSET))(this, A567F659199E4401);
	}

	::System::Void FEBFC6CC3C2B1A46()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + F526C8A72E4D2CDC_FEBFC6CC3C2B1A46_OFFSET))(this);
	}

	::System::Boolean EC61F92C30598CFB(::ABC::CustomRenderPipeline::TerrainDecalComp* A567F659199E4401)
	{
		return ((::System::Boolean(*)(::PVOID, ::ABC::CustomRenderPipeline::TerrainDecalComp*))((::PBYTE)hIl2Cpp + F526C8A72E4D2CDC_EC61F92C30598CFB_OFFSET))(this, A567F659199E4401);
	}

	::System::Void EC22F59F2C588175()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + F526C8A72E4D2CDC_EC22F59F2C588175_OFFSET))(this);
	}

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + F526C8A72E4D2CDC__CTOR_OFFSET))(this);
	}

	::System::Boolean B180D86C62877D7E(::ABC::CustomRenderPipeline::TerrainDecalComp* A567F659199E4401)
	{
		return ((::System::Boolean(*)(::PVOID, ::ABC::CustomRenderPipeline::TerrainDecalComp*))((::PBYTE)hIl2Cpp + F526C8A72E4D2CDC_B180D86C62877D7E_OFFSET))(this, A567F659199E4401);
	}

	::FCECB52A00C1344E<::ABC::CustomRenderPipeline::TerrainDecalComp*>* F9A14C797A75716E(::AC5272709773EA72 B29880F033C1F232)
	{
		return ((::FCECB52A00C1344E<::ABC::CustomRenderPipeline::TerrainDecalComp*>*(*)(::PVOID, ::AC5272709773EA72))((::PBYTE)hIl2Cpp + F526C8A72E4D2CDC_F9A14C797A75716E_OFFSET))(this, B29880F033C1F232);
	}
};
