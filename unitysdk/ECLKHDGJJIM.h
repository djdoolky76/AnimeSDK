#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/UnityEngine/Touch.h"
#include "unitysdk/UnityEngine/Vector2.h"

#define ECLKHDGJJIM_AFDNKFFAJCP_OFFSET UNITYSDK_OFFSET(0x12D13490)
#define ECLKHDGJJIM_AGHABIKPPNO_OFFSET UNITYSDK_OFFSET(0x12D136D0)
#define ECLKHDGJJIM_CTOR_OFFSET UNITYSDK_OFFSET(0x12D137B0)
#define ECLKHDGJJIM_JGACMHLOJCM_OFFSET UNITYSDK_OFFSET(0x12D13710)
#define ECLKHDGJJIM_JLANKNHFKCN_OFFSET UNITYSDK_OFFSET(0x12D134D0)
#define ECLKHDGJJIM_KAGICIAJEEA_OFFSET UNITYSDK_OFFSET(0x12D13670)
#define ECLKHDGJJIM_NPAFMEBNFOB_OFFSET UNITYSDK_OFFSET(0x12D13410)
#define ECLKHDGJJIM_PHGNLEBBCCP_OFFSET UNITYSDK_OFFSET(0x12D13770)

	class ECLKHDGJJIM : public ::System::Object
	{
	public:
		::UnityEngine::Vector2 BLEKFOJDDHK; // 0x10
		::UnityEngine::Vector2 LCEGDDMJPCM; // 0x18
		::UnityEngine::Touch JPGMABHFGCC; // 0x20
		::System::Single KDBGMBINNAP; // 0x64
		::System::Single KIPAGNCANAJ; // 0x68
		::System::Boolean DJEMNOJHMBI; // 0x6C
		::System::Boolean EJMHCCCLHHM; // 0x6D
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + ECLKHDGJJIM_CTOR_OFFSET))(this);
		}

		::System::Void NPAFMEBNFOB(::System::Single a1, ::UnityEngine::Vector2 a2)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single, ::UnityEngine::Vector2))((::PBYTE)hIl2Cpp + ECLKHDGJJIM_NPAFMEBNFOB_OFFSET))(this, a1, a2);
		}

		::System::Boolean AFDNKFFAJCP()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + ECLKHDGJJIM_AFDNKFFAJCP_OFFSET))(this);
		}

		::System::Void JLANKNHFKCN()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + ECLKHDGJJIM_JLANKNHFKCN_OFFSET))(this);
		}

		::System::Void AGHABIKPPNO()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + ECLKHDGJJIM_AGHABIKPPNO_OFFSET))(this);
		}

		::System::Boolean KAGICIAJEEA()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + ECLKHDGJJIM_KAGICIAJEEA_OFFSET))(this);
		}

		::System::Single JGACMHLOJCM()
		{
			return ((::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + ECLKHDGJJIM_JGACMHLOJCM_OFFSET))(this);
		}

		::System::Boolean PHGNLEBBCCP()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + ECLKHDGJJIM_PHGNLEBBCCP_OFFSET))(this);
		}

	};
