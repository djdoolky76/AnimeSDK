#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/BHGCFCKEDAP.h"
#include "unitysdk/Foundation/Unreal/FName.h"
#include "unitysdk/System/ValueType.h"
#include "unitysdk/Foundation/Unreal/Interval_1.h"

#define KNKPKFHMIPE_AIHABKEJIGI_OFFSET UNITYSDK_OFFSET(0x752630)
#define KNKPKFHMIPE_FBKLEJHPNPA_OFFSET UNITYSDK_OFFSET(0x752610)
#define KNKPKFHMIPE_GET_NAME_OFFSET UNITYSDK_OFFSET(0x282350)
#define KNKPKFHMIPE_LPDHFOLALGD_OFFSET UNITYSDK_OFFSET(0x752710)
#define KNKPKFHMIPE_NGCLCAKDDJC_OFFSET UNITYSDK_OFFSET(0x752720)
#define KNKPKFHMIPE_RESET_OFFSET UNITYSDK_OFFSET(0x752530)

inline static constexpr unsigned int KNKPKFHMIPE_TypeDefinitionIndex = 48525;

struct alignas(4) KNKPKFHMIPE
{
	::Foundation::Unreal::FName MNLEAPLFGIB; // 0x10
	::System::Single EFEDCLIBEDG; // 0x18
	::System::Byte _padding0[0x4];
	::BHGCFCKEDAP EHLDOLPELCD; // 0x20

	::Foundation::Unreal::FName get_Name()
	{
		return ((::Foundation::Unreal::FName(*)(::PVOID))((::PBYTE)hIl2Cpp + KNKPKFHMIPE_GET_NAME_OFFSET))(this);
	}

	::System::Void Reset(::Foundation::Unreal::FName HIAIKHDFCLN)
	{
		return ((::System::Void(*)(::PVOID, ::Foundation::Unreal::FName))((::PBYTE)hIl2Cpp + KNKPKFHMIPE_RESET_OFFSET))(this, HIAIKHDFCLN);
	}

	::Foundation::Unreal::Interval_1<::System::Single> FBKLEJHPNPA()
	{
		return ((::Foundation::Unreal::Interval_1<::System::Single>(*)(::PVOID))((::PBYTE)hIl2Cpp + KNKPKFHMIPE_FBKLEJHPNPA_OFFSET))(this);
	}

	::System::Boolean AIHABKEJIGI()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + KNKPKFHMIPE_AIHABKEJIGI_OFFSET))(this);
	}

	::System::Single LPDHFOLALGD(::System::Double BEKLCLFIDKF)
	{
		return ((::System::Single(*)(::PVOID, ::System::Double))((::PBYTE)hIl2Cpp + KNKPKFHMIPE_LPDHFOLALGD_OFFSET))(this, BEKLCLFIDKF);
	}

	::System::Single NGCLCAKDDJC(::System::Double BEKLCLFIDKF)
	{
		return ((::System::Single(*)(::PVOID, ::System::Double))((::PBYTE)hIl2Cpp + KNKPKFHMIPE_NGCLCAKDDJC_OFFSET))(this, BEKLCLFIDKF);
	}
};
