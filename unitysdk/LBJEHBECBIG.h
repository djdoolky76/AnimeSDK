#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/FixPoint.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/HJIOMFDJLLA.h"
class MOMODPMFIKE;
class OIKDEOMMOAM;

#define LBJEHBECBIG_ABOFOMGHGJM_OFFSET UNITYSDK_OFFSET(0xB5F65E0)
#define LBJEHBECBIG_CAGLJEMEJIK_OFFSET UNITYSDK_OFFSET(0xB5F6430)
#define LBJEHBECBIG_CLEAR_OFFSET UNITYSDK_OFFSET(0xB5F6390)
#define LBJEHBECBIG_CTOR_OFFSET UNITYSDK_OFFSET(0xB5F68E0)
#define LBJEHBECBIG_GET_OWNER_OFFSET UNITYSDK_OFFSET(0xB5F68A0)
#define LBJEHBECBIG_KPJGDHLENIP_OFFSET UNITYSDK_OFFSET(0xB5F6290)
#define LBJEHBECBIG_LNPKOHGKNCE_OFFSET UNITYSDK_OFFSET(0xB5F68D0)
#define LBJEHBECBIG_OHNHPOFCONB_OFFSET UNITYSDK_OFFSET(0xB5F68C0)
#define LBJEHBECBIG_SET_OWNER_OFFSET UNITYSDK_OFFSET(0xB5F68B0)

inline static constexpr unsigned int LBJEHBECBIG_TypeDefinitionIndex = 54024;

	class LBJEHBECBIG : public ::System::Object
	{
	public:
		::MOMODPMFIKE* _Owner_k__BackingField; // 0x10
		::MOMODPMFIKE* MCMIFOHANGG; // 0x18
		::MOMODPMFIKE* LNPFGBNKKPG; // 0x20
		::System::Boolean KEEBJOPBGFB; // 0x28
		::System::Byte _padding0[0x7];
		::RPG::GameCore::FixPoint NDOGICGCDIP; // 0x30
		::RPG::GameCore::FixPoint BFLNNOEKIGE; // 0x38
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + LBJEHBECBIG_CTOR_OFFSET))(this);
		}

		::System::Void KPJGDHLENIP(::MOMODPMFIKE* a1, ::MOMODPMFIKE* a2, ::RPG::GameCore::FixPoint a3, ::RPG::GameCore::FixPoint a4, ::System::Boolean a5)
		{
			return ((::System::Void(*)(::PVOID, ::MOMODPMFIKE*, ::MOMODPMFIKE*, ::RPG::GameCore::FixPoint, ::RPG::GameCore::FixPoint, ::System::Boolean))((::PBYTE)hIl2Cpp + LBJEHBECBIG_KPJGDHLENIP_OFFSET))(this, a1, a2, a3, a4, a5);
		}

		::System::Void Clear()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + LBJEHBECBIG_CLEAR_OFFSET))(this);
		}

		::System::Void CAGLJEMEJIK(::RPG::GameCore::FixPoint a1, ::HJIOMFDJLLA a2)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::FixPoint, ::HJIOMFDJLLA))((::PBYTE)hIl2Cpp + LBJEHBECBIG_CAGLJEMEJIK_OFFSET))(this, a1, a2);
		}

		::System::Void ABOFOMGHGJM(::OIKDEOMMOAM* a1)
		{
			return ((::System::Void(*)(::PVOID, ::OIKDEOMMOAM*))((::PBYTE)hIl2Cpp + LBJEHBECBIG_ABOFOMGHGJM_OFFSET))(this, a1);
		}

		::MOMODPMFIKE* get_Owner()
		{
			return ((::MOMODPMFIKE*(*)(::PVOID))((::PBYTE)hIl2Cpp + LBJEHBECBIG_GET_OWNER_OFFSET))(this);
		}

		::System::Void set_Owner(::MOMODPMFIKE* a1)
		{
			return ((::System::Void(*)(::PVOID, ::MOMODPMFIKE*))((::PBYTE)hIl2Cpp + LBJEHBECBIG_SET_OWNER_OFFSET))(this, a1);
		}

		::RPG::GameCore::FixPoint OHNHPOFCONB()
		{
			return ((::RPG::GameCore::FixPoint(*)(::PVOID))((::PBYTE)hIl2Cpp + LBJEHBECBIG_OHNHPOFCONB_OFFSET))(this);
		}

		::RPG::GameCore::FixPoint LNPKOHGKNCE()
		{
			return ((::RPG::GameCore::FixPoint(*)(::PVOID))((::PBYTE)hIl2Cpp + LBJEHBECBIG_LNPKOHGKNCE_OFFSET))(this);
		}

	};
