#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

#define FLKJJAMDMPM_CIKLLMDFAJL_CTOR_OFFSET UNITYSDK_OFFSET(0x167ABE40)

inline static constexpr unsigned int FLKJJAMDMPM_CIKLLMDFAJL_TypeDefinitionIndex = 61023;

	class FLKJJAMDMPM_CIKLLMDFAJL : public ::System::Object
	{
	public:
		::System::UInt16 AGCPFOMLCCD; // 0x10
		::System::Byte _padding0[0x2];
		::System::UInt32 LFHCPPLPFOM; // 0x14
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + FLKJJAMDMPM_CIKLLMDFAJL_CTOR_OFFSET))(this);
		}

	};
