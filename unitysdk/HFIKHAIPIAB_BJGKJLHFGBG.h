#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
namespace RPG::AvatarSystem { class IAvatar; }

#define HFIKHAIPIAB_BJGKJLHFGBG_CTOR_OFFSET UNITYSDK_OFFSET(0x15C6F290)
#define HFIKHAIPIAB_BJGKJLHFGBG_HKKFFCBJOKM_OFFSET UNITYSDK_OFFSET(0x15C6F2A0)

inline static constexpr unsigned int HFIKHAIPIAB_BJGKJLHFGBG_TypeDefinitionIndex = 65533;

	class HFIKHAIPIAB_BJGKJLHFGBG : public ::System::Object
	{
	public:
		::RPG::AvatarSystem::IAvatar* BBBMGEAKHEB; // 0x10
		::System::Void _ctor(::RPG::AvatarSystem::IAvatar* a1)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::AvatarSystem::IAvatar*))((::PBYTE)hIl2Cpp + HFIKHAIPIAB_BJGKJLHFGBG_CTOR_OFFSET))(this, a1);
		}

		::System::Void HKKFFCBJOKM()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + HFIKHAIPIAB_BJGKJLHFGBG_HKKFFCBJOKM_OFFSET))(this);
		}

	};
