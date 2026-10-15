#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/TextID.h"
#include "unitysdk/System/Object.h"
class FCOEMCEDLNL;
class ONPADMPFEDI;
namespace System { class String; }

#define ONPADMPFEDI_CTOR_OFFSET UNITYSDK_OFFSET(0x1D2A64F0)
#define ONPADMPFEDI_OJNNBEJLDIJ_OFFSET UNITYSDK_OFFSET(0x1D2A6110)

	class ONPADMPFEDI : public ::System::Object
	{
	public:
		::System::String* OLOIFNNLKJP; // 0x10
		::System::UInt32 PNEIDAGEBOC; // 0x18
		::System::UInt32 LKOIJINLBBK; // 0x1C
		::System::UInt32 NIDFIGFJJLL; // 0x20
		::System::Byte _padding0[0x4];
		::RPG::Client::TextID OENAMINOLLF; // 0x28
		::RPG::Client::TextID NHALJPDONCP; // 0x38
		::RPG::Client::TextID NMAHGFAPENI; // 0x48
		::System::UInt32 BOKJJKFCFME; // 0x58
		::System::UInt32 OBDINDDLCIO; // 0x5C
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + ONPADMPFEDI_CTOR_OFFSET))(this);
		}

		static ::System::Void OJNNBEJLDIJ(::FCOEMCEDLNL* a1, ::ONPADMPFEDI* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::ONPADMPFEDI*))((::PBYTE)hIl2Cpp + ONPADMPFEDI_OJNNBEJLDIJ_OFFSET))(a1, a2);
		}

	};
