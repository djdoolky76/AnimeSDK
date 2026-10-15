#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/BasePlanetFesBuff.h"
namespace RPG::Client { class PlanetFesAvatarData; }

#define JBJIHKCBCGH_CTOR_OFFSET UNITYSDK_OFFSET(0x16563880)
#define JBJIHKCBCGH_GET_PERCENTINCREASE_OFFSET UNITYSDK_OFFSET(0x16563760)
#define JBJIHKCBCGH_ISEFFECTIVEONAVATAR_OFFSET UNITYSDK_OFFSET(0x165637F0)
#define JBJIHKCBCGH_ISTRIGGERED_OFFSET UNITYSDK_OFFSET(0x16563840)
#define JBJIHKCBCGH__ONINITPARAM_OFFSET UNITYSDK_OFFSET(0x165637A0)

inline static constexpr unsigned int JBJIHKCBCGH_TypeDefinitionIndex = 66541;

	class JBJIHKCBCGH : public ::RPG::Client::BasePlanetFesBuff
	{
	public:
		::Il2CppArray<::System::UInt32>* BGDDKFHKAKM; // 0x30
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + JBJIHKCBCGH_CTOR_OFFSET))(this);
		}

		::System::UInt32 get_PercentIncrease()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + JBJIHKCBCGH_GET_PERCENTINCREASE_OFFSET))(this);
		}

		::System::Void _OnInitParam(::Il2CppArray<::System::UInt32>* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Il2CppArray<::System::UInt32>*))((::PBYTE)hIl2Cpp + JBJIHKCBCGH__ONINITPARAM_OFFSET))(this, a1);
		}

		::System::Boolean IsEffectiveOnAvatar(::RPG::Client::PlanetFesAvatarData* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::RPG::Client::PlanetFesAvatarData*))((::PBYTE)hIl2Cpp + JBJIHKCBCGH_ISEFFECTIVEONAVATAR_OFFSET))(this, a1);
		}

		::System::Boolean IsTriggered()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + JBJIHKCBCGH_ISTRIGGERED_OFFSET))(this);
		}

	};
