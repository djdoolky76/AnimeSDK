#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/B2740D01B8346DE7.h"

namespace System { class String; }
template <typename T1, typename T2> class F5986F987EB32863;

#define EC9E6E863CF192E0_E57DF4E4D30E0163_OFFSET UNITYSDK_OFFSET(0x443B660)
#define EC9E6E863CF192E0_ECD4718DE2515BA9_1_OFFSET UNITYSDK_OFFSET(0x443B460)
#define EC9E6E863CF192E0_ECD4718DE2515BA9_OFFSET UNITYSDK_OFFSET(0x443B360)
#define EC9E6E863CF192E0__CCTOR_OFFSET UNITYSDK_OFFSET(0x443A150)
#define EC9E6E863CF192E0__CTOR_OFFSET UNITYSDK_OFFSET(0x2D66A00)

inline static constexpr unsigned int EC9E6E863CF192E0_TypeDefinitionIndex = 19039;

class EC9E6E863CF192E0 : public ::B2740D01B8346DE7
{
public:
	static ::F5986F987EB32863<::System::Int32, ::EC9E6E863CF192E0*>** StaticGet_FAEA45099009AF22()
	{
		return (::F5986F987EB32863<::System::Int32, ::EC9E6E863CF192E0*>**)Il2CppClass::FromTypeDefinitionIndex(EC9E6E863CF192E0_TypeDefinitionIndex)->GetStaticField(0x0);
	}
	static ::F5986F987EB32863<::System::String*, ::EC9E6E863CF192E0*>** StaticGet_A32E4CCFA88BE70C()
	{
		return (::F5986F987EB32863<::System::String*, ::EC9E6E863CF192E0*>**)Il2CppClass::FromTypeDefinitionIndex(EC9E6E863CF192E0_TypeDefinitionIndex)->GetStaticField(0x8);
	}
	::System::String* A95A09BF6689DDA6; // 0x18

	static ::System::Void _cctor()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + EC9E6E863CF192E0__CCTOR_OFFSET))();
	}

	static ::System::Void ECD4718DE2515BA9(::System::Int32 E937D4885DAA1AE8, ::System::String* A95A09BF6689DDA6)
	{
		return ((::System::Void(*)(::System::Int32, ::System::String*))((::PBYTE)hIl2Cpp + EC9E6E863CF192E0_ECD4718DE2515BA9_OFFSET))(E937D4885DAA1AE8, A95A09BF6689DDA6);
	}

	static ::EC9E6E863CF192E0* E57DF4E4D30E0163(::System::String* F79B4D487F303AB2)
	{
		return ((::EC9E6E863CF192E0*(*)(::System::String*))((::PBYTE)hIl2Cpp + EC9E6E863CF192E0_E57DF4E4D30E0163_OFFSET))(F79B4D487F303AB2);
	}

	static ::System::Void ECD4718DE2515BA9_1(::System::Int32 E937D4885DAA1AE8, ::Il2CppArray<::System::String*>* E74FF2EA7193B305)
	{
		return ((::System::Void(*)(::System::Int32, ::Il2CppArray<::System::String*>*))((::PBYTE)hIl2Cpp + EC9E6E863CF192E0_ECD4718DE2515BA9_1_OFFSET))(E937D4885DAA1AE8, E74FF2EA7193B305);
	}

	::System::Void _ctor(::System::Int32 E937D4885DAA1AE8, ::System::String* A95A09BF6689DDA6)
	{
		return ((::System::Void(*)(::PVOID, ::System::Int32, ::System::String*))((::PBYTE)hIl2Cpp + EC9E6E863CF192E0__CTOR_OFFSET))(this, E937D4885DAA1AE8, A95A09BF6689DDA6);
	}
};
