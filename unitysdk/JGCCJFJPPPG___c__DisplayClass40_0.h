#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/UnityEngine/Vector2Int.h"
class ILPPBGLJABD;

#define JGCCJFJPPPG___C__DISPLAYCLASS40_0_CTOR_OFFSET UNITYSDK_OFFSET(0xB1912A0)
#define JGCCJFJPPPG___C__DISPLAYCLASS40_0__ISENDPOINT_B__0_OFFSET UNITYSDK_OFFSET(0xB191C90)

inline static constexpr unsigned int JGCCJFJPPPG___c__DisplayClass40_0_TypeDefinitionIndex = 62350;

	class JGCCJFJPPPG___c__DisplayClass40_0 : public ::System::Object
	{
	public:
		::UnityEngine::Vector2Int coord; // 0x10
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + JGCCJFJPPPG___C__DISPLAYCLASS40_0_CTOR_OFFSET))(this);
		}

		::System::Boolean _IsEndPoint_b__0(::ILPPBGLJABD* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::ILPPBGLJABD*))((::PBYTE)hIl2Cpp + JGCCJFJPPPG___C__DISPLAYCLASS40_0__ISENDPOINT_B__0_OFFSET))(this, a1);
		}

	};
