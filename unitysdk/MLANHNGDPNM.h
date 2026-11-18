#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Foundation/Variable_1.h"
#include "unitysdk/Foundation/Variable_2.h"
#include "unitysdk/NEOKPBGNDPA.h"
#include "unitysdk/PipelineCamera/AnisotropyVelocityBasedFloatDamper_2.h"
#include "unitysdk/PipelineCamera/CriticalSpringDamper.h"
#include "unitysdk/PipelineCamera/PositionAxisDecomposer.h"
#include "unitysdk/System/ValueType.h"
#include "unitysdk/UnityEngine/LayerMask.h"
#include "unitysdk/UnityEngine/RaycastHit.h"
#include "unitysdk/UnityEngine/Vector3.h"

namespace System { template <typename T1, typename T2> class Func_2; }
namespace System { template <typename T> class Func_1; }

#define MLANHNGDPNM_DNPNCDOODPJ_OFFSET UNITYSDK_OFFSET(0x726890)
#define MLANHNGDPNM_EGDPDINDNAC_OFFSET UNITYSDK_OFFSET(0x726820)
#define MLANHNGDPNM_HJHBMMMLJBD_OFFSET UNITYSDK_OFFSET(0x646580)
#define MLANHNGDPNM_HJLHFPELCKB_OFFSET UNITYSDK_OFFSET(0x7FEA80)
#define MLANHNGDPNM_IGJIGJCLNKJ_OFFSET UNITYSDK_OFFSET(0x7FEAB0)
#define MLANHNGDPNM_PPIMFFBLNJF_OFFSET UNITYSDK_OFFSET(0x726800)
#define MLANHNGDPNM__CCTOR_OFFSET UNITYSDK_OFFSET(0x1A699130)

inline static constexpr unsigned int MLANHNGDPNM_TypeDefinitionIndex = 56245;

struct alignas(8) MLANHNGDPNM
{
	static ::PipelineCamera::PositionAxisDecomposer* StaticGet_CLICFAPMJPJ()
	{
		return (::PipelineCamera::PositionAxisDecomposer*)Il2CppClass::FromTypeDefinitionIndex(MLANHNGDPNM_TypeDefinitionIndex)->GetStaticField(0x13180);
	}
	::Foundation::Variable_1<::UnityEngine::Vector3> IIDPPANMFBI; // 0x10
	::System::Byte _padding0[0x18];
	::System::Single FELNDJPEOJB; // 0x30
	::System::Single CKCLGGMEMKL; // 0x34
	::UnityEngine::LayerMask FOBIKPOHNHM; // 0x38
	::UnityEngine::RaycastHit LGGMGJADOOA; // 0x3C
	::Foundation::Variable_2<::UnityEngine::Vector3, ::NEOKPBGNDPA> IJGDKCGDMEK; // 0x70
	::System::Byte _padding1[0x18];
	::PipelineCamera::AnisotropyVelocityBasedFloatDamper_2<::PipelineCamera::CriticalSpringDamper, ::PipelineCamera::CriticalSpringDamper> JPCLILMADBI; // 0x90

	static ::System::Void _cctor()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + MLANHNGDPNM__CCTOR_OFFSET))();
	}

	::System::Void PPIMFFBLNJF(::System::Func_2<::NEOKPBGNDPA, ::UnityEngine::Vector3>* AOBNJBCBHAK)
	{
		return ((::System::Void(*)(::PVOID, ::System::Func_2<::NEOKPBGNDPA, ::UnityEngine::Vector3>*))((::PBYTE)hIl2Cpp + MLANHNGDPNM_PPIMFFBLNJF_OFFSET))(this, AOBNJBCBHAK);
	}

	::System::Boolean HJLHFPELCKB(::UnityEngine::Vector3 JEGOPMMENMI, ::UnityEngine::RaycastHit& PLJONGOPALM)
	{
		return ((::System::Boolean(*)(::PVOID, ::UnityEngine::Vector3, ::UnityEngine::RaycastHit&))((::PBYTE)hIl2Cpp + MLANHNGDPNM_HJLHFPELCKB_OFFSET))(this, JEGOPMMENMI, PLJONGOPALM);
	}

	::NEOKPBGNDPA IGJIGJCLNKJ(::System::Single PMNLNNGEIFM)
	{
		return ((::NEOKPBGNDPA(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + MLANHNGDPNM_IGJIGJCLNKJ_OFFSET))(this, PMNLNNGEIFM);
	}

	::System::Void HJHBMMMLJBD(::UnityEngine::LayerMask FBNGKPGLADH)
	{
		return ((::System::Void(*)(::PVOID, ::UnityEngine::LayerMask))((::PBYTE)hIl2Cpp + MLANHNGDPNM_HJHBMMMLJBD_OFFSET))(this, FBNGKPGLADH);
	}

	::System::Void EGDPDINDNAC(::System::Func_1<::UnityEngine::Vector3>* JEGOPMMENMI, ::System::Single HLGJCEEAOCG, ::System::Single NCCDJLDKFGA)
	{
		return ((::System::Void(*)(::PVOID, ::System::Func_1<::UnityEngine::Vector3>*, ::System::Single, ::System::Single))((::PBYTE)hIl2Cpp + MLANHNGDPNM_EGDPDINDNAC_OFFSET))(this, JEGOPMMENMI, HLGJCEEAOCG, NCCDJLDKFGA);
	}

	::System::Void DNPNCDOODPJ(::System::Single HNOFGFMCMGN, ::System::Single FOOHEAPGLCL)
	{
		return ((::System::Void(*)(::PVOID, ::System::Single, ::System::Single))((::PBYTE)hIl2Cpp + MLANHNGDPNM_DNPNCDOODPJ_OFFSET))(this, HNOFGFMCMGN, FOOHEAPGLCL);
	}
};
