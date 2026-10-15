#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class FCOEMCEDLNL;
class HMBDKHPPBHB;
namespace System { class String; }

#define HMBDKHPPBHB_CTOR_OFFSET UNITYSDK_OFFSET(0x1CEC26F0)
#define HMBDKHPPBHB_OJNNBEJLDIJ_OFFSET UNITYSDK_OFFSET(0x1CEC25C0)

	class HMBDKHPPBHB : public ::System::Object
	{
	public:
		::System::String* GINFOPOAKHK; // 0x10
		::System::UInt32 PHFMCACHFIJ; // 0x18
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + HMBDKHPPBHB_CTOR_OFFSET))(this);
		}

		static ::System::Void OJNNBEJLDIJ(::FCOEMCEDLNL* a1, ::HMBDKHPPBHB* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::HMBDKHPPBHB*))((::PBYTE)hIl2Cpp + HMBDKHPPBHB_OJNNBEJLDIJ_OFFSET))(a1, a2);
		}

	};
