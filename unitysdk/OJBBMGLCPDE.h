#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Foundation/FixedArray4_1.h"
#include "unitysdk/PBKHDCIJJLE.h"
#include "unitysdk/System/ValueType.h"
#include "unitysdk/UnityEngine/Animations/AnimationStream.h"
#include "unitysdk/Foundation/FixedArray3_1.h"
#include "unitysdk/JHDJDPGKJGP.h"
#include "unitysdk/KJCNICHCNBH.h"

#define OJBBMGLCPDE_COKNIICCODC_OFFSET UNITYSDK_OFFSET(0x74CDF0)
#define OJBBMGLCPDE_GLOAAACBNPP_OFFSET UNITYSDK_OFFSET(0x74CC70)
#define OJBBMGLCPDE_NGFKBKCFPLK_OFFSET UNITYSDK_OFFSET(0x3743A0)
#define OJBBMGLCPDE__CTOR_OFFSET UNITYSDK_OFFSET(0x74CA80)

inline static constexpr unsigned int OJBBMGLCPDE_TypeDefinitionIndex = 52744;

struct alignas(8) OJBBMGLCPDE
{
	::PBKHDCIJJLE AGNPPGPGGPP; // 0x10
	::Foundation::FixedArray4_1<::UnityEngine::Animations::AnimationStream> LFLBEFNCAOK; // 0x60

	::System::Void _ctor(::PBKHDCIJJLE NEGDIIDKGIA, ::Foundation::FixedArray3_1<::UnityEngine::Animations::AnimationStream> NOHGPOOOIGF, ::UnityEngine::Animations::AnimationStream NBCJIPBLPOL)
	{
		return ((::System::Void(*)(::PVOID, ::PBKHDCIJJLE, ::Foundation::FixedArray3_1<::UnityEngine::Animations::AnimationStream>, ::UnityEngine::Animations::AnimationStream))((::PBYTE)hIl2Cpp + OJBBMGLCPDE__CTOR_OFFSET))(this, NEGDIIDKGIA, NOHGPOOOIGF, NBCJIPBLPOL);
	}

	::KJCNICHCNBH GLOAAACBNPP(::System::Int32 ABHBKFJKINO)
	{
		return ((::KJCNICHCNBH(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + OJBBMGLCPDE_GLOAAACBNPP_OFFSET))(this, ABHBKFJKINO);
	}

	::System::Int32 NGFKBKCFPLK()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + OJBBMGLCPDE_NGFKBKCFPLK_OFFSET))(this);
	}

	::JHDJDPGKJGP COKNIICCODC(::UnityEngine::Animations::AnimationStream CPKODGLINAO)
	{
		return ((::JHDJDPGKJGP(*)(::PVOID, ::UnityEngine::Animations::AnimationStream))((::PBYTE)hIl2Cpp + OJBBMGLCPDE_COKNIICCODC_OFFSET))(this, CPKODGLINAO);
	}
};
