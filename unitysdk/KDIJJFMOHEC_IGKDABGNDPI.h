#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/MVector2.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/UnityEngine/Vector3.h"

#define KDIJJFMOHEC_IGKDABGNDPI_CTOR_OFFSET UNITYSDK_OFFSET(0x1B5C2E90)
#define KDIJJFMOHEC_IGKDABGNDPI_FGNDNBIAOIH_OFFSET UNITYSDK_OFFSET(0x1B5C36A0)
#define KDIJJFMOHEC_IGKDABGNDPI_JHJPDHCEBDD_OFFSET UNITYSDK_OFFSET(0x1B5C2290)

inline static constexpr unsigned int KDIJJFMOHEC_IGKDABGNDPI_TypeDefinitionIndex = 77895;

	class KDIJJFMOHEC_IGKDABGNDPI : public ::System::Object
	{
	public:
		::System::Single KBNEOKCKFKP; // 0x10
		::RPG::MVector2 GEKAGOAFNLN; // 0x14
		::UnityEngine::Vector3 BJNKIKNBFOJ; // 0x1C
		::System::Single JCFFEEABHCN; // 0x28
		::RPG::MVector2 JEOJCFJAKJK; // 0x2C
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + KDIJJFMOHEC_IGKDABGNDPI_CTOR_OFFSET))(this);
		}

		::UnityEngine::Vector3 FGNDNBIAOIH(::UnityEngine::Vector3 a1)
		{
			return ((::UnityEngine::Vector3(*)(::PVOID, ::UnityEngine::Vector3))((::PBYTE)hIl2Cpp + KDIJJFMOHEC_IGKDABGNDPI_FGNDNBIAOIH_OFFSET))(this, a1);
		}

		::UnityEngine::Vector3 JHJPDHCEBDD(::UnityEngine::Vector3 a1)
		{
			return ((::UnityEngine::Vector3(*)(::PVOID, ::UnityEngine::Vector3))((::PBYTE)hIl2Cpp + KDIJJFMOHEC_IGKDABGNDPI_JHJPDHCEBDD_OFFSET))(this, a1);
		}

	};
