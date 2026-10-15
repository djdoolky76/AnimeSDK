#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class DPOAHFJILKN;
class IJEFCGNGHBD;
namespace RPG::AvatarSystem { class IAvatar; }

#define MFFOAHKGEGD_CTOR_OFFSET UNITYSDK_OFFSET(0xB8F4870)
#define MFFOAHKGEGD_DISPOSE_OFFSET UNITYSDK_OFFSET(0xB8F48E0)
#define MFFOAHKGEGD_GET_ICON_OFFSET UNITYSDK_OFFSET(0xB8F4850)
#define MFFOAHKGEGD_GET_LACKEQUIP_OFFSET UNITYSDK_OFFSET(0xB8F4860)

	class MFFOAHKGEGD : public ::System::Object
	{
	public:
		::IJEFCGNGHBD* _Icon_k__BackingField; // 0x10
		::DPOAHFJILKN* _LackEquip_k__BackingField; // 0x18
		::System::Void _ctor(::RPG::AvatarSystem::IAvatar* a1)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::AvatarSystem::IAvatar*))((::PBYTE)hIl2Cpp + MFFOAHKGEGD_CTOR_OFFSET))(this, a1);
		}

		::IJEFCGNGHBD* get_Icon()
		{
			return ((::IJEFCGNGHBD*(*)(::PVOID))((::PBYTE)hIl2Cpp + MFFOAHKGEGD_GET_ICON_OFFSET))(this);
		}

		::DPOAHFJILKN* get_LackEquip()
		{
			return ((::DPOAHFJILKN*(*)(::PVOID))((::PBYTE)hIl2Cpp + MFFOAHKGEGD_GET_LACKEQUIP_OFFSET))(this);
		}

		::System::Void Dispose()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MFFOAHKGEGD_DISPOSE_OFFSET))(this);
		}

	};
