#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/FDEAJMNFOBH.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/FlexBuffers/FlxMap.h"
#include "unitysdk/FlexBuffers/FlxValue.h"
#include "unitysdk/OMADHHOMDJC.h"

class FKNIEPCILLG;

#define PJLHFGMHOLP_FROMBINARY_OFFSET UNITYSDK_OFFSET(0x178DEBF0)
#define PJLHFGMHOLP_FROMFLX_OFFSET UNITYSDK_OFFSET(0x178DEA90)
#define PJLHFGMHOLP_IAEALJJMOKA_OFFSET UNITYSDK_OFFSET(0x178DECC0)
#define PJLHFGMHOLP_JGOGNKBOBCN_OFFSET UNITYSDK_OFFSET(0x178DE9E0)
#define PJLHFGMHOLP_PAFFHKDNPKF_OFFSET UNITYSDK_OFFSET(0x178DE990)
#define PJLHFGMHOLP_PDHKICNJNGG_OFFSET UNITYSDK_OFFSET(0x178DEB90)
#define PJLHFGMHOLP_PLPONJAKNEB_OFFSET UNITYSDK_OFFSET(0x178DEA30)
#define PJLHFGMHOLP__CTOR_OFFSET UNITYSDK_OFFSET(0x178DED10)

inline static constexpr unsigned int PJLHFGMHOLP_TypeDefinitionIndex = 74715;

class PJLHFGMHOLP : public ::System::Object
{
public:
	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + PJLHFGMHOLP__CTOR_OFFSET))(this);
	}

	::FDEAJMNFOBH PAFFHKDNPKF(::OMADHHOMDJC& LKJNBEPANGL)
	{
		return ((::FDEAJMNFOBH(*)(::PVOID, ::OMADHHOMDJC&))((::PBYTE)hIl2Cpp + PJLHFGMHOLP_PAFFHKDNPKF_OFFSET))(this, LKJNBEPANGL);
	}

	::System::Void JGOGNKBOBCN(::OMADHHOMDJC& LKJNBEPANGL)
	{
		return ((::System::Void(*)(::PVOID, ::OMADHHOMDJC&))((::PBYTE)hIl2Cpp + PJLHFGMHOLP_JGOGNKBOBCN_OFFSET))(this, LKJNBEPANGL);
	}

	::FDEAJMNFOBH PLPONJAKNEB(::OMADHHOMDJC& LKJNBEPANGL, ::System::Single PMNLNNGEIFM)
	{
		return ((::FDEAJMNFOBH(*)(::PVOID, ::OMADHHOMDJC&, ::System::Single))((::PBYTE)hIl2Cpp + PJLHFGMHOLP_PLPONJAKNEB_OFFSET))(this, LKJNBEPANGL, PMNLNNGEIFM);
	}

	::System::Boolean FromFlx(::FlexBuffers::FlxValue HHIJHDFHPOI)
	{
		return ((::System::Boolean(*)(::PVOID, ::FlexBuffers::FlxValue))((::PBYTE)hIl2Cpp + PJLHFGMHOLP_FROMFLX_OFFSET))(this, HHIJHDFHPOI);
	}

	::System::Boolean FromBinary(::FKNIEPCILLG* EAIMGHKJLNF, ::System::Int32 PIIOJAOKMDK)
	{
		return ((::System::Boolean(*)(::PVOID, ::FKNIEPCILLG*, ::System::Int32))((::PBYTE)hIl2Cpp + PJLHFGMHOLP_FROMBINARY_OFFSET))(this, EAIMGHKJLNF, PIIOJAOKMDK);
	}

	::System::Boolean IAEALJJMOKA(::FKNIEPCILLG* EAIMGHKJLNF, ::System::Int32 PIIOJAOKMDK)
	{
		return ((::System::Boolean(*)(::PVOID, ::FKNIEPCILLG*, ::System::Int32))((::PBYTE)hIl2Cpp + PJLHFGMHOLP_IAEALJJMOKA_OFFSET))(this, EAIMGHKJLNF, PIIOJAOKMDK);
	}

	::System::Boolean PDHKICNJNGG(::FlexBuffers::FlxMap HHIJHDFHPOI)
	{
		return ((::System::Boolean(*)(::PVOID, ::FlexBuffers::FlxMap))((::PBYTE)hIl2Cpp + PJLHFGMHOLP_PDHKICNJNGG_OFFSET))(this, HHIJHDFHPOI);
	}
};
