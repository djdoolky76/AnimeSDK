#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
namespace RPG::AvatarSystem { class IAvatar; }

#define HFIKHAIPIAB_LBDPFABLIFD_CTOR_OFFSET UNITYSDK_OFFSET(0x15C7C850)
#define HFIKHAIPIAB_LBDPFABLIFD_HKKFFCBJOKM_OFFSET UNITYSDK_OFFSET(0x15C7C860)

	class HFIKHAIPIAB_LBDPFABLIFD : public ::System::Object
	{
	public:
		::RPG::AvatarSystem::IAvatar* BBBMGEAKHEB; // 0x10
		::System::Void _ctor(::RPG::AvatarSystem::IAvatar* a1)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::AvatarSystem::IAvatar*))((::PBYTE)hIl2Cpp + HFIKHAIPIAB_LBDPFABLIFD_CTOR_OFFSET))(this, a1);
		}

		::System::Void HKKFFCBJOKM()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + HFIKHAIPIAB_LBDPFABLIFD_HKKFFCBJOKM_OFFSET))(this);
		}

	};
