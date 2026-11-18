#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/IJBOMPDBFHA.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/Cysharp/Threading/Tasks/UniTaskVoid.h"
#include "unitysdk/PipelineCamera/CameraVariableFetchContext_1.h"
#include "unitysdk/PipelineCamera/ScopedDelegateHandle.h"
#include "unitysdk/PipelineCamera/WorldBasicCameraData.h"

class GGNFFBAPKNA;
namespace MoleMole::Cameras { class CameraTrackBlending; }
namespace MoleMole::Utils { template <typename T> class TaskBasedEventCollection_1; }
namespace PipelineCamera { class CameraCommandSpawnSubModules; }
namespace PipelineCamera { class CameraCommandUnSpawnSubModules; }
namespace PipelineCamera { template <typename T> class CameraVariableSubModule_1; }
namespace PipelineCamera { template <typename T> class ICameraSubModuleBuilder_1; }
namespace PipelineCamera { template <typename T> class ICameraSubModule_1; }

#define LFEBKBLPAOA_ANJAOOMDFLA_OFFSET UNITYSDK_OFFSET(0x15248F80)
#define LFEBKBLPAOA_CDIFHCKCOAF_OFFSET UNITYSDK_OFFSET(0x15248BF0)
#define LFEBKBLPAOA_CFHBPGGKCFN_OFFSET UNITYSDK_OFFSET(0x15249A00)
#define LFEBKBLPAOA_DCGMAILEIDJ_OFFSET UNITYSDK_OFFSET(0x152486A0)
#define LFEBKBLPAOA_DISPOSE_OFFSET UNITYSDK_OFFSET(0x15248460)
#define LFEBKBLPAOA_FBELKFMALOL_OFFSET UNITYSDK_OFFSET(0x15248700)
#define LFEBKBLPAOA_GKDEIPPFKGG_OFFSET UNITYSDK_OFFSET(0x152494E0)
#define LFEBKBLPAOA_JLFNAHONPGB_OFFSET UNITYSDK_OFFSET(0x15248800)
#define LFEBKBLPAOA_JMDEKPONKMF_OFFSET UNITYSDK_OFFSET(0x15249AE0)
#define LFEBKBLPAOA_KCOGBBHDEDD_OFFSET UNITYSDK_OFFSET(0x15248750)
#define LFEBKBLPAOA_LHKFGCLMFCA_OFFSET UNITYSDK_OFFSET(0x15249490)
#define LFEBKBLPAOA_OACLPNECOGM_OFFSET UNITYSDK_OFFSET(0x15249A90)
#define LFEBKBLPAOA_OKJFMEHIFIA_OFFSET UNITYSDK_OFFSET(0x152493E0)
#define LFEBKBLPAOA_PFCADFOPOGD_OFFSET UNITYSDK_OFFSET(0x152495A0)
#define LFEBKBLPAOA__CTOR_OFFSET UNITYSDK_OFFSET(0x15248590)

inline static constexpr unsigned int LFEBKBLPAOA_TypeDefinitionIndex = 48654;

class LFEBKBLPAOA : public ::System::Object
{
public:
	::MoleMole::Utils::TaskBasedEventCollection_1<::System::Object*>* NNKIDGCEACP; // 0x10
	::GGNFFBAPKNA* NPFDALPCFHG; // 0x18
	::IJBOMPDBFHA MJMCHANEHBO; // 0x20
	::IJBOMPDBFHA KLKIOPNPBOB; // 0xD8
	::System::Single HPCHFLKFDEK; // 0x190
	::System::Boolean OLFHIEHDCCL; // 0x194
	::System::Boolean BNHJGMNKOHG; // 0x195
	::System::Boolean MCEEIIJADNI; // 0x196
	::System::Boolean GEHNCOADFFB; // 0x197

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + LFEBKBLPAOA__CTOR_OFFSET))(this);
	}

	::System::Void Dispose()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + LFEBKBLPAOA_DISPOSE_OFFSET))(this);
	}

	::System::Void DCGMAILEIDJ(::System::Single EGCKEINKEPM)
	{
		return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + LFEBKBLPAOA_DCGMAILEIDJ_OFFSET))(this, EGCKEINKEPM);
	}

	::System::Void FBELKFMALOL(::GGNFFBAPKNA* IIPPKCOCCJE)
	{
		return ((::System::Void(*)(::PVOID, ::GGNFFBAPKNA*))((::PBYTE)hIl2Cpp + LFEBKBLPAOA_FBELKFMALOL_OFFSET))(this, IIPPKCOCCJE);
	}

	::System::Void KCOGBBHDEDD(::PipelineCamera::ICameraSubModule_1<::PipelineCamera::WorldBasicCameraData>* FKMJKPGNCJI)
	{
		return ((::System::Void(*)(::PVOID, ::PipelineCamera::ICameraSubModule_1<::PipelineCamera::WorldBasicCameraData>*))((::PBYTE)hIl2Cpp + LFEBKBLPAOA_KCOGBBHDEDD_OFFSET))(this, FKMJKPGNCJI);
	}

	::System::Void JLFNAHONPGB(::MoleMole::Cameras::CameraTrackBlending* HLLFPBDMHNJ, ::MoleMole::Cameras::CameraTrackBlending* CCAKMNAGMGD, ::PipelineCamera::CameraCommandSpawnSubModules*& INBNCFGMKCL, ::PipelineCamera::CameraCommandUnSpawnSubModules*& EHDFDPBFINE)
	{
		return ((::System::Void(*)(::PVOID, ::MoleMole::Cameras::CameraTrackBlending*, ::MoleMole::Cameras::CameraTrackBlending*, ::PipelineCamera::CameraCommandSpawnSubModules*&, ::PipelineCamera::CameraCommandUnSpawnSubModules*&))((::PBYTE)hIl2Cpp + LFEBKBLPAOA_JLFNAHONPGB_OFFSET))(this, HLLFPBDMHNJ, CCAKMNAGMGD, INBNCFGMKCL, EHDFDPBFINE);
	}

	::PipelineCamera::ScopedDelegateHandle ANJAOOMDFLA(::MoleMole::Cameras::CameraTrackBlending* HLLFPBDMHNJ, ::MoleMole::Cameras::CameraTrackBlending* CCAKMNAGMGD)
	{
		return ((::PipelineCamera::ScopedDelegateHandle(*)(::PVOID, ::MoleMole::Cameras::CameraTrackBlending*, ::MoleMole::Cameras::CameraTrackBlending*))((::PBYTE)hIl2Cpp + LFEBKBLPAOA_ANJAOOMDFLA_OFFSET))(this, HLLFPBDMHNJ, CCAKMNAGMGD);
	}

	::System::Void OKJFMEHIFIA(::IJBOMPDBFHA AAIKDLEOKJN, ::IJBOMPDBFHA AKBBIHLKNEB)
	{
		return ((::System::Void(*)(::PVOID, ::IJBOMPDBFHA, ::IJBOMPDBFHA))((::PBYTE)hIl2Cpp + LFEBKBLPAOA_OKJFMEHIFIA_OFFSET))(this, AAIKDLEOKJN, AKBBIHLKNEB);
	}

	::LFEBKBLPAOA* LHKFGCLMFCA(::System::Boolean DAGJIEGOFJA)
	{
		return ((::LFEBKBLPAOA*(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + LFEBKBLPAOA_LHKFGCLMFCA_OFFSET))(this, DAGJIEGOFJA);
	}

	::PipelineCamera::WorldBasicCameraData GKDEIPPFKGG(::PipelineCamera::CameraVariableFetchContext_1<::PipelineCamera::WorldBasicCameraData> AAOCANGHBDG)
	{
		return ((::PipelineCamera::WorldBasicCameraData(*)(::PVOID, ::PipelineCamera::CameraVariableFetchContext_1<::PipelineCamera::WorldBasicCameraData>))((::PBYTE)hIl2Cpp + LFEBKBLPAOA_GKDEIPPFKGG_OFFSET))(this, AAOCANGHBDG);
	}

	::PipelineCamera::CameraVariableSubModule_1<::PipelineCamera::WorldBasicCameraData>* PFCADFOPOGD()
	{
		return ((::PipelineCamera::CameraVariableSubModule_1<::PipelineCamera::WorldBasicCameraData>*(*)(::PVOID))((::PBYTE)hIl2Cpp + LFEBKBLPAOA_PFCADFOPOGD_OFFSET))(this);
	}

	::Cysharp::Threading::Tasks::UniTaskVoid CFHBPGGKCFN(::MoleMole::Cameras::CameraTrackBlending* HLLFPBDMHNJ, ::MoleMole::Cameras::CameraTrackBlending* CCAKMNAGMGD)
	{
		return ((::Cysharp::Threading::Tasks::UniTaskVoid(*)(::PVOID, ::MoleMole::Cameras::CameraTrackBlending*, ::MoleMole::Cameras::CameraTrackBlending*))((::PBYTE)hIl2Cpp + LFEBKBLPAOA_CFHBPGGKCFN_OFFSET))(this, HLLFPBDMHNJ, CCAKMNAGMGD);
	}

	::System::Void OACLPNECOGM(::System::Boolean LMACLCIKCDD)
	{
		return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + LFEBKBLPAOA_OACLPNECOGM_OFFSET))(this, LMACLCIKCDD);
	}

	::PipelineCamera::ICameraSubModuleBuilder_1<::PipelineCamera::WorldBasicCameraData>* CDIFHCKCOAF()
	{
		return ((::PipelineCamera::ICameraSubModuleBuilder_1<::PipelineCamera::WorldBasicCameraData>*(*)(::PVOID))((::PBYTE)hIl2Cpp + LFEBKBLPAOA_CDIFHCKCOAF_OFFSET))(this);
	}

	::System::Void JMDEKPONKMF(::MoleMole::Cameras::CameraTrackBlending* HLLFPBDMHNJ, ::MoleMole::Cameras::CameraTrackBlending* CCAKMNAGMGD)
	{
		return ((::System::Void(*)(::PVOID, ::MoleMole::Cameras::CameraTrackBlending*, ::MoleMole::Cameras::CameraTrackBlending*))((::PBYTE)hIl2Cpp + LFEBKBLPAOA_JMDEKPONKMF_OFFSET))(this, HLLFPBDMHNJ, CCAKMNAGMGD);
	}
};
