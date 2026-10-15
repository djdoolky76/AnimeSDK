#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/TextID.h"
#include "unitysdk/System/Object.h"
namespace System { class String; }

#define BMFFPNOKOJF_CTOR_OFFSET UNITYSDK_OFFSET(0xBDA4A50)

	class BMFFPNOKOJF : public ::System::Object
	{
	public:
		::System::String* IICNEELOMDJ; // 0x10
		::System::String* OLOIFNNLKJP; // 0x18
		::RPG::Client::TextID OEPLADOIMOC; // 0x20
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + BMFFPNOKOJF_CTOR_OFFSET))(this);
		}

	};
