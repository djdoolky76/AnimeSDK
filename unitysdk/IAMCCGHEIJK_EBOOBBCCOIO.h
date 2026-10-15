#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/UnityEngine/Vector3.h"
class BNLKJLFCLOI;
class IAMCCGHEIJK;

#define IAMCCGHEIJK_EBOOBBCCOIO_ABABNHBBFBD_OFFSET UNITYSDK_OFFSET(0x15E1CCE0)
#define IAMCCGHEIJK_EBOOBBCCOIO_CTOR_OFFSET UNITYSDK_OFFSET(0x15E1AE10)
#define IAMCCGHEIJK_EBOOBBCCOIO_ENTER_OFFSET UNITYSDK_OFFSET(0x15E1C9A0)
#define IAMCCGHEIJK_EBOOBBCCOIO_EXIT_OFFSET UNITYSDK_OFFSET(0x15E1D090)
#define IAMCCGHEIJK_EBOOBBCCOIO_TICK_OFFSET UNITYSDK_OFFSET(0x15E1CA40)

inline static constexpr unsigned int IAMCCGHEIJK_EBOOBBCCOIO_TypeDefinitionIndex = 62289;

	class IAMCCGHEIJK_EBOOBBCCOIO : public ::System::Object
	{
	public:
		::IAMCCGHEIJK* CFKHNPGEAJA; // 0x10
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + IAMCCGHEIJK_EBOOBBCCOIO_CTOR_OFFSET))(this);
		}

		::System::Void Enter(::IAMCCGHEIJK* a1)
		{
			return ((::System::Void(*)(::PVOID, ::IAMCCGHEIJK*))((::PBYTE)hIl2Cpp + IAMCCGHEIJK_EBOOBBCCOIO_ENTER_OFFSET))(this, a1);
		}

		::System::Void Tick(::IAMCCGHEIJK* a1)
		{
			return ((::System::Void(*)(::PVOID, ::IAMCCGHEIJK*))((::PBYTE)hIl2Cpp + IAMCCGHEIJK_EBOOBBCCOIO_TICK_OFFSET))(this, a1);
		}

		::System::Void Exit()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + IAMCCGHEIJK_EBOOBBCCOIO_EXIT_OFFSET))(this);
		}

		::BNLKJLFCLOI* ABABNHBBFBD(::UnityEngine::Vector3 a1)
		{
			return ((::BNLKJLFCLOI*(*)(::PVOID, ::UnityEngine::Vector3))((::PBYTE)hIl2Cpp + IAMCCGHEIJK_EBOOBBCCOIO_ABABNHBBFBD_OFFSET))(this, a1);
		}

	};
