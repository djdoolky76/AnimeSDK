#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/CNGOPCAEJMN.h"
#include "unitysdk/Cinemachine/CinemachineBlendDefinition.h"
#include "unitysdk/JHPEPDKHCJP.h"
#include "unitysdk/MoleMole/CameraShotData_HHOMOCCNHLF.h"
#include "unitysdk/PipelineCamera/WorldBasicCameraDataDeltaFlag.h"
#include "unitysdk/System/Nullable_1.h"
#include "unitysdk/OCLPKBONCJJ.h"

class CFBOAGFHJOC;
class HCIANHKCFIL;
class KBEJDIFPLDP;
class LONKKOMHFMD;
namespace Foundation { template <typename T> class AggregateObject_1; }
namespace System { class Action; }

#define CJEOILCFGOL_EDEFLFIKNFK_OFFSET UNITYSDK_OFFSET(0x16A2E3C0)
#define CJEOILCFGOL_HGJAICMNEEG_OFFSET UNITYSDK_OFFSET(0x16A2EE40)
#define CJEOILCFGOL_IDNOELJODOH_OFFSET UNITYSDK_OFFSET(0x16A2F400)
#define CJEOILCFGOL_IOHBGHFILHN_OFFSET UNITYSDK_OFFSET(0x16A2EEC0)
#define CJEOILCFGOL_LBCDGHMEJMM_OFFSET UNITYSDK_OFFSET(0x16A2F6D0)
#define CJEOILCFGOL_MKMANACJDJL_OFFSET UNITYSDK_OFFSET(0x16A2F520)
#define CJEOILCFGOL_NEJABFNFKIN_OFFSET UNITYSDK_OFFSET(0x16A2F2E0)
#define CJEOILCFGOL_NIGDIMFIAEJ_OFFSET UNITYSDK_OFFSET(0x16A2F370)
#define CJEOILCFGOL_NJEHFAMICON_OFFSET UNITYSDK_OFFSET(0x16A2F490)
#define CJEOILCFGOL_NPNPBOFHNJO_OFFSET UNITYSDK_OFFSET(0x16A2E8C0)
#define CJEOILCFGOL_NPOLNFDBOOD_OFFSET UNITYSDK_OFFSET(0x16A2F410)
#define CJEOILCFGOL_OKLLFEIJKHN_OFFSET UNITYSDK_OFFSET(0x16A2EA40)
#define CJEOILCFGOL_ONINITIALIZED_OFFSET UNITYSDK_OFFSET(0x16A2DF80)
#define CJEOILCFGOL__CTOR_OFFSET UNITYSDK_OFFSET(0x16A2F2D0)

inline static constexpr unsigned int CJEOILCFGOL_TypeDefinitionIndex = 73295;

class CJEOILCFGOL : public ::JHPEPDKHCJP
{
public:
	::System::Action* EGBBBMAIKNP; // 0x10
	::CFBOAGFHJOC* JDLDFLICPEE; // 0x18
	::System::Nullable_1<::Cinemachine::CinemachineBlendDefinition> DDDNAEGLKEL; // 0x20
	::System::Byte _padding0[0x10];
	::System::Boolean EGHCCPHFJML; // 0x38
	::System::Byte _padding1[0x3];
	::System::Single BOONOFMMPCK; // 0x3C
	::PipelineCamera::WorldBasicCameraDataDeltaFlag LKBFHBDKCDN; // 0x40
	::MoleMole::CameraShotData_HHOMOCCNHLF GKCKNLCEJIP; // 0x44

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CJEOILCFGOL__CTOR_OFFSET))(this);
	}

	::System::Void OnInitialized(::Foundation::AggregateObject_1<::CNGOPCAEJMN>* JPMDNBICBON)
	{
		return ((::System::Void(*)(::PVOID, ::Foundation::AggregateObject_1<::CNGOPCAEJMN>*))((::PBYTE)hIl2Cpp + CJEOILCFGOL_ONINITIALIZED_OFFSET))(this, JPMDNBICBON);
	}

	::System::Void EDEFLFIKNFK(::HCIANHKCFIL* AAOCANGHBDG)
	{
		return ((::System::Void(*)(::PVOID, ::HCIANHKCFIL*))((::PBYTE)hIl2Cpp + CJEOILCFGOL_EDEFLFIKNFK_OFFSET))(this, AAOCANGHBDG);
	}

	::System::Void OKLLFEIJKHN(::LONKKOMHFMD* AAOCANGHBDG)
	{
		return ((::System::Void(*)(::PVOID, ::LONKKOMHFMD*))((::PBYTE)hIl2Cpp + CJEOILCFGOL_OKLLFEIJKHN_OFFSET))(this, AAOCANGHBDG);
	}

	::System::Void HGJAICMNEEG(::KBEJDIFPLDP* AAOCANGHBDG)
	{
		return ((::System::Void(*)(::PVOID, ::KBEJDIFPLDP*))((::PBYTE)hIl2Cpp + CJEOILCFGOL_HGJAICMNEEG_OFFSET))(this, AAOCANGHBDG);
	}

	::System::Void NEJABFNFKIN(::LONKKOMHFMD* MIALFKCCCPI)
	{
		return ((::System::Void(*)(::PVOID, ::LONKKOMHFMD*))((::PBYTE)hIl2Cpp + CJEOILCFGOL_NEJABFNFKIN_OFFSET))(this, MIALFKCCCPI);
	}

	::System::Void NIGDIMFIAEJ(::HCIANHKCFIL* MIALFKCCCPI)
	{
		return ((::System::Void(*)(::PVOID, ::HCIANHKCFIL*))((::PBYTE)hIl2Cpp + CJEOILCFGOL_NIGDIMFIAEJ_OFFSET))(this, MIALFKCCCPI);
	}

	::System::Boolean IDNOELJODOH()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + CJEOILCFGOL_IDNOELJODOH_OFFSET))(this);
	}

	::System::Void NPOLNFDBOOD()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CJEOILCFGOL_NPOLNFDBOOD_OFFSET))(this);
	}

	::System::Void NJEHFAMICON(::KBEJDIFPLDP* MIALFKCCCPI)
	{
		return ((::System::Void(*)(::PVOID, ::KBEJDIFPLDP*))((::PBYTE)hIl2Cpp + CJEOILCFGOL_NJEHFAMICON_OFFSET))(this, MIALFKCCCPI);
	}

	static ::OCLPKBONCJJ MKMANACJDJL(::Cinemachine::CinemachineBlendDefinition& EPHGGFOBFHI, ::PipelineCamera::WorldBasicCameraDataDeltaFlag FCPCLIJNDLA)
	{
		return ((::OCLPKBONCJJ(*)(::Cinemachine::CinemachineBlendDefinition&, ::PipelineCamera::WorldBasicCameraDataDeltaFlag))((::PBYTE)hIl2Cpp + CJEOILCFGOL_MKMANACJDJL_OFFSET))(EPHGGFOBFHI, FCPCLIJNDLA);
	}

	::System::Void NPNPBOFHNJO(::Cinemachine::CinemachineBlendDefinition CCAKMNAGMGD)
	{
		return ((::System::Void(*)(::PVOID, ::Cinemachine::CinemachineBlendDefinition))((::PBYTE)hIl2Cpp + CJEOILCFGOL_NPNPBOFHNJO_OFFSET))(this, CCAKMNAGMGD);
	}

	::System::Void IOHBGHFILHN(::System::Boolean JCJDLICAODK)
	{
		return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + CJEOILCFGOL_IOHBGHFILHN_OFFSET))(this, JCJDLICAODK);
	}

	::System::Void LBCDGHMEJMM(::Foundation::AggregateObject_1<::CNGOPCAEJMN>* MIALFKCCCPI)
	{
		return ((::System::Void(*)(::PVOID, ::Foundation::AggregateObject_1<::CNGOPCAEJMN>*))((::PBYTE)hIl2Cpp + CJEOILCFGOL_LBCDGHMEJMM_OFFSET))(this, MIALFKCCCPI);
	}
};
