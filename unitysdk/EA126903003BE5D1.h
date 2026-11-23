#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/BF16296F3E0D1B49/B82A4AB16C33E978.h"
#include "unitysdk/System/ValueType.h"

namespace System { class Object; }
namespace System { class String; }

#define EA126903003BE5D1__CCTOR_OFFSET UNITYSDK_OFFSET(0x22CEB00)
#define EA126903003BE5D1__CTOR_1_OFFSET UNITYSDK_OFFSET(0x22CEDC0)
#define EA126903003BE5D1__CTOR_2_OFFSET UNITYSDK_OFFSET(0x22CED10)
#define EA126903003BE5D1__CTOR_3_OFFSET UNITYSDK_OFFSET(0x22CEF20)
#define EA126903003BE5D1__CTOR_4_OFFSET UNITYSDK_OFFSET(0x22CEC30)
#define EA126903003BE5D1__CTOR_5_OFFSET UNITYSDK_OFFSET(0x22CEE80)
#define EA126903003BE5D1__CTOR_OFFSET UNITYSDK_OFFSET(0x22CEC90)

inline static constexpr unsigned int EA126903003BE5D1_TypeDefinitionIndex = 7232;

struct alignas(8) EA126903003BE5D1
{
	static ::EA126903003BE5D1* StaticGet_BDC1E8E781853683()
	{
		return (::EA126903003BE5D1*)Il2CppClass::FromTypeDefinitionIndex(EA126903003BE5D1_TypeDefinitionIndex)->GetStaticField(0x0);
	}
	::System::Int32 AB8BE3440CEB1F11; // 0x10
	::System::Byte _padding0[0x4];
	::System::String* EFDBEA101A71D165; // 0x18
	::System::Int64 B4898C646001AEDC; // 0x20
	::System::Object* FC4CD65ADCB6ACF2; // 0x28
	::System::String* FECC46DBC8CCC4D6; // 0x30

	::System::Void _ctor(::BF16296F3E0D1B49::B82A4AB16C33E978 B714679C324FF96E, ::System::String* B6018BB9F7294B44, ::System::String* FB90CD975FB7CEDF)
	{
		return ((::System::Void(*)(::PVOID, ::BF16296F3E0D1B49::B82A4AB16C33E978, ::System::String*, ::System::String*))((::PBYTE)hIl2Cpp + EA126903003BE5D1__CTOR_OFFSET))(this, B714679C324FF96E, B6018BB9F7294B44, FB90CD975FB7CEDF);
	}

	::System::Void _ctor_1(::System::Int32 B714679C324FF96E, ::System::String* B6018BB9F7294B44, ::System::String* FB90CD975FB7CEDF)
	{
		return ((::System::Void(*)(::PVOID, ::System::Int32, ::System::String*, ::System::String*))((::PBYTE)hIl2Cpp + EA126903003BE5D1__CTOR_1_OFFSET))(this, B714679C324FF96E, B6018BB9F7294B44, FB90CD975FB7CEDF);
	}

	::System::Void _ctor_2(::System::Int32 B714679C324FF96E, ::System::String* B6018BB9F7294B44)
	{
		return ((::System::Void(*)(::PVOID, ::System::Int32, ::System::String*))((::PBYTE)hIl2Cpp + EA126903003BE5D1__CTOR_2_OFFSET))(this, B714679C324FF96E, B6018BB9F7294B44);
	}

	::System::Void _ctor_3(::BF16296F3E0D1B49::B82A4AB16C33E978 B714679C324FF96E, ::System::String* B6018BB9F7294B44)
	{
		return ((::System::Void(*)(::PVOID, ::BF16296F3E0D1B49::B82A4AB16C33E978, ::System::String*))((::PBYTE)hIl2Cpp + EA126903003BE5D1__CTOR_3_OFFSET))(this, B714679C324FF96E, B6018BB9F7294B44);
	}

	::System::Void _ctor_4(::BF16296F3E0D1B49::B82A4AB16C33E978 B714679C324FF96E)
	{
		return ((::System::Void(*)(::PVOID, ::BF16296F3E0D1B49::B82A4AB16C33E978))((::PBYTE)hIl2Cpp + EA126903003BE5D1__CTOR_4_OFFSET))(this, B714679C324FF96E);
	}

	static ::System::Void _cctor()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + EA126903003BE5D1__CCTOR_OFFSET))();
	}

	::System::Void _ctor_5(::System::Int32 B714679C324FF96E)
	{
		return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + EA126903003BE5D1__CTOR_5_OFFSET))(this, B714679C324FF96E);
	}
};
