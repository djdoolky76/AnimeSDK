#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

#define HIOPCDHINKA_AGGJBNIAEFF_OFFSET UNITYSDK_OFFSET(0x1494EF10)
#define HIOPCDHINKA_BBPCBEEHALC_OFFSET UNITYSDK_OFFSET(0x1494EE00)
#define HIOPCDHINKA_CNHBDOMKKDE_OFFSET UNITYSDK_OFFSET(0x1494EC60)
#define HIOPCDHINKA_INGKPAEMFJI_OFFSET UNITYSDK_OFFSET(0x1494EB60)
#define HIOPCDHINKA_MBKDOMFJFIG_OFFSET UNITYSDK_OFFSET(0x1494ED20)
#define HIOPCDHINKA_PHOADBJGFBE_OFFSET UNITYSDK_OFFSET(0x1494ECD0)
#define HIOPCDHINKA__CTOR_OFFSET UNITYSDK_OFFSET(0x1494EB50)

inline static constexpr unsigned int HIOPCDHINKA_TypeDefinitionIndex = 77842;

class HIOPCDHINKA : public ::System::Object
{
public:
	::System::Int32 CHOLPJCDLAI; // 0x10
	::System::Single IIFMJFJOOCK; // 0x14
	::System::Int32 AEDOIJMFPHM; // 0x18

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + HIOPCDHINKA__CTOR_OFFSET))(this);
	}

	static ::System::Boolean INGKPAEMFJI(::Il2CppArray<::HIOPCDHINKA*>* FMHFGBKIDKL, ::System::Int32 EEGBEFGJJBM, ::System::Int32 INKFNMNAELK, ::System::Single& IIFMJFJOOCK, ::System::Int32& ALDKCGLPNNM)
	{
		return ((::System::Boolean(*)(::Il2CppArray<::HIOPCDHINKA*>*, ::System::Int32, ::System::Int32, ::System::Single&, ::System::Int32&))((::PBYTE)hIl2Cpp + HIOPCDHINKA_INGKPAEMFJI_OFFSET))(FMHFGBKIDKL, EEGBEFGJJBM, INKFNMNAELK, IIFMJFJOOCK, ALDKCGLPNNM);
	}

	::System::Void CNHBDOMKKDE(::System::Int32 CHOLPJCDLAI, ::System::Single IIFMJFJOOCK)
	{
		return ((::System::Void(*)(::PVOID, ::System::Int32, ::System::Single))((::PBYTE)hIl2Cpp + HIOPCDHINKA_CNHBDOMKKDE_OFFSET))(this, CHOLPJCDLAI, IIFMJFJOOCK);
	}

	::System::Void PHOADBJGFBE()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + HIOPCDHINKA_PHOADBJGFBE_OFFSET))(this);
	}

	static ::System::Void MBKDOMFJFIG(::HIOPCDHINKA* IPMMCGDMODG)
	{
		return ((::System::Void(*)(::HIOPCDHINKA*))((::PBYTE)hIl2Cpp + HIOPCDHINKA_MBKDOMFJFIG_OFFSET))(IPMMCGDMODG);
	}

	static ::HIOPCDHINKA* BBPCBEEHALC(::System::Int32 CHOLPJCDLAI, ::System::Single IIFMJFJOOCK)
	{
		return ((::HIOPCDHINKA*(*)(::System::Int32, ::System::Single))((::PBYTE)hIl2Cpp + HIOPCDHINKA_BBPCBEEHALC_OFFSET))(CHOLPJCDLAI, IIFMJFJOOCK);
	}

	static ::System::Void AGGJBNIAEFF(::Il2CppArray<::HIOPCDHINKA*>* FMHFGBKIDKL, ::System::Int32 EEGBEFGJJBM, ::System::Int32 ALDKCGLPNNM, ::System::Int32 INKFNMNAELK, ::System::Single IIFMJFJOOCK)
	{
		return ((::System::Void(*)(::Il2CppArray<::HIOPCDHINKA*>*, ::System::Int32, ::System::Int32, ::System::Int32, ::System::Single))((::PBYTE)hIl2Cpp + HIOPCDHINKA_AGGJBNIAEFF_OFFSET))(FMHFGBKIDKL, EEGBEFGJJBM, ALDKCGLPNNM, INKFNMNAELK, IIFMJFJOOCK);
	}
};
