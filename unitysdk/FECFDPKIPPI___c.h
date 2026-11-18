#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class BKGKJNHLCKC;
class EMONNCFEDAO;
class HGAJKHIMKJP;
class KCPJCJAGGGA;
class KOIDMLPJGML;
namespace System { template <typename T1, typename T2> class Func_2; }

#define FECFDPKIPPI___C_JKEOHJPOHLE_OFFSET UNITYSDK_OFFSET(0x140EC690)
#define FECFDPKIPPI___C_MPJNJPNEPHB_OFFSET UNITYSDK_OFFSET(0x140EC6B0)
#define FECFDPKIPPI___C_OKPMDKBJLNG_OFFSET UNITYSDK_OFFSET(0x140EC730)
#define FECFDPKIPPI___C__CCTOR_OFFSET UNITYSDK_OFFSET(0x140EC640)
#define FECFDPKIPPI___C__CTOR_OFFSET UNITYSDK_OFFSET(0x140EC680)

inline static constexpr unsigned int FECFDPKIPPI___c_TypeDefinitionIndex = 47355;

class FECFDPKIPPI___c : public ::System::Object
{
public:
	static ::System::Func_2<::EMONNCFEDAO*, ::HGAJKHIMKJP*>** StaticGet___9__12_1()
	{
		return (::System::Func_2<::EMONNCFEDAO*, ::HGAJKHIMKJP*>**)Il2CppClass::FromTypeDefinitionIndex(FECFDPKIPPI___c_TypeDefinitionIndex)->GetStaticField(0x4E3F0);
	}
	static ::System::Func_2<::BKGKJNHLCKC*, ::KCPJCJAGGGA*>** StaticGet___9__12_2()
	{
		return (::System::Func_2<::BKGKJNHLCKC*, ::KCPJCJAGGGA*>**)Il2CppClass::FromTypeDefinitionIndex(FECFDPKIPPI___c_TypeDefinitionIndex)->GetStaticField(0x4E3F8);
	}
	static ::System::Object** StaticGet___9()
	{
		return (::System::Object**)Il2CppClass::FromTypeDefinitionIndex(FECFDPKIPPI___c_TypeDefinitionIndex)->GetStaticField(0x4E400);
	}
	static ::System::Func_2<::KOIDMLPJGML*, ::HGAJKHIMKJP*>** StaticGet___9__12_0()
	{
		return (::System::Func_2<::KOIDMLPJGML*, ::HGAJKHIMKJP*>**)Il2CppClass::FromTypeDefinitionIndex(FECFDPKIPPI___c_TypeDefinitionIndex)->GetStaticField(0x4E408);
	}

	static ::System::Void _cctor()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + FECFDPKIPPI___C__CCTOR_OFFSET))();
	}

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + FECFDPKIPPI___C__CTOR_OFFSET))(this);
	}

	::HGAJKHIMKJP* JKEOHJPOHLE(::EMONNCFEDAO* PJEANDGPLGJ)
	{
		return ((::HGAJKHIMKJP*(*)(::PVOID, ::EMONNCFEDAO*))((::PBYTE)hIl2Cpp + FECFDPKIPPI___C_JKEOHJPOHLE_OFFSET))(this, PJEANDGPLGJ);
	}

	::KCPJCJAGGGA* MPJNJPNEPHB(::BKGKJNHLCKC* LOKDPDJBAOF)
	{
		return ((::KCPJCJAGGGA*(*)(::PVOID, ::BKGKJNHLCKC*))((::PBYTE)hIl2Cpp + FECFDPKIPPI___C_MPJNJPNEPHB_OFFSET))(this, LOKDPDJBAOF);
	}

	::HGAJKHIMKJP* OKPMDKBJLNG(::KOIDMLPJGML* DCBMIKDDJBD)
	{
		return ((::HGAJKHIMKJP*(*)(::PVOID, ::KOIDMLPJGML*))((::PBYTE)hIl2Cpp + FECFDPKIPPI___C_OKPMDKBJLNG_OFFSET))(this, DCBMIKDDJBD);
	}
};
