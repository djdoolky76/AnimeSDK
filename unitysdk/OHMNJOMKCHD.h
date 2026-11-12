#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/GridFightGameModifier.h"
class NJKFOJJDGGG;

#define OHMNJOMKCHD_CTOR_OFFSET UNITYSDK_OFFSET(0xC72F5A0)
#define OHMNJOMKCHD_KIBGDKKJFHH_OFFSET UNITYSDK_OFFSET(0xC72F5B0)

inline static constexpr unsigned int OHMNJOMKCHD_TypeDefinitionIndex = 66619;

	class OHMNJOMKCHD : public ::RPG::Client::GridFightGameModifier
	{
	public:
		::System::Void _ctor(::NJKFOJJDGGG* a1)
		{
			return ((::System::Void(*)(::PVOID, ::NJKFOJJDGGG*))((::PBYTE)hIl2Cpp + OHMNJOMKCHD_CTOR_OFFSET))(this, a1);
		}

		::System::UInt32 KIBGDKKJFHH()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + OHMNJOMKCHD_KIBGDKKJFHH_OFFSET))(this);
		}

	};
