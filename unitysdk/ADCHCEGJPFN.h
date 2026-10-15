#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

#define ADCHCEGJPFN_CTOR_OFFSET UNITYSDK_OFFSET(0xB133B50)

inline static constexpr unsigned int ADCHCEGJPFN_TypeDefinitionIndex = 54283;

	class ADCHCEGJPFN : public ::System::Object
	{
	public:
		::System::UInt32 GBJLLAJJEOL; // 0x10
		::System::UInt32 JIDLKIHJLFL; // 0x14
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + ADCHCEGJPFN_CTOR_OFFSET))(this);
		}

	};
