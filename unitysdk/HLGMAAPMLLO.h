#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class ECONLFPJNAA;

#define HLGMAAPMLLO_CTOR_OFFSET UNITYSDK_OFFSET(0x15D53310)
#define HLGMAAPMLLO_HEPPBBLLBPN_OFFSET UNITYSDK_OFFSET(0x15D532B0)

inline static constexpr unsigned int HLGMAAPMLLO_TypeDefinitionIndex = 56303;

	class HLGMAAPMLLO : public ::System::Object
	{
	public:
		::System::UInt32 CPHIINKIDEB; // 0x10
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + HLGMAAPMLLO_CTOR_OFFSET))(this);
		}

		::ECONLFPJNAA* HEPPBBLLBPN()
		{
			return ((::ECONLFPJNAA*(*)(::PVOID))((::PBYTE)hIl2Cpp + HLGMAAPMLLO_HEPPBBLLBPN_OFFSET))(this);
		}

	};
