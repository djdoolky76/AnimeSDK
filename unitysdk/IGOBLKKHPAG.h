#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Foundation/FixedArray7_1.h"
#include "unitysdk/PBKHDCIJJLE.h"
#include "unitysdk/System/ValueType.h"
#include "unitysdk/UnityEngine/Animations/AnimationStream.h"
#include "unitysdk/Foundation/FixedArray6_1.h"
#include "unitysdk/KIPFDOCFAMN.h"
#include "unitysdk/KJCNICHCNBH.h"

#define IGOBLKKHPAG_COKNIICCODC_OFFSET UNITYSDK_OFFSET(0x7F73D0)
#define IGOBLKKHPAG_GLOAAACBNPP_OFFSET UNITYSDK_OFFSET(0x7F7230)
#define IGOBLKKHPAG_NGFKBKCFPLK_OFFSET UNITYSDK_OFFSET(0x3842C0)
#define IGOBLKKHPAG__CTOR_OFFSET UNITYSDK_OFFSET(0x7F6F80)

inline static constexpr unsigned int IGOBLKKHPAG_TypeDefinitionIndex = 60478;

struct alignas(8) IGOBLKKHPAG
{
	::PBKHDCIJJLE AGNPPGPGGPP; // 0x10
	::Foundation::FixedArray7_1<::UnityEngine::Animations::AnimationStream> LFLBEFNCAOK; // 0x60

	::System::Void _ctor(::PBKHDCIJJLE NEGDIIDKGIA, ::Foundation::FixedArray6_1<::UnityEngine::Animations::AnimationStream> NOHGPOOOIGF, ::UnityEngine::Animations::AnimationStream NBCJIPBLPOL)
	{
		return ((::System::Void(*)(::PVOID, ::PBKHDCIJJLE, ::Foundation::FixedArray6_1<::UnityEngine::Animations::AnimationStream>, ::UnityEngine::Animations::AnimationStream))((::PBYTE)hIl2Cpp + IGOBLKKHPAG__CTOR_OFFSET))(this, NEGDIIDKGIA, NOHGPOOOIGF, NBCJIPBLPOL);
	}

	::KJCNICHCNBH GLOAAACBNPP(::System::Int32 ABHBKFJKINO)
	{
		return ((::KJCNICHCNBH(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + IGOBLKKHPAG_GLOAAACBNPP_OFFSET))(this, ABHBKFJKINO);
	}

	::System::Int32 NGFKBKCFPLK()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + IGOBLKKHPAG_NGFKBKCFPLK_OFFSET))(this);
	}

	::KIPFDOCFAMN COKNIICCODC(::UnityEngine::Animations::AnimationStream CPKODGLINAO)
	{
		return ((::KIPFDOCFAMN(*)(::PVOID, ::UnityEngine::Animations::AnimationStream))((::PBYTE)hIl2Cpp + IGOBLKKHPAG_COKNIICCODC_OFFSET))(this, CPKODGLINAO);
	}
};
