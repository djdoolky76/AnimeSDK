#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/OIPMNNAHIFP.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/JBFAFOGGBCA.h"
class CJGJPBCDINJ;
class LINOLDCHLNE;

#define FNLGFGBODPB_ANGOMBFFLHD_OFFSET UNITYSDK_OFFSET(0x167F1790)
#define FNLGFGBODPB_CTOR_OFFSET UNITYSDK_OFFSET(0x167F1600)
#define FNLGFGBODPB_ELLIKLAEGDH_OFFSET UNITYSDK_OFFSET(0x167F1730)
#define FNLGFGBODPB_IABANBEHOBL_OFFSET UNITYSDK_OFFSET(0x167F1680)
#define FNLGFGBODPB_LAENHPGOLAN_OFFSET UNITYSDK_OFFSET(0x167F1870)

inline static constexpr unsigned int FNLGFGBODPB_TypeDefinitionIndex = 53002;

	class FNLGFGBODPB : public ::System::Object
	{
	public:
		::CJGJPBCDINJ* LDNELHFOJON; // 0x10
		::LINOLDCHLNE* HDEODDGJPIK; // 0x18
		::OIPMNNAHIFP IMPAJBHEJLA; // 0x20
		::System::Void _ctor(::OIPMNNAHIFP a1, ::CJGJPBCDINJ* a2, ::LINOLDCHLNE* a3)
		{
			return ((::System::Void(*)(::PVOID, ::OIPMNNAHIFP, ::CJGJPBCDINJ*, ::LINOLDCHLNE*))((::PBYTE)hIl2Cpp + FNLGFGBODPB_CTOR_OFFSET))(this, a1, a2, a3);
		}

		::System::Boolean IABANBEHOBL(::System::UInt32 a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + FNLGFGBODPB_IABANBEHOBL_OFFSET))(this, a1);
		}

		::System::Boolean ANGOMBFFLHD(::System::UInt32 a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + FNLGFGBODPB_ANGOMBFFLHD_OFFSET))(this, a1);
		}

		::System::Void LAENHPGOLAN(::System::UInt32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + FNLGFGBODPB_LAENHPGOLAN_OFFSET))(this, a1);
		}

		::JBFAFOGGBCA ELLIKLAEGDH(::System::UInt32 a1)
		{
			return ((::JBFAFOGGBCA(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + FNLGFGBODPB_ELLIKLAEGDH_OFFSET))(this, a1);
		}

	};
