#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
namespace System { class String; }

#define DFGFJGJLDON_CTOR_OFFSET UNITYSDK_OFFSET(0x1DB2C0A0)

inline static constexpr unsigned int DFGFJGJLDON_TypeDefinitionIndex = 44711;

	class DFGFJGJLDON : public ::System::Object
	{
	public:
		::System::String* BJCBMNHOAGO; // 0x10
		::System::Int32 NPHAJEKCBKF; // 0x18
		::System::UInt32 GKJBKEDFHIB; // 0x1C
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + DFGFJGJLDON_CTOR_OFFSET))(this);
		}

	};
