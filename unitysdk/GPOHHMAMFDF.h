#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/NHNONGPAFDK.h"

class HKBGJEBCGHN;
namespace System { class String; }

#define GPOHHMAMFDF_AOKHGIDENMD_OFFSET UNITYSDK_OFFSET(0x15B371C0)
#define GPOHHMAMFDF_GBBBOFACHHO_OFFSET UNITYSDK_OFFSET(0x15B37210)
#define GPOHHMAMFDF_HEHJDFILIIA_OFFSET UNITYSDK_OFFSET(0x15B369B0)
#define GPOHHMAMFDF_ONFGKNBOLFP_OFFSET UNITYSDK_OFFSET(0x15B36AE0)
#define GPOHHMAMFDF__CCTOR_OFFSET UNITYSDK_OFFSET(0x15B37180)
#define GPOHHMAMFDF__CTOR_OFFSET UNITYSDK_OFFSET(0x15B369A0)

inline static constexpr unsigned int GPOHHMAMFDF_TypeDefinitionIndex = 74661;

class GPOHHMAMFDF : public ::System::Object
{
public:
	static ::GPOHHMAMFDF** StaticGet_NJLLMPCDOEB()
	{
		return (::GPOHHMAMFDF**)Il2CppClass::FromTypeDefinitionIndex(GPOHHMAMFDF_TypeDefinitionIndex)->GetStaticField(0x47FD0);
	}
	// static const ::System::Int32 AINJIGMEKAN = 0x1; // 0x0
	// static const ::System::Int32 LFOGCIFLLGP = 0x2; // 0x0
	// static const ::System::Int32 NBDLLLMCNAF = 0x1; // 0x0

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + GPOHHMAMFDF__CTOR_OFFSET))(this);
	}

	static ::System::Void _cctor()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + GPOHHMAMFDF__CCTOR_OFFSET))();
	}

	::System::Boolean HEHJDFILIIA(::System::Int32 GJOJKODONDC, ::NHNONGPAFDK& PIMIGNMPNFF)
	{
		return ((::System::Boolean(*)(::PVOID, ::System::Int32, ::NHNONGPAFDK&))((::PBYTE)hIl2Cpp + GPOHHMAMFDF_HEHJDFILIIA_OFFSET))(this, GJOJKODONDC, PIMIGNMPNFF);
	}

	static ::System::String* AOKHGIDENMD(::HKBGJEBCGHN* DEKJDEPKKLH)
	{
		return ((::System::String*(*)(::HKBGJEBCGHN*))((::PBYTE)hIl2Cpp + GPOHHMAMFDF_AOKHGIDENMD_OFFSET))(DEKJDEPKKLH);
	}

	static ::NHNONGPAFDK GBBBOFACHHO(::System::Int32 GJOJKODONDC, ::System::Int32 JALKKPOGEHK, ::System::String* NAPFALLANDL)
	{
		return ((::NHNONGPAFDK(*)(::System::Int32, ::System::Int32, ::System::String*))((::PBYTE)hIl2Cpp + GPOHHMAMFDF_GBBBOFACHHO_OFFSET))(GJOJKODONDC, JALKKPOGEHK, NAPFALLANDL);
	}

	static ::NHNONGPAFDK ONFGKNBOLFP(::System::Int32 GJOJKODONDC, ::System::Int32 JALKKPOGEHK)
	{
		return ((::NHNONGPAFDK(*)(::System::Int32, ::System::Int32))((::PBYTE)hIl2Cpp + GPOHHMAMFDF_ONFGKNBOLFP_OFFSET))(GJOJKODONDC, JALKKPOGEHK);
	}
};
