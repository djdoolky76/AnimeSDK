#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace System::Globalization { class B32A689F11D18703; }
namespace System::Globalization { class CultureInfo; }

#define E12260FF3A1847A8_BCB0A4DD6EA3B4C9_OFFSET UNITYSDK_OFFSET(0x3CA7F20)
#define E12260FF3A1847A8_FA5A6B9D882905E4_OFFSET UNITYSDK_OFFSET(0x3CA8150)
#define E12260FF3A1847A8__CTOR_1_OFFSET UNITYSDK_OFFSET(0x3CA80B0)
#define E12260FF3A1847A8__CTOR_OFFSET UNITYSDK_OFFSET(0x3CA8020)

inline static constexpr unsigned int E12260FF3A1847A8_TypeDefinitionIndex = 10457;

class E12260FF3A1847A8 : public ::System::Object
{
public:
	::System::Globalization::B32A689F11D18703* ACBFD21C2D710738; // 0x10

	::System::Int32 BCB0A4DD6EA3B4C9(::System::Object* B35BBBE7E39341A2, ::System::Object* AE40CAA6BBFEAD2C)
	{
		return ((::System::Int32(*)(::PVOID, ::System::Object*, ::System::Object*))((::PBYTE)hIl2Cpp + E12260FF3A1847A8_BCB0A4DD6EA3B4C9_OFFSET))(this, B35BBBE7E39341A2, AE40CAA6BBFEAD2C);
	}

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + E12260FF3A1847A8__CTOR_OFFSET))(this);
	}

	::System::Void _ctor_1(::System::Globalization::CultureInfo* B639ACA4E77C2506)
	{
		return ((::System::Void(*)(::PVOID, ::System::Globalization::CultureInfo*))((::PBYTE)hIl2Cpp + E12260FF3A1847A8__CTOR_1_OFFSET))(this, B639ACA4E77C2506);
	}

	static ::E12260FF3A1847A8* FA5A6B9D882905E4()
	{
		return ((::E12260FF3A1847A8*(*)())((::PBYTE)hIl2Cpp + E12260FF3A1847A8_FA5A6B9D882905E4_OFFSET))();
	}
};
