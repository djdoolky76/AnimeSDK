#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
namespace System { class String; }

#define PKFJHCPKMJD_CTOR_OFFSET UNITYSDK_OFFSET(0xC2AD390)

inline static constexpr unsigned int PKFJHCPKMJD_TypeDefinitionIndex = 72316;

	class PKFJHCPKMJD : public ::System::Object
	{
	public:
		::System::String* FBKAMIHGLFK; // 0x10
		::System::UInt32 PJIEOECDIFN; // 0x18
		::System::UInt32 AAGKEBFHLMC; // 0x1C
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + PKFJHCPKMJD_CTOR_OFFSET))(this);
		}

	};
