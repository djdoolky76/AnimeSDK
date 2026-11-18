#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class CKLCIHALHPF;
class CNMMAPKALPH;

#define OOBAHEDLHOI_ECLEIPOMDGM_NGLEEOKPEOK_OFFSET UNITYSDK_OFFSET(0x16C42320)
#define OOBAHEDLHOI_ECLEIPOMDGM__CTOR_OFFSET UNITYSDK_OFFSET(0x16C3F320)

inline static constexpr unsigned int OOBAHEDLHOI_ECLEIPOMDGM_TypeDefinitionIndex = 75533;

class OOBAHEDLHOI_ECLEIPOMDGM : public ::System::Object
{
public:
	::CNMMAPKALPH* MBJDMKCGOCK; // 0x10

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + OOBAHEDLHOI_ECLEIPOMDGM__CTOR_OFFSET))(this);
	}

	::System::Boolean NGLEEOKPEOK(::CKLCIHALHPF* EMIKCAHJLGB)
	{
		return ((::System::Boolean(*)(::PVOID, ::CKLCIHALHPF*))((::PBYTE)hIl2Cpp + OOBAHEDLHOI_ECLEIPOMDGM_NGLEEOKPEOK_OFFSET))(this, EMIKCAHJLGB);
	}
};
