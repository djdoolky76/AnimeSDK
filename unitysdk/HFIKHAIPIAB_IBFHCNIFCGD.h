#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
namespace RPG::AvatarSystem { class IAvatar; }

#define HFIKHAIPIAB_IBFHCNIFCGD_CTOR_OFFSET UNITYSDK_OFFSET(0x15C7C120)
#define HFIKHAIPIAB_IBFHCNIFCGD_HKKFFCBJOKM_OFFSET UNITYSDK_OFFSET(0x15C7C130)

	class HFIKHAIPIAB_IBFHCNIFCGD : public ::System::Object
	{
	public:
		::RPG::AvatarSystem::IAvatar* BBBMGEAKHEB; // 0x10
		::System::Void _ctor(::RPG::AvatarSystem::IAvatar* a1)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::AvatarSystem::IAvatar*))((::PBYTE)hIl2Cpp + HFIKHAIPIAB_IBFHCNIFCGD_CTOR_OFFSET))(this, a1);
		}

		::System::Void HKKFFCBJOKM()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + HFIKHAIPIAB_IBFHCNIFCGD_HKKFFCBJOKM_OFFSET))(this);
		}

	};
