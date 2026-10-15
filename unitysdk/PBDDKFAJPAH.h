#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/GridFightGameModifier.h"
class NJKFOJJDGGG;

#define PBDDKFAJPAH_CTOR_OFFSET UNITYSDK_OFFSET(0xBFE2DB0)
#define PBDDKFAJPAH_JHHANIFBDPM_OFFSET UNITYSDK_OFFSET(0xBFE2DC0)
#define PBDDKFAJPAH_UPDATE_OFFSET UNITYSDK_OFFSET(0xBFE2E60)

inline static constexpr unsigned int PBDDKFAJPAH_TypeDefinitionIndex = 65021;

	class PBDDKFAJPAH : public ::RPG::Client::GridFightGameModifier
	{
	public:
		::System::Void _ctor(::NJKFOJJDGGG* a1)
		{
			return ((::System::Void(*)(::PVOID, ::NJKFOJJDGGG*))((::PBYTE)hIl2Cpp + PBDDKFAJPAH_CTOR_OFFSET))(this, a1);
		}

		::System::UInt32 JHHANIFBDPM()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + PBDDKFAJPAH_JHHANIFBDPM_OFFSET))(this);
		}

		::System::Void Update(::NJKFOJJDGGG* a1)
		{
			return ((::System::Void(*)(::PVOID, ::NJKFOJJDGGG*))((::PBYTE)hIl2Cpp + PBDDKFAJPAH_UPDATE_OFFSET))(this, a1);
		}

	};
