#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/LLKPMNAMCIM.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/UnityEngine/Vector3.h"

class IKGGCHBOBOD_EFGJMECLDHK;

#define IKGGCHBOBOD_FGLEMPDKLDF_DCBPCAOGIBJ_OFFSET UNITYSDK_OFFSET(0x13811740)
#define IKGGCHBOBOD_FGLEMPDKLDF__CTOR_OFFSET UNITYSDK_OFFSET(0x13811730)

inline static constexpr unsigned int IKGGCHBOBOD_FGLEMPDKLDF_TypeDefinitionIndex = 57367;

class IKGGCHBOBOD_FGLEMPDKLDF : public ::System::Object
{
public:
	::LLKPMNAMCIM MEJEHGADDAJ; // 0x10
	::IKGGCHBOBOD_EFGJMECLDHK* FGBNBFHOKAA; // 0x80

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + IKGGCHBOBOD_FGLEMPDKLDF__CTOR_OFFSET))(this);
	}

	::UnityEngine::Vector3 DCBPCAOGIBJ()
	{
		return ((::UnityEngine::Vector3(*)(::PVOID))((::PBYTE)hIl2Cpp + IKGGCHBOBOD_FGLEMPDKLDF_DCBPCAOGIBJ_OFFSET))(this);
	}
};
