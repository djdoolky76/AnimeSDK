#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class FKNEEIEBIMF;
class NHPANPDOPKH;
namespace MoleMole::Config { class EffectTimeSegmentConfig; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define FKNEEIEBIMF_GAKIAOCPKPH_BBHEBPCHHHI_OFFSET UNITYSDK_OFFSET(0x165AFF00)
#define FKNEEIEBIMF_GAKIAOCPKPH_BNLAALHGAEF_OFFSET UNITYSDK_OFFSET(0x165AFEB0)
#define FKNEEIEBIMF_GAKIAOCPKPH_BOEGPHAODKJ_OFFSET UNITYSDK_OFFSET(0x165AFFB0)
#define FKNEEIEBIMF_GAKIAOCPKPH_GBLIMOLECFG_OFFSET UNITYSDK_OFFSET(0x165AFF50)
#define FKNEEIEBIMF_GAKIAOCPKPH_LAADFKKEBLB_OFFSET UNITYSDK_OFFSET(0x165AFE40)
#define FKNEEIEBIMF_GAKIAOCPKPH__CTOR_OFFSET UNITYSDK_OFFSET(0x165B0060)

inline static constexpr unsigned int FKNEEIEBIMF_GAKIAOCPKPH_TypeDefinitionIndex = 47143;

class FKNEEIEBIMF_GAKIAOCPKPH : public ::System::Object
{
public:
	::FKNEEIEBIMF* BCHELCMCPJB; // 0x10

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + FKNEEIEBIMF_GAKIAOCPKPH__CTOR_OFFSET))(this);
	}

	::System::Void LAADFKKEBLB()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + FKNEEIEBIMF_GAKIAOCPKPH_LAADFKKEBLB_OFFSET))(this);
	}

	::System::Void BNLAALHGAEF()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + FKNEEIEBIMF_GAKIAOCPKPH_BNLAALHGAEF_OFFSET))(this);
	}

	::System::Void BBHEBPCHHHI()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + FKNEEIEBIMF_GAKIAOCPKPH_BBHEBPCHHHI_OFFSET))(this);
	}

	::System::Collections::Generic::List_1<::MoleMole::Config::EffectTimeSegmentConfig*>* GBLIMOLECFG()
	{
		return ((::System::Collections::Generic::List_1<::MoleMole::Config::EffectTimeSegmentConfig*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + FKNEEIEBIMF_GAKIAOCPKPH_GBLIMOLECFG_OFFSET))(this);
	}

	::System::Void BOEGPHAODKJ(::NHPANPDOPKH* CENDLIKDNJA)
	{
		return ((::System::Void(*)(::PVOID, ::NHPANPDOPKH*))((::PBYTE)hIl2Cpp + FKNEEIEBIMF_GAKIAOCPKPH_BOEGPHAODKJ_OFFSET))(this, CENDLIKDNJA);
	}
};
