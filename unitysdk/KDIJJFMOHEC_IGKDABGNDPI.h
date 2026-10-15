#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/MVector2.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/UnityEngine/Vector3.h"

#define KDIJJFMOHEC_IGKDABGNDPI_CTOR_OFFSET UNITYSDK_OFFSET(0xB360630)
#define KDIJJFMOHEC_IGKDABGNDPI_FGNDNBIAOIH_OFFSET UNITYSDK_OFFSET(0xB360E50)
#define KDIJJFMOHEC_IGKDABGNDPI_JHJPDHCEBDD_OFFSET UNITYSDK_OFFSET(0xB35FA40)

	class KDIJJFMOHEC_IGKDABGNDPI : public ::System::Object
	{
	public:
		::RPG::MVector2 GEKAGOAFNLN; // 0x10
		::System::Single KBNEOKCKFKP; // 0x18
		::System::Single JCFFEEABHCN; // 0x1C
		::UnityEngine::Vector3 BJNKIKNBFOJ; // 0x20
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
