#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/UnityEngine/Rect.h"
class IJGIHOACJLB;

#define IJGIHOACJLB_CTOR_OFFSET UNITYSDK_OFFSET(0x1645A160)
#define IJGIHOACJLB_DMKJAJLNEBK_1_OFFSET UNITYSDK_OFFSET(0x1645A170)
#define IJGIHOACJLB_DMKJAJLNEBK_OFFSET UNITYSDK_OFFSET(0x1645A000)
#define IJGIHOACJLB_FFHNOMIDEDE_OFFSET UNITYSDK_OFFSET(0x1645A370)

inline static constexpr unsigned int IJGIHOACJLB_TypeDefinitionIndex = 68233;

	class IJGIHOACJLB : public ::System::Object
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + IJGIHOACJLB_CTOR_OFFSET))(this);
		}

		static ::IJGIHOACJLB* DMKJAJLNEBK()
		{
			return ((::IJGIHOACJLB*(*)())((::PBYTE)hIl2Cpp + IJGIHOACJLB_DMKJAJLNEBK_OFFSET))();
		}

		static ::IJGIHOACJLB* DMKJAJLNEBK_1(::UnityEngine::Rect a1)
		{
			return ((::IJGIHOACJLB*(*)(::UnityEngine::Rect))((::PBYTE)hIl2Cpp + IJGIHOACJLB_DMKJAJLNEBK_1_OFFSET))(a1);
		}

		::System::Void FFHNOMIDEDE()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + IJGIHOACJLB_FFHNOMIDEDE_OFFSET))(this);
		}

	};
