#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/OIPMNNAHIFP.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/JBFAFOGGBCA.h"
class CJGJPBCDINJ;
class LINOLDCHLNE;

#define FNLGFGBODPB_ANGOMBFFLHD_OFFSET UNITYSDK_OFFSET(0x17F269D0)
#define FNLGFGBODPB_CTOR_OFFSET UNITYSDK_OFFSET(0x17F26840)
#define FNLGFGBODPB_ELLIKLAEGDH_OFFSET UNITYSDK_OFFSET(0x17F26970)
#define FNLGFGBODPB_IABANBEHOBL_OFFSET UNITYSDK_OFFSET(0x17F268C0)
#define FNLGFGBODPB_LAENHPGOLAN_OFFSET UNITYSDK_OFFSET(0x17F26AB0)

inline static constexpr unsigned int FNLGFGBODPB_TypeDefinitionIndex = 53002;

	class FNLGFGBODPB : public ::System::Object
	{
	public:
		::LINOLDCHLNE* HDEODDGJPIK; // 0x10
		::CJGJPBCDINJ* LDNELHFOJON; // 0x18
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
