#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/GridFightGameModifier.h"
class NJKFOJJDGGG;

#define DJGOJMKAAFE_CTOR_OFFSET UNITYSDK_OFFSET(0x18BE88F0)
#define DJGOJMKAAFE_GET_SOLOSTANUID_OFFSET UNITYSDK_OFFSET(0x18BE8A60)
#define DJGOJMKAAFE_SET_SOLOSTANUID_OFFSET UNITYSDK_OFFSET(0x18BE8A70)
#define DJGOJMKAAFE_UPDATE_OFFSET UNITYSDK_OFFSET(0x18BE8970)

inline static constexpr unsigned int DJGOJMKAAFE_TypeDefinitionIndex = 66623;

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
