#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RVO/RVOAgentParam.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/UnityEngine/Vector3.h"
namespace UnityEngine::AI { class RVOAgent; }
namespace UnityEngine::AI { class RVOSimulator; }

#define CDCHPEIGKAI_AAJMPKHBLJO_OFFSET UNITYSDK_OFFSET(0xC7624A0)
#define CDCHPEIGKAI_BLONDMJIKOE_OFFSET UNITYSDK_OFFSET(0xC761E80)
#define CDCHPEIGKAI_BPHEALGCHOD_OFFSET UNITYSDK_OFFSET(0xC762380)
#define CDCHPEIGKAI_CTOR_OFFSET UNITYSDK_OFFSET(0xC761D50)
#define CDCHPEIGKAI_DHMJKGMKNNB_OFFSET UNITYSDK_OFFSET(0xC762580)
#define CDCHPEIGKAI_DISPOSE_OFFSET UNITYSDK_OFFSET(0xC761E20)
#define CDCHPEIGKAI_DNOGHHHPNOB_OFFSET UNITYSDK_OFFSET(0xC762410)
#define CDCHPEIGKAI_EBHOCFHDAFE_OFFSET UNITYSDK_OFFSET(0xC7621F0)
#define CDCHPEIGKAI_EOHALFLBDFO_1_OFFSET UNITYSDK_OFFSET(0xC7620A0)
#define CDCHPEIGKAI_EOHALFLBDFO_OFFSET UNITYSDK_OFFSET(0xC761F60)
#define CDCHPEIGKAI_GDIJLOICNCO_OFFSET UNITYSDK_OFFSET(0xC7624F0)
#define CDCHPEIGKAI_KHGIKBFDLFB_OFFSET UNITYSDK_OFFSET(0xC761D60)
#define CDCHPEIGKAI_ONEGABCDHGK_OFFSET UNITYSDK_OFFSET(0xC762250)

inline static constexpr unsigned int CDCHPEIGKAI_TypeDefinitionIndex = 76519;

	class CDCHPEIGKAI : public ::System::Object
	{
	public:
		::UnityEngine::AI::RVOSimulator* KADDOOPCKNF; // 0x10
		::RVO::RVOAgentParam LAMEGDLPPLM; // 0x18
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CDCHPEIGKAI_CTOR_OFFSET))(this);
		}

		::System::Void KHGIKBFDLFB()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CDCHPEIGKAI_KHGIKBFDLFB_OFFSET))(this);
		}

		::System::Void Dispose()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CDCHPEIGKAI_DISPOSE_OFFSET))(this);
		}

		::System::Void BLONDMJIKOE(::UnityEngine::Vector3 a1, ::UnityEngine::Vector3 a2, ::System::Single a3, ::System::Single a4)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Vector3, ::UnityEngine::Vector3, ::System::Single, ::System::Single))((::PBYTE)hIl2Cpp + CDCHPEIGKAI_BLONDMJIKOE_OFFSET))(this, a1, a2, a3, a4);
		}

		::UnityEngine::AI::RVOAgent* EOHALFLBDFO()
		{
			return ((::UnityEngine::AI::RVOAgent*(*)(::PVOID))((::PBYTE)hIl2Cpp + CDCHPEIGKAI_EOHALFLBDFO_OFFSET))(this);
		}

		::UnityEngine::AI::RVOAgent* EOHALFLBDFO_1(::RVO::RVOAgentParam a1)
		{
			return ((::UnityEngine::AI::RVOAgent*(*)(::PVOID, ::RVO::RVOAgentParam))((::PBYTE)hIl2Cpp + CDCHPEIGKAI_EOHALFLBDFO_1_OFFSET))(this, a1);
		}

		::System::Void EBHOCFHDAFE(::UnityEngine::AI::RVOAgent* a1)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::AI::RVOAgent*))((::PBYTE)hIl2Cpp + CDCHPEIGKAI_EBHOCFHDAFE_OFFSET))(this, a1);
		}

		::System::Void ONEGABCDHGK(::UnityEngine::Vector3 a1, ::UnityEngine::Vector3 a2)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Vector3, ::UnityEngine::Vector3))((::PBYTE)hIl2Cpp + CDCHPEIGKAI_ONEGABCDHGK_OFFSET))(this, a1, a2);
		}

		::System::Void BPHEALGCHOD(::System::Single a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + CDCHPEIGKAI_BPHEALGCHOD_OFFSET))(this, a1);
		}

		::System::Void DNOGHHHPNOB(::System::Single a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + CDCHPEIGKAI_DNOGHHHPNOB_OFFSET))(this, a1);
		}

		::System::Void AAJMPKHBLJO()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CDCHPEIGKAI_AAJMPKHBLJO_OFFSET))(this);
		}

		::System::Void GDIJLOICNCO()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CDCHPEIGKAI_GDIJLOICNCO_OFFSET))(this);
		}

		::RVO::RVOAgentParam DHMJKGMKNNB()
		{
			return ((::RVO::RVOAgentParam(*)(::PVOID))((::PBYTE)hIl2Cpp + CDCHPEIGKAI_DHMJKGMKNNB_OFFSET))(this);
		}

	};
