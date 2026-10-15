#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class PFHMJLDOIHP;
namespace RPG::AvatarSystem { class IAvatar; }
namespace RPG::Client { class AvatarOutfit; }

#define IPPBCBJCKAA_CTOR_OFFSET UNITYSDK_OFFSET(0x16518480)
#define IPPBCBJCKAA_GET_OUTFIT_OFFSET UNITYSDK_OFFSET(0x16518560)
#define IPPBCBJCKAA_ODLGFNPHMDJ_OFFSET UNITYSDK_OFFSET(0x165184F0)

inline static constexpr unsigned int IPPBCBJCKAA_TypeDefinitionIndex = 81207;

	class IPPBCBJCKAA : public ::System::Object
	{
	public:
		::RPG::AvatarSystem::IAvatar* BPKKKMOCFIP; // 0x10
		::System::Void _ctor(::RPG::AvatarSystem::IAvatar* a1)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::AvatarSystem::IAvatar*))((::PBYTE)hIl2Cpp + IPPBCBJCKAA_CTOR_OFFSET))(this, a1);
		}

		::PFHMJLDOIHP* ODLGFNPHMDJ()
		{
			return ((::PFHMJLDOIHP*(*)(::PVOID))((::PBYTE)hIl2Cpp + IPPBCBJCKAA_ODLGFNPHMDJ_OFFSET))(this);
		}

		::RPG::Client::AvatarOutfit* get_Outfit()
		{
			return ((::RPG::Client::AvatarOutfit*(*)(::PVOID))((::PBYTE)hIl2Cpp + IPPBCBJCKAA_GET_OUTFIT_OFFSET))(this);
		}

	};
