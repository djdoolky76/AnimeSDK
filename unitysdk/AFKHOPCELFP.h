#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/UnityEngine/Vector3.h"

#define AFKHOPCELFP_CTOR_OFFSET UNITYSDK_OFFSET(0x1EBBF0A0)
#define AFKHOPCELFP_HGFLKIBJDDL_OFFSET UNITYSDK_OFFSET(0x1EBBE700)
#define AFKHOPCELFP_NNODPIDIPPG_OFFSET UNITYSDK_OFFSET(0x1EBBEB70)

inline static constexpr unsigned int AFKHOPCELFP_TypeDefinitionIndex = 35290;

	class AFKHOPCELFP : public ::System::Object
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + AFKHOPCELFP_CTOR_OFFSET))(this);
		}

		static ::UnityEngine::Vector3 HGFLKIBJDDL(::UnityEngine::Vector3 a1, ::UnityEngine::Vector3 a2, ::UnityEngine::Vector3 a3)
		{
			return ((::UnityEngine::Vector3(*)(::UnityEngine::Vector3, ::UnityEngine::Vector3, ::UnityEngine::Vector3))((::PBYTE)hIl2Cpp + AFKHOPCELFP_HGFLKIBJDDL_OFFSET))(a1, a2, a3);
		}

		static ::UnityEngine::Vector3 NNODPIDIPPG(::UnityEngine::Vector3 a1, ::UnityEngine::Vector3 a2, ::UnityEngine::Vector3 a3, ::System::Single a4)
		{
			return ((::UnityEngine::Vector3(*)(::UnityEngine::Vector3, ::UnityEngine::Vector3, ::UnityEngine::Vector3, ::System::Single))((::PBYTE)hIl2Cpp + AFKHOPCELFP_NNODPIDIPPG_OFFSET))(a1, a2, a3, a4);
		}

	};
