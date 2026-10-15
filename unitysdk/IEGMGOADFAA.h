#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/MLKDDLHNNHH.h"
class IEGMGOADFAA;

#define IEGMGOADFAA_BPLPBPMEODA_OFFSET UNITYSDK_OFFSET(0x15EEDDE0)
#define IEGMGOADFAA_CLEAR_OFFSET UNITYSDK_OFFSET(0x15EEDE50)
#define IEGMGOADFAA_CTOR_OFFSET UNITYSDK_OFFSET(0x15EEDF30)
#define IEGMGOADFAA_ONEXECUTE_OFFSET UNITYSDK_OFFSET(0x15EEDEB0)

inline static constexpr unsigned int IEGMGOADFAA_TypeDefinitionIndex = 65873;

	class IEGMGOADFAA : public ::MLKDDLHNNHH
	{
	public:
		::System::Int32 GDLOGJIBGLC; // 0x20
		::System::Int32 LPEHHMHPCMG; // 0x24
		::System::Int32 GHNMCEOFMJD; // 0x28
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + IEGMGOADFAA_CTOR_OFFSET))(this);
		}

		static ::IEGMGOADFAA* BPLPBPMEODA()
		{
			return ((::IEGMGOADFAA*(*)())((::PBYTE)hIl2Cpp + IEGMGOADFAA_BPLPBPMEODA_OFFSET))();
		}

		::System::Void Clear()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + IEGMGOADFAA_CLEAR_OFFSET))(this);
		}

		::System::Void OnExecute()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + IEGMGOADFAA_ONEXECUTE_OFFSET))(this);
		}

	};
