#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/ANMMOFEEPEP.h"
#include "unitysdk/IHJCOALACON.h"
#include "unitysdk/System/Object.h"

#define DKBCNADLOGN_CLEAR_OFFSET UNITYSDK_OFFSET(0xF254B50)
#define DKBCNADLOGN_CTOR_OFFSET UNITYSDK_OFFSET(0xF254BF0)
#define DKBCNADLOGN_DLHHEKECOHA_OFFSET UNITYSDK_OFFSET(0xF254BB0)
#define DKBCNADLOGN_KPJGDHLENIP_OFFSET UNITYSDK_OFFSET(0xF254A90)
#define DKBCNADLOGN_MAODDEJIDJP_OFFSET UNITYSDK_OFFSET(0xF254A70)

inline static constexpr unsigned int DKBCNADLOGN_TypeDefinitionIndex = 60549;

	class DKBCNADLOGN : public ::System::Object
	{
	public:
		::IHJCOALACON AMDDFDJAHCG; // 0x10
		::ANMMOFEEPEP FBHAJDLBCKO; // 0x38
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + DKBCNADLOGN_CTOR_OFFSET))(this);
		}

		::ANMMOFEEPEP MAODDEJIDJP()
		{
			return ((::ANMMOFEEPEP(*)(::PVOID))((::PBYTE)hIl2Cpp + DKBCNADLOGN_MAODDEJIDJP_OFFSET))(this);
		}

		::System::Void KPJGDHLENIP(::ANMMOFEEPEP a1, ::IHJCOALACON a2)
		{
			return ((::System::Void(*)(::PVOID, ::ANMMOFEEPEP, ::IHJCOALACON))((::PBYTE)hIl2Cpp + DKBCNADLOGN_KPJGDHLENIP_OFFSET))(this, a1, a2);
		}

		::System::Void Clear()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + DKBCNADLOGN_CLEAR_OFFSET))(this);
		}

		::System::Void DLHHEKECOHA()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + DKBCNADLOGN_DLHHEKECOHA_OFFSET))(this);
		}

	};
