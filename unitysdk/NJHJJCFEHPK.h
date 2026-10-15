#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
namespace RPG::Client::ActivityIdleLive { class SpecialEquip; }

#define NJHJJCFEHPK_CTOR_OFFSET UNITYSDK_OFFSET(0xBC09C50)
#define NJHJJCFEHPK_GET_AVATARID_OFFSET UNITYSDK_OFFSET(0xBC09C30)
#define NJHJJCFEHPK_GET_SPEQUIP_OFFSET UNITYSDK_OFFSET(0xBC09C40)

inline static constexpr unsigned int NJHJJCFEHPK_TypeDefinitionIndex = 75223;

	class NJHJJCFEHPK : public ::System::Object
	{
	public:
		::RPG::Client::ActivityIdleLive::SpecialEquip* _SpEquip_k__BackingField; // 0x10
		::System::UInt32 _AvatarId_k__BackingField; // 0x18
		::System::Void _ctor(::System::UInt32 a1, ::RPG::Client::ActivityIdleLive::SpecialEquip* a2)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32, ::RPG::Client::ActivityIdleLive::SpecialEquip*))((::PBYTE)hIl2Cpp + NJHJJCFEHPK_CTOR_OFFSET))(this, a1, a2);
		}

		::System::UInt32 get_AvatarId()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + NJHJJCFEHPK_GET_AVATARID_OFFSET))(this);
		}

		::RPG::Client::ActivityIdleLive::SpecialEquip* get_SpEquip()
		{
			return ((::RPG::Client::ActivityIdleLive::SpecialEquip*(*)(::PVOID))((::PBYTE)hIl2Cpp + NJHJJCFEHPK_GET_SPEQUIP_OFFSET))(this);
		}

	};
