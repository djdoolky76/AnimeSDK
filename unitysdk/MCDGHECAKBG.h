#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/FateRinHouguOwnerType.h"
#include "unitysdk/System/Object.h"
class CEKGGHILKPC;
namespace RPG::GameCore { class AvatarSourceConfigRow; }

#define MCDGHECAKBG_CTOR_OFFSET UNITYSDK_OFFSET(0xC0DB5E0)
#define MCDGHECAKBG_GET_AVATARSOURCEROW_OFFSET UNITYSDK_OFFSET(0xC0DB5C0)
#define MCDGHECAKBG_GET_FATERINAVATARROW_OFFSET UNITYSDK_OFFSET(0xC0DB5A0)
#define MCDGHECAKBG_GET_OWNERTYPE_OFFSET UNITYSDK_OFFSET(0xC0DB580)
#define MCDGHECAKBG_SET_AVATARSOURCEROW_OFFSET UNITYSDK_OFFSET(0xC0DB5D0)
#define MCDGHECAKBG_SET_FATERINAVATARROW_OFFSET UNITYSDK_OFFSET(0xC0DB5B0)
#define MCDGHECAKBG_SET_OWNERTYPE_OFFSET UNITYSDK_OFFSET(0xC0DB590)

inline static constexpr unsigned int MCDGHECAKBG_TypeDefinitionIndex = 83994;

	class MCDGHECAKBG : public ::System::Object
	{
	public:
		::CEKGGHILKPC* _FateRinAvatarRow_k__BackingField; // 0x10
		::RPG::GameCore::AvatarSourceConfigRow* _AvatarSourceRow_k__BackingField; // 0x18
		::RPG::GameCore::FateRinHouguOwnerType _OwnerType_k__BackingField; // 0x20
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MCDGHECAKBG_CTOR_OFFSET))(this);
		}

		::RPG::GameCore::FateRinHouguOwnerType get_OwnerType()
		{
			return ((::RPG::GameCore::FateRinHouguOwnerType(*)(::PVOID))((::PBYTE)hIl2Cpp + MCDGHECAKBG_GET_OWNERTYPE_OFFSET))(this);
		}

		::System::Void set_OwnerType(::RPG::GameCore::FateRinHouguOwnerType a1)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::FateRinHouguOwnerType))((::PBYTE)hIl2Cpp + MCDGHECAKBG_SET_OWNERTYPE_OFFSET))(this, a1);
		}

		::CEKGGHILKPC* get_FateRinAvatarRow()
		{
			return ((::CEKGGHILKPC*(*)(::PVOID))((::PBYTE)hIl2Cpp + MCDGHECAKBG_GET_FATERINAVATARROW_OFFSET))(this);
		}

		::System::Void set_FateRinAvatarRow(::CEKGGHILKPC* a1)
		{
			return ((::System::Void(*)(::PVOID, ::CEKGGHILKPC*))((::PBYTE)hIl2Cpp + MCDGHECAKBG_SET_FATERINAVATARROW_OFFSET))(this, a1);
		}

		::RPG::GameCore::AvatarSourceConfigRow* get_AvatarSourceRow()
		{
			return ((::RPG::GameCore::AvatarSourceConfigRow*(*)(::PVOID))((::PBYTE)hIl2Cpp + MCDGHECAKBG_GET_AVATARSOURCEROW_OFFSET))(this);
		}

		::System::Void set_AvatarSourceRow(::RPG::GameCore::AvatarSourceConfigRow* a1)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::AvatarSourceConfigRow*))((::PBYTE)hIl2Cpp + MCDGHECAKBG_SET_AVATARSOURCEROW_OFFSET))(this, a1);
		}

	};
