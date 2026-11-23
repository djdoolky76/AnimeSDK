#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace System { class String; }
namespace System::Security::Cryptography { class ICryptoTransform; }
namespace System::Security::Cryptography { class RijndaelManaged; }

#define F9874422644484EC_FFAEA3F3FB4BB4C5_AD00912D3D118AD3_OFFSET UNITYSDK_OFFSET(0x292A6C0)
#define F9874422644484EC_FFAEA3F3FB4BB4C5_BAE0B869DFF8CE50_OFFSET UNITYSDK_OFFSET(0x292AA50)
#define F9874422644484EC_FFAEA3F3FB4BB4C5_E0FF470C81E62DF5_OFFSET UNITYSDK_OFFSET(0x292A750)
#define F9874422644484EC_FFAEA3F3FB4BB4C5_F2B9B96CA5DE6E8A_OFFSET UNITYSDK_OFFSET(0x292A410)
#define F9874422644484EC_FFAEA3F3FB4BB4C5_FA069D9A304D0D82_OFFSET UNITYSDK_OFFSET(0x292AB10)
#define F9874422644484EC_FFAEA3F3FB4BB4C5_FDBA450BAABEF1BD_OFFSET UNITYSDK_OFFSET(0x292A160)
#define F9874422644484EC_FFAEA3F3FB4BB4C5__CTOR_OFFSET UNITYSDK_OFFSET(0x292ABD0)

inline static constexpr unsigned int F9874422644484EC_FFAEA3F3FB4BB4C5_TypeDefinitionIndex = 15348;

class F9874422644484EC_FFAEA3F3FB4BB4C5 : public ::System::Object
{
public:
	static ::System::Security::Cryptography::ICryptoTransform** StaticGet_A7782C293545230E()
	{
		return (::System::Security::Cryptography::ICryptoTransform**)Il2CppClass::FromTypeDefinitionIndex(F9874422644484EC_FFAEA3F3FB4BB4C5_TypeDefinitionIndex)->GetStaticField(0x0);
	}
	static ::System::Security::Cryptography::ICryptoTransform** StaticGet_E78F9837055924D7()
	{
		return (::System::Security::Cryptography::ICryptoTransform**)Il2CppClass::FromTypeDefinitionIndex(F9874422644484EC_FFAEA3F3FB4BB4C5_TypeDefinitionIndex)->GetStaticField(0x8);
	}
	::Il2CppArray<::System::Byte>* A5C299C395D3E1B2; // 0x10
	::Il2CppArray<::System::Byte>* F4CCE2220BD1CA3E; // 0x18
	::Il2CppArray<::System::Byte>* E1EE8495FFA7B4BF; // 0x20
	::System::Security::Cryptography::RijndaelManaged* ABC8CE7F611A647C; // 0x28

	::System::Void _ctor(::Il2CppArray<::System::Byte>* A5C299C395D3E1B2, ::Il2CppArray<::System::Byte>* A92EBBEA31851985)
	{
		return ((::System::Void(*)(::PVOID, ::Il2CppArray<::System::Byte>*, ::Il2CppArray<::System::Byte>*))((::PBYTE)hIl2Cpp + F9874422644484EC_FFAEA3F3FB4BB4C5__CTOR_OFFSET))(this, A5C299C395D3E1B2, A92EBBEA31851985);
	}

	::System::Void FA069D9A304D0D82(::Il2CppArray<::System::Byte>* E83E519C5C42896F)
	{
		return ((::System::Void(*)(::PVOID, ::Il2CppArray<::System::Byte>*))((::PBYTE)hIl2Cpp + F9874422644484EC_FFAEA3F3FB4BB4C5_FA069D9A304D0D82_OFFSET))(this, E83E519C5C42896F);
	}

	::System::Void BAE0B869DFF8CE50(::Il2CppArray<::System::Byte>* E83E519C5C42896F)
	{
		return ((::System::Void(*)(::PVOID, ::Il2CppArray<::System::Byte>*))((::PBYTE)hIl2Cpp + F9874422644484EC_FFAEA3F3FB4BB4C5_BAE0B869DFF8CE50_OFFSET))(this, E83E519C5C42896F);
	}

	static ::Il2CppArray<::System::Byte>* E0FF470C81E62DF5(::System::String* A5C299C395D3E1B2, ::Il2CppArray<::System::Byte>* E83E519C5C42896F)
	{
		return ((::Il2CppArray<::System::Byte>*(*)(::System::String*, ::Il2CppArray<::System::Byte>*))((::PBYTE)hIl2Cpp + F9874422644484EC_FFAEA3F3FB4BB4C5_E0FF470C81E62DF5_OFFSET))(A5C299C395D3E1B2, E83E519C5C42896F);
	}

	static ::Il2CppArray<::System::Byte>* AD00912D3D118AD3(::System::String* A5C299C395D3E1B2, ::Il2CppArray<::System::Byte>* E83E519C5C42896F)
	{
		return ((::Il2CppArray<::System::Byte>*(*)(::System::String*, ::Il2CppArray<::System::Byte>*))((::PBYTE)hIl2Cpp + F9874422644484EC_FFAEA3F3FB4BB4C5_AD00912D3D118AD3_OFFSET))(A5C299C395D3E1B2, E83E519C5C42896F);
	}

	::Il2CppArray<::System::Byte>* F2B9B96CA5DE6E8A(::Il2CppArray<::System::Byte>* E83E519C5C42896F)
	{
		return ((::Il2CppArray<::System::Byte>*(*)(::PVOID, ::Il2CppArray<::System::Byte>*))((::PBYTE)hIl2Cpp + F9874422644484EC_FFAEA3F3FB4BB4C5_F2B9B96CA5DE6E8A_OFFSET))(this, E83E519C5C42896F);
	}

	::Il2CppArray<::System::Byte>* FDBA450BAABEF1BD(::Il2CppArray<::System::Byte>* E83E519C5C42896F)
	{
		return ((::Il2CppArray<::System::Byte>*(*)(::PVOID, ::Il2CppArray<::System::Byte>*))((::PBYTE)hIl2Cpp + F9874422644484EC_FFAEA3F3FB4BB4C5_FDBA450BAABEF1BD_OFFSET))(this, E83E519C5C42896F);
	}
};
