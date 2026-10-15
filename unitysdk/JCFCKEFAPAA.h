#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
namespace RPG::Client { class ElfFarmCellData; }
namespace System { class String; }

#define JCFCKEFAPAA_BMABDKMLHMG_OFFSET UNITYSDK_OFFSET(0x16588320)

inline static constexpr unsigned int JCFCKEFAPAA_TypeDefinitionIndex = 68661;

	class JCFCKEFAPAA : public ::System::Object
	{
	public:
		static ::System::String* BMABDKMLHMG(::RPG::Client::ElfFarmCellData* a1)
		{
			return ((::System::String*(*)(::RPG::Client::ElfFarmCellData*))((::PBYTE)hIl2Cpp + JCFCKEFAPAA_BMABDKMLHMG_OFFSET))(a1);
		}

	};
