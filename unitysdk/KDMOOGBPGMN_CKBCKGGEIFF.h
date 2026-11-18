#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/FNKOPDEKLKG.h"
#include "unitysdk/HOCDHMEPPEG.h"
#include "unitysdk/System/Object.h"

class KDMOOGBPGMN_KIFAHHEGLFD;
namespace System { class Action; }

#define KDMOOGBPGMN_CKBCKGGEIFF_ECIGEHBCMIK_OFFSET UNITYSDK_OFFSET(0x1860AC40)
#define KDMOOGBPGMN_CKBCKGGEIFF_JIOKDEMNABA_OFFSET UNITYSDK_OFFSET(0x1860AE10)
#define KDMOOGBPGMN_CKBCKGGEIFF__CTOR_OFFSET UNITYSDK_OFFSET(0x1860AC30)

inline static constexpr unsigned int KDMOOGBPGMN_CKBCKGGEIFF_TypeDefinitionIndex = 45199;

class KDMOOGBPGMN_CKBCKGGEIFF : public ::System::Object
{
public:
	::FNKOPDEKLKG PHHDHIBOCKA; // 0x10
	::KDMOOGBPGMN_KIFAHHEGLFD* FGBNBFHOKAA; // 0x28
	::HOCDHMEPPEG DJPMNKCDAFL; // 0x30
	::HOCDHMEPPEG KDDNFOBDFJM; // 0x60
	::System::Int32 EGEAFHJPLBC; // 0x90
	::System::Int32 DJPKAOMDGPL; // 0x94
	::System::Boolean GKJFAIDKEAC; // 0x98
	::System::Byte _padding0[0x3];
	::System::Int32 LBJFMFCDKIP; // 0x9C

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + KDMOOGBPGMN_CKBCKGGEIFF__CTOR_OFFSET))(this);
	}

	::System::Void ECIGEHBCMIK(::System::Boolean CAAFEGLOALC, ::System::Int32 HCKDKJHAOMF, ::System::Action* OCIKNBPALGG)
	{
		return ((::System::Void(*)(::PVOID, ::System::Boolean, ::System::Int32, ::System::Action*))((::PBYTE)hIl2Cpp + KDMOOGBPGMN_CKBCKGGEIFF_ECIGEHBCMIK_OFFSET))(this, CAAFEGLOALC, HCKDKJHAOMF, OCIKNBPALGG);
	}

	::System::Void JIOKDEMNABA()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + KDMOOGBPGMN_CKBCKGGEIFF_JIOKDEMNABA_OFFSET))(this);
	}
};
