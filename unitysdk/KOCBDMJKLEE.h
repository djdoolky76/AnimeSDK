#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Foundation/FixedArray2_1.h"
#include "unitysdk/PBKHDCIJJLE.h"
#include "unitysdk/System/ValueType.h"
#include "unitysdk/UnityEngine/Animations/AnimationStream.h"
#include "unitysdk/Foundation/FixedArray1_1.h"
#include "unitysdk/KJCNICHCNBH.h"
#include "unitysdk/ODPIDDJIFLM.h"

#define KOCBDMJKLEE_COKNIICCODC_OFFSET UNITYSDK_OFFSET(0x752AC0)
#define KOCBDMJKLEE_GLOAAACBNPP_OFFSET UNITYSDK_OFFSET(0x752970)
#define KOCBDMJKLEE_NGFKBKCFPLK_OFFSET UNITYSDK_OFFSET(0x35FFD0)
#define KOCBDMJKLEE__CTOR_OFFSET UNITYSDK_OFFSET(0x752750)

inline static constexpr unsigned int KOCBDMJKLEE_TypeDefinitionIndex = 38343;

struct alignas(8) KOCBDMJKLEE
{
	::PBKHDCIJJLE AGNPPGPGGPP; // 0x10
	::Foundation::FixedArray2_1<::UnityEngine::Animations::AnimationStream> LFLBEFNCAOK; // 0x60

	::System::Void _ctor(::PBKHDCIJJLE NEGDIIDKGIA, ::Foundation::FixedArray1_1<::UnityEngine::Animations::AnimationStream> NOHGPOOOIGF, ::UnityEngine::Animations::AnimationStream NBCJIPBLPOL)
	{
		return ((::System::Void(*)(::PVOID, ::PBKHDCIJJLE, ::Foundation::FixedArray1_1<::UnityEngine::Animations::AnimationStream>, ::UnityEngine::Animations::AnimationStream))((::PBYTE)hIl2Cpp + KOCBDMJKLEE__CTOR_OFFSET))(this, NEGDIIDKGIA, NOHGPOOOIGF, NBCJIPBLPOL);
	}

	::KJCNICHCNBH GLOAAACBNPP(::System::Int32 ABHBKFJKINO)
	{
		return ((::KJCNICHCNBH(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + KOCBDMJKLEE_GLOAAACBNPP_OFFSET))(this, ABHBKFJKINO);
	}

	::System::Int32 NGFKBKCFPLK()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + KOCBDMJKLEE_NGFKBKCFPLK_OFFSET))(this);
	}

	::ODPIDDJIFLM COKNIICCODC(::UnityEngine::Animations::AnimationStream CPKODGLINAO)
	{
		return ((::ODPIDDJIFLM(*)(::PVOID, ::UnityEngine::Animations::AnimationStream))((::PBYTE)hIl2Cpp + KOCBDMJKLEE_COKNIICCODC_OFFSET))(this, CPKODGLINAO);
	}
};
