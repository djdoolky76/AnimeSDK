#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Share/EAvatarSkillType.h"
#include "unitysdk/System/Object.h"

namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }

#define CAJOIGEHHON_FJONJGDBOBE_EEPNDLFCAOD_OFFSET UNITYSDK_OFFSET(0x19AC9390)
#define CAJOIGEHHON_FJONJGDBOBE__CTOR_OFFSET UNITYSDK_OFFSET(0x19AC9300)

inline static constexpr unsigned int CAJOIGEHHON_FJONJGDBOBE_TypeDefinitionIndex = 14345;

class CAJOIGEHHON_FJONJGDBOBE : public ::System::Object
{
public:
	::System::Collections::Generic::Dictionary_2<::Share::EAvatarSkillType, ::System::Object*>* _BGJLMBEHHDL_k__BackingField; // 0x10

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CAJOIGEHHON_FJONJGDBOBE__CTOR_OFFSET))(this);
	}

	::System::Collections::Generic::Dictionary_2<::Share::EAvatarSkillType, ::System::Object*>* EEPNDLFCAOD()
	{
		return ((::System::Collections::Generic::Dictionary_2<::Share::EAvatarSkillType, ::System::Object*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + CAJOIGEHHON_FJONJGDBOBE_EEPNDLFCAOD_OFFSET))(this);
	}
};
