#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

#define OFNAOANCMMA_CTOR_OFFSET UNITYSDK_OFFSET(0xBE41B30)

inline static constexpr unsigned int OFNAOANCMMA_TypeDefinitionIndex = 62108;

	class OFNAOANCMMA : public ::System::Object
	{
	public:
		::Il2CppArray<::System::UInt32>* APINNAAKCOB; // 0x10
		::System::UInt32 OLKDGBCPDEH; // 0x18
		::System::UInt32 JKOCMNCPNEA; // 0x1C
		::System::UInt32 CBAGLPOPOJE; // 0x20
		::System::UInt32 KLBIJIMBEBM; // 0x24
		::System::Int32 OMEKJNADCKI; // 0x28
		::System::Int32 GPGOJBOBLKG; // 0x2C
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + OFNAOANCMMA_CTOR_OFFSET))(this);
		}

	};
