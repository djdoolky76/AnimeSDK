#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/ParadoxNotion/Serialization/FullSerializer/fsBaseConverter.h"

#define PARADOXNOTION_SERIALIZATION_FULLSERIALIZER_FSCONVERTER__CTOR_OFFSET UNITYSDK_OFFSET(0x1EF5C790)

namespace ParadoxNotion::Serialization::FullSerializer
{
	inline static constexpr unsigned int fsConverter_TypeDefinitionIndex = 29280;

	class fsConverter : public ::ParadoxNotion::Serialization::FullSerializer::fsBaseConverter
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + PARADOXNOTION_SERIALIZATION_FULLSERIALIZER_FSCONVERTER__CTOR_OFFSET))(this);
		}
	};
}
