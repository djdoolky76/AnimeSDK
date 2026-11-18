#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class CHFBODEJFBE;
class EALMMIMFNBE;
namespace System::Collections::Generic { template <typename T> class List_1; }

#define BCCHDNANFLH_ODPPBBAIGLF_OFFSET UNITYSDK_OFFSET(0xF78AF90)
#define BCCHDNANFLH__CTOR_OFFSET UNITYSDK_OFFSET(0xF78ADB0)

inline static constexpr unsigned int BCCHDNANFLH_TypeDefinitionIndex = 80599;

class BCCHDNANFLH : public ::System::Object
{
public:
	::System::Collections::Generic::List_1<::CHFBODEJFBE*>* HMHKLOMNFNH; // 0x10
	::EALMMIMFNBE* OBMHPAOPHFN; // 0x18
	::System::Boolean LIEJIGMGGOL; // 0x20
	::System::Byte _padding0[0x3];
	::System::Int32 APKIKLPPHEA; // 0x24
	::System::Int32 ICOHCOCJAEA; // 0x28

	::System::Void _ctor(::System::Int32 MGMDLMBEDJF)
	{
		return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + BCCHDNANFLH__CTOR_OFFSET))(this, MGMDLMBEDJF);
	}

	::System::Void ODPPBBAIGLF(::System::Boolean LIEJIGMGGOL)
	{
		return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + BCCHDNANFLH_ODPPBBAIGLF_OFFSET))(this, LIEJIGMGGOL);
	}
};
