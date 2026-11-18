#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/UnityEngine/Vector3.h"

class AIKGHHJKNCE;

#define FBAMLABJMKF_LOFLBKIBJCC_FMFIBDNINEE_OFFSET UNITYSDK_OFFSET(0x12381420)
#define FBAMLABJMKF_LOFLBKIBJCC__CTOR_OFFSET UNITYSDK_OFFSET(0x12381410)

inline static constexpr unsigned int FBAMLABJMKF_LOFLBKIBJCC_TypeDefinitionIndex = 78146;

class FBAMLABJMKF_LOFLBKIBJCC : public ::System::Object
{
public:
	::UnityEngine::Vector3 PFMOGAONHKL; // 0x10

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + FBAMLABJMKF_LOFLBKIBJCC__CTOR_OFFSET))(this);
	}

	::System::Boolean FMFIBDNINEE(::AIKGHHJKNCE* JNDDJMAHNAI)
	{
		return ((::System::Boolean(*)(::PVOID, ::AIKGHHJKNCE*))((::PBYTE)hIl2Cpp + FBAMLABJMKF_LOFLBKIBJCC_FMFIBDNINEE_OFFSET))(this, JNDDJMAHNAI);
	}
};
