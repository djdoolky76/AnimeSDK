#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class A9DA69C5EACB8E3B_F3D88E3F61E9EF7C;
namespace System { class String; }

#define ZENFULCRUM_EMBEDDEDBROWSER_BROWSERNATIVE_BFBE817384DA2F01_BB5430B693C4207E_OFFSET UNITYSDK_OFFSET(0x440DC10)
#define ZENFULCRUM_EMBEDDEDBROWSER_BROWSERNATIVE_BFBE817384DA2F01__CTOR_OFFSET UNITYSDK_OFFSET(0x1666CA0)

namespace ZenFulcrum::EmbeddedBrowser
{
	inline static constexpr unsigned int BrowserNative_BFBE817384DA2F01_TypeDefinitionIndex = 19556;

	class BrowserNative_BFBE817384DA2F01 : public ::System::Object
	{
	public:
		::System::Boolean BDBA0EEA7D7EE498; // 0x10
		::System::Byte _padding0[0x7];
		::A9DA69C5EACB8E3B_F3D88E3F61E9EF7C* FBEDD8A175F4662E; // 0x18
		::System::String* F6DBA58E8CC5C382; // 0x20
		::System::Int32 BFEF2114ADE46C9D; // 0x28
		::System::Byte _padding1[0x4];
		::System::String* BE68C18FBFC68992; // 0x30
		::System::String* F6B5244AAACAADF6; // 0x38
		::System::String* B7A11E1E4675DB39; // 0x40
		::System::String* E0D5943BA70D0D07; // 0x48
		::System::Int32 FFFF2E770B96FBA7; // 0x50

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + ZENFULCRUM_EMBEDDEDBROWSER_BROWSERNATIVE_BFBE817384DA2F01__CTOR_OFFSET))(this);
		}

		::System::Void BB5430B693C4207E(::System::Object* BAF8A3E3C5E8EAEF)
		{
			return ((::System::Void(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + ZENFULCRUM_EMBEDDEDBROWSER_BROWSERNATIVE_BFBE817384DA2F01_BB5430B693C4207E_OFFSET))(this, BAF8A3E3C5E8EAEF);
		}
	};
}
