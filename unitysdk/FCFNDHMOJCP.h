#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/HJIOMFDJLLA.h"
#include "unitysdk/RPG/GameCore/FixPoint.h"
class JHIGAEIELKO;
class MOMODPMFIKE;
class OIKDEOMMOAM;

#define FCFNDHMOJCP_ABOFOMGHGJM_OFFSET UNITYSDK_OFFSET(0x156B99F0)
#define FCFNDHMOJCP_CAGLJEMEJIK_OFFSET UNITYSDK_OFFSET(0x156B9970)
#define FCFNDHMOJCP_CLEAR_OFFSET UNITYSDK_OFFSET(0x156B9900)
#define FCFNDHMOJCP_CTOR_OFFSET UNITYSDK_OFFSET(0x156B9B50)
#define FCFNDHMOJCP_GET_OWNER_OFFSET UNITYSDK_OFFSET(0x156B9B30)
#define FCFNDHMOJCP_KPJGDHLENIP_OFFSET UNITYSDK_OFFSET(0x156B9800)
#define FCFNDHMOJCP_SET_OWNER_OFFSET UNITYSDK_OFFSET(0x156B9B40)

inline static constexpr unsigned int FCFNDHMOJCP_TypeDefinitionIndex = 54291;

	class FCFNDHMOJCP : public ::System::Object
	{
	public:
		::MOMODPMFIKE* _Owner_k__BackingField; // 0x10
		::MOMODPMFIKE* FIEEGPOIEAF; // 0x18
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + FCFNDHMOJCP_CTOR_OFFSET))(this);
		}

		::System::Void KPJGDHLENIP(::JHIGAEIELKO* a1)
		{
			return ((::System::Void(*)(::PVOID, ::JHIGAEIELKO*))((::PBYTE)hIl2Cpp + FCFNDHMOJCP_KPJGDHLENIP_OFFSET))(this, a1);
		}

		::System::Void Clear()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + FCFNDHMOJCP_CLEAR_OFFSET))(this);
		}

		::System::Void CAGLJEMEJIK(::RPG::GameCore::FixPoint a1, ::HJIOMFDJLLA a2)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::FixPoint, ::HJIOMFDJLLA))((::PBYTE)hIl2Cpp + FCFNDHMOJCP_CAGLJEMEJIK_OFFSET))(this, a1, a2);
		}

		::System::Void ABOFOMGHGJM(::OIKDEOMMOAM* a1)
		{
			return ((::System::Void(*)(::PVOID, ::OIKDEOMMOAM*))((::PBYTE)hIl2Cpp + FCFNDHMOJCP_ABOFOMGHGJM_OFFSET))(this, a1);
		}

		::MOMODPMFIKE* get_Owner()
		{
			return ((::MOMODPMFIKE*(*)(::PVOID))((::PBYTE)hIl2Cpp + FCFNDHMOJCP_GET_OWNER_OFFSET))(this);
		}

		::System::Void set_Owner(::MOMODPMFIKE* a1)
		{
			return ((::System::Void(*)(::PVOID, ::MOMODPMFIKE*))((::PBYTE)hIl2Cpp + FCFNDHMOJCP_SET_OWNER_OFFSET))(this, a1);
		}

	};
