#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/B6564CAC678AC465.h"

class E519989062D53DE5;
namespace System::Globalization { class B32A689F11D18703; }
namespace System::Globalization { class CultureInfo; }

#define E80CB6B42D94C1FB_BCB0A4DD6EA3B4C9_OFFSET UNITYSDK_OFFSET(0x3BE0FB0)
#define E80CB6B42D94C1FB_F2CDE1FA2D944107_OFFSET UNITYSDK_OFFSET(0x3BE1160)
#define E80CB6B42D94C1FB__CCTOR_OFFSET UNITYSDK_OFFSET(0x3BE1200)
#define E80CB6B42D94C1FB__CTOR_1_OFFSET UNITYSDK_OFFSET(0x3BE1560)
#define E80CB6B42D94C1FB__CTOR_OFFSET UNITYSDK_OFFSET(0x3BE13D0)

inline static constexpr unsigned int E80CB6B42D94C1FB_TypeDefinitionIndex = 11311;

class E80CB6B42D94C1FB : public ::System::Object
{
public:
	static ::E80CB6B42D94C1FB** StaticGet_AE04A22CC80CDB9D()
	{
		return (::E80CB6B42D94C1FB**)Il2CppClass::FromTypeDefinitionIndex(E80CB6B42D94C1FB_TypeDefinitionIndex)->GetStaticField(0x0);
	}
	static ::E80CB6B42D94C1FB** StaticGet_A32034DEAE767357()
	{
		return (::E80CB6B42D94C1FB**)Il2CppClass::FromTypeDefinitionIndex(E80CB6B42D94C1FB_TypeDefinitionIndex)->GetStaticField(0x8);
	}
	::System::Globalization::B32A689F11D18703* ACBFD21C2D710738; // 0x10

	::System::Int32 BCB0A4DD6EA3B4C9(::System::Object* B35BBBE7E39341A2, ::System::Object* AE40CAA6BBFEAD2C)
	{
		return ((::System::Int32(*)(::PVOID, ::System::Object*, ::System::Object*))((::PBYTE)hIl2Cpp + E80CB6B42D94C1FB_BCB0A4DD6EA3B4C9_OFFSET))(this, B35BBBE7E39341A2, AE40CAA6BBFEAD2C);
	}

	::System::Void _ctor(::E519989062D53DE5* B29880F033C1F232, ::B6564CAC678AC465 E6CE7391633EEC68)
	{
		return ((::System::Void(*)(::PVOID, ::E519989062D53DE5*, ::B6564CAC678AC465))((::PBYTE)hIl2Cpp + E80CB6B42D94C1FB__CTOR_OFFSET))(this, B29880F033C1F232, E6CE7391633EEC68);
	}

	::System::Void F2CDE1FA2D944107(::E519989062D53DE5* B29880F033C1F232, ::B6564CAC678AC465 E6CE7391633EEC68)
	{
		return ((::System::Void(*)(::PVOID, ::E519989062D53DE5*, ::B6564CAC678AC465))((::PBYTE)hIl2Cpp + E80CB6B42D94C1FB_F2CDE1FA2D944107_OFFSET))(this, B29880F033C1F232, E6CE7391633EEC68);
	}

	static ::System::Void _cctor()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + E80CB6B42D94C1FB__CCTOR_OFFSET))();
	}

	::System::Void _ctor_1(::System::Globalization::CultureInfo* B639ACA4E77C2506)
	{
		return ((::System::Void(*)(::PVOID, ::System::Globalization::CultureInfo*))((::PBYTE)hIl2Cpp + E80CB6B42D94C1FB__CTOR_1_OFFSET))(this, B639ACA4E77C2506);
	}
};
