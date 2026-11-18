#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/ACJFKBAJMOA.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/System/Nullable_1.h"

class IAEOCKOHIMH;

#define FGHCEPIOEHM_BOHEPAHKJHG_OFFSET UNITYSDK_OFFSET(0x17140CA0)
#define FGHCEPIOEHM_KOHHPJIPJFM_OFFSET UNITYSDK_OFFSET(0x17141110)
#define FGHCEPIOEHM_KPHMPOMJLNB_OFFSET UNITYSDK_OFFSET(0x17140C50)
#define FGHCEPIOEHM_PAGJLKELMBM_OFFSET UNITYSDK_OFFSET(0x171410C0)
#define FGHCEPIOEHM__CTOR_OFFSET UNITYSDK_OFFSET(0x17140C30)

inline static constexpr unsigned int FGHCEPIOEHM_TypeDefinitionIndex = 69819;

class FGHCEPIOEHM : public ::System::Object
{
public:
	::ACJFKBAJMOA CEJENBBHBBG; // 0x10

	::System::Void _ctor(::ACJFKBAJMOA& DFMKILICPFB)
	{
		return ((::System::Void(*)(::PVOID, ::ACJFKBAJMOA&))((::PBYTE)hIl2Cpp + FGHCEPIOEHM__CTOR_OFFSET))(this, DFMKILICPFB);
	}

	::System::Nullable_1<::System::Single> KPHMPOMJLNB()
	{
		return ((::System::Nullable_1<::System::Single>(*)(::PVOID))((::PBYTE)hIl2Cpp + FGHCEPIOEHM_KPHMPOMJLNB_OFFSET))(this);
	}

	::System::Void BOHEPAHKJHG(::IAEOCKOHIMH* HHIJHDFHPOI)
	{
		return ((::System::Void(*)(::PVOID, ::IAEOCKOHIMH*))((::PBYTE)hIl2Cpp + FGHCEPIOEHM_BOHEPAHKJHG_OFFSET))(this, HHIJHDFHPOI);
	}

	::System::Nullable_1<::System::Single> PAGJLKELMBM()
	{
		return ((::System::Nullable_1<::System::Single>(*)(::PVOID))((::PBYTE)hIl2Cpp + FGHCEPIOEHM_PAGJLKELMBM_OFFSET))(this);
	}

	::System::Nullable_1<::System::Single> KOHHPJIPJFM()
	{
		return ((::System::Nullable_1<::System::Single>(*)(::PVOID))((::PBYTE)hIl2Cpp + FGHCEPIOEHM_KOHHPJIPJFM_OFFSET))(this);
	}
};
