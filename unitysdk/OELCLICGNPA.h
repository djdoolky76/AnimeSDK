#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class NHPAANINLPK;
namespace RPG::AvatarSystem { class IAvatar; }

#define OELCLICGNPA_CTOR_OFFSET UNITYSDK_OFFSET(0xBE31F20)
#define OELCLICGNPA_HFIDHKKOEOA_OFFSET UNITYSDK_OFFSET(0xBE31D00)
#define OELCLICGNPA_JAGPJGOOALH_OFFSET UNITYSDK_OFFSET(0xBE31BE0)

	class OELCLICGNPA : public ::System::Object
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + OELCLICGNPA_CTOR_OFFSET))(this);
		}

		::System::Boolean JAGPJGOOALH(::RPG::AvatarSystem::IAvatar* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::RPG::AvatarSystem::IAvatar*))((::PBYTE)hIl2Cpp + OELCLICGNPA_JAGPJGOOALH_OFFSET))(this, a1);
		}

		::NHPAANINLPK* HFIDHKKOEOA(::RPG::AvatarSystem::IAvatar* a1)
		{
			return ((::NHPAANINLPK*(*)(::PVOID, ::RPG::AvatarSystem::IAvatar*))((::PBYTE)hIl2Cpp + OELCLICGNPA_HFIDHKKOEOA_OFFSET))(this, a1);
		}

	};
