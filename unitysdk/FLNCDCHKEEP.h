#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Foundation/Variable_2.h"
#include "unitysdk/HHIOBIBANNC.h"
#include "unitysdk/HIENEKAJNAK.h"
#include "unitysdk/MLANHNGDPNM.h"
#include "unitysdk/PipelineCamera/FinalCameraData.h"
#include "unitysdk/System/ValueType.h"
#include "unitysdk/NEOKPBGNDPA.h"
#include "unitysdk/PipelineCamera/WorldBasicCameraData.h"
#include "unitysdk/UnityEngine/LayerMask.h"
#include "unitysdk/UnityEngine/Vector3.h"

namespace System { template <typename T1, typename T2> class Func_2; }
namespace System { template <typename T> class Func_1; }

#define FLNCDCHKEEP_COKNIICCODC_OFFSET UNITYSDK_OFFSET(0x142A9CD0)
#define FLNCDCHKEEP_DNPNCDOODPJ_OFFSET UNITYSDK_OFFSET(0x726890)
#define FLNCDCHKEEP_EGDPDINDNAC_OFFSET UNITYSDK_OFFSET(0x726820)
#define FLNCDCHKEEP_HJHBMMMLJBD_OFFSET UNITYSDK_OFFSET(0x646580)
#define FLNCDCHKEEP_IBNCNLEOMDG_OFFSET UNITYSDK_OFFSET(0x726850)
#define FLNCDCHKEEP_IGJIGJCLNKJ_OFFSET UNITYSDK_OFFSET(0x7268E0)
#define FLNCDCHKEEP_MCBAHLHLBPB_OFFSET UNITYSDK_OFFSET(0x7268D0)
#define FLNCDCHKEEP_PADOEEKJOLF_OFFSET UNITYSDK_OFFSET(0x142A9B20)
#define FLNCDCHKEEP_PPIMFFBLNJF_OFFSET UNITYSDK_OFFSET(0x726800)

inline static constexpr unsigned int FLNCDCHKEEP_TypeDefinitionIndex = 41621;

struct alignas(8) FLNCDCHKEEP
{
	::MLANHNGDPNM LDNHJJHJIJL; // 0x10
	::Foundation::Variable_2<::PipelineCamera::FinalCameraData, ::HIENEKAJNAK> ABMMNCKCDBH; // 0x118
	::System::Byte _padding0[0x30];
	::HHIOBIBANNC NOENOOFKJIA; // 0x150

	::System::Void PPIMFFBLNJF(::System::Func_2<::NEOKPBGNDPA, ::UnityEngine::Vector3>* AOBNJBCBHAK)
	{
		return ((::System::Void(*)(::PVOID, ::System::Func_2<::NEOKPBGNDPA, ::UnityEngine::Vector3>*))((::PBYTE)hIl2Cpp + FLNCDCHKEEP_PPIMFFBLNJF_OFFSET))(this, AOBNJBCBHAK);
	}

	::System::Void EGDPDINDNAC(::System::Func_1<::UnityEngine::Vector3>* JEGOPMMENMI, ::System::Single HLGJCEEAOCG, ::System::Single NCCDJLDKFGA)
	{
		return ((::System::Void(*)(::PVOID, ::System::Func_1<::UnityEngine::Vector3>*, ::System::Single, ::System::Single))((::PBYTE)hIl2Cpp + FLNCDCHKEEP_EGDPDINDNAC_OFFSET))(this, JEGOPMMENMI, HLGJCEEAOCG, NCCDJLDKFGA);
	}

	::System::Void IBNCNLEOMDG(::System::Func_2<::HIENEKAJNAK, ::PipelineCamera::FinalCameraData>* NGOEGCHGCBB)
	{
		return ((::System::Void(*)(::PVOID, ::System::Func_2<::HIENEKAJNAK, ::PipelineCamera::FinalCameraData>*))((::PBYTE)hIl2Cpp + FLNCDCHKEEP_IBNCNLEOMDG_OFFSET))(this, NGOEGCHGCBB);
	}

	::System::Void HJHBMMMLJBD(::UnityEngine::LayerMask FBNGKPGLADH)
	{
		return ((::System::Void(*)(::PVOID, ::UnityEngine::LayerMask))((::PBYTE)hIl2Cpp + FLNCDCHKEEP_HJHBMMMLJBD_OFFSET))(this, FBNGKPGLADH);
	}

	::System::Void DNPNCDOODPJ(::System::Single HNOFGFMCMGN, ::System::Single FOOHEAPGLCL)
	{
		return ((::System::Void(*)(::PVOID, ::System::Single, ::System::Single))((::PBYTE)hIl2Cpp + FLNCDCHKEEP_DNPNCDOODPJ_OFFSET))(this, HNOFGFMCMGN, FOOHEAPGLCL);
	}

	::System::Void MCBAHLHLBPB(::PipelineCamera::WorldBasicCameraData& IIHGNBNLLNG)
	{
		return ((::System::Void(*)(::PVOID, ::PipelineCamera::WorldBasicCameraData&))((::PBYTE)hIl2Cpp + FLNCDCHKEEP_MCBAHLHLBPB_OFFSET))(this, IIHGNBNLLNG);
	}

	static ::System::Single PADOEEKJOLF()
	{
		return ((::System::Single(*)())((::PBYTE)hIl2Cpp + FLNCDCHKEEP_PADOEEKJOLF_OFFSET))();
	}

	/*
	static ::FLNCDCHKEEP COKNIICCODC()
	{
		return ((::FLNCDCHKEEP(*)())((::PBYTE)hIl2Cpp + FLNCDCHKEEP_COKNIICCODC_OFFSET))();
	}
	*/

	::PipelineCamera::WorldBasicCameraData IGJIGJCLNKJ(::System::Single PMNLNNGEIFM, ::PipelineCamera::WorldBasicCameraData JFLDAALEMGB)
	{
		return ((::PipelineCamera::WorldBasicCameraData(*)(::PVOID, ::System::Single, ::PipelineCamera::WorldBasicCameraData))((::PBYTE)hIl2Cpp + FLNCDCHKEEP_IGJIGJCLNKJ_OFFSET))(this, PMNLNNGEIFM, JFLDAALEMGB);
	}
};
