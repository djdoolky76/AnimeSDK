#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/MVector2.h"
#include "unitysdk/System/Object.h"

#define BJCIEOABGBE_CTOR_OFFSET UNITYSDK_OFFSET(0x1D7411D0)

inline static constexpr unsigned int BJCIEOABGBE_TypeDefinitionIndex = 37762;

	class BJCIEOABGBE : public ::System::Object
	{
	public:
		::System::Single NFEIGKAMLNE; // 0x10
		::System::Single FEFFFCHGJHE; // 0x14
		::System::Single BAFKPLNKGGD; // 0x18
		::RPG::MVector2 IONGHEOGALH; // 0x1C
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + BJCIEOABGBE_CTOR_OFFSET))(this);
		}

	};
