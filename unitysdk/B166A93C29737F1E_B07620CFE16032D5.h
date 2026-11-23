#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/ABC/Config/WwiseEvent.h"
#include "unitysdk/System/ValueType.h"

namespace System::Collections::Generic { template <typename T> class IReadOnlyList_1; }

#define B166A93C29737F1E_B07620CFE16032D5_E8AF1E0387A100FA_OFFSET UNITYSDK_OFFSET(0x20B2190)
#define B166A93C29737F1E_B07620CFE16032D5_FE1906C25773072B_OFFSET UNITYSDK_OFFSET(0x20B21F0)
#define B166A93C29737F1E_B07620CFE16032D5__CTOR_OFFSET UNITYSDK_OFFSET(0x20B2580)

inline static constexpr unsigned int B166A93C29737F1E_B07620CFE16032D5_TypeDefinitionIndex = 8615;

struct alignas(8) B166A93C29737F1E_B07620CFE16032D5
{
	::System::Collections::Generic::IReadOnlyList_1<::ABC::Config::WwiseEvent>* BDF67CF1447021C1; // 0x10
	::System::Collections::Generic::IReadOnlyList_1<::ABC::Config::WwiseEvent>* EE16672B40A79043; // 0x18

	::System::Void _ctor(::System::Collections::Generic::IReadOnlyList_1<::ABC::Config::WwiseEvent>* A6AA8DC9EA06CE84, ::System::Collections::Generic::IReadOnlyList_1<::ABC::Config::WwiseEvent>* F9389B24E94B8AD5)
	{
		return ((::System::Void(*)(::PVOID, ::System::Collections::Generic::IReadOnlyList_1<::ABC::Config::WwiseEvent>*, ::System::Collections::Generic::IReadOnlyList_1<::ABC::Config::WwiseEvent>*))((::PBYTE)hIl2Cpp + B166A93C29737F1E_B07620CFE16032D5__CTOR_OFFSET))(this, A6AA8DC9EA06CE84, F9389B24E94B8AD5);
	}

	static ::System::Void FE1906C25773072B(::System::Collections::Generic::IReadOnlyList_1<::ABC::Config::WwiseEvent>* AA1B23DE73E471D5)
	{
		return ((::System::Void(*)(::System::Collections::Generic::IReadOnlyList_1<::ABC::Config::WwiseEvent>*))((::PBYTE)hIl2Cpp + B166A93C29737F1E_B07620CFE16032D5_FE1906C25773072B_OFFSET))(AA1B23DE73E471D5);
	}

	::System::Void E8AF1E0387A100FA()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + B166A93C29737F1E_B07620CFE16032D5_E8AF1E0387A100FA_OFFSET))(this);
	}
};
