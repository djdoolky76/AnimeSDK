#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/UnityEngine/Vector3.h"

#define GHGDNILKGLI_CTOR_OFFSET UNITYSDK_OFFSET(0x15A13180)
#define GHGDNILKGLI_IEKFPFNIEHF_OFFSET UNITYSDK_OFFSET(0x15A12FA0)
#define GHGDNILKGLI_PAGKOAEOLKA_OFFSET UNITYSDK_OFFSET(0x15A13090)

inline static constexpr unsigned int GHGDNILKGLI_TypeDefinitionIndex = 52431;

	class GHGDNILKGLI : public ::System::Object
	{
	public:
		::UnityEngine::Vector3 JFAGECNFHJL; // 0x10
		::UnityEngine::Vector3 KONBAMDOGDH; // 0x1C
		::UnityEngine::Vector3 HFLAAJNMCOH; // 0x28
		::UnityEngine::Vector3 PHMKDHKBLDE; // 0x34
		::UnityEngine::Vector3 HFOMPEEAPCG; // 0x40
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + GHGDNILKGLI_CTOR_OFFSET))(this);
		}

		::UnityEngine::Vector3 IEKFPFNIEHF()
		{
			return ((::UnityEngine::Vector3(*)(::PVOID))((::PBYTE)hIl2Cpp + GHGDNILKGLI_IEKFPFNIEHF_OFFSET))(this);
		}

		::System::Void PAGKOAEOLKA(::UnityEngine::Vector3 a1, ::UnityEngine::Vector3 a2, ::UnityEngine::Vector3 a3, ::UnityEngine::Vector3 a4)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Vector3, ::UnityEngine::Vector3, ::UnityEngine::Vector3, ::UnityEngine::Vector3))((::PBYTE)hIl2Cpp + GHGDNILKGLI_PAGKOAEOLKA_OFFSET))(this, a1, a2, a3, a4);
		}

	};
