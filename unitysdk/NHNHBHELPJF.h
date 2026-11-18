#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/ConfigModuleLib/Runtime/LoadPhase.h"
#include "unitysdk/MoleMole/Config/MaterialPropertyType.h"
#include "unitysdk/ConfigModuleLib/Runtime/LoadOpHandle.h"

namespace ConfigModuleLib::Runtime { template <typename T> class LoadOp_1; }
namespace MoleMole::Config { class ConfigMaterialPropertyExclusivity; }
namespace System::Collections::Generic { template <typename T> class HashSet_1; }

#define NHNHBHELPJF_COPIDBEMEIE_OFFSET UNITYSDK_OFFSET(0x137598F0)
#define NHNHBHELPJF_CREATEOP_OFFSET UNITYSDK_OFFSET(0x137588D0)
#define NHNHBHELPJF_HEEMFOKHAJM_OFFSET UNITYSDK_OFFSET(0x13759330)
#define NHNHBHELPJF_JFAPDECBMGI_OFFSET UNITYSDK_OFFSET(0x13758F00)
#define NHNHBHELPJF_JGAMPIJMACF_OFFSET UNITYSDK_OFFSET(0x13758DC0)
#define NHNHBHELPJF_LMMIOHCOJEP_OFFSET UNITYSDK_OFFSET(0x13758FD0)
#define NHNHBHELPJF_MJCMAFDPGJM_OFFSET UNITYSDK_OFFSET(0x13758A30)
#define NHNHBHELPJF_ONBIKOJBMHH_OFFSET UNITYSDK_OFFSET(0x137599B0)
#define NHNHBHELPJF_PRELOADFORPHASE_OFFSET UNITYSDK_OFFSET(0x13758830)
#define NHNHBHELPJF__CTOR_OFFSET UNITYSDK_OFFSET(0x13758710)

inline static constexpr unsigned int NHNHBHELPJF_TypeDefinitionIndex = 93076;

class NHNHBHELPJF
{
public:
	::System::Collections::Generic::HashSet_1<::MoleMole::Config::MaterialPropertyType>* BNAMJKGONFJ; // 0x30

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + NHNHBHELPJF__CTOR_OFFSET))(this);
	}

	::ConfigModuleLib::Runtime::LoadOpHandle PreloadForPhase(::ConfigModuleLib::Runtime::LoadPhase CFMBGCMCNMM)
	{
		return ((::ConfigModuleLib::Runtime::LoadOpHandle(*)(::PVOID, ::ConfigModuleLib::Runtime::LoadPhase))((::PBYTE)hIl2Cpp + NHNHBHELPJF_PRELOADFORPHASE_OFFSET))(this, CFMBGCMCNMM);
	}

	::ConfigModuleLib::Runtime::LoadOp_1<::MoleMole::Config::ConfigMaterialPropertyExclusivity*>* CreateOp()
	{
		return ((::ConfigModuleLib::Runtime::LoadOp_1<::MoleMole::Config::ConfigMaterialPropertyExclusivity*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + NHNHBHELPJF_CREATEOP_OFFSET))(this);
	}

	::System::Boolean MJCMAFDPGJM(::MoleMole::Config::MaterialPropertyType BCCDEEKJBLA, ::MoleMole::Config::MaterialPropertyType DAJOKBFPNND)
	{
		return ((::System::Boolean(*)(::PVOID, ::MoleMole::Config::MaterialPropertyType, ::MoleMole::Config::MaterialPropertyType))((::PBYTE)hIl2Cpp + NHNHBHELPJF_MJCMAFDPGJM_OFFSET))(this, BCCDEEKJBLA, DAJOKBFPNND);
	}

	::System::Boolean JGAMPIJMACF(::MoleMole::Config::MaterialPropertyType JLFOCLDLHAH)
	{
		return ((::System::Boolean(*)(::PVOID, ::MoleMole::Config::MaterialPropertyType))((::PBYTE)hIl2Cpp + NHNHBHELPJF_JGAMPIJMACF_OFFSET))(this, JLFOCLDLHAH);
	}

	::ConfigModuleLib::Runtime::LoadOpHandle JFAPDECBMGI(::ConfigModuleLib::Runtime::LoadPhase MIALFKCCCPI)
	{
		return ((::ConfigModuleLib::Runtime::LoadOpHandle(*)(::PVOID, ::ConfigModuleLib::Runtime::LoadPhase))((::PBYTE)hIl2Cpp + NHNHBHELPJF_JFAPDECBMGI_OFFSET))(this, MIALFKCCCPI);
	}

	::System::Void LMMIOHCOJEP(::MoleMole::Config::ConfigMaterialPropertyExclusivity* DFMKILICPFB)
	{
		return ((::System::Void(*)(::PVOID, ::MoleMole::Config::ConfigMaterialPropertyExclusivity*))((::PBYTE)hIl2Cpp + NHNHBHELPJF_LMMIOHCOJEP_OFFSET))(this, DFMKILICPFB);
	}

	::System::Void HEEMFOKHAJM(::MoleMole::Config::MaterialPropertyType JLFOCLDLHAH, ::System::Collections::Generic::HashSet_1<::MoleMole::Config::MaterialPropertyType>* IDPNNPOCDNN, ::System::Int32 GEJCKFFFKCL)
	{
		return ((::System::Void(*)(::PVOID, ::MoleMole::Config::MaterialPropertyType, ::System::Collections::Generic::HashSet_1<::MoleMole::Config::MaterialPropertyType>*, ::System::Int32))((::PBYTE)hIl2Cpp + NHNHBHELPJF_HEEMFOKHAJM_OFFSET))(this, JLFOCLDLHAH, IDPNNPOCDNN, GEJCKFFFKCL);
	}

	::MoleMole::Config::ConfigMaterialPropertyExclusivity* COPIDBEMEIE()
	{
		return ((::MoleMole::Config::ConfigMaterialPropertyExclusivity*(*)(::PVOID))((::PBYTE)hIl2Cpp + NHNHBHELPJF_COPIDBEMEIE_OFFSET))(this);
	}

	::System::Void ONBIKOJBMHH(::MoleMole::Config::MaterialPropertyType JLFOCLDLHAH, ::System::Collections::Generic::HashSet_1<::MoleMole::Config::MaterialPropertyType>* IDPNNPOCDNN)
	{
		return ((::System::Void(*)(::PVOID, ::MoleMole::Config::MaterialPropertyType, ::System::Collections::Generic::HashSet_1<::MoleMole::Config::MaterialPropertyType>*))((::PBYTE)hIl2Cpp + NHNHBHELPJF_ONBIKOJBMHH_OFFSET))(this, JLFOCLDLHAH, IDPNNPOCDNN);
	}
};
