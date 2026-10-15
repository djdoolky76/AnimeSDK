#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/OEOFKECAJEB.h"
#include "unitysdk/System/Object.h"
namespace System { class String; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define DJLLENLBFAD_CTOR_OFFSET UNITYSDK_OFFSET(0x1C5C44B0)

inline static constexpr unsigned int DJLLENLBFAD_TypeDefinitionIndex = 37163;

	class DJLLENLBFAD : public ::System::Object
	{
	public:
		::System::String* PEGNLFICABO; // 0x10
		::System::Collections::Generic::List_1<::OEOFKECAJEB>* LCOCDLIECKJ; // 0x18
		::System::String* EBMNJMIKNPP; // 0x20
		::System::String* HEFLHPGKLCI; // 0x28
		::System::Int32 CADHBHHCKPO; // 0x30
		::System::Boolean BHCLAFHOEAO; // 0x34
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + DJLLENLBFAD_CTOR_OFFSET))(this);
		}

	};
