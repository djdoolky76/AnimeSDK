#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Share/EAvatarSkillType.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/HKADBOLMBBA_ENOMLKFHBFH.h"

class BPHGNMNLLHF;

#define HKADBOLMBBA_JCJIHFFNECG_OFFSET UNITYSDK_OFFSET(0x15DBD630)
#define HKADBOLMBBA_PNJFPDPJNFD_OFFSET UNITYSDK_OFFSET(0x15DBD3E0)

inline static constexpr unsigned int HKADBOLMBBA_TypeDefinitionIndex = 57943;

class HKADBOLMBBA : public ::System::Object
{
public:
	static ::System::Int32 PNJFPDPJNFD(::System::Int32 PKMFBJMJCOO, ::BPHGNMNLLHF* JNNLPBBEIEM, ::Share::EAvatarSkillType BBDHPBAPPPI)
	{
		return ((::System::Int32(*)(::System::Int32, ::BPHGNMNLLHF*, ::Share::EAvatarSkillType))((::PBYTE)hIl2Cpp + HKADBOLMBBA_PNJFPDPJNFD_OFFSET))(PKMFBJMJCOO, JNNLPBBEIEM, BBDHPBAPPPI);
	}

	static ::HKADBOLMBBA_ENOMLKFHBFH JCJIHFFNECG(::System::Int32 PKMFBJMJCOO, ::BPHGNMNLLHF* JNNLPBBEIEM, ::Share::EAvatarSkillType BBDHPBAPPPI)
	{
		return ((::HKADBOLMBBA_ENOMLKFHBFH(*)(::System::Int32, ::BPHGNMNLLHF*, ::Share::EAvatarSkillType))((::PBYTE)hIl2Cpp + HKADBOLMBBA_JCJIHFFNECG_OFFSET))(PKMFBJMJCOO, JNNLPBBEIEM, BBDHPBAPPPI);
	}
};
