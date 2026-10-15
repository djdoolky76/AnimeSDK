#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Attribute.h"
namespace System { class String; }

#define BAJPNEENJHE_CTOR_OFFSET UNITYSDK_OFFSET(0x15E71070)

inline static constexpr unsigned int BAJPNEENJHE_TypeDefinitionIndex = 52065;

	class BAJPNEENJHE : public ::System::Attribute
	{
	public:
		::System::String* GLEHJFMCANF; // 0x10
		::System::Boolean MOKNCFJICIC; // 0x18
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + BAJPNEENJHE_CTOR_OFFSET))(this);
		}

	};
