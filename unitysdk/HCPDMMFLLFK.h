#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/MLKDDLHNNHH.h"
class HCPDMMFLLFK;
class OFGBOCFGHEE;

#define HCPDMMFLLFK_BPLPBPMEODA_OFFSET UNITYSDK_OFFSET(0x15C22370)
#define HCPDMMFLLFK_CLEAR_OFFSET UNITYSDK_OFFSET(0x15C223E0)
#define HCPDMMFLLFK_CTOR_OFFSET UNITYSDK_OFFSET(0x15C226D0)
#define HCPDMMFLLFK_LGAOOKPFIMF_OFFSET UNITYSDK_OFFSET(0x15C225E0)
#define HCPDMMFLLFK_ONEXECUTE_OFFSET UNITYSDK_OFFSET(0x15C224D0)

inline static constexpr unsigned int HCPDMMFLLFK_TypeDefinitionIndex = 65898;

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
