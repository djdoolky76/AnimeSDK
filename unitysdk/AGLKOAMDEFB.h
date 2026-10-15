#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class AGLKOAMDEFB;
class FCOEMCEDLNL;
namespace System { class String; }

#define AGLKOAMDEFB_CTOR_OFFSET UNITYSDK_OFFSET(0x1CC91570)
#define AGLKOAMDEFB_OJNNBEJLDIJ_OFFSET UNITYSDK_OFFSET(0x1CC91260)

inline static constexpr unsigned int AGLKOAMDEFB_TypeDefinitionIndex = 14415;

	class AGLKOAMDEFB : public ::System::Object
	{
	public:
		::System::String* KJMPDIHMBGO; // 0x10
		::System::UInt32 JDLIPEJMGCP; // 0x18
		::System::UInt32 PHFMCACHFIJ; // 0x1C
		::System::UInt32 BOKJJKFCFME; // 0x20
		::System::UInt32 PBLDLDIEFNC; // 0x24
		::System::UInt32 PMFHEJEFCLM; // 0x28
		::System::UInt32 ONMOHCJHJPN; // 0x2C
		::System::Boolean BIGDEPHIPAI; // 0x30
		::System::Boolean DCJPFHPHABK; // 0x31
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + AGLKOAMDEFB_CTOR_OFFSET))(this);
		}

		static ::System::Void OJNNBEJLDIJ(::FCOEMCEDLNL* a1, ::AGLKOAMDEFB* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::AGLKOAMDEFB*))((::PBYTE)hIl2Cpp + AGLKOAMDEFB_OJNNBEJLDIJ_OFFSET))(a1, a2);
		}

	};
