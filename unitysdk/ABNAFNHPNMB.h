#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
namespace System { class String; }

#define ABNAFNHPNMB_CTOR_OFFSET UNITYSDK_OFFSET(0x1D9F9120)

inline static constexpr unsigned int ABNAFNHPNMB_TypeDefinitionIndex = 44827;

	class ABNAFNHPNMB : public ::System::Object
	{
	public:
		::System::String* DHMHBHBBNOO; // 0x10
		::System::String* FAEOIHDJNCD; // 0x18
		::System::String* IOODIDEIOEF; // 0x20
		::System::Single CCPJOMJCKMM; // 0x28
		::System::Single IEHPFADHJFD; // 0x2C
		::System::Int32 NMOKIHDMMNG; // 0x30
		::System::UInt32 EKLLHECNLEE; // 0x34
		::System::Int32 KJJEEBJNAAA; // 0x38
		::System::Single MILIMEIMPBA; // 0x3C
		::System::Single PEKPLINNMJO; // 0x40
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + ABNAFNHPNMB_CTOR_OFFSET))(this);
		}

	};
