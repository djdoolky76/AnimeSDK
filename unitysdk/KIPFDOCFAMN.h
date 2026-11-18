#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Foundation/FixedArray8_1.h"
#include "unitysdk/PBKHDCIJJLE.h"
#include "unitysdk/System/ValueType.h"
#include "unitysdk/UnityEngine/Animations/AnimationStream.h"
#include "unitysdk/Foundation/FixedArray7_1.h"
#include "unitysdk/KJCNICHCNBH.h"

#define KIPFDOCFAMN_GLOAAACBNPP_OFFSET UNITYSDK_OFFSET(0x750ED0)
#define KIPFDOCFAMN_NGFKBKCFPLK_OFFSET UNITYSDK_OFFSET(0x52C240)
#define KIPFDOCFAMN__CTOR_OFFSET UNITYSDK_OFFSET(0x750BE0)

inline static constexpr unsigned int KIPFDOCFAMN_TypeDefinitionIndex = 88166;

struct alignas(8) KIPFDOCFAMN
{
	::PBKHDCIJJLE AGNPPGPGGPP; // 0x10
	::Foundation::FixedArray8_1<::UnityEngine::Animations::AnimationStream> LFLBEFNCAOK; // 0x60

	::System::Void _ctor(::PBKHDCIJJLE NEGDIIDKGIA, ::Foundation::FixedArray7_1<::UnityEngine::Animations::AnimationStream> NOHGPOOOIGF, ::UnityEngine::Animations::AnimationStream NBCJIPBLPOL)
	{
		return ((::System::Void(*)(::PVOID, ::PBKHDCIJJLE, ::Foundation::FixedArray7_1<::UnityEngine::Animations::AnimationStream>, ::UnityEngine::Animations::AnimationStream))((::PBYTE)hIl2Cpp + KIPFDOCFAMN__CTOR_OFFSET))(this, NEGDIIDKGIA, NOHGPOOOIGF, NBCJIPBLPOL);
	}

	::KJCNICHCNBH GLOAAACBNPP(::System::Int32 ABHBKFJKINO)
	{
		return ((::KJCNICHCNBH(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + KIPFDOCFAMN_GLOAAACBNPP_OFFSET))(this, ABHBKFJKINO);
	}

	::System::Int32 NGFKBKCFPLK()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + KIPFDOCFAMN_NGFKBKCFPLK_OFFSET))(this);
	}
};
