#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class FCOEMCEDLNL;
class JCAOAPBEMJD;
namespace System { class String; }

#define JCAOAPBEMJD_CTOR_OFFSET UNITYSDK_OFFSET(0x1D015520)
#define JCAOAPBEMJD_OJNNBEJLDIJ_OFFSET UNITYSDK_OFFSET(0x1D0153B0)

inline static constexpr unsigned int JCAOAPBEMJD_TypeDefinitionIndex = 11574;

	class JCAOAPBEMJD : public ::System::Object
	{
	public:
		::System::String* GINFOPOAKHK; // 0x10
		::System::UInt32 GMCBNNKJAGJ; // 0x18
		::System::UInt32 PHFMCACHFIJ; // 0x1C
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + JCAOAPBEMJD_CTOR_OFFSET))(this);
		}

		static ::System::Void OJNNBEJLDIJ(::FCOEMCEDLNL* a1, ::JCAOAPBEMJD* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::JCAOAPBEMJD*))((::PBYTE)hIl2Cpp + JCAOAPBEMJD_OJNNBEJLDIJ_OFFSET))(a1, a2);
		}

	};
