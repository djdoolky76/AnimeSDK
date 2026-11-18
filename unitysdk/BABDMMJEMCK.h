#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/ENGKPGFGGLM.h"
#include "unitysdk/MoleMole/Config/BaseProperty.h"
#include "unitysdk/MoleMole/Config/PropertyModifyFunction.h"

namespace System { class String; }

#define BABDMMJEMCK_CNHBDOMKKDE_OFFSET UNITYSDK_OFFSET(0x113CB7F0)
#define BABDMMJEMCK_FIGPAOKNJLN_OFFSET UNITYSDK_OFFSET(0x113CB890)
#define BABDMMJEMCK_GCDIGLPEOGH_OFFSET UNITYSDK_OFFSET(0x113CB760)
#define BABDMMJEMCK__CCTOR_OFFSET UNITYSDK_OFFSET(0x113CB6E0)
#define BABDMMJEMCK__CTOR_OFFSET UNITYSDK_OFFSET(0x113CB750)

inline static constexpr unsigned int BABDMMJEMCK_TypeDefinitionIndex = 48769;

class BABDMMJEMCK : public ::ENGKPGFGGLM
{
public:
	// static const ::System::UInt16 GBKNNOFLGDJ = 0xA5; // 0x0
	::System::String* LFNMPOCHPLP; // 0x20
	::MoleMole::Config::PropertyModifyFunction HDCIHCKELCC; // 0x28
	::System::Single HBOJLFKAOOH; // 0x2C
	::System::Double PMLOGFLOLNJ; // 0x30
	::MoleMole::Config::BaseProperty EHAKJBAKGDL; // 0x38

	static ::System::Void _cctor()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + BABDMMJEMCK__CCTOR_OFFSET))();
	}

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + BABDMMJEMCK__CTOR_OFFSET))(this);
	}

	::System::Void GCDIGLPEOGH()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + BABDMMJEMCK_GCDIGLPEOGH_OFFSET))(this);
	}

	::System::Void CNHBDOMKKDE(::MoleMole::Config::BaseProperty OBNIAHNMHPF, ::System::String* FBLGONAJGHM, ::MoleMole::Config::PropertyModifyFunction MDAMPAJOBBM, ::System::Single MFMMNDAHFAD, ::System::Double OICIDHAGAKN)
	{
		return ((::System::Void(*)(::PVOID, ::MoleMole::Config::BaseProperty, ::System::String*, ::MoleMole::Config::PropertyModifyFunction, ::System::Single, ::System::Double))((::PBYTE)hIl2Cpp + BABDMMJEMCK_CNHBDOMKKDE_OFFSET))(this, OBNIAHNMHPF, FBLGONAJGHM, MDAMPAJOBBM, MFMMNDAHFAD, OICIDHAGAKN);
	}

	::System::Void FIGPAOKNJLN()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + BABDMMJEMCK_FIGPAOKNJLN_OFFSET))(this);
	}
};
