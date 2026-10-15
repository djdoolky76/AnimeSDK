#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/TextID.h"
namespace System { class String; }

#define CCKCBFHLGBA_GDENKPOLFAL_CTOR_OFFSET UNITYSDK_OFFSET(0x2EDF140)
#define CCKCBFHLGBA_GDENKPOLFAL_EQUALS_OFFSET UNITYSDK_OFFSET(0x3C40C40)
#define CCKCBFHLGBA_GDENKPOLFAL_GETHASHCODE_OFFSET UNITYSDK_OFFSET(0xE620)
#define CCKCBFHLGBA_GDENKPOLFAL_TOSTRING_OFFSET UNITYSDK_OFFSET(0x3C40B90)

inline static constexpr unsigned int CCKCBFHLGBA_GDENKPOLFAL_TypeDefinitionIndex = 15296;

	struct alignas(4) CCKCBFHLGBA_GDENKPOLFAL
	{
		::RPG::Client::TextID PHFMCACHFIJ; // 0x10
		::System::Void _ctor(::RPG::Client::TextID a1)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::TextID))((::PBYTE)hIl2Cpp + CCKCBFHLGBA_GDENKPOLFAL_CTOR_OFFSET))(this, a1);
		}

		::System::String* ToString()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + CCKCBFHLGBA_GDENKPOLFAL_TOSTRING_OFFSET))(this);
		}

		/*
		::System::Boolean Equals(::CCKCBFHLGBA_GDENKPOLFAL a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::CCKCBFHLGBA_GDENKPOLFAL))((::PBYTE)hIl2Cpp + CCKCBFHLGBA_GDENKPOLFAL_EQUALS_OFFSET))(this, a1);
		}
		*/

		::System::Int32 GetHashCode()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + CCKCBFHLGBA_GDENKPOLFAL_GETHASHCODE_OFFSET))(this);
		}

	};
