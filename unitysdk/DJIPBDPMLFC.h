#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Attribute.h"
namespace System { class String; }

#define DJIPBDPMLFC_CTOR_OFFSET UNITYSDK_OFFSET(0xF235AB0)

inline static constexpr unsigned int DJIPBDPMLFC_TypeDefinitionIndex = 52062;

	class DJIPBDPMLFC : public ::System::Attribute
	{
	public:
		::System::String* PFKOBAOBELI; // 0x10
		::System::String* DHIPFJBEJPI; // 0x18
		::System::String* KLAEFBPMEDP; // 0x20
		::System::String* AECMLMGHCGK; // 0x28
		::System::String* MBIAPFKCBDN; // 0x30
		::System::String* PMBDDEGGHBA; // 0x38
		::System::Boolean IPNEAGOMGGC; // 0x40
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + DJIPBDPMLFC_CTOR_OFFSET))(this);
		}

	};
