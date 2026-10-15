#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/UnityEngine/Vector2Int.h"
class BNLKJLFCLOI;
class IAMCCGHEIJK;

#define IAMCCGHEIJK_GCBPMDCNLMD_CTOR_OFFSET UNITYSDK_OFFSET(0x15E0DEE0)
#define IAMCCGHEIJK_GCBPMDCNLMD_ENTER_OFFSET UNITYSDK_OFFSET(0x15E101B0)
#define IAMCCGHEIJK_GCBPMDCNLMD_EXIT_OFFSET UNITYSDK_OFFSET(0x15E107E0)
#define IAMCCGHEIJK_GCBPMDCNLMD_JHPBBDBLKBL_OFFSET UNITYSDK_OFFSET(0x15E10460)
#define IAMCCGHEIJK_GCBPMDCNLMD_TICK_OFFSET UNITYSDK_OFFSET(0x15E10250)

inline static constexpr unsigned int IAMCCGHEIJK_GCBPMDCNLMD_TypeDefinitionIndex = 62286;

	class IAMCCGHEIJK_GCBPMDCNLMD : public ::System::Object
	{
	public:
		::IAMCCGHEIJK* CFKHNPGEAJA; // 0x10
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + IAMCCGHEIJK_GCBPMDCNLMD_CTOR_OFFSET))(this);
		}

		::System::Void Enter(::IAMCCGHEIJK* a1)
		{
			return ((::System::Void(*)(::PVOID, ::IAMCCGHEIJK*))((::PBYTE)hIl2Cpp + IAMCCGHEIJK_GCBPMDCNLMD_ENTER_OFFSET))(this, a1);
		}

		::System::Void Tick(::IAMCCGHEIJK* a1)
		{
			return ((::System::Void(*)(::PVOID, ::IAMCCGHEIJK*))((::PBYTE)hIl2Cpp + IAMCCGHEIJK_GCBPMDCNLMD_TICK_OFFSET))(this, a1);
		}

		::System::Void Exit()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + IAMCCGHEIJK_GCBPMDCNLMD_EXIT_OFFSET))(this);
		}

		::BNLKJLFCLOI* JHPBBDBLKBL(::UnityEngine::Vector2Int a1)
		{
			return ((::BNLKJLFCLOI*(*)(::PVOID, ::UnityEngine::Vector2Int))((::PBYTE)hIl2Cpp + IAMCCGHEIJK_GCBPMDCNLMD_JHPBBDBLKBL_OFFSET))(this, a1);
		}

	};
