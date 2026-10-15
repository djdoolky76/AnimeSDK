#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/BasePlanetFesBuff.h"
class ELJLJHFNNLN;
namespace RPG::Client { class IPlanetFesBuff; }
namespace RPG::Client { class PlanetFesAvatarData; }

#define AIMPOPMOLFL_COMBINE_OFFSET UNITYSDK_OFFSET(0x12CA8AF0)
#define AIMPOPMOLFL_CTOR_OFFSET UNITYSDK_OFFSET(0x12CA8C00)
#define AIMPOPMOLFL_GETCOMBINEKEY_OFFSET UNITYSDK_OFFSET(0x12CA8BA0)
#define AIMPOPMOLFL_GET_PERCENTINCREASE_OFFSET UNITYSDK_OFFSET(0xEBB3BA0)
#define AIMPOPMOLFL_ISEFFECTIVEONAVATAR_OFFSET UNITYSDK_OFFSET(0x12CA8A60)
#define AIMPOPMOLFL_ISTRIGGERED_OFFSET UNITYSDK_OFFSET(0x12CA8AB0)
#define AIMPOPMOLFL__ONINITPARAM_OFFSET UNITYSDK_OFFSET(0x12CA8A00)

	class AIMPOPMOLFL : public ::RPG::Client::BasePlanetFesBuff
	{
	public:
		::System::UInt32 AJNJFAGOAEK; // 0x30
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + AIMPOPMOLFL_CTOR_OFFSET))(this);
		}

		::System::UInt32 get_PercentIncrease()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + AIMPOPMOLFL_GET_PERCENTINCREASE_OFFSET))(this);
		}

		::System::Void _OnInitParam(::Il2CppArray<::System::UInt32>* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Il2CppArray<::System::UInt32>*))((::PBYTE)hIl2Cpp + AIMPOPMOLFL__ONINITPARAM_OFFSET))(this, a1);
		}

		::System::Boolean IsEffectiveOnAvatar(::RPG::Client::PlanetFesAvatarData* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::RPG::Client::PlanetFesAvatarData*))((::PBYTE)hIl2Cpp + AIMPOPMOLFL_ISEFFECTIVEONAVATAR_OFFSET))(this, a1);
		}

		::System::Boolean IsTriggered()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + AIMPOPMOLFL_ISTRIGGERED_OFFSET))(this);
		}

		::ELJLJHFNNLN* Combine(::RPG::Client::IPlanetFesBuff* a1)
		{
			return ((::ELJLJHFNNLN*(*)(::PVOID, ::RPG::Client::IPlanetFesBuff*))((::PBYTE)hIl2Cpp + AIMPOPMOLFL_COMBINE_OFFSET))(this, a1);
		}

		::System::Int32 GetCombineKey()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + AIMPOPMOLFL_GETCOMBINEKEY_OFFSET))(this);
		}

	};
