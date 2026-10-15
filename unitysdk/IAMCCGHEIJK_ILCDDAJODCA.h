#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/UnityEngine/Vector2Int.h"
class BNLKJLFCLOI;
class IAMCCGHEIJK;
namespace System::Collections::Generic { template <typename T> class List_1; }

#define IAMCCGHEIJK_ILCDDAJODCA_CTOR_OFFSET UNITYSDK_OFFSET(0x15E1B1C0)
#define IAMCCGHEIJK_ILCDDAJODCA_EDIEHCFLFLE_OFFSET UNITYSDK_OFFSET(0x15E1DDC0)
#define IAMCCGHEIJK_ILCDDAJODCA_ENTER_OFFSET UNITYSDK_OFFSET(0x15E1D820)
#define IAMCCGHEIJK_ILCDDAJODCA_EXIT_OFFSET UNITYSDK_OFFSET(0x15E1E7E0)
#define IAMCCGHEIJK_ILCDDAJODCA_TICK_OFFSET UNITYSDK_OFFSET(0x15E1D8D0)

inline static constexpr unsigned int IAMCCGHEIJK_ILCDDAJODCA_TypeDefinitionIndex = 62287;

	class IAMCCGHEIJK_ILCDDAJODCA : public ::System::Object
	{
	public:
		::System::Collections::Generic::List_1<::UnityEngine::Vector2Int>* EAEOINJOEDG; // 0x10
		::System::Collections::Generic::List_1<::BNLKJLFCLOI*>* LFJEHMPDOKG; // 0x18
		::IAMCCGHEIJK* CFKHNPGEAJA; // 0x20
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + IAMCCGHEIJK_ILCDDAJODCA_CTOR_OFFSET))(this);
		}

		::System::Void Enter(::IAMCCGHEIJK* a1)
		{
			return ((::System::Void(*)(::PVOID, ::IAMCCGHEIJK*))((::PBYTE)hIl2Cpp + IAMCCGHEIJK_ILCDDAJODCA_ENTER_OFFSET))(this, a1);
		}

		::System::Void Tick(::IAMCCGHEIJK* a1)
		{
			return ((::System::Void(*)(::PVOID, ::IAMCCGHEIJK*))((::PBYTE)hIl2Cpp + IAMCCGHEIJK_ILCDDAJODCA_TICK_OFFSET))(this, a1);
		}

		::System::Void Exit()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + IAMCCGHEIJK_ILCDDAJODCA_EXIT_OFFSET))(this);
		}

		::System::Collections::Generic::List_1<::UnityEngine::Vector2Int>* EDIEHCFLFLE(::BNLKJLFCLOI* a1, ::UnityEngine::Vector2Int a2)
		{
			return ((::System::Collections::Generic::List_1<::UnityEngine::Vector2Int>*(*)(::PVOID, ::BNLKJLFCLOI*, ::UnityEngine::Vector2Int))((::PBYTE)hIl2Cpp + IAMCCGHEIJK_ILCDDAJODCA_EDIEHCFLFLE_OFFSET))(this, a1, a2);
		}

	};
