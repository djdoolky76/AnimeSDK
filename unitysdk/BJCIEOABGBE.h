#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/MVector2.h"
#include "unitysdk/System/Object.h"

#define BJCIEOABGBE_CTOR_OFFSET UNITYSDK_OFFSET(0x1702D610)

inline static constexpr unsigned int BJCIEOABGBE_TypeDefinitionIndex = 37762;

	class BJCIEOABGBE : public ::System::Object
	{
	public:
		::RPG::MVector2 IONGHEOGALH; // 0x10
		::System::Single NFEIGKAMLNE; // 0x18
		::System::Single BAFKPLNKGGD; // 0x1C
		::System::Single FEFFFCHGJHE; // 0x20
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + BJCIEOABGBE_CTOR_OFFSET))(this);
		}

	};
