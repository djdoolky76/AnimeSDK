#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/LCBKCCPECEN.h"
class EMILHGPLJHC;
namespace RPG::Client { class VersionUpdateProgressInfo; }
namespace System { class String; }

#define MHMHDGLNDCJ_CTOR_OFFSET UNITYSDK_OFFSET(0x1B367830)
#define MHMHDGLNDCJ_FFLCJNKLJBM_OFFSET UNITYSDK_OFFSET(0x1B3678E0)
#define MHMHDGLNDCJ_GKLEHMHPNCD_OFFSET UNITYSDK_OFFSET(0x1B367A30)
#define MHMHDGLNDCJ_GNPCEAPJJEP_OFFSET UNITYSDK_OFFSET(0x1B3679E0)
#define MHMHDGLNDCJ_PBEOADAADJO_OFFSET UNITYSDK_OFFSET(0x1B367CB0)

inline static constexpr unsigned int MHMHDGLNDCJ_TypeDefinitionIndex = 62615;

	class MHMHDGLNDCJ : public ::LCBKCCPECEN
	{
	public:
		::RPG::Client::VersionUpdateProgressInfo* APMIKLLFEOP; // 0x40
		::System::String* GGALBOIEFFF; // 0x48
		::EMILHGPLJHC* FNHMEHJKBEN; // 0x50
		::System::String* ADDBGNJAHDO; // 0x58
		// static const ::System::Object HEJIPBBACOC; // 0x0
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MHMHDGLNDCJ_CTOR_OFFSET))(this);
		}

		::System::Void GNPCEAPJJEP(::EMILHGPLJHC* a1)
		{
			return ((::System::Void(*)(::PVOID, ::EMILHGPLJHC*))((::PBYTE)hIl2Cpp + MHMHDGLNDCJ_GNPCEAPJJEP_OFFSET))(this, a1);
		}

		::System::Void GKLEHMHPNCD()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MHMHDGLNDCJ_GKLEHMHPNCD_OFFSET))(this);
		}

		::System::Void FFLCJNKLJBM()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MHMHDGLNDCJ_FFLCJNKLJBM_OFFSET))(this);
		}

		::System::Void PBEOADAADJO(::RPG::Client::VersionUpdateProgressInfo* a1)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::VersionUpdateProgressInfo*))((::PBYTE)hIl2Cpp + MHMHDGLNDCJ_PBEOADAADJO_OFFSET))(this, a1);
		}

	};
