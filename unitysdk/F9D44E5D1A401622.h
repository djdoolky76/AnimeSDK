#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/E2DE926113CB084F.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/FCC2F8EABCD6F945.h"
#include "unitysdk/FDCEA28FB87E4286.h"

namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }

#define F9D44E5D1A401622_A9AB8B15F2B4F9B7_OFFSET UNITYSDK_OFFSET(0x2481BA0)
#define F9D44E5D1A401622_AC524395A3AF1151_OFFSET UNITYSDK_OFFSET(0x24818F0)
#define F9D44E5D1A401622_FD30E8899414C968_OFFSET UNITYSDK_OFFSET(0x2481970)
#define F9D44E5D1A401622__CCTOR_OFFSET UNITYSDK_OFFSET(0x2481E70)

inline static constexpr unsigned int F9D44E5D1A401622_TypeDefinitionIndex = 4543;

class F9D44E5D1A401622 : public ::System::Object
{
public:
	static ::System::Collections::Generic::Dictionary_2<::E2DE926113CB084F, ::System::Object*>** StaticGet_E446C93DD7841F1F()
	{
		return (::System::Collections::Generic::Dictionary_2<::E2DE926113CB084F, ::System::Object*>**)Il2CppClass::FromTypeDefinitionIndex(F9D44E5D1A401622_TypeDefinitionIndex)->GetStaticField(0x0);
	}
	static ::Il2CppArray<::System::Byte>** StaticGet_A46DA46E237A1673()
	{
		return (::Il2CppArray<::System::Byte>**)Il2CppClass::FromTypeDefinitionIndex(F9D44E5D1A401622_TypeDefinitionIndex)->GetStaticField(0x8);
	}

	static ::System::Void _cctor()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + F9D44E5D1A401622__CCTOR_OFFSET))();
	}

	static ::System::Void FD30E8899414C968(::FCC2F8EABCD6F945<::System::Byte>& F6C2EBBDFCAEF915, ::FDCEA28FB87E4286& E5EB06E4FD2C32F7, ::System::UInt32 AF9ABB99FAD6A883)
	{
		return ((::System::Void(*)(::FCC2F8EABCD6F945<::System::Byte>&, ::FDCEA28FB87E4286&, ::System::UInt32))((::PBYTE)hIl2Cpp + F9D44E5D1A401622_FD30E8899414C968_OFFSET))(F6C2EBBDFCAEF915, E5EB06E4FD2C32F7, AF9ABB99FAD6A883);
	}

	static ::System::Void AC524395A3AF1151(::FDCEA28FB87E4286& E5EB06E4FD2C32F7)
	{
		return ((::System::Void(*)(::FDCEA28FB87E4286&))((::PBYTE)hIl2Cpp + F9D44E5D1A401622_AC524395A3AF1151_OFFSET))(E5EB06E4FD2C32F7);
	}

	static ::System::Void A9AB8B15F2B4F9B7(::FCC2F8EABCD6F945<::System::Byte>& F6C2EBBDFCAEF915, ::FDCEA28FB87E4286& E5EB06E4FD2C32F7)
	{
		return ((::System::Void(*)(::FCC2F8EABCD6F945<::System::Byte>&, ::FDCEA28FB87E4286&))((::PBYTE)hIl2Cpp + F9D44E5D1A401622_A9AB8B15F2B4F9B7_OFFSET))(F6C2EBBDFCAEF915, E5EB06E4FD2C32F7);
	}
};
