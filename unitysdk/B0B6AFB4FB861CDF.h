#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/BD3A9F619D176EFE.h"

class AB642D1382756991;
namespace System { class Object; }
namespace System { class String; }

#define B0B6AFB4FB861CDF_B996A70283B60FAC_OFFSET UNITYSDK_OFFSET(0x1EF7100)
#define B0B6AFB4FB861CDF_BE45898387226EEC_OFFSET UNITYSDK_OFFSET(0x1678550)
#define B0B6AFB4FB861CDF_FC3208D7B8C7EE04_OFFSET UNITYSDK_OFFSET(0x1EF7030)
#define B0B6AFB4FB861CDF__CTOR_OFFSET UNITYSDK_OFFSET(0x1678540)

inline static constexpr unsigned int B0B6AFB4FB861CDF_TypeDefinitionIndex = 7446;

class B0B6AFB4FB861CDF : public ::BD3A9F619D176EFE
{
public:
	::AB642D1382756991* E63E0F25F251B753; // 0x18
	::System::String* AEDF565CE654EE81; // 0x20
	::System::Boolean EED0D39A51312B47; // 0x28
	::System::Byte _padding0[0x3];
	::System::Single B291A4E5CBC70781; // 0x2C

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + B0B6AFB4FB861CDF__CTOR_OFFSET))(this);
	}

	::System::Boolean BE45898387226EEC()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + B0B6AFB4FB861CDF_BE45898387226EEC_OFFSET))(this);
	}

	::System::Int32 B996A70283B60FAC()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + B0B6AFB4FB861CDF_B996A70283B60FAC_OFFSET))(this);
	}

	::System::Boolean FC3208D7B8C7EE04(::System::Object* A86A90C31A146E9C)
	{
		return ((::System::Boolean(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + B0B6AFB4FB861CDF_FC3208D7B8C7EE04_OFFSET))(this, A86A90C31A146E9C);
	}
};
