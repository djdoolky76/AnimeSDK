#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/TextID.h"
#include "unitysdk/System/Object.h"
class ANFIGKCPBDH;
class FCOEMCEDLNL;
namespace System { class String; }

#define ANFIGKCPBDH_CTOR_OFFSET UNITYSDK_OFFSET(0x1CCE39C0)
#define ANFIGKCPBDH_OJNNBEJLDIJ_OFFSET UNITYSDK_OFFSET(0x1CCE3820)

	class ANFIGKCPBDH : public ::System::Object
	{
	public:
		::System::String* OLOIFNNLKJP; // 0x10
		::System::UInt32 PHFMCACHFIJ; // 0x18
		::System::Byte _padding0[0x4];
		::RPG::Client::TextID MJOOFPBABEA; // 0x20
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + ANFIGKCPBDH_CTOR_OFFSET))(this);
		}

		static ::System::Void OJNNBEJLDIJ(::FCOEMCEDLNL* a1, ::ANFIGKCPBDH* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::ANFIGKCPBDH*))((::PBYTE)hIl2Cpp + ANFIGKCPBDH_OJNNBEJLDIJ_OFFSET))(a1, a2);
		}

	};
