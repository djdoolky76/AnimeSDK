#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/TextID.h"
#include "unitysdk/System/Object.h"
namespace System { class String; }

#define HMLFAPGFDLB_CTOR_OFFSET UNITYSDK_OFFSET(0x15D7B5B0)

inline static constexpr unsigned int HMLFAPGFDLB_TypeDefinitionIndex = 71376;

	class HMLFAPGFDLB : public ::System::Object
	{
	public:
		::System::String* LAJHJAJNFGC; // 0x10
		::System::Boolean HLHLJLDBKOI; // 0x18
		::System::Boolean DFKJCMCDMEI; // 0x19
		::System::Byte _padding0[0x6];
		::RPG::Client::TextID NMMKDFFHOLL; // 0x20
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + HMLFAPGFDLB_CTOR_OFFSET))(this);
		}

	};
