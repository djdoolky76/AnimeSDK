#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/MoleMole/EntityHandle.h"
#include "unitysdk/System/Object.h"

class DNPLKCGEDBK;

#define DNPLKCGEDBK_KINPDBPAOJA_ENPNGMFCEHJ_OFFSET UNITYSDK_OFFSET(0x132A4880)
#define DNPLKCGEDBK_KINPDBPAOJA_NGDJDHIKDAN_OFFSET UNITYSDK_OFFSET(0x132A4770)
#define DNPLKCGEDBK_KINPDBPAOJA__CTOR_OFFSET UNITYSDK_OFFSET(0x132A4760)

inline static constexpr unsigned int DNPLKCGEDBK_KINPDBPAOJA_TypeDefinitionIndex = 47121;

class DNPLKCGEDBK_KINPDBPAOJA : public ::System::Object
{
public:
	::DNPLKCGEDBK* KLHPEBKNIFB; // 0x10
	::MoleMole::EntityHandle OONKJIFCDJF; // 0x18

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + DNPLKCGEDBK_KINPDBPAOJA__CTOR_OFFSET))(this);
	}

	::System::Void NGDJDHIKDAN()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + DNPLKCGEDBK_KINPDBPAOJA_NGDJDHIKDAN_OFFSET))(this);
	}

	::System::Void ENPNGMFCEHJ()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + DNPLKCGEDBK_KINPDBPAOJA_ENPNGMFCEHJ_OFFSET))(this);
	}
};
