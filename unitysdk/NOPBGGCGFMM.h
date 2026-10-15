#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/ESwitchHandGestureType.h"
#include "unitysdk/System/Object.h"
namespace Google::Protobuf { class ByteString; }
namespace System { class String; }

#define NOPBGGCGFMM_CTOR_OFFSET UNITYSDK_OFFSET(0xBCF7FC0)

	class NOPBGGCGFMM : public ::System::Object
	{
	public:
		::System::String* EMJGHMCNNFO; // 0x10
		::Google::Protobuf::ByteString* IBFOFBDLKEG; // 0x18
		::RPG::GameCore::ESwitchHandGestureType GFHIDBOOCMG; // 0x20
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + NOPBGGCGFMM_CTOR_OFFSET))(this);
		}

	};
