#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/OKMMDNBKBOE.h"
#include "unitysdk/System/Object.h"

namespace System::Collections::Generic { template <typename T> class List_1; }

#define HFOKFECCJIL_INMBNLGBEDL_OFFSET UNITYSDK_OFFSET(0x16F306B0)
#define HFOKFECCJIL_OEBCOAHKIDO_OFFSET UNITYSDK_OFFSET(0x16F30570)
#define HFOKFECCJIL__CTOR_OFFSET UNITYSDK_OFFSET(0x16F30560)

inline static constexpr unsigned int HFOKFECCJIL_TypeDefinitionIndex = 73532;

class HFOKFECCJIL : public ::System::Object
{
public:
	::OKMMDNBKBOE CIOHMJCGHDP; // 0x10
	::System::Boolean OJKJNCKKNNG; // 0x70
	::System::Byte _padding0[0x3];
	::System::Int32 JALKKPOGEHK; // 0x74
	::System::Int32 ANJFMPBLEHI; // 0x78
	::System::Int32 KDDJHNKKCAG; // 0x7C

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + HFOKFECCJIL__CTOR_OFFSET))(this);
	}

	::System::Boolean OEBCOAHKIDO(::System::Collections::Generic::List_1<::System::Int32>*& MJHAGOHBHOD)
	{
		return ((::System::Boolean(*)(::PVOID, ::System::Collections::Generic::List_1<::System::Int32>*&))((::PBYTE)hIl2Cpp + HFOKFECCJIL_OEBCOAHKIDO_OFFSET))(this, MJHAGOHBHOD);
	}

	::System::Int32 INMBNLGBEDL()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + HFOKFECCJIL_INMBNLGBEDL_OFFSET))(this);
	}
};
