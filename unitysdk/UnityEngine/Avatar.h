#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/UnityEngine/Object.h"
#include "unitysdk/UnityEngine/B8FF20486E0DABFD.h"

#define UNITYENGINE_AVATAR_FC79598DEDA1DBE1_OFFSET UNITYSDK_OFFSET(0x4104A20)
#define UNITYENGINE_AVATAR_FEA440733FE645AA_OFFSET UNITYSDK_OFFSET(0x4104A70)
#define UNITYENGINE_AVATAR__CTOR_OFFSET UNITYSDK_OFFSET(0x41049D0)

namespace UnityEngine
{
	inline static constexpr unsigned int Avatar_TypeDefinitionIndex = 21089;

	class Avatar : public ::UnityEngine::Object
	{
	public:
		::UnityEngine::B8FF20486E0DABFD FEA440733FE645AA()
		{
			return ((::UnityEngine::B8FF20486E0DABFD(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_AVATAR_FEA440733FE645AA_OFFSET))(this);
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_AVATAR__CTOR_OFFSET))(this);
		}

		::System::Void FC79598DEDA1DBE1(::UnityEngine::B8FF20486E0DABFD& FEC8DC0392823C8D)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::B8FF20486E0DABFD&))((::PBYTE)hIl2Cpp + UNITYENGINE_AVATAR_FC79598DEDA1DBE1_OFFSET))(this, FEC8DC0392823C8D);
		}
	};
}
