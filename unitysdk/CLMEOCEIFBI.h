#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class KFELGAIGHAP;
namespace RPG::GameCore { class DynamicValueRangeCallback; }

#define CLMEOCEIFBI_CTOR_OFFSET UNITYSDK_OFFSET(0xD78C010)

inline static constexpr unsigned int CLMEOCEIFBI_TypeDefinitionIndex = 55841;

	class CLMEOCEIFBI : public ::System::Object
	{
	public:
		::RPG::GameCore::DynamicValueRangeCallback* EABKOHGCHFP; // 0x10
		::KFELGAIGHAP* AHEEAFKFALM; // 0x18
		::KFELGAIGHAP* CLJEBKODGHK; // 0x20
		::KFELGAIGHAP* LEAHACBFJBP; // 0x28
		::System::SByte EBPHCMMFAPJ; // 0x30
		::System::SByte IEFMFPIDINK; // 0x31
		::System::SByte PLPOFKKEENK; // 0x32
		::System::Boolean PDAAIEKJOJK; // 0x33
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLMEOCEIFBI_CTOR_OFFSET))(this);
		}

	};
