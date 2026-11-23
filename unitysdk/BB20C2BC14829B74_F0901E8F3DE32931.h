#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace System { class String; }
namespace System { class Type; }
namespace System::Reflection { class F60CD5AA5C2080DF; }

#define BB20C2BC14829B74_F0901E8F3DE32931_A6D15DAC91D27E9A_OFFSET UNITYSDK_OFFSET(0x3C54BD0)
#define BB20C2BC14829B74_F0901E8F3DE32931__CTOR_OFFSET UNITYSDK_OFFSET(0x1778980)

inline static constexpr unsigned int BB20C2BC14829B74_F0901E8F3DE32931_TypeDefinitionIndex = 11578;

class BB20C2BC14829B74_F0901E8F3DE32931 : public ::System::Object
{
public:
	::System::Reflection::F60CD5AA5C2080DF* B6C0334E839205A9; // 0x10

	::System::Void _ctor(::System::Reflection::F60CD5AA5C2080DF* A368BA4A57756B59)
	{
		return ((::System::Void(*)(::PVOID, ::System::Reflection::F60CD5AA5C2080DF*))((::PBYTE)hIl2Cpp + BB20C2BC14829B74_F0901E8F3DE32931__CTOR_OFFSET))(this, A368BA4A57756B59);
	}

	::System::Type* A6D15DAC91D27E9A(::System::Reflection::F60CD5AA5C2080DF* B476B7AD17F6C7E5, ::System::String* EE66F32BE0024C35, ::System::Boolean ACBE55281F187CE7)
	{
		return ((::System::Type*(*)(::PVOID, ::System::Reflection::F60CD5AA5C2080DF*, ::System::String*, ::System::Boolean))((::PBYTE)hIl2Cpp + BB20C2BC14829B74_F0901E8F3DE32931_A6D15DAC91D27E9A_OFFSET))(this, B476B7AD17F6C7E5, EE66F32BE0024C35, ACBE55281F187CE7);
	}
};
