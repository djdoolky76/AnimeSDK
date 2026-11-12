#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/AHDJACCHDCE.h"
#include "unitysdk/System/Object.h"
namespace RPG::GameCore { class DynamicValueRangeCallback; }

#define CLMEOCEIFBI_CTOR_OFFSET UNITYSDK_OFFSET(0xE35A2E0)

inline static constexpr unsigned int CLMEOCEIFBI_TypeDefinitionIndex = 57044;

	class CLMEOCEIFBI : public ::System::Object
	{
	public:
		::RPG::GameCore::DynamicValueRangeCallback* EABKOHGCHFP; // 0x10
		::AHDJACCHDCE AHEEAFKFALM; // 0x18
		::AHDJACCHDCE LEAHACBFJBP; // 0x38
		::AHDJACCHDCE CLJEBKODGHK; // 0x58
		::System::Boolean PDAAIEKJOJK; // 0x78
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLMEOCEIFBI_CTOR_OFFSET))(this);
		}

	};
