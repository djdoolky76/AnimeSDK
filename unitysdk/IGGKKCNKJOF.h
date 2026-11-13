#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/MNFMINCGIDD.h"
#include "unitysdk/UnityEngine/KeyCode.h"

#define IGGKKCNKJOF_CTOR_OFFSET UNITYSDK_OFFSET(0x19F5BEE0)
#define IGGKKCNKJOF_HOPEPDKPBAM_OFFSET UNITYSDK_OFFSET(0x19F5BF40)
#define IGGKKCNKJOF_MAGFIJONJMH_OFFSET UNITYSDK_OFFSET(0x19F5BEF0)

inline static constexpr unsigned int IGGKKCNKJOF_TypeDefinitionIndex = 78236;

	class IGGKKCNKJOF : public ::MNFMINCGIDD
	{
	public:
		::UnityEngine::KeyCode KPFAMGNDMPK; // 0x18
		::System::Void _ctor(::UnityEngine::KeyCode a1)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::KeyCode))((::PBYTE)hIl2Cpp + IGGKKCNKJOF_CTOR_OFFSET))(this, a1);
		}

		::System::Boolean MAGFIJONJMH()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + IGGKKCNKJOF_MAGFIJONJMH_OFFSET))(this);
		}

		::System::Boolean HOPEPDKPBAM()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + IGGKKCNKJOF_HOPEPDKPBAM_OFFSET))(this);
		}

	};
