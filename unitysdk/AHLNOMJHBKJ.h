#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/PipelineCamera/CameraExternalValueType.h"
#include "unitysdk/PipelineCamera/CameraFollowTargetParam.h"

class CFBKLGMJPIO;

#define AHLNOMJHBKJ_GETVALUETYPE_OFFSET UNITYSDK_OFFSET(0x11B9EE90)
#define AHLNOMJHBKJ_GET_OFFSET UNITYSDK_OFFSET(0x11B9EE10)
#define AHLNOMJHBKJ__CCTOR_OFFSET UNITYSDK_OFFSET(0x11B9ECC0)
#define AHLNOMJHBKJ__CTOR_OFFSET UNITYSDK_OFFSET(0x11B9ED80)

inline static constexpr unsigned int AHLNOMJHBKJ_TypeDefinitionIndex = 76349;

class AHLNOMJHBKJ
{
public:
	static ::AHLNOMJHBKJ** StaticGet_NJLLMPCDOEB()
	{
		return (::AHLNOMJHBKJ**)Il2CppClass::FromTypeDefinitionIndex(AHLNOMJHBKJ_TypeDefinitionIndex)->GetStaticField(0x343A0);
	}

	static ::System::Void _cctor()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + AHLNOMJHBKJ__CCTOR_OFFSET))();
	}

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + AHLNOMJHBKJ__CTOR_OFFSET))(this);
	}

	::PipelineCamera::CameraFollowTargetParam Get(::CFBKLGMJPIO* LFMICOCAFFI)
	{
		return ((::PipelineCamera::CameraFollowTargetParam(*)(::PVOID, ::CFBKLGMJPIO*))((::PBYTE)hIl2Cpp + AHLNOMJHBKJ_GET_OFFSET))(this, LFMICOCAFFI);
	}

	::PipelineCamera::CameraExternalValueType GetValueType()
	{
		return ((::PipelineCamera::CameraExternalValueType(*)(::PVOID))((::PBYTE)hIl2Cpp + AHLNOMJHBKJ_GETVALUETYPE_OFFSET))(this);
	}
};
