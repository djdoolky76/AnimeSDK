#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/F8B13D551D06FE22.h"
#include "unitysdk/System/Runtime/InteropServices/FBADA98F49F82B7B.h"

namespace System { class Object; }
namespace System { template <typename T1, typename T2> class Func_2; }

#define A3BAD849B292F2F4_A3A0405169EABB6A_OFFSET UNITYSDK_OFFSET(0x3BB0C80)
#define A3BAD849B292F2F4_E6A4EDFB781D1DCC_OFFSET UNITYSDK_OFFSET(0x3BB0AE0)
#define A3BAD849B292F2F4_FBD08428AD1DE417_OFFSET UNITYSDK_OFFSET(0x3BB0BF0)
#define A3BAD849B292F2F4__CTOR_OFFSET UNITYSDK_OFFSET(0x16514A0)

inline static constexpr unsigned int A3BAD849B292F2F4_TypeDefinitionIndex = 11177;

class A3BAD849B292F2F4 : public ::F8B13D551D06FE22
{
public:
	::System::Func_2<::System::Object*, ::System::Boolean>* A9E47BE49B69E407; // 0x10
	::System::Runtime::InteropServices::FBADA98F49F82B7B BD5A983EF673994F; // 0x18

	::System::Void A3A0405169EABB6A(::System::Func_2<::System::Object*, ::System::Boolean>* E04D2BE64FCE9814, ::System::Object* A25DF1080F210FB4)
	{
		return ((::System::Void(*)(::PVOID, ::System::Func_2<::System::Object*, ::System::Boolean>*, ::System::Object*))((::PBYTE)hIl2Cpp + A3BAD849B292F2F4_A3A0405169EABB6A_OFFSET))(this, E04D2BE64FCE9814, A25DF1080F210FB4);
	}

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + A3BAD849B292F2F4__CTOR_OFFSET))(this);
	}

	static ::System::Void FBD08428AD1DE417(::System::Func_2<::System::Object*, ::System::Boolean>* E04D2BE64FCE9814, ::System::Object* A25DF1080F210FB4)
	{
		return ((::System::Void(*)(::System::Func_2<::System::Object*, ::System::Boolean>*, ::System::Object*))((::PBYTE)hIl2Cpp + A3BAD849B292F2F4_FBD08428AD1DE417_OFFSET))(E04D2BE64FCE9814, A25DF1080F210FB4);
	}

	::System::Void E6A4EDFB781D1DCC()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + A3BAD849B292F2F4_E6A4EDFB781D1DCC_OFFSET))(this);
	}
};
