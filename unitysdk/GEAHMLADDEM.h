#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Foundation/Buff/GameplayEffectModifier.h"
#include "unitysdk/System/Object.h"

class GDGBPCOGIEN;
namespace System::Collections::Generic { template <typename T> class IReadOnlyList_1; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define GEAHMLADDEM_ACINEGLMOOF_OFFSET UNITYSDK_OFFSET(0x1EDF6CB0)
#define GEAHMLADDEM_ANNFPOKOHOJ_OFFSET UNITYSDK_OFFSET(0x1EDF6CA0)
#define GEAHMLADDEM_BBPCBEEHALC_OFFSET UNITYSDK_OFFSET(0x1EDF6CD0)
#define GEAHMLADDEM_GNMHMBDCMLO_OFFSET UNITYSDK_OFFSET(0x1EDF0DD0)
#define GEAHMLADDEM_HHMKNGJONEH_OFFSET UNITYSDK_OFFSET(0x1EDF19F0)
#define GEAHMLADDEM_MGPEDAHABPJ_OFFSET UNITYSDK_OFFSET(0x1EDF6C90)
#define GEAHMLADDEM_ODJMHOFBMKE_OFFSET UNITYSDK_OFFSET(0x1EDF6FD0)
#define GEAHMLADDEM__CTOR_OFFSET UNITYSDK_OFFSET(0x1EDF6C80)

inline static constexpr unsigned int GEAHMLADDEM_TypeDefinitionIndex = 18760;

class GEAHMLADDEM : public ::System::Object
{
public:
	::Foundation::Buff::GameplayEffectModifier _OKOIJIMLFHJ_k__BackingField; // 0x10
	::GDGBPCOGIEN* _ANJKCJNNOGE_k__BackingField; // 0x28

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + GEAHMLADDEM__CTOR_OFFSET))(this);
	}

	::System::Void MGPEDAHABPJ(::GDGBPCOGIEN* EGEGIMGMJHN)
	{
		return ((::System::Void(*)(::PVOID, ::GDGBPCOGIEN*))((::PBYTE)hIl2Cpp + GEAHMLADDEM_MGPEDAHABPJ_OFFSET))(this, EGEGIMGMJHN);
	}

	static ::System::Void HHMKNGJONEH(::System::Collections::Generic::List_1<::GEAHMLADDEM*>* KCIEHCNONAM)
	{
		return ((::System::Void(*)(::System::Collections::Generic::List_1<::GEAHMLADDEM*>*))((::PBYTE)hIl2Cpp + GEAHMLADDEM_HHMKNGJONEH_OFFSET))(KCIEHCNONAM);
	}

	::GDGBPCOGIEN* ANNFPOKOHOJ()
	{
		return ((::GDGBPCOGIEN*(*)(::PVOID))((::PBYTE)hIl2Cpp + GEAHMLADDEM_ANNFPOKOHOJ_OFFSET))(this);
	}

	::Foundation::Buff::GameplayEffectModifier ACINEGLMOOF()
	{
		return ((::Foundation::Buff::GameplayEffectModifier(*)(::PVOID))((::PBYTE)hIl2Cpp + GEAHMLADDEM_ACINEGLMOOF_OFFSET))(this);
	}

	static ::GEAHMLADDEM* BBPCBEEHALC(::GDGBPCOGIEN* JIJFBNLHFGK, ::Foundation::Buff::GameplayEffectModifier AOBNJBCBHAK)
	{
		return ((::GEAHMLADDEM*(*)(::GDGBPCOGIEN*, ::Foundation::Buff::GameplayEffectModifier))((::PBYTE)hIl2Cpp + GEAHMLADDEM_BBPCBEEHALC_OFFSET))(JIJFBNLHFGK, AOBNJBCBHAK);
	}

	static ::System::Collections::Generic::List_1<::GEAHMLADDEM*>* GNMHMBDCMLO(::System::Collections::Generic::IReadOnlyList_1<::Foundation::Buff::GameplayEffectModifier>* ODDGMOOJCOO, ::GDGBPCOGIEN* JIJFBNLHFGK)
	{
		return ((::System::Collections::Generic::List_1<::GEAHMLADDEM*>*(*)(::System::Collections::Generic::IReadOnlyList_1<::Foundation::Buff::GameplayEffectModifier>*, ::GDGBPCOGIEN*))((::PBYTE)hIl2Cpp + GEAHMLADDEM_GNMHMBDCMLO_OFFSET))(ODDGMOOJCOO, JIJFBNLHFGK);
	}

	::System::Void ODJMHOFBMKE(::Foundation::Buff::GameplayEffectModifier EGEGIMGMJHN)
	{
		return ((::System::Void(*)(::PVOID, ::Foundation::Buff::GameplayEffectModifier))((::PBYTE)hIl2Cpp + GEAHMLADDEM_ODJMHOFBMKE_OFFSET))(this, EGEGIMGMJHN);
	}
};
