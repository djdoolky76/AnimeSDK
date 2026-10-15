#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/KFCMMMMMIIO.h"
#include "unitysdk/UnityEngine/Vector3.h"
namespace RPG::Client { class MonoEffect; }
namespace RPG::GameCore { class ActivityHipplenInteractInfoRow; }
namespace System { class String; }
namespace UnityEngine { class GameObject; }
namespace UnityEngine { class Transform; }

#define KJNCMHECOEO_BLFEABNCBHD_OFFSET UNITYSDK_OFFSET(0xB456410)
#define KJNCMHECOEO_BNEKJHADLNK_OFFSET UNITYSDK_OFFSET(0xB457000)
#define KJNCMHECOEO_BOEFIBKPEDC_OFFSET UNITYSDK_OFFSET(0xB4562F0)
#define KJNCMHECOEO_CTOR_OFFSET UNITYSDK_OFFSET(0xB457140)
#define KJNCMHECOEO_KOHOGMCJHBH_OFFSET UNITYSDK_OFFSET(0xB456200)
#define KJNCMHECOEO_LHJBPEBMKDN_OFFSET UNITYSDK_OFFSET(0xB456180)
#define KJNCMHECOEO_MBOCAJADFOO_OFFSET UNITYSDK_OFFSET(0xB456C00)
#define KJNCMHECOEO_MKOJLFJCNDP_OFFSET UNITYSDK_OFFSET(0xB4567B0)
#define KJNCMHECOEO_NCKMOBKFFFH_OFFSET UNITYSDK_OFFSET(0xB456AD0)
#define KJNCMHECOEO_NENPCBEGELI_OFFSET UNITYSDK_OFFSET(0xB456DA0)
#define KJNCMHECOEO_NIBJNBCAAIA_OFFSET UNITYSDK_OFFSET(0xB456370)
#define KJNCMHECOEO_PAHEIGLPKJE_OFFSET UNITYSDK_OFFSET(0xB4570B0)
#define KJNCMHECOEO_PEEAAIDNKAE_OFFSET UNITYSDK_OFFSET(0xB456250)

inline static constexpr unsigned int KJNCMHECOEO_TypeDefinitionIndex = 75569;

	class KJNCMHECOEO : public ::KFCMMMMMIIO
	{
	public:
		::System::String* HHPJIKOLLAI; // 0x48
		::UnityEngine::Transform* CGLFOFDBOAD; // 0x50
		::RPG::Client::MonoEffect* JGJIJOEJPGD; // 0x58
		::System::Single MBEHHALAIHO; // 0x60
		::System::Boolean AKBPNMEFGAO; // 0x64
		// static const ::System::Object NHJBKEKKCMJ; // 0x0
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + KJNCMHECOEO_CTOR_OFFSET))(this);
		}

		::System::Void LHJBPEBMKDN()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + KJNCMHECOEO_LHJBPEBMKDN_OFFSET))(this);
		}

		::System::Void KOHOGMCJHBH()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + KJNCMHECOEO_KOHOGMCJHBH_OFFSET))(this);
		}

		::System::Void BOEFIBKPEDC()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + KJNCMHECOEO_BOEFIBKPEDC_OFFSET))(this);
		}

		::System::Void NIBJNBCAAIA()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + KJNCMHECOEO_NIBJNBCAAIA_OFFSET))(this);
		}

		::System::Void MKOJLFJCNDP(::System::Single a1, ::System::Boolean a2)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single, ::System::Boolean))((::PBYTE)hIl2Cpp + KJNCMHECOEO_MKOJLFJCNDP_OFFSET))(this, a1, a2);
		}

		::UnityEngine::GameObject* MBOCAJADFOO(::System::String* a1)
		{
			return ((::UnityEngine::GameObject*(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + KJNCMHECOEO_MBOCAJADFOO_OFFSET))(this, a1);
		}

		::System::Void NCKMOBKFFFH(::UnityEngine::Vector3 a1, ::UnityEngine::Vector3 a2)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Vector3, ::UnityEngine::Vector3))((::PBYTE)hIl2Cpp + KJNCMHECOEO_NCKMOBKFFFH_OFFSET))(this, a1, a2);
		}

		::System::Void BLFEABNCBHD(::System::Boolean a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + KJNCMHECOEO_BLFEABNCBHD_OFFSET))(this, a1);
		}

		::System::Void BNEKJHADLNK()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + KJNCMHECOEO_BNEKJHADLNK_OFFSET))(this);
		}

		::System::Void NENPCBEGELI()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + KJNCMHECOEO_NENPCBEGELI_OFFSET))(this);
		}

		::System::Void PEEAAIDNKAE()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + KJNCMHECOEO_PEEAAIDNKAE_OFFSET))(this);
		}

		::RPG::GameCore::ActivityHipplenInteractInfoRow* PAHEIGLPKJE()
		{
			return ((::RPG::GameCore::ActivityHipplenInteractInfoRow*(*)(::PVOID))((::PBYTE)hIl2Cpp + KJNCMHECOEO_PAHEIGLPKJE_OFFSET))(this);
		}

	};
