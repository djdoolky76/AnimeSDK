#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/MLKDDLHNNHH.h"
class IEGMGOADFAA;

#define IEGMGOADFAA_BPLPBPMEODA_OFFSET UNITYSDK_OFFSET(0x15EF9D90)
#define IEGMGOADFAA_CLEAR_OFFSET UNITYSDK_OFFSET(0x15EF9E00)
#define IEGMGOADFAA_CTOR_OFFSET UNITYSDK_OFFSET(0x15EF9EE0)
#define IEGMGOADFAA_ONEXECUTE_OFFSET UNITYSDK_OFFSET(0x15EF9E60)

inline static constexpr unsigned int IEGMGOADFAA_TypeDefinitionIndex = 65873;

	class IEGMGOADFAA : public ::MLKDDLHNNHH
	{
	public:
		::System::Int32 LPEHHMHPCMG; // 0x20
		::System::Int32 GHNMCEOFMJD; // 0x24
		::System::Int32 GDLOGJIBGLC; // 0x28
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
