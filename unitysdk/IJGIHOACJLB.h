#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/UnityEngine/Rect.h"
class IJGIHOACJLB;

#define IJGIHOACJLB_CTOR_OFFSET UNITYSDK_OFFSET(0x18055F10)
#define IJGIHOACJLB_DMKJAJLNEBK_1_OFFSET UNITYSDK_OFFSET(0x18055F20)
#define IJGIHOACJLB_DMKJAJLNEBK_OFFSET UNITYSDK_OFFSET(0x18055DB0)
#define IJGIHOACJLB_FFHNOMIDEDE_OFFSET UNITYSDK_OFFSET(0x18056120)

inline static constexpr unsigned int IJGIHOACJLB_TypeDefinitionIndex = 70179;

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
