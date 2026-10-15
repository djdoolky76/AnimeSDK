#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class OIBCPJPDBEF;
namespace RPG::Client { class MapMappingInfoData; }

#define NHJGPDBAOPL_BPLPBPMEODA_OFFSET UNITYSDK_OFFSET(0xBBBFBD0)

inline static constexpr unsigned int NHJGPDBAOPL_TypeDefinitionIndex = 62934;

	class NHJGPDBAOPL : public ::System::Object
	{
	public:
		static ::OIBCPJPDBEF* BPLPBPMEODA(::RPG::Client::MapMappingInfoData* a1)
		{
			return ((::OIBCPJPDBEF*(*)(::RPG::Client::MapMappingInfoData*))((::PBYTE)hIl2Cpp + NHJGPDBAOPL_BPLPBPMEODA_OFFSET))(a1);
		}

	};
