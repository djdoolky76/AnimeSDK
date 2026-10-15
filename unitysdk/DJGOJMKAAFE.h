#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/GridFightGameModifier.h"
class NJKFOJJDGGG;

#define DJGOJMKAAFE_CTOR_OFFSET UNITYSDK_OFFSET(0xF2347C0)
#define DJGOJMKAAFE_GET_SOLOSTANUID_OFFSET UNITYSDK_OFFSET(0xF2348E0)
#define DJGOJMKAAFE_SET_SOLOSTANUID_OFFSET UNITYSDK_OFFSET(0xF2348F0)
#define DJGOJMKAAFE_UPDATE_OFFSET UNITYSDK_OFFSET(0xF234840)

inline static constexpr unsigned int DJGOJMKAAFE_TypeDefinitionIndex = 65025;

	class DJGOJMKAAFE : public ::RPG::Client::GridFightGameModifier
	{
	public:
		::System::UInt32 _SoloStanUID_k__BackingField; // 0x28
		::System::Void _ctor(::NJKFOJJDGGG* a1)
		{
			return ((::System::Void(*)(::PVOID, ::NJKFOJJDGGG*))((::PBYTE)hIl2Cpp + DJGOJMKAAFE_CTOR_OFFSET))(this, a1);
		}

		::System::Void Update(::NJKFOJJDGGG* a1)
		{
			return ((::System::Void(*)(::PVOID, ::NJKFOJJDGGG*))((::PBYTE)hIl2Cpp + DJGOJMKAAFE_UPDATE_OFFSET))(this, a1);
		}

		::System::UInt32 get_SoloStanUID()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + DJGOJMKAAFE_GET_SOLOSTANUID_OFFSET))(this);
		}

		::System::Void set_SoloStanUID(::System::UInt32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + DJGOJMKAAFE_SET_SOLOSTANUID_OFFSET))(this, a1);
		}

	};
