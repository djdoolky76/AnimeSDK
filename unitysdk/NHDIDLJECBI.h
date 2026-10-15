#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
namespace RPG::Client { class BaseGachaGroupData; }

#define NHDIDLJECBI_IKOHPADGMJL_OFFSET UNITYSDK_OFFSET(0xBBBEA50)

inline static constexpr unsigned int NHDIDLJECBI_TypeDefinitionIndex = 64320;

	class NHDIDLJECBI : public ::System::Object
	{
	public:
		static ::RPG::Client::BaseGachaGroupData* IKOHPADGMJL(::System::UInt32 a1)
		{
			return ((::RPG::Client::BaseGachaGroupData*(*)(::System::UInt32))((::PBYTE)hIl2Cpp + NHDIDLJECBI_IKOHPADGMJL_OFFSET))(a1);
		}

	};
