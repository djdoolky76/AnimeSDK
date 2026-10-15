#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/UnityEngine/Touch.h"
#include "unitysdk/UnityEngine/Vector2.h"

#define ECLKHDGJJIM_AFDNKFFAJCP_OFFSET UNITYSDK_OFFSET(0x12D0EA80)
#define ECLKHDGJJIM_AGHABIKPPNO_OFFSET UNITYSDK_OFFSET(0x12D0ECC0)
#define ECLKHDGJJIM_CTOR_OFFSET UNITYSDK_OFFSET(0x12D0EDA0)
#define ECLKHDGJJIM_JGACMHLOJCM_OFFSET UNITYSDK_OFFSET(0x12D0ED00)
#define ECLKHDGJJIM_JLANKNHFKCN_OFFSET UNITYSDK_OFFSET(0x12D0EAC0)
#define ECLKHDGJJIM_KAGICIAJEEA_OFFSET UNITYSDK_OFFSET(0x12D0EC60)
#define ECLKHDGJJIM_NPAFMEBNFOB_OFFSET UNITYSDK_OFFSET(0x12D0EA00)
#define ECLKHDGJJIM_PHGNLEBBCCP_OFFSET UNITYSDK_OFFSET(0x12D0ED60)

inline static constexpr unsigned int ECLKHDGJJIM_TypeDefinitionIndex = 72654;

	class ECLKHDGJJIM : public ::System::Object
	{
	public:
		::System::Boolean DJEMNOJHMBI; // 0x10
		::System::Boolean EJMHCCCLHHM; // 0x11
		::System::Byte _padding0[0x2];
		::UnityEngine::Touch JPGMABHFGCC; // 0x14
		::System::Single KIPAGNCANAJ; // 0x58
		::UnityEngine::Vector2 BLEKFOJDDHK; // 0x5C
		::UnityEngine::Vector2 LCEGDDMJPCM; // 0x64
		::System::Single KDBGMBINNAP; // 0x6C
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
