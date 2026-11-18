#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/GPOCDKHHGFG.h"
#include "unitysdk/PHONMJHOGAF.h"
#include "unitysdk/SGF/SEvent/DelegateEx.h"

class ELKCAPAANON;
class HHMKCBFMIGN;
class NGJPBIDNNPK;
namespace System { class String; }
namespace System { template <typename T> class Func_1; }
namespace System::Collections { class IEnumerable; }

#define FCBONKDCNJF_BAHHCNBICOE_OFFSET UNITYSDK_OFFSET(0x1CE8A7F0)
#define FCBONKDCNJF_GOMCOCGEEMB_1_OFFSET UNITYSDK_OFFSET(0x1CE8AED0)
#define FCBONKDCNJF_GOMCOCGEEMB_OFFSET UNITYSDK_OFFSET(0x1CE8ABD0)
#define FCBONKDCNJF_JIOGEIPGFEA_OFFSET UNITYSDK_OFFSET(0x1CE8B4D0)
#define FCBONKDCNJF_JMODAIAGKML_1_OFFSET UNITYSDK_OFFSET(0x1CE8B4F0)
#define FCBONKDCNJF_JMODAIAGKML_OFFSET UNITYSDK_OFFSET(0x1CE8B4E0)
#define FCBONKDCNJF_NMGMNPCHLBA_OFFSET UNITYSDK_OFFSET(0x1CE8B3D0)
#define FCBONKDCNJF_POLHCLGABGN_1_OFFSET UNITYSDK_OFFSET(0x1CE8B1F0)
#define FCBONKDCNJF__CTOR_1_OFFSET UNITYSDK_OFFSET(0x1CE8A7D0)
#define FCBONKDCNJF__CTOR_OFFSET UNITYSDK_OFFSET(0x1CE8A720)

inline static constexpr unsigned int FCBONKDCNJF_TypeDefinitionIndex = 34789;

class FCBONKDCNJF : public ::GPOCDKHHGFG
{
public:
	::SGF::SEvent::DelegateEx BPPLHNOOJNE; // 0x18
	::ELKCAPAANON* DBNBKCGCDOE; // 0x38

	::System::Void _ctor(::ELKCAPAANON* BDLKAKKCAII, ::HHMKCBFMIGN* NFBLPECBPKE)
	{
		return ((::System::Void(*)(::PVOID, ::ELKCAPAANON*, ::HHMKCBFMIGN*))((::PBYTE)hIl2Cpp + FCBONKDCNJF__CTOR_OFFSET))(this, BDLKAKKCAII, NFBLPECBPKE);
	}

	::System::Void _ctor_1(::ELKCAPAANON* BDLKAKKCAII, ::SGF::SEvent::DelegateEx& NFBLPECBPKE)
	{
		return ((::System::Void(*)(::PVOID, ::ELKCAPAANON*, ::SGF::SEvent::DelegateEx&))((::PBYTE)hIl2Cpp + FCBONKDCNJF__CTOR_1_OFFSET))(this, BDLKAKKCAII, NFBLPECBPKE);
	}

	::System::Void BAHHCNBICOE()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + FCBONKDCNJF_BAHHCNBICOE_OFFSET))(this);
	}

	::System::Void GOMCOCGEEMB()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + FCBONKDCNJF_GOMCOCGEEMB_OFFSET))(this);
	}

	::System::Void GOMCOCGEEMB_1(::PHONMJHOGAF FCPCLIJNDLA)
	{
		return ((::System::Void(*)(::PVOID, ::PHONMJHOGAF))((::PBYTE)hIl2Cpp + FCBONKDCNJF_GOMCOCGEEMB_1_OFFSET))(this, FCPCLIJNDLA);
	}

	::NGJPBIDNNPK* POLHCLGABGN_1(::System::Func_1<::System::Collections::IEnumerable*>* OAENJCGFFKE, ::System::String* HIAIKHDFCLN)
	{
		return ((::NGJPBIDNNPK*(*)(::PVOID, ::System::Func_1<::System::Collections::IEnumerable*>*, ::System::String*))((::PBYTE)hIl2Cpp + FCBONKDCNJF_POLHCLGABGN_1_OFFSET))(this, OAENJCGFFKE, HIAIKHDFCLN);
	}

	::System::Void NMGMNPCHLBA()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + FCBONKDCNJF_NMGMNPCHLBA_OFFSET))(this);
	}

	::System::Void JIOGEIPGFEA()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + FCBONKDCNJF_JIOGEIPGFEA_OFFSET))(this);
	}

	::System::Void JMODAIAGKML(::PHONMJHOGAF MIALFKCCCPI)
	{
		return ((::System::Void(*)(::PVOID, ::PHONMJHOGAF))((::PBYTE)hIl2Cpp + FCBONKDCNJF_JMODAIAGKML_OFFSET))(this, MIALFKCCCPI);
	}

	::System::Void JMODAIAGKML_1()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + FCBONKDCNJF_JMODAIAGKML_1_OFFSET))(this);
	}
};
