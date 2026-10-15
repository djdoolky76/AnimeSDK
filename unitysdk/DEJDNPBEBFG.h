#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class DEJDNPBEBFG;
class FCOEMCEDLNL;

#define DEJDNPBEBFG_CTOR_OFFSET UNITYSDK_OFFSET(0x1CCE49F0)
#define DEJDNPBEBFG_OJNNBEJLDIJ_OFFSET UNITYSDK_OFFSET(0x1CCE4900)

inline static constexpr unsigned int DEJDNPBEBFG_TypeDefinitionIndex = 11711;

	class DEJDNPBEBFG : public ::System::Object
	{
	public:
		::System::UInt32 APAKCBFMCAB; // 0x10
		::System::UInt32 ACCJKGEKHKP; // 0x14
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + DEJDNPBEBFG_CTOR_OFFSET))(this);
		}

		static ::System::Void OJNNBEJLDIJ(::FCOEMCEDLNL* a1, ::DEJDNPBEBFG* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::DEJDNPBEBFG*))((::PBYTE)hIl2Cpp + DEJDNPBEBFG_OJNNBEJLDIJ_OFFSET))(a1, a2);
		}

	};
