#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class MBHOGLGMFEM_HAAIJCIABIN;

#define MBHOGLGMFEM_JAOOGKIEDFH_MKFLONABMAJ_OFFSET UNITYSDK_OFFSET(0x15693280)
#define MBHOGLGMFEM_JAOOGKIEDFH__CTOR_OFFSET UNITYSDK_OFFSET(0x15693270)

inline static constexpr unsigned int MBHOGLGMFEM_JAOOGKIEDFH_TypeDefinitionIndex = 55679;

class MBHOGLGMFEM_JAOOGKIEDFH : public ::System::Object
{
public:
	::MBHOGLGMFEM_HAAIJCIABIN* FGBNBFHOKAA; // 0x10
	::System::Int32 MFDDKCPOKFI; // 0x18

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MBHOGLGMFEM_JAOOGKIEDFH__CTOR_OFFSET))(this);
	}

	::System::Void MKFLONABMAJ()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MBHOGLGMFEM_JAOOGKIEDFH_MKFLONABMAJ_OFFSET))(this);
	}
};
