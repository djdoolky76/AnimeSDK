#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class CCGFCHPPIDH;
namespace System { class String; }

#define PCMJEHDDMNL_CTOR_OFFSET UNITYSDK_OFFSET(0xC000E50)

inline static constexpr unsigned int PCMJEHDDMNL_TypeDefinitionIndex = 64787;

	class PCMJEHDDMNL : public ::System::Object
	{
	public:
		::System::String* ID; // 0x10
		::CCGFCHPPIDH* Data; // 0x18
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + PCMJEHDDMNL_CTOR_OFFSET))(this);
		}

	};
