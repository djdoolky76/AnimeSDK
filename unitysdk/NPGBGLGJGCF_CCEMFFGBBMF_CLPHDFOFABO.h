#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/NPGBGLGJGCF_CCEMFFGBBMF_BCIJOKJLBAI.h"
#include "unitysdk/NPGBGLGJGCF_CCEMFFGBBMF_HLCLMAOPCHB.h"
#include "unitysdk/NPGBGLGJGCF_CCEMFFGBBMF_IMLBHLEBDDB.h"
#include "unitysdk/System/ValueType.h"
#include "unitysdk/UnityEngine/AI/NavMeshPathStatus.h"
#include "unitysdk/UnityEngine/Vector3.h"

namespace System::Collections::Generic { template <typename T> class List_1; }

#define NPGBGLGJGCF_CCEMFFGBBMF_CLPHDFOFABO_MGPMIAJKEOO_OFFSET UNITYSDK_OFFSET(0x777740)
#define NPGBGLGJGCF_CCEMFFGBBMF_CLPHDFOFABO_MOIAGOAGOGN_OFFSET UNITYSDK_OFFSET(0x777690)
#define NPGBGLGJGCF_CCEMFFGBBMF_CLPHDFOFABO_OCOFCPCAKHH_OFFSET UNITYSDK_OFFSET(0x7776F0)
#define NPGBGLGJGCF_CCEMFFGBBMF_CLPHDFOFABO__CTOR_OFFSET UNITYSDK_OFFSET(0x777590)

inline static constexpr unsigned int NPGBGLGJGCF_CCEMFFGBBMF_CLPHDFOFABO_TypeDefinitionIndex = 59323;

struct alignas(8) NPGBGLGJGCF_CCEMFFGBBMF_CLPHDFOFABO
{
	::System::Collections::Generic::List_1<::UnityEngine::Vector3>* LOAGBILMDHG; // 0x10
	::System::Int32 DJACHMKCCKJ; // 0x18
	::System::Int32 GHFBGKKLPKN; // 0x1C
	::System::Int32 MALEDDNNPPN; // 0x20
	::System::Single GHLDBADOCAJ; // 0x24
	::System::Int32 JHGKGEGGGFF; // 0x28
	::UnityEngine::Vector3 KLILFBFAELK; // 0x2C
	::System::Single AGAIPCEJKCP; // 0x38
	::UnityEngine::Vector3 IACKHFCLPJI; // 0x3C
	::UnityEngine::Vector3 BECIJFKMFKO; // 0x48
	::NPGBGLGJGCF_CCEMFFGBBMF_HLCLMAOPCHB CGIIAJNGBLK; // 0x54
	::System::Boolean FIOGFAEGJNB; // 0x58
	::System::Byte _padding0[0x3];
	::UnityEngine::AI::NavMeshPathStatus HADCKGFIDMP; // 0x5C
	::System::Boolean FPCCDJABEAI; // 0x60
	::System::Byte _padding1[0x7];
	::NPGBGLGJGCF_CCEMFFGBBMF_IMLBHLEBDDB EJHGOPOJNFL; // 0x68
	::NPGBGLGJGCF_CCEMFFGBBMF_BCIJOKJLBAI KPHMGJEDFLE; // 0x98

	::System::Void _ctor(::System::Int32 JHGKGEGGGFF)
	{
		return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + NPGBGLGJGCF_CCEMFFGBBMF_CLPHDFOFABO__CTOR_OFFSET))(this, JHGKGEGGGFF);
	}

	::System::Boolean MOIAGOAGOGN()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + NPGBGLGJGCF_CCEMFFGBBMF_CLPHDFOFABO_MOIAGOAGOGN_OFFSET))(this);
	}

	::System::Void OCOFCPCAKHH()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + NPGBGLGJGCF_CCEMFFGBBMF_CLPHDFOFABO_OCOFCPCAKHH_OFFSET))(this);
	}

	::System::Int32 MGPMIAJKEOO()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + NPGBGLGJGCF_CCEMFFGBBMF_CLPHDFOFABO_MGPMIAJKEOO_OFFSET))(this);
	}
};
