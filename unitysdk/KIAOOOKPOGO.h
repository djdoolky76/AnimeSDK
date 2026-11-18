#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Foundation/FixedArray1_1.h"
#include "unitysdk/PBKHDCIJJLE.h"
#include "unitysdk/System/ValueType.h"
#include "unitysdk/UnityEngine/Animations/AnimationStream.h"
#include "unitysdk/KJCNICHCNBH.h"
#include "unitysdk/KOCBDMJKLEE.h"

#define KIAOOOKPOGO_COKNIICCODC_OFFSET UNITYSDK_OFFSET(0x7AAEA0)
#define KIAOOOKPOGO_GLOAAACBNPP_OFFSET UNITYSDK_OFFSET(0x7AAD80)
#define KIAOOOKPOGO_NGFKBKCFPLK_OFFSET UNITYSDK_OFFSET(0x3D6F30)
#define KIAOOOKPOGO__CTOR_OFFSET UNITYSDK_OFFSET(0x7AACB0)

inline static constexpr unsigned int KIAOOOKPOGO_TypeDefinitionIndex = 72714;

struct alignas(8) KIAOOOKPOGO
{
	::PBKHDCIJJLE AGNPPGPGGPP; // 0x10
	::Foundation::FixedArray1_1<::UnityEngine::Animations::AnimationStream> LFLBEFNCAOK; // 0x60

	::System::Void _ctor(::PBKHDCIJJLE NEGDIIDKGIA, ::UnityEngine::Animations::AnimationStream NBCJIPBLPOL)
	{
		return ((::System::Void(*)(::PVOID, ::PBKHDCIJJLE, ::UnityEngine::Animations::AnimationStream))((::PBYTE)hIl2Cpp + KIAOOOKPOGO__CTOR_OFFSET))(this, NEGDIIDKGIA, NBCJIPBLPOL);
	}

	::KJCNICHCNBH GLOAAACBNPP(::System::Int32 ABHBKFJKINO)
	{
		return ((::KJCNICHCNBH(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + KIAOOOKPOGO_GLOAAACBNPP_OFFSET))(this, ABHBKFJKINO);
	}

	::System::Int32 NGFKBKCFPLK()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + KIAOOOKPOGO_NGFKBKCFPLK_OFFSET))(this);
	}

	::KOCBDMJKLEE COKNIICCODC(::UnityEngine::Animations::AnimationStream CPKODGLINAO)
	{
		return ((::KOCBDMJKLEE(*)(::PVOID, ::UnityEngine::Animations::AnimationStream))((::PBYTE)hIl2Cpp + KIAOOOKPOGO_COKNIICCODC_OFFSET))(this, CPKODGLINAO);
	}
};
