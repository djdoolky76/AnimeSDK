#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class HCAMHNEDHOD;
class NLAFBCGOIIA;

#define HCAMHNEDHOD_PELKPHMDIPA_DAANHMAAEMB_OFFSET UNITYSDK_OFFSET(0x17A35A00)
#define HCAMHNEDHOD_PELKPHMDIPA__CTOR_OFFSET UNITYSDK_OFFSET(0x17A359F0)

inline static constexpr unsigned int HCAMHNEDHOD_PELKPHMDIPA_TypeDefinitionIndex = 61441;

class HCAMHNEDHOD_PELKPHMDIPA : public ::System::Object
{
public:
	::HCAMHNEDHOD* KLHPEBKNIFB; // 0x10
	::NLAFBCGOIIA* NEJJNEOKIGI; // 0x18

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + HCAMHNEDHOD_PELKPHMDIPA__CTOR_OFFSET))(this);
	}

	::System::Void DAANHMAAEMB()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + HCAMHNEDHOD_PELKPHMDIPA_DAANHMAAEMB_OFFSET))(this);
	}
};
