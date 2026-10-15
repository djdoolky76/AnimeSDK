#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/GridFightGameModifier.h"
class NJKFOJJDGGG;

#define EEMLGHKOPFA_CTOR_OFFSET UNITYSDK_OFFSET(0x13A3F220)
#define EEMLGHKOPFA_IGIGCDNODHI_OFFSET UNITYSDK_OFFSET(0x13A3F280)
#define EEMLGHKOPFA_UPDATE_OFFSET UNITYSDK_OFFSET(0x13A3F230)

inline static constexpr unsigned int EEMLGHKOPFA_TypeDefinitionIndex = 65029;

	class EEMLGHKOPFA : public ::RPG::Client::GridFightGameModifier
	{
	public:
		::System::Void _ctor(::NJKFOJJDGGG* a1)
		{
			return ((::System::Void(*)(::PVOID, ::NJKFOJJDGGG*))((::PBYTE)hIl2Cpp + EEMLGHKOPFA_CTOR_OFFSET))(this, a1);
		}

		::System::Void Update(::NJKFOJJDGGG* a1)
		{
			return ((::System::Void(*)(::PVOID, ::NJKFOJJDGGG*))((::PBYTE)hIl2Cpp + EEMLGHKOPFA_UPDATE_OFFSET))(this, a1);
		}

		::System::UInt32 IGIGCDNODHI()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + EEMLGHKOPFA_IGIGCDNODHI_OFFSET))(this);
		}

	};
