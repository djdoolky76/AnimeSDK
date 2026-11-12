#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
namespace RPG::Client { class AvatarOutfit; }

#define HFEONGANBHM_CTOR_OFFSET UNITYSDK_OFFSET(0x16BBD9F0)
#define HFEONGANBHM_GET_OUTFIT_OFFSET UNITYSDK_OFFSET(0x16BBD9D0)
#define HFEONGANBHM_SET_OUTFIT_OFFSET UNITYSDK_OFFSET(0x16BBD9E0)

inline static constexpr unsigned int HFEONGANBHM_TypeDefinitionIndex = 53005;

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
