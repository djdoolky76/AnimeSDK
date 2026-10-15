#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
namespace RPG::Client { class AvatarOutfit; }

#define HFEONGANBHM_CTOR_OFFSET UNITYSDK_OFFSET(0x15C767D0)
#define HFEONGANBHM_GET_OUTFIT_OFFSET UNITYSDK_OFFSET(0x15C767B0)
#define HFEONGANBHM_SET_OUTFIT_OFFSET UNITYSDK_OFFSET(0x15C767C0)

	class HFEONGANBHM : public ::System::Object
	{
	public:
		::RPG::Client::AvatarOutfit* _Outfit_k__BackingField; // 0x10
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + HFEONGANBHM_CTOR_OFFSET))(this);
		}

		::RPG::Client::AvatarOutfit* get_Outfit()
		{
			return ((::RPG::Client::AvatarOutfit*(*)(::PVOID))((::PBYTE)hIl2Cpp + HFEONGANBHM_GET_OUTFIT_OFFSET))(this);
		}

		::System::Void set_Outfit(::RPG::Client::AvatarOutfit* a1)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::AvatarOutfit*))((::PBYTE)hIl2Cpp + HFEONGANBHM_SET_OUTFIT_OFFSET))(this, a1);
		}

	};
