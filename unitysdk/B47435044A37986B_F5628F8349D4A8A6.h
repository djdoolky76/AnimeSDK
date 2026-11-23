#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace ABC::QualitySettings { class PCResolution; }
namespace System { template <typename T> class ADDF5F55A85EB950; }

#define B47435044A37986B_F5628F8349D4A8A6_AD9FAAEECD792259_OFFSET UNITYSDK_OFFSET(0x21FB700)
#define B47435044A37986B_F5628F8349D4A8A6__CCTOR_OFFSET UNITYSDK_OFFSET(0x21FBA10)
#define B47435044A37986B_F5628F8349D4A8A6__CTOR_OFFSET UNITYSDK_OFFSET(0x1666CA0)

inline static constexpr unsigned int B47435044A37986B_F5628F8349D4A8A6_TypeDefinitionIndex = 8995;

class B47435044A37986B_F5628F8349D4A8A6 : public ::System::Object
{
public:
	static ::B47435044A37986B_F5628F8349D4A8A6** StaticGet_AA32F971AB02398B()
	{
		return (::B47435044A37986B_F5628F8349D4A8A6**)Il2CppClass::FromTypeDefinitionIndex(B47435044A37986B_F5628F8349D4A8A6_TypeDefinitionIndex)->GetStaticField(0x0);
	}
	static ::System::ADDF5F55A85EB950<::ABC::QualitySettings::PCResolution*>** StaticGet_F4EB4229F3368E16()
	{
		return (::System::ADDF5F55A85EB950<::ABC::QualitySettings::PCResolution*>**)Il2CppClass::FromTypeDefinitionIndex(B47435044A37986B_F5628F8349D4A8A6_TypeDefinitionIndex)->GetStaticField(0x8);
	}

	static ::System::Void _cctor()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + B47435044A37986B_F5628F8349D4A8A6__CCTOR_OFFSET))();
	}

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + B47435044A37986B_F5628F8349D4A8A6__CTOR_OFFSET))(this);
	}

	::System::Int32 AD9FAAEECD792259(::ABC::QualitySettings::PCResolution* B35BBBE7E39341A2, ::ABC::QualitySettings::PCResolution* AE40CAA6BBFEAD2C)
	{
		return ((::System::Int32(*)(::PVOID, ::ABC::QualitySettings::PCResolution*, ::ABC::QualitySettings::PCResolution*))((::PBYTE)hIl2Cpp + B47435044A37986B_F5628F8349D4A8A6_AD9FAAEECD792259_OFFSET))(this, B35BBBE7E39341A2, AE40CAA6BBFEAD2C);
	}
};
