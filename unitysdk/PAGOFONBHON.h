#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class FCOEMCEDLNL;
class PAGOFONBHON;
namespace System { class String; }

#define PAGOFONBHON_CTOR_OFFSET UNITYSDK_OFFSET(0x1D2C0030)
#define PAGOFONBHON_OJNNBEJLDIJ_OFFSET UNITYSDK_OFFSET(0x1D2BFF00)

inline static constexpr unsigned int PAGOFONBHON_TypeDefinitionIndex = 12012;

	class PAGOFONBHON : public ::System::Object
	{
	public:
		::System::String* FBKAMIHGLFK; // 0x10
		::System::UInt32 PHFMCACHFIJ; // 0x18
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + PAGOFONBHON_CTOR_OFFSET))(this);
		}

		static ::System::Void OJNNBEJLDIJ(::FCOEMCEDLNL* a1, ::PAGOFONBHON* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::PAGOFONBHON*))((::PBYTE)hIl2Cpp + PAGOFONBHON_OJNNBEJLDIJ_OFFSET))(a1, a2);
		}

	};
