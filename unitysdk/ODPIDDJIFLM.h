#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Foundation/FixedArray3_1.h"
#include "unitysdk/PBKHDCIJJLE.h"
#include "unitysdk/System/ValueType.h"
#include "unitysdk/UnityEngine/Animations/AnimationStream.h"
#include "unitysdk/Foundation/FixedArray2_1.h"
#include "unitysdk/KJCNICHCNBH.h"
#include "unitysdk/OJBBMGLCPDE.h"

#define ODPIDDJIFLM_COKNIICCODC_OFFSET UNITYSDK_OFFSET(0x49AA60)
#define ODPIDDJIFLM_GLOAAACBNPP_OFFSET UNITYSDK_OFFSET(0x49A910)
#define ODPIDDJIFLM_NGFKBKCFPLK_OFFSET UNITYSDK_OFFSET(0x3628E0)
#define ODPIDDJIFLM__CTOR_OFFSET UNITYSDK_OFFSET(0x49A720)

inline static constexpr unsigned int ODPIDDJIFLM_TypeDefinitionIndex = 63424;

struct alignas(8) ODPIDDJIFLM
{
	::PBKHDCIJJLE AGNPPGPGGPP; // 0x10
	::Foundation::FixedArray3_1<::UnityEngine::Animations::AnimationStream> LFLBEFNCAOK; // 0x60

	::System::Void _ctor(::PBKHDCIJJLE NEGDIIDKGIA, ::Foundation::FixedArray2_1<::UnityEngine::Animations::AnimationStream> NOHGPOOOIGF, ::UnityEngine::Animations::AnimationStream NBCJIPBLPOL)
	{
		return ((::System::Void(*)(::PVOID, ::PBKHDCIJJLE, ::Foundation::FixedArray2_1<::UnityEngine::Animations::AnimationStream>, ::UnityEngine::Animations::AnimationStream))((::PBYTE)hIl2Cpp + ODPIDDJIFLM__CTOR_OFFSET))(this, NEGDIIDKGIA, NOHGPOOOIGF, NBCJIPBLPOL);
	}

	::KJCNICHCNBH GLOAAACBNPP(::System::Int32 ABHBKFJKINO)
	{
		return ((::KJCNICHCNBH(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + ODPIDDJIFLM_GLOAAACBNPP_OFFSET))(this, ABHBKFJKINO);
	}

	::System::Int32 NGFKBKCFPLK()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + ODPIDDJIFLM_NGFKBKCFPLK_OFFSET))(this);
	}

	::OJBBMGLCPDE COKNIICCODC(::UnityEngine::Animations::AnimationStream CPKODGLINAO)
	{
		return ((::OJBBMGLCPDE(*)(::PVOID, ::UnityEngine::Animations::AnimationStream))((::PBYTE)hIl2Cpp + ODPIDDJIFLM_COKNIICCODC_OFFSET))(this, CPKODGLINAO);
	}
};
