#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class IDGDIFDMIDP;
class LHKMKCIPOLD;
class MKFNBHDICNJ;
namespace System::Collections::Generic { template <typename T> class List_1; }

#define MKFNBHDICNJ_APBPKKKEPOK_ENHLAHEMMKM_OFFSET UNITYSDK_OFFSET(0x14DEF1B0)
#define MKFNBHDICNJ_APBPKKKEPOK__CTOR_OFFSET UNITYSDK_OFFSET(0x14DEF1A0)

inline static constexpr unsigned int MKFNBHDICNJ_APBPKKKEPOK_TypeDefinitionIndex = 61386;

class MKFNBHDICNJ_APBPKKKEPOK : public ::System::Object
{
public:
	::IDGDIFDMIDP* AJAAEBEOIJM; // 0x10
	::MKFNBHDICNJ* KLHPEBKNIFB; // 0x18

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MKFNBHDICNJ_APBPKKKEPOK__CTOR_OFFSET))(this);
	}

	::System::Void ENHLAHEMMKM(::System::Collections::Generic::List_1<::LHKMKCIPOLD*>* PIIPCLCCOIG)
	{
		return ((::System::Void(*)(::PVOID, ::System::Collections::Generic::List_1<::LHKMKCIPOLD*>*))((::PBYTE)hIl2Cpp + MKFNBHDICNJ_APBPKKKEPOK_ENHLAHEMMKM_OFFSET))(this, PIIPCLCCOIG);
	}
};
