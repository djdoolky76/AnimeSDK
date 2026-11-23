#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class A873D553B8040214;
class ED805EFEEBD50050;

#define AC02F62D05290C05_B4927D1B95CE3261_OFFSET UNITYSDK_OFFSET(0x389B120)
#define AC02F62D05290C05_B59079FDA370300B_OFFSET UNITYSDK_OFFSET(0x389B1C0)
#define AC02F62D05290C05_B69861E837995584_OFFSET UNITYSDK_OFFSET(0x389B080)
#define AC02F62D05290C05__CCTOR_OFFSET UNITYSDK_OFFSET(0x389B6F0)
#define AC02F62D05290C05__CTOR_OFFSET UNITYSDK_OFFSET(0x1666CA0)

inline static constexpr unsigned int AC02F62D05290C05_TypeDefinitionIndex = 20939;

class AC02F62D05290C05 : public ::System::Object
{
public:
	static ::Il2CppArray<::System::Int32>** StaticGet_F0A69BCF5522D2F6()
	{
		return (::Il2CppArray<::System::Int32>**)Il2CppClass::FromTypeDefinitionIndex(AC02F62D05290C05_TypeDefinitionIndex)->GetStaticField(0x0);
	}
	static ::Il2CppArray<::System::Int32>** StaticGet_AEF9FA9BDA4ADABC()
	{
		return (::Il2CppArray<::System::Int32>**)Il2CppClass::FromTypeDefinitionIndex(AC02F62D05290C05_TypeDefinitionIndex)->GetStaticField(0x8);
	}
	static ::Il2CppArray<::System::Int32>** StaticGet_FBFAB9190957CD0E()
	{
		return (::Il2CppArray<::System::Int32>**)Il2CppClass::FromTypeDefinitionIndex(AC02F62D05290C05_TypeDefinitionIndex)->GetStaticField(0x10);
	}
	::Il2CppArray<::System::Byte>* BA4BB5791C55A356; // 0x10
	::Il2CppArray<::System::Byte>* B9B5358AD25096BA; // 0x18
	::ED805EFEEBD50050* F9189B0E04F87AF3; // 0x20
	::System::Int32 A84D57260767D5BD; // 0x28
	::System::Int32 E04B7997B8B13B1F; // 0x2C
	::System::Int32 E74EE59DBDA2A687; // 0x30
	::System::Int32 A5DB02183734FA96; // 0x34
	::System::Int32 BFCBB1E4568D69A6; // 0x38
	::System::Int32 B0134044369E8BC7; // 0x3C
	::System::Byte FE0544593D9D07A3; // 0x40
	::System::Byte _padding0[0x3];
	::System::Int32 B03018C24D85EDA4; // 0x44

	::ED805EFEEBD50050* B69861E837995584()
	{
		return ((::ED805EFEEBD50050*(*)(::PVOID))((::PBYTE)hIl2Cpp + AC02F62D05290C05_B69861E837995584_OFFSET))(this);
	}

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + AC02F62D05290C05__CTOR_OFFSET))(this);
	}

	::ED805EFEEBD50050* B4927D1B95CE3261()
	{
		return ((::ED805EFEEBD50050*(*)(::PVOID))((::PBYTE)hIl2Cpp + AC02F62D05290C05_B4927D1B95CE3261_OFFSET))(this);
	}

	static ::System::Void _cctor()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + AC02F62D05290C05__CCTOR_OFFSET))();
	}

	::System::Boolean B59079FDA370300B(::A873D553B8040214* AF4717A1A80FD60F)
	{
		return ((::System::Boolean(*)(::PVOID, ::A873D553B8040214*))((::PBYTE)hIl2Cpp + AC02F62D05290C05_B59079FDA370300B_OFFSET))(this, AF4717A1A80FD60F);
	}
};
