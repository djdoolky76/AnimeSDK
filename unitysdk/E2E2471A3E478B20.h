#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace System { class String; }

#define E2E2471A3E478B20_A651C99E94D6EF8E_OFFSET UNITYSDK_OFFSET(0x38A1040)
#define E2E2471A3E478B20_E7D2484E299D1CC9_OFFSET UNITYSDK_OFFSET(0x38A11C0)
#define E2E2471A3E478B20_EEF31E42D307C28B_OFFSET UNITYSDK_OFFSET(0x38A1340)
#define E2E2471A3E478B20_F0FEFFE060C512F1_OFFSET UNITYSDK_OFFSET(0x38A0F70)
#define E2E2471A3E478B20_F9F1E4C5879DE044_OFFSET UNITYSDK_OFFSET(0x38A1390)
#define E2E2471A3E478B20__CCTOR_OFFSET UNITYSDK_OFFSET(0x38A12B0)
#define E2E2471A3E478B20__CTOR_OFFSET UNITYSDK_OFFSET(0x1666CA0)

inline static constexpr unsigned int E2E2471A3E478B20_TypeDefinitionIndex = 20940;

class E2E2471A3E478B20 : public ::System::Object
{
public:
	static ::System::Int32* StaticGet_BF38270AD42DF7D2()
	{
		return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(E2E2471A3E478B20_TypeDefinitionIndex)->GetStaticField(0x0);
	}

	static ::System::Int32 EEF31E42D307C28B()
	{
		return ((::System::Int32(*)())((::PBYTE)hIl2Cpp + E2E2471A3E478B20_EEF31E42D307C28B_OFFSET))();
	}

	static ::System::String* A651C99E94D6EF8E(::System::Int32 ABDE0F2A254CEB88, ::Il2CppArray<::System::Byte>* F220A2D27F7C6B6C)
	{
		return ((::System::String*(*)(::System::Int32, ::Il2CppArray<::System::Byte>*))((::PBYTE)hIl2Cpp + E2E2471A3E478B20_A651C99E94D6EF8E_OFFSET))(ABDE0F2A254CEB88, F220A2D27F7C6B6C);
	}

	static ::Il2CppArray<::System::Byte>* F0FEFFE060C512F1(::System::String* BB83557721B5F386)
	{
		return ((::Il2CppArray<::System::Byte>*(*)(::System::String*))((::PBYTE)hIl2Cpp + E2E2471A3E478B20_F0FEFFE060C512F1_OFFSET))(BB83557721B5F386);
	}

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + E2E2471A3E478B20__CTOR_OFFSET))(this);
	}

	static ::System::String* E7D2484E299D1CC9(::Il2CppArray<::System::Byte>* F220A2D27F7C6B6C, ::System::Int32 A70E5C58B2C7A692)
	{
		return ((::System::String*(*)(::Il2CppArray<::System::Byte>*, ::System::Int32))((::PBYTE)hIl2Cpp + E2E2471A3E478B20_E7D2484E299D1CC9_OFFSET))(F220A2D27F7C6B6C, A70E5C58B2C7A692);
	}

	static ::System::Void F9F1E4C5879DE044(::System::Int32 E937D4885DAA1AE8)
	{
		return ((::System::Void(*)(::System::Int32))((::PBYTE)hIl2Cpp + E2E2471A3E478B20_F9F1E4C5879DE044_OFFSET))(E937D4885DAA1AE8);
	}

	static ::System::Void _cctor()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + E2E2471A3E478B20__CCTOR_OFFSET))();
	}
};
