#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Foundation/FixedArray6_1.h"
#include "unitysdk/PBKHDCIJJLE.h"
#include "unitysdk/System/ValueType.h"
#include "unitysdk/UnityEngine/Animations/AnimationStream.h"
#include "unitysdk/Foundation/FixedArray5_1.h"
#include "unitysdk/IGOBLKKHPAG.h"
#include "unitysdk/KJCNICHCNBH.h"

#define EOGJMBEFEAC_COKNIICCODC_OFFSET UNITYSDK_OFFSET(0x7745E0)
#define EOGJMBEFEAC_GLOAAACBNPP_OFFSET UNITYSDK_OFFSET(0x774450)
#define EOGJMBEFEAC_NGFKBKCFPLK_OFFSET UNITYSDK_OFFSET(0x374770)
#define EOGJMBEFEAC__CTOR_OFFSET UNITYSDK_OFFSET(0x7741E0)

inline static constexpr unsigned int EOGJMBEFEAC_TypeDefinitionIndex = 40530;

struct alignas(8) EOGJMBEFEAC
{
	::PBKHDCIJJLE AGNPPGPGGPP; // 0x10
	::Foundation::FixedArray6_1<::UnityEngine::Animations::AnimationStream> LFLBEFNCAOK; // 0x60

	::System::Void _ctor(::PBKHDCIJJLE NEGDIIDKGIA, ::Foundation::FixedArray5_1<::UnityEngine::Animations::AnimationStream> NOHGPOOOIGF, ::UnityEngine::Animations::AnimationStream NBCJIPBLPOL)
	{
		return ((::System::Void(*)(::PVOID, ::PBKHDCIJJLE, ::Foundation::FixedArray5_1<::UnityEngine::Animations::AnimationStream>, ::UnityEngine::Animations::AnimationStream))((::PBYTE)hIl2Cpp + EOGJMBEFEAC__CTOR_OFFSET))(this, NEGDIIDKGIA, NOHGPOOOIGF, NBCJIPBLPOL);
	}

	::KJCNICHCNBH GLOAAACBNPP(::System::Int32 ABHBKFJKINO)
	{
		return ((::KJCNICHCNBH(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + EOGJMBEFEAC_GLOAAACBNPP_OFFSET))(this, ABHBKFJKINO);
	}

	::System::Int32 NGFKBKCFPLK()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + EOGJMBEFEAC_NGFKBKCFPLK_OFFSET))(this);
	}

	::IGOBLKKHPAG COKNIICCODC(::UnityEngine::Animations::AnimationStream CPKODGLINAO)
	{
		return ((::IGOBLKKHPAG(*)(::PVOID, ::UnityEngine::Animations::AnimationStream))((::PBYTE)hIl2Cpp + EOGJMBEFEAC_COKNIICCODC_OFFSET))(this, CPKODGLINAO);
	}
};
