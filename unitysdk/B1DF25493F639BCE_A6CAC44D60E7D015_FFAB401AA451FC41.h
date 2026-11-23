#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace System { template <typename T> class Func_1; }
namespace System::Threading { class ManualResetEvent; }

#define B1DF25493F639BCE_A6CAC44D60E7D015_FFAB401AA451FC41_B8ECF914D164E66A_OFFSET UNITYSDK_OFFSET(0x3D10370)
#define B1DF25493F639BCE_A6CAC44D60E7D015_FFAB401AA451FC41__CCTOR_OFFSET UNITYSDK_OFFSET(0x3D10420)
#define B1DF25493F639BCE_A6CAC44D60E7D015_FFAB401AA451FC41__CTOR_OFFSET UNITYSDK_OFFSET(0x1EB8060)

inline static constexpr unsigned int B1DF25493F639BCE_A6CAC44D60E7D015_FFAB401AA451FC41_TypeDefinitionIndex = 10768;

class B1DF25493F639BCE_A6CAC44D60E7D015_FFAB401AA451FC41 : public ::System::Object
{
public:
	static ::B1DF25493F639BCE_A6CAC44D60E7D015_FFAB401AA451FC41** StaticGet_FB0A7EB463FA294A()
	{
		return (::B1DF25493F639BCE_A6CAC44D60E7D015_FFAB401AA451FC41**)Il2CppClass::FromTypeDefinitionIndex(B1DF25493F639BCE_A6CAC44D60E7D015_FFAB401AA451FC41_TypeDefinitionIndex)->GetStaticField(0x0);
	}
	static ::System::Func_1<::System::Threading::ManualResetEvent*>** StaticGet_B952B72343D83B19()
	{
		return (::System::Func_1<::System::Threading::ManualResetEvent*>**)Il2CppClass::FromTypeDefinitionIndex(B1DF25493F639BCE_A6CAC44D60E7D015_FFAB401AA451FC41_TypeDefinitionIndex)->GetStaticField(0x8);
	}

	static ::System::Void _cctor()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + B1DF25493F639BCE_A6CAC44D60E7D015_FFAB401AA451FC41__CCTOR_OFFSET))();
	}

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + B1DF25493F639BCE_A6CAC44D60E7D015_FFAB401AA451FC41__CTOR_OFFSET))(this);
	}

	::System::Threading::ManualResetEvent* B8ECF914D164E66A()
	{
		return ((::System::Threading::ManualResetEvent*(*)(::PVOID))((::PBYTE)hIl2Cpp + B1DF25493F639BCE_A6CAC44D60E7D015_FFAB401AA451FC41_B8ECF914D164E66A_OFFSET))(this);
	}
};
