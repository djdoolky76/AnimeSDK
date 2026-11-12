#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/BasePlanetFesBuff.h"
namespace RPG::Client { class PlanetFesAvatarData; }

#define CDLBDGLBHBO_CTOR_OFFSET UNITYSDK_OFFSET(0xD0D7680)
#define CDLBDGLBHBO_GET_PERCENTINCREASE_OFFSET UNITYSDK_OFFSET(0xD0D7560)
#define CDLBDGLBHBO_ISEFFECTIVEONAVATAR_OFFSET UNITYSDK_OFFSET(0xD0D75F0)
#define CDLBDGLBHBO_ISTRIGGERED_OFFSET UNITYSDK_OFFSET(0xD0D7640)
#define CDLBDGLBHBO__ONINITPARAM_OFFSET UNITYSDK_OFFSET(0xD0D75A0)

inline static constexpr unsigned int CDLBDGLBHBO_TypeDefinitionIndex = 68479;

	class CDLBDGLBHBO : public ::RPG::Client::BasePlanetFesBuff
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CDLBDGLBHBO_CTOR_OFFSET))(this);
		}

		::System::UInt32 get_PercentIncrease()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + CDLBDGLBHBO_GET_PERCENTINCREASE_OFFSET))(this);
		}

		::System::Void _OnInitParam(::Il2CppArray<::System::UInt32>* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Il2CppArray<::System::UInt32>*))((::PBYTE)hIl2Cpp + CDLBDGLBHBO__ONINITPARAM_OFFSET))(this, a1);
		}

		::System::Boolean IsEffectiveOnAvatar(::RPG::Client::PlanetFesAvatarData* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::RPG::Client::PlanetFesAvatarData*))((::PBYTE)hIl2Cpp + CDLBDGLBHBO_ISEFFECTIVEONAVATAR_OFFSET))(this, a1);
		}

		::System::Boolean IsTriggered()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + CDLBDGLBHBO_ISTRIGGERED_OFFSET))(this);
		}

	};
