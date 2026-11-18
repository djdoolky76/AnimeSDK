#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Foundation/ReadOnlyNativeMemoryRefEnumerator_1.h"
#include "unitysdk/JIPGFLPPIAI.h"
#include "unitysdk/System/ValueType.h"
#include "unitysdk/UnityEngine/Animations/AnimationStream.h"
#include "unitysdk/Foundation/Unreal/FTransform3D.h"

#define KJCNICHCNBH_CMOHBHBNHNM_BLCJNKLJPKJ_OFFSET UNITYSDK_OFFSET(0x366590)
#define KJCNICHCNBH_CMOHBHBNHNM_NCNOMFOCLBH_OFFSET UNITYSDK_OFFSET(0x747BA0)
#define KJCNICHCNBH_CMOHBHBNHNM__CTOR_OFFSET UNITYSDK_OFFSET(0x747A30)

inline static constexpr unsigned int KJCNICHCNBH_CMOHBHBNHNM_TypeDefinitionIndex = 45631;

struct alignas(8) KJCNICHCNBH_CMOHBHBNHNM
{
	::Foundation::ReadOnlyNativeMemoryRefEnumerator_1<::JIPGFLPPIAI> LACGFCIBDFD; // 0x10
	::System::Byte _padding0[0x10];
	::UnityEngine::Animations::AnimationStream JHENEEOIGNO; // 0x28

	::System::Void _ctor(::Foundation::ReadOnlyNativeMemoryRefEnumerator_1<::JIPGFLPPIAI> ILIPMAMEFLF, ::UnityEngine::Animations::AnimationStream CPKODGLINAO)
	{
		return ((::System::Void(*)(::PVOID, ::Foundation::ReadOnlyNativeMemoryRefEnumerator_1<::JIPGFLPPIAI>, ::UnityEngine::Animations::AnimationStream))((::PBYTE)hIl2Cpp + KJCNICHCNBH_CMOHBHBNHNM__CTOR_OFFSET))(this, ILIPMAMEFLF, CPKODGLINAO);
	}

	::Foundation::Unreal::FTransform3D NCNOMFOCLBH()
	{
		return ((::Foundation::Unreal::FTransform3D(*)(::PVOID))((::PBYTE)hIl2Cpp + KJCNICHCNBH_CMOHBHBNHNM_NCNOMFOCLBH_OFFSET))(this);
	}

	::System::Boolean BLCJNKLJPKJ()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + KJCNICHCNBH_CMOHBHBNHNM_BLCJNKLJPKJ_OFFSET))(this);
	}
};
