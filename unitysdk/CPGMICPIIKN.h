#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Foundation/NameValueSortedArray_1.h"
#include "unitysdk/HIIGFEMMDKE.h"
#include "unitysdk/System/ValueType.h"
#include "unitysdk/Foundation/Unreal/FName.h"

#define CPGMICPIIKN_JNCHHOMEEBH_OFFSET UNITYSDK_OFFSET(0x6DDF20)
#define CPGMICPIIKN_LAJEPBNFADP_OFFSET UNITYSDK_OFFSET(0x6DDDC0)
#define CPGMICPIIKN_NKDCADABLCL_OFFSET UNITYSDK_OFFSET(0x3D5A00)
#define CPGMICPIIKN_PFHCOMGKAGL_OFFSET UNITYSDK_OFFSET(0x6DDFB0)
#define CPGMICPIIKN__CCTOR_OFFSET UNITYSDK_OFFSET(0x123D7270)
#define CPGMICPIIKN__CTOR_OFFSET UNITYSDK_OFFSET(0x358470)

inline static constexpr unsigned int CPGMICPIIKN_TypeDefinitionIndex = 61457;

struct alignas(8) CPGMICPIIKN
{
	static ::CPGMICPIIKN* StaticGet_FGBLILBNEHG()
	{
		return (::CPGMICPIIKN*)Il2CppClass::FromTypeDefinitionIndex(CPGMICPIIKN_TypeDefinitionIndex)->GetStaticField(0x109B0);
	}
	::Foundation::NameValueSortedArray_1<::HIIGFEMMDKE> KJECEADCOAM; // 0x10

	::System::Void _ctor(::Foundation::NameValueSortedArray_1<::HIIGFEMMDKE> LNIOJLHBIHO)
	{
		return ((::System::Void(*)(::PVOID, ::Foundation::NameValueSortedArray_1<::HIIGFEMMDKE>))((::PBYTE)hIl2Cpp + CPGMICPIIKN__CTOR_OFFSET))(this, LNIOJLHBIHO);
	}

	static ::System::Void _cctor()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + CPGMICPIIKN__CCTOR_OFFSET))();
	}

	::System::Boolean NKDCADABLCL()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + CPGMICPIIKN_NKDCADABLCL_OFFSET))(this);
	}

	::System::Void LAJEPBNFADP(::Foundation::Unreal::FName HIAIKHDFCLN, ::System::Single EGEGIMGMJHN, ::System::Boolean LPNBBNPGCCI)
	{
		return ((::System::Void(*)(::PVOID, ::Foundation::Unreal::FName, ::System::Single, ::System::Boolean))((::PBYTE)hIl2Cpp + CPGMICPIIKN_LAJEPBNFADP_OFFSET))(this, HIAIKHDFCLN, EGEGIMGMJHN, LPNBBNPGCCI);
	}

	::System::Single JNCHHOMEEBH(::Foundation::Unreal::FName HIAIKHDFCLN, ::System::Single JFLDAALEMGB)
	{
		return ((::System::Single(*)(::PVOID, ::Foundation::Unreal::FName, ::System::Single))((::PBYTE)hIl2Cpp + CPGMICPIIKN_JNCHHOMEEBH_OFFSET))(this, HIAIKHDFCLN, JFLDAALEMGB);
	}

	::System::Void PFHCOMGKAGL(::System::Single EGEGIMGMJHN)
	{
		return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + CPGMICPIIKN_PFHCOMGKAGL_OFFSET))(this, EGEGIMGMJHN);
	}
};
