#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/GridFightGameModifier.h"
class NJKFOJJDGGG;

#define AGAAGLBPIFA_CTOR_OFFSET UNITYSDK_OFFSET(0xCF1C730)
#define AGAAGLBPIFA_EKLPOKOGHMC_OFFSET UNITYSDK_OFFSET(0xCF1C740)
#define AGAAGLBPIFA_NEJDALLPIMG_OFFSET UNITYSDK_OFFSET(0xCF1C7E0)

inline static constexpr unsigned int AGAAGLBPIFA_TypeDefinitionIndex = 65000;

	class AGAAGLBPIFA : public ::RPG::Client::GridFightGameModifier
	{
	public:
		::System::Void _ctor(::NJKFOJJDGGG* a1)
		{
			return ((::System::Void(*)(::PVOID, ::NJKFOJJDGGG*))((::PBYTE)hIl2Cpp + AGAAGLBPIFA_CTOR_OFFSET))(this, a1);
		}

		::System::Int64 EKLPOKOGHMC()
		{
			return ((::System::Int64(*)(::PVOID))((::PBYTE)hIl2Cpp + AGAAGLBPIFA_EKLPOKOGHMC_OFFSET))(this);
		}

		::System::Int64 NEJDALLPIMG()
		{
			return ((::System::Int64(*)(::PVOID))((::PBYTE)hIl2Cpp + AGAAGLBPIFA_NEJDALLPIMG_OFFSET))(this);
		}

	};
