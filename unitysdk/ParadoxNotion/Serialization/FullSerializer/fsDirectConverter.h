#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/ParadoxNotion/Serialization/FullSerializer/fsBaseConverter.h"

#define PARADOXNOTION_SERIALIZATION_FULLSERIALIZER_FSDIRECTCONVERTER__CTOR_OFFSET UNITYSDK_OFFSET(0x1EF245F0)

namespace ParadoxNotion::Serialization::FullSerializer
{
	inline static constexpr unsigned int fsDirectConverter_TypeDefinitionIndex = 30346;

	class fsDirectConverter : public ::ParadoxNotion::Serialization::FullSerializer::fsBaseConverter
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + PARADOXNOTION_SERIALIZATION_FULLSERIALIZER_FSDIRECTCONVERTER__CTOR_OFFSET))(this);
		}
	};
}
