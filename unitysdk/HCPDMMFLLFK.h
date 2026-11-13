#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/MLKDDLHNNHH.h"
class HCPDMMFLLFK;
class OFGBOCFGHEE;

#define HCPDMMFLLFK_BPLPBPMEODA_OFFSET UNITYSDK_OFFSET(0x1B7C2970)
#define HCPDMMFLLFK_CLEAR_OFFSET UNITYSDK_OFFSET(0x1B7C29E0)
#define HCPDMMFLLFK_CTOR_OFFSET UNITYSDK_OFFSET(0x1B7C2CD0)
#define HCPDMMFLLFK_LGAOOKPFIMF_OFFSET UNITYSDK_OFFSET(0x1B7C2BE0)
#define HCPDMMFLLFK_ONEXECUTE_OFFSET UNITYSDK_OFFSET(0x1B7C2AD0)

inline static constexpr unsigned int HCPDMMFLLFK_TypeDefinitionIndex = 67830;

	class HCPDMMFLLFK : public ::MLKDDLHNNHH
	{
	public:
		::OFGBOCFGHEE* HNEBOCDHJGF; // 0x20
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + HCPDMMFLLFK_CTOR_OFFSET))(this);
		}

		static ::HCPDMMFLLFK* BPLPBPMEODA()
		{
			return ((::HCPDMMFLLFK*(*)())((::PBYTE)hIl2Cpp + HCPDMMFLLFK_BPLPBPMEODA_OFFSET))();
		}

		::System::Void Clear()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + HCPDMMFLLFK_CLEAR_OFFSET))(this);
		}

		::System::Void OnExecute()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + HCPDMMFLLFK_ONEXECUTE_OFFSET))(this);
		}

		::System::Void LGAOOKPFIMF()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + HCPDMMFLLFK_LGAOOKPFIMF_OFFSET))(this);
		}

	};
