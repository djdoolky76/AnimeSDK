#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class AEAGFGMOICG;
class EDNNEIEIDJP;
class GFCOHGKHIPJ;

#define GFCOHGKHIPJ_ALJIOCDBMKO_OFFSET UNITYSDK_OFFSET(0x1C63B6E0)
#define GFCOHGKHIPJ_CTOR_OFFSET UNITYSDK_OFFSET(0x1C63B800)

inline static constexpr unsigned int GFCOHGKHIPJ_TypeDefinitionIndex = 36200;

	class GFCOHGKHIPJ : public ::System::Object
	{
	public:
		::EDNNEIEIDJP* LBGJHODBAEA; // 0x10
		::AEAGFGMOICG* PNDBGJPGCNL; // 0x18
		::System::Boolean NAFLDNEKPEA; // 0x20
		::System::Boolean DJBODDHJOLG; // 0x21
		::System::Boolean EFJBKFLJMOO; // 0x22
		::System::Boolean JKHBJAPNMKD; // 0x23
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + GFCOHGKHIPJ_CTOR_OFFSET))(this);
		}

		::System::Void ALJIOCDBMKO(::GFCOHGKHIPJ* a1)
		{
			return ((::System::Void(*)(::PVOID, ::GFCOHGKHIPJ*))((::PBYTE)hIl2Cpp + GFCOHGKHIPJ_ALJIOCDBMKO_OFFSET))(this, a1);
		}

	};
