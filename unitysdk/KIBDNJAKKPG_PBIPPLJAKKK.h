#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

#define KIBDNJAKKPG_PBIPPLJAKKK_EIAFIHJMFPM_OFFSET UNITYSDK_OFFSET(0x1862B6A0)
#define KIBDNJAKKPG_PBIPPLJAKKK_GCNDGKBFFPF_OFFSET UNITYSDK_OFFSET(0x1862B650)
#define KIBDNJAKKPG_PBIPPLJAKKK_MBHJJNFNGPE_OFFSET UNITYSDK_OFFSET(0x1862B530)
#define KIBDNJAKKPG_PBIPPLJAKKK_OLGGBHNAJGK_OFFSET UNITYSDK_OFFSET(0x1862B5F0)
#define KIBDNJAKKPG_PBIPPLJAKKK_PGLHBKANDAI_OFFSET UNITYSDK_OFFSET(0x1862B580)
#define KIBDNJAKKPG_PBIPPLJAKKK__CTOR_OFFSET UNITYSDK_OFFSET(0x1862B520)

inline static constexpr unsigned int KIBDNJAKKPG_PBIPPLJAKKK_TypeDefinitionIndex = 53928;

class KIBDNJAKKPG_PBIPPLJAKKK : public ::System::Object
{
public:
	::System::Object* HHGILNNMNAK; // 0x10
	::System::Single FKFJPLBLELD; // 0x18

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + KIBDNJAKKPG_PBIPPLJAKKK__CTOR_OFFSET))(this);
	}

	::System::Void MBHJJNFNGPE(::System::Object* HFMHOELKCAJ)
	{
		return ((::System::Void(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + KIBDNJAKKPG_PBIPPLJAKKK_MBHJJNFNGPE_OFFSET))(this, HFMHOELKCAJ);
	}

	::System::Boolean PGLHBKANDAI(::System::Single CCGEHOFIMCE)
	{
		return ((::System::Boolean(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + KIBDNJAKKPG_PBIPPLJAKKK_PGLHBKANDAI_OFFSET))(this, CCGEHOFIMCE);
	}

	::System::Void OLGGBHNAJGK(::System::Single CCGEHOFIMCE)
	{
		return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + KIBDNJAKKPG_PBIPPLJAKKK_OLGGBHNAJGK_OFFSET))(this, CCGEHOFIMCE);
	}

	::System::Single GCNDGKBFFPF()
	{
		return ((::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + KIBDNJAKKPG_PBIPPLJAKKK_GCNDGKBFFPF_OFFSET))(this);
	}

	::System::Void EIAFIHJMFPM()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + KIBDNJAKKPG_PBIPPLJAKKK_EIAFIHJMFPM_OFFSET))(this);
	}
};
