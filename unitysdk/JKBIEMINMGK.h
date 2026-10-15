#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/HJIOMFDJLLA.h"
#include "unitysdk/RPG/GameCore/FixPoint.h"
class JHIGAEIELKO;
class MOMODPMFIKE;
class OIKDEOMMOAM;

#define JKBIEMINMGK_ABOFOMGHGJM_OFFSET UNITYSDK_OFFSET(0xB20C1B0)
#define JKBIEMINMGK_CAGLJEMEJIK_OFFSET UNITYSDK_OFFSET(0xB20BF90)
#define JKBIEMINMGK_CLEAR_OFFSET UNITYSDK_OFFSET(0xB20BEC0)
#define JKBIEMINMGK_CTOR_OFFSET UNITYSDK_OFFSET(0xB20C590)
#define JKBIEMINMGK_GET_OWNER_OFFSET UNITYSDK_OFFSET(0xB20C530)
#define JKBIEMINMGK_KPJGDHLENIP_OFFSET UNITYSDK_OFFSET(0xB20BCD0)
#define JKBIEMINMGK_LNPKOHGKNCE_OFFSET UNITYSDK_OFFSET(0xB20C4E0)
#define JKBIEMINMGK_NAOCLAFJJEM_OFFSET UNITYSDK_OFFSET(0xB20C110)
#define JKBIEMINMGK_OHNHPOFCONB_OFFSET UNITYSDK_OFFSET(0xB20C550)
#define JKBIEMINMGK_SET_OWNER_OFFSET UNITYSDK_OFFSET(0xB20C540)

inline static constexpr unsigned int JKBIEMINMGK_TypeDefinitionIndex = 54197;

	class JKBIEMINMGK : public ::System::Object
	{
	public:
		::MOMODPMFIKE* EBBIAPFOPBF; // 0x10
		::MOMODPMFIKE* FIEEGPOIEAF; // 0x18
		::MOMODPMFIKE* NEALMIACFLL; // 0x20
		::MOMODPMFIKE* _Owner_k__BackingField; // 0x28
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + JKBIEMINMGK_CTOR_OFFSET))(this);
		}

		::System::Void KPJGDHLENIP(::JHIGAEIELKO* a1)
		{
			return ((::System::Void(*)(::PVOID, ::JHIGAEIELKO*))((::PBYTE)hIl2Cpp + JKBIEMINMGK_KPJGDHLENIP_OFFSET))(this, a1);
		}

		::System::Void Clear()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + JKBIEMINMGK_CLEAR_OFFSET))(this);
		}

		::System::Void CAGLJEMEJIK(::RPG::GameCore::FixPoint a1, ::HJIOMFDJLLA a2)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::FixPoint, ::HJIOMFDJLLA))((::PBYTE)hIl2Cpp + JKBIEMINMGK_CAGLJEMEJIK_OFFSET))(this, a1, a2);
		}

		::System::Void ABOFOMGHGJM(::OIKDEOMMOAM* a1)
		{
			return ((::System::Void(*)(::PVOID, ::OIKDEOMMOAM*))((::PBYTE)hIl2Cpp + JKBIEMINMGK_ABOFOMGHGJM_OFFSET))(this, a1);
		}

		::MOMODPMFIKE* get_Owner()
		{
			return ((::MOMODPMFIKE*(*)(::PVOID))((::PBYTE)hIl2Cpp + JKBIEMINMGK_GET_OWNER_OFFSET))(this);
		}

		::System::Void set_Owner(::MOMODPMFIKE* a1)
		{
			return ((::System::Void(*)(::PVOID, ::MOMODPMFIKE*))((::PBYTE)hIl2Cpp + JKBIEMINMGK_SET_OWNER_OFFSET))(this, a1);
		}

		::RPG::GameCore::FixPoint OHNHPOFCONB()
		{
			return ((::RPG::GameCore::FixPoint(*)(::PVOID))((::PBYTE)hIl2Cpp + JKBIEMINMGK_OHNHPOFCONB_OFFSET))(this);
		}

		::RPG::GameCore::FixPoint LNPKOHGKNCE()
		{
			return ((::RPG::GameCore::FixPoint(*)(::PVOID))((::PBYTE)hIl2Cpp + JKBIEMINMGK_LNPKOHGKNCE_OFFSET))(this);
		}

		::RPG::GameCore::FixPoint NAOCLAFJJEM()
		{
			return ((::RPG::GameCore::FixPoint(*)(::PVOID))((::PBYTE)hIl2Cpp + JKBIEMINMGK_NAOCLAFJJEM_OFFSET))(this);
		}

	};
