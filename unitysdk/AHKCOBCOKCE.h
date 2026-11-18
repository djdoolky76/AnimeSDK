#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

#define AHKCOBCOKCE_DIIBJKANFIM_OFFSET UNITYSDK_OFFSET(0x1647BC40)
#define AHKCOBCOKCE_DJFKOKBPKNI_OFFSET UNITYSDK_OFFSET(0x1647BCA0)
#define AHKCOBCOKCE_PEOEBEBFIJO_OFFSET UNITYSDK_OFFSET(0x1647BC90)
#define AHKCOBCOKCE__CTOR_OFFSET UNITYSDK_OFFSET(0x1647BBF0)

inline static constexpr unsigned int AHKCOBCOKCE_TypeDefinitionIndex = 57764;

class AHKCOBCOKCE : public ::System::Object
{
public:
	::System::Boolean OMHBDCHBGOG; // 0x10
	::System::Boolean _OIKODLNEIJB_k__BackingField; // 0x11

	::System::Void _ctor(::System::Boolean PDFEDOCLDHG)
	{
		return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + AHKCOBCOKCE__CTOR_OFFSET))(this, PDFEDOCLDHG);
	}

	::System::Boolean PEOEBEBFIJO()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + AHKCOBCOKCE_PEOEBEBFIJO_OFFSET))(this);
	}

	::System::Void DJFKOKBPKNI(::System::Boolean EGEGIMGMJHN)
	{
		return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + AHKCOBCOKCE_DJFKOKBPKNI_OFFSET))(this, EGEGIMGMJHN);
	}

	::System::Void DIIBJKANFIM()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + AHKCOBCOKCE_DIIBJKANFIM_OFFSET))(this);
	}
};
