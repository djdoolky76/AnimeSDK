#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

#define ELJPOFONBJH_ANPBCLAFCJB_OFFSET UNITYSDK_OFFSET(0xFE1FC30)
#define ELJPOFONBJH_EDNJKODHPEI_OFFSET UNITYSDK_OFFSET(0xFE1FF20)
#define ELJPOFONBJH_FCICGEALCFA_OFFSET UNITYSDK_OFFSET(0xFE1FDA0)
#define ELJPOFONBJH_GJPHMAIJFMH_OFFSET UNITYSDK_OFFSET(0xFE1FFF0)
#define ELJPOFONBJH_HALNDJKHHIA_OFFSET UNITYSDK_OFFSET(0xFE1FE50)
#define ELJPOFONBJH_LDIENHMALPL_OFFSET UNITYSDK_OFFSET(0xFE20170)
#define ELJPOFONBJH_MKLPCCCIOMI_OFFSET UNITYSDK_OFFSET(0xFE1FCD0)
#define ELJPOFONBJH_PHOADBJGFBE_OFFSET UNITYSDK_OFFSET(0xFE20120)
#define ELJPOFONBJH__CTOR_OFFSET UNITYSDK_OFFSET(0xFE1FBD0)

inline static constexpr unsigned int ELJPOFONBJH_TypeDefinitionIndex = 60930;

class ELJPOFONBJH : public ::System::Object
{
public:
	::Il2CppArray<::System::Single>* IPBHJCIJEGO; // 0x10
	::System::Int32 AOJAMJCLNAN; // 0x18
	::System::Int32 OGFPEPEEHLP; // 0x1C

	::System::Void _ctor(::System::Int32 AHFJCBLHFIJ)
	{
		return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + ELJPOFONBJH__CTOR_OFFSET))(this, AHFJCBLHFIJ);
	}

	::System::Void ANPBCLAFCJB(::System::Single HFMHOELKCAJ)
	{
		return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + ELJPOFONBJH_ANPBCLAFCJB_OFFSET))(this, HFMHOELKCAJ);
	}

	::System::Single MKLPCCCIOMI(::System::Int32 KBNHAJHPKPO)
	{
		return ((::System::Single(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + ELJPOFONBJH_MKLPCCCIOMI_OFFSET))(this, KBNHAJHPKPO);
	}

	::System::Single FCICGEALCFA()
	{
		return ((::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + ELJPOFONBJH_FCICGEALCFA_OFFSET))(this);
	}

	::System::Single HALNDJKHHIA(::System::Int32 KBNHAJHPKPO)
	{
		return ((::System::Single(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + ELJPOFONBJH_HALNDJKHHIA_OFFSET))(this, KBNHAJHPKPO);
	}

	::System::Single EDNJKODHPEI(::System::Int32 KBNHAJHPKPO)
	{
		return ((::System::Single(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + ELJPOFONBJH_EDNJKODHPEI_OFFSET))(this, KBNHAJHPKPO);
	}

	::System::Single GJPHMAIJFMH()
	{
		return ((::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + ELJPOFONBJH_GJPHMAIJFMH_OFFSET))(this);
	}

	::System::Void PHOADBJGFBE()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + ELJPOFONBJH_PHOADBJGFBE_OFFSET))(this);
	}

	::System::Single LDIENHMALPL()
	{
		return ((::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + ELJPOFONBJH_LDIENHMALPL_OFFSET))(this);
	}
};
