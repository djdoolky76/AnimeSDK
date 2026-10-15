#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/NOOHPODHIAA.h"
#include "unitysdk/UnityEngine/Vector3.h"
namespace RPG { template <typename T> class PoolHashSet_1; }

#define MEIJGMHFPLB_CLEAR_OFFSET UNITYSDK_OFFSET(0x1C8F6EB0)
#define MEIJGMHFPLB_CTOR_OFFSET UNITYSDK_OFFSET(0x1C8F6F60)
#define MEIJGMHFPLB_ONALLOC_OFFSET UNITYSDK_OFFSET(0x1C8F6DC0)

inline static constexpr unsigned int MEIJGMHFPLB_TypeDefinitionIndex = 43536;

	class MEIJGMHFPLB : public ::NOOHPODHIAA
	{
	public:
		::RPG::PoolHashSet_1<::System::Int32>* IDOGNEJAOHB; // 0x338
		::UnityEngine::Vector3 CBKGAFODLKL; // 0x340
		::System::Boolean LEONIHNBBHF; // 0x34C
		::System::Boolean ILHCJFKCHBM; // 0x34D
		::System::Boolean HFJKJFAABIF; // 0x34E
		::System::Byte _padding0[0x1];
		::System::Int32 MKBEABBPCJE; // 0x350
		::System::Int32 LPLJOOKLAEG; // 0x354
		::System::Boolean HAJKKJJKOFK; // 0x358
		::System::Boolean BPJLDFOFFOM; // 0x359
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MEIJGMHFPLB_CTOR_OFFSET))(this);
		}

		::System::Void OnAlloc()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MEIJGMHFPLB_ONALLOC_OFFSET))(this);
		}

		::System::Void Clear()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MEIJGMHFPLB_CLEAR_OFFSET))(this);
		}

	};
