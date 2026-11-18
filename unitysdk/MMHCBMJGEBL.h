#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Foundation/Unreal/FTransform.h"
#include "unitysdk/MoleMole/EntityHandle.h"
#include "unitysdk/System/ValueType.h"

#define MMHCBMJGEBL_JDAPDDEOCEA_OFFSET UNITYSDK_OFFSET(0x7FED20)
#define MMHCBMJGEBL__CCTOR_OFFSET UNITYSDK_OFFSET(0x1A69CB30)
#define MMHCBMJGEBL__CTOR_OFFSET UNITYSDK_OFFSET(0x7FEDA0)

inline static constexpr unsigned int MMHCBMJGEBL_TypeDefinitionIndex = 74289;

struct alignas(4) MMHCBMJGEBL
{
	static ::System::Int32* StaticGet_CIDABOMBPID()
	{
		return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(MMHCBMJGEBL_TypeDefinitionIndex)->GetStaticField(0xFF30);
	}
	::MoleMole::EntityHandle FKNBFFACJPM; // 0x10
	::Foundation::Unreal::FTransform AMOPFKDKCEL; // 0x20
	::System::Single LLFJJJEMNAB; // 0x40
	::System::Int32 KNHAHDPPCLP; // 0x44

	::System::Void _ctor(::MoleMole::EntityHandle& HPADNAEINPK, ::Foundation::Unreal::FTransform& DEFOFDFMNHC, ::System::Single& GMAOAGHMGBI, ::System::Int32 GKCMNOGMFHG)
	{
		return ((::System::Void(*)(::PVOID, ::MoleMole::EntityHandle&, ::Foundation::Unreal::FTransform&, ::System::Single&, ::System::Int32))((::PBYTE)hIl2Cpp + MMHCBMJGEBL__CTOR_OFFSET))(this, HPADNAEINPK, DEFOFDFMNHC, GMAOAGHMGBI, GKCMNOGMFHG);
	}

	static ::System::Void _cctor()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + MMHCBMJGEBL__CCTOR_OFFSET))();
	}

	::System::Boolean JDAPDDEOCEA()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + MMHCBMJGEBL_JDAPDDEOCEA_OFFSET))(this);
	}
};
