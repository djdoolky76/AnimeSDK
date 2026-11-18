#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Share/EAvatarSkillType.h"
#include "unitysdk/System/Object.h"

class GBHNICOJIIF;
class OHAILKANOOK;
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define FOBNNBHHMPP_BPEOIMOPDBK_OFFSET UNITYSDK_OFFSET(0x1B865A20)
#define FOBNNBHHMPP_EEPNDLFCAOD_OFFSET UNITYSDK_OFFSET(0x1B865A10)
#define FOBNNBHHMPP__CTOR_OFFSET UNITYSDK_OFFSET(0x1B865930)

inline static constexpr unsigned int FOBNNBHHMPP_TypeDefinitionIndex = 10682;

class FOBNNBHHMPP : public ::System::Object
{
public:
	::System::Collections::Generic::Dictionary_2<::Share::EAvatarSkillType, ::GBHNICOJIIF*>* _BGJLMBEHHDL_k__BackingField; // 0x10
	::System::Collections::Generic::List_1<::OHAILKANOOK*>* _NIHAEMKOHFO_k__BackingField; // 0x18

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + FOBNNBHHMPP__CTOR_OFFSET))(this);
	}

	::System::Collections::Generic::Dictionary_2<::Share::EAvatarSkillType, ::GBHNICOJIIF*>* EEPNDLFCAOD()
	{
		return ((::System::Collections::Generic::Dictionary_2<::Share::EAvatarSkillType, ::GBHNICOJIIF*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + FOBNNBHHMPP_EEPNDLFCAOD_OFFSET))(this);
	}

	::System::Collections::Generic::List_1<::OHAILKANOOK*>* BPEOIMOPDBK()
	{
		return ((::System::Collections::Generic::List_1<::OHAILKANOOK*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + FOBNNBHHMPP_BPEOIMOPDBK_OFFSET))(this);
	}
};
