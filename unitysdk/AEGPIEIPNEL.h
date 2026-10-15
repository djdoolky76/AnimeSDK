#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class AEGPIEIPNEL;
class FCOEMCEDLNL;

#define AEGPIEIPNEL_CTOR_OFFSET UNITYSDK_OFFSET(0x1CC84540)
#define AEGPIEIPNEL_OJNNBEJLDIJ_OFFSET UNITYSDK_OFFSET(0x1CC84480)

inline static constexpr unsigned int AEGPIEIPNEL_TypeDefinitionIndex = 13667;

	class AEGPIEIPNEL : public ::System::Object
	{
	public:
		::System::UInt32 PHFMCACHFIJ; // 0x10
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + AEGPIEIPNEL_CTOR_OFFSET))(this);
		}

		static ::System::Void OJNNBEJLDIJ(::FCOEMCEDLNL* a1, ::AEGPIEIPNEL* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::AEGPIEIPNEL*))((::PBYTE)hIl2Cpp + AEGPIEIPNEL_OJNNBEJLDIJ_OFFSET))(a1, a2);
		}

	};
