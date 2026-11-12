#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/NKCMOFKJLBE.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/KLNKLOMDIIC.h"
#include "unitysdk/UnityEngine/Vector3.h"
namespace RPG::GameCore { class FiveDimConveyorConfig; }

#define GCFGMNEAIJN_CTOR_OFFSET UNITYSDK_OFFSET(0x1DC44170)
#define GCFGMNEAIJN_GOBOGHMEFKM_OFFSET UNITYSDK_OFFSET(0x1DC43D80)
#define GCFGMNEAIJN_HDFEPMNKAPK_OFFSET UNITYSDK_OFFSET(0x1DC43F30)

inline static constexpr unsigned int GCFGMNEAIJN_TypeDefinitionIndex = 44455;

	class GCFGMNEAIJN : public ::System::Object
	{
	public:
		::RPG::GameCore::FiveDimConveyorConfig* EABKOHGCHFP; // 0x10
		::NKCMOFKJLBE BPAPBAFOMCH; // 0x18
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + GCFGMNEAIJN_CTOR_OFFSET))(this);
		}

		::UnityEngine::Vector3 GOBOGHMEFKM(::KLNKLOMDIIC a1, ::System::Single a2, ::System::Single a3)
		{
			return ((::UnityEngine::Vector3(*)(::PVOID, ::KLNKLOMDIIC, ::System::Single, ::System::Single))((::PBYTE)hIl2Cpp + GCFGMNEAIJN_GOBOGHMEFKM_OFFSET))(this, a1, a2, a3);
		}

		::UnityEngine::Vector3 HDFEPMNKAPK(::KLNKLOMDIIC a1, ::UnityEngine::Vector3 a2, ::System::Single a3)
		{
			return ((::UnityEngine::Vector3(*)(::PVOID, ::KLNKLOMDIIC, ::UnityEngine::Vector3, ::System::Single))((::PBYTE)hIl2Cpp + GCFGMNEAIJN_HDFEPMNKAPK_OFFSET))(this, a1, a2, a3);
		}

	};
