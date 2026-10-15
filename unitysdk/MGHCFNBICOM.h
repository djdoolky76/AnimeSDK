#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/TextID.h"
#include "unitysdk/System/Object.h"
class FCOEMCEDLNL;
class MGHCFNBICOM;
namespace System { class String; }

#define MGHCFNBICOM_CTOR_OFFSET UNITYSDK_OFFSET(0x1D165F10)
#define MGHCFNBICOM_OJNNBEJLDIJ_OFFSET UNITYSDK_OFFSET(0x1D165B10)

	class MGHCFNBICOM : public ::System::Object
	{
	public:
		::System::String* PPEBOKHAFNL; // 0x10
		::System::String* HMFPPOIIKHL; // 0x18
		::System::String* GNCEJNFIOJP; // 0x20
		::System::UInt32 BGDFEPFLGOC; // 0x28
		::System::Boolean GNDCCBNILML; // 0x2C
		::System::Byte _padding0[0x3];
		::System::UInt32 LIIPLGLNPGB; // 0x30
		::System::Byte _padding1[0x4];
		::RPG::Client::TextID PPCOMAHNFOL; // 0x38
		::System::UInt32 CKOIGMMCPKH; // 0x48
		::System::UInt32 LEIDKFJDHMM; // 0x4C
		::System::UInt32 DGHMGKCJAAF; // 0x50
		::System::UInt32 PHFMCACHFIJ; // 0x54
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MGHCFNBICOM_CTOR_OFFSET))(this);
		}

		static ::System::Void OJNNBEJLDIJ(::FCOEMCEDLNL* a1, ::MGHCFNBICOM* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::MGHCFNBICOM*))((::PBYTE)hIl2Cpp + MGHCFNBICOM_OJNNBEJLDIJ_OFFSET))(a1, a2);
		}

	};
