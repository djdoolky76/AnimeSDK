#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Foundation/FixedArray5_1.h"
#include "unitysdk/PBKHDCIJJLE.h"
#include "unitysdk/System/ValueType.h"
#include "unitysdk/UnityEngine/Animations/AnimationStream.h"
#include "unitysdk/EOGJMBEFEAC.h"
#include "unitysdk/Foundation/FixedArray4_1.h"
#include "unitysdk/KJCNICHCNBH.h"

#define JHDJDPGKJGP_COKNIICCODC_OFFSET UNITYSDK_OFFSET(0x7B44F0)
#define JHDJDPGKJGP_GLOAAACBNPP_OFFSET UNITYSDK_OFFSET(0x7B4370)
#define JHDJDPGKJGP_NGFKBKCFPLK_OFFSET UNITYSDK_OFFSET(0x362F70)
#define JHDJDPGKJGP__CTOR_OFFSET UNITYSDK_OFFSET(0x7B4140)

inline static constexpr unsigned int JHDJDPGKJGP_TypeDefinitionIndex = 90464;

struct alignas(8) JHDJDPGKJGP
{
	::PBKHDCIJJLE AGNPPGPGGPP; // 0x10
	::Foundation::FixedArray5_1<::UnityEngine::Animations::AnimationStream> LFLBEFNCAOK; // 0x60

	::System::Void _ctor(::PBKHDCIJJLE NEGDIIDKGIA, ::Foundation::FixedArray4_1<::UnityEngine::Animations::AnimationStream> NOHGPOOOIGF, ::UnityEngine::Animations::AnimationStream NBCJIPBLPOL)
	{
		return ((::System::Void(*)(::PVOID, ::PBKHDCIJJLE, ::Foundation::FixedArray4_1<::UnityEngine::Animations::AnimationStream>, ::UnityEngine::Animations::AnimationStream))((::PBYTE)hIl2Cpp + JHDJDPGKJGP__CTOR_OFFSET))(this, NEGDIIDKGIA, NOHGPOOOIGF, NBCJIPBLPOL);
	}

	::KJCNICHCNBH GLOAAACBNPP(::System::Int32 ABHBKFJKINO)
	{
		return ((::KJCNICHCNBH(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + JHDJDPGKJGP_GLOAAACBNPP_OFFSET))(this, ABHBKFJKINO);
	}

	::System::Int32 NGFKBKCFPLK()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + JHDJDPGKJGP_NGFKBKCFPLK_OFFSET))(this);
	}

	::EOGJMBEFEAC COKNIICCODC(::UnityEngine::Animations::AnimationStream CPKODGLINAO)
	{
		return ((::EOGJMBEFEAC(*)(::PVOID, ::UnityEngine::Animations::AnimationStream))((::PBYTE)hIl2Cpp + JHDJDPGKJGP_COKNIICCODC_OFFSET))(this, CPKODGLINAO);
	}
};
