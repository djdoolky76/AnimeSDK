#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
namespace System { class String; }

#define CJADIOHCKFH_CTOR_OFFSET UNITYSDK_OFFSET(0xCF91060)

inline static constexpr unsigned int CJADIOHCKFH_TypeDefinitionIndex = 54828;

	class CJADIOHCKFH : public ::System::Object
	{
	public:
		::System::String* BMALIACHMOO; // 0x10
		::System::Boolean CPNNDFBDMCP; // 0x18
		::System::Byte _padding0[0x3];
		::System::Single LAJKDIGIBOF; // 0x1C
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CJADIOHCKFH_CTOR_OFFSET))(this);
		}

	};
