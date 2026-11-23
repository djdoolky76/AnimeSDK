#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace System::Collections::Generic { template <typename T> class List_1; }
namespace UnityEngine { class Material; }

#define E38A0A376336C717_A3B52FBF57B66641_OFFSET UNITYSDK_OFFSET(0x27D8B20)
#define E38A0A376336C717_A765A1D14770A303_OFFSET UNITYSDK_OFFSET(0x27D8AB0)
#define E38A0A376336C717_AD9D28D3706941EF_OFFSET UNITYSDK_OFFSET(0x169C070)
#define E38A0A376336C717_B5D0CC61BAD9EC2E_OFFSET UNITYSDK_OFFSET(0x167AE10)
#define E38A0A376336C717_B89E6B8A0A64EED7_OFFSET UNITYSDK_OFFSET(0x17D6400)
#define E38A0A376336C717_BA135849CEB8CB0C_OFFSET UNITYSDK_OFFSET(0x17D6420)
#define E38A0A376336C717_BCCC4336CF276CA8_OFFSET UNITYSDK_OFFSET(0x17D6270)
#define E38A0A376336C717_E265A1D1C5C2C0E1_OFFSET UNITYSDK_OFFSET(0x167AE20)
#define E38A0A376336C717_E7476E256CD35E55_OFFSET UNITYSDK_OFFSET(0x17D5EA0)
#define E38A0A376336C717_F9E0DECE4AFBA0D3_OFFSET UNITYSDK_OFFSET(0x17F35A0)
#define E38A0A376336C717_FD0E3E21803C8FCC_OFFSET UNITYSDK_OFFSET(0x27D8BC0)
#define E38A0A376336C717__CTOR_OFFSET UNITYSDK_OFFSET(0x27D8C30)

inline static constexpr unsigned int E38A0A376336C717_TypeDefinitionIndex = 16694;

class E38A0A376336C717 : public ::System::Object
{
public:
	::UnityEngine::Material* FF12FFA827E5C93A; // 0x10
	::System::Collections::Generic::List_1<::System::Int32>* A42BF2D7BA217484; // 0x18
	::System::Boolean E1CAE66000A4541A; // 0x20
	::System::Byte _padding0[0x7];
	::System::Collections::Generic::List_1<::System::Int32>* BB5345463358681B; // 0x28
	::System::Boolean A9153B1FBB8A09EB; // 0x30

	::System::Boolean FD0E3E21803C8FCC(::System::Int32 A9C731CDFC723D8D)
	{
		return ((::System::Boolean(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + E38A0A376336C717_FD0E3E21803C8FCC_OFFSET))(this, A9C731CDFC723D8D);
	}

	::System::Collections::Generic::List_1<::System::Int32>* AD9D28D3706941EF()
	{
		return ((::System::Collections::Generic::List_1<::System::Int32>*(*)(::PVOID))((::PBYTE)hIl2Cpp + E38A0A376336C717_AD9D28D3706941EF_OFFSET))(this);
	}

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + E38A0A376336C717__CTOR_OFFSET))(this);
	}

	::System::Void A765A1D14770A303()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + E38A0A376336C717_A765A1D14770A303_OFFSET))(this);
	}

	::System::Void A3B52FBF57B66641(::E38A0A376336C717* AFE8F10692F5139F)
	{
		return ((::System::Void(*)(::PVOID, ::E38A0A376336C717*))((::PBYTE)hIl2Cpp + E38A0A376336C717_A3B52FBF57B66641_OFFSET))(this, AFE8F10692F5139F);
	}

	::UnityEngine::Material* E7476E256CD35E55()
	{
		return ((::UnityEngine::Material*(*)(::PVOID))((::PBYTE)hIl2Cpp + E38A0A376336C717_E7476E256CD35E55_OFFSET))(this);
	}

	::System::Boolean B5D0CC61BAD9EC2E()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + E38A0A376336C717_B5D0CC61BAD9EC2E_OFFSET))(this);
	}

	::System::Void B89E6B8A0A64EED7(::UnityEngine::Material* E937D4885DAA1AE8)
	{
		return ((::System::Void(*)(::PVOID, ::UnityEngine::Material*))((::PBYTE)hIl2Cpp + E38A0A376336C717_B89E6B8A0A64EED7_OFFSET))(this, E937D4885DAA1AE8);
	}

	::System::Collections::Generic::List_1<::System::Int32>* F9E0DECE4AFBA0D3()
	{
		return ((::System::Collections::Generic::List_1<::System::Int32>*(*)(::PVOID))((::PBYTE)hIl2Cpp + E38A0A376336C717_F9E0DECE4AFBA0D3_OFFSET))(this);
	}

	::System::Void BA135849CEB8CB0C(::System::Boolean E937D4885DAA1AE8)
	{
		return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + E38A0A376336C717_BA135849CEB8CB0C_OFFSET))(this, E937D4885DAA1AE8);
	}

	::System::Boolean BCCC4336CF276CA8()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + E38A0A376336C717_BCCC4336CF276CA8_OFFSET))(this);
	}

	::System::Void E265A1D1C5C2C0E1(::System::Boolean E937D4885DAA1AE8)
	{
		return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + E38A0A376336C717_E265A1D1C5C2C0E1_OFFSET))(this, E937D4885DAA1AE8);
	}
};
