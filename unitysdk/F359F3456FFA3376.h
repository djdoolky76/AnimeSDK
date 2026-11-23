#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/ValueType.h"

namespace System { class Object; }

#define F359F3456FFA3376_B25ACCA9F2B5D4F2_OFFSET UNITYSDK_OFFSET(0x305A630)
#define F359F3456FFA3376_EEE77000E8206FBA_OFFSET UNITYSDK_OFFSET(0x3C025F0)
#define F359F3456FFA3376_FEFD5298862EC8D2_OFFSET UNITYSDK_OFFSET(0x3C02A30)
#define F359F3456FFA3376__CCTOR_OFFSET UNITYSDK_OFFSET(0x3C02650)
#define F359F3456FFA3376__CTOR_1_OFFSET UNITYSDK_OFFSET(0x3C028C0)
#define F359F3456FFA3376__CTOR_2_OFFSET UNITYSDK_OFFSET(0x3C02720)
#define F359F3456FFA3376__CTOR_3_OFFSET UNITYSDK_OFFSET(0x3C02820)
#define F359F3456FFA3376__CTOR_OFFSET UNITYSDK_OFFSET(0x3C02980)

inline static constexpr unsigned int F359F3456FFA3376_TypeDefinitionIndex = 11353;

struct alignas(8) F359F3456FFA3376
{
	static ::Il2CppArray<::System::Object*>** StaticGet_FF303D6D9F1D0BC1()
	{
		return (::Il2CppArray<::System::Object*>**)Il2CppClass::FromTypeDefinitionIndex(F359F3456FFA3376_TypeDefinitionIndex)->GetStaticField(0x0);
	}
	static ::Il2CppArray<::System::Object*>** StaticGet_A6ED003C5EAC8104()
	{
		return (::Il2CppArray<::System::Object*>**)Il2CppClass::FromTypeDefinitionIndex(F359F3456FFA3376_TypeDefinitionIndex)->GetStaticField(0x8);
	}
	static ::Il2CppArray<::System::Object*>** StaticGet_FB32F11763016E48()
	{
		return (::Il2CppArray<::System::Object*>**)Il2CppClass::FromTypeDefinitionIndex(F359F3456FFA3376_TypeDefinitionIndex)->GetStaticField(0x10);
	}
	::System::Object* F655422705B61589; // 0x10
	::System::Object* F0D60F85BD3470F9; // 0x18
	::System::Object* E0E52BF204B5C2C3; // 0x20
	::Il2CppArray<::System::Object*>* AE3B4567E06A275F; // 0x28

	::System::Object* FEFD5298862EC8D2(::System::Int32 B48C66E5FB2449C6)
	{
		return ((::System::Object*(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + F359F3456FFA3376_FEFD5298862EC8D2_OFFSET))(this, B48C66E5FB2449C6);
	}

	::System::Void _ctor(::System::Object* F7AF4D806886EC26, ::System::Object* ADB2CD9F5DF7E145)
	{
		return ((::System::Void(*)(::PVOID, ::System::Object*, ::System::Object*))((::PBYTE)hIl2Cpp + F359F3456FFA3376__CTOR_OFFSET))(this, F7AF4D806886EC26, ADB2CD9F5DF7E145);
	}

	::System::Int32 B25ACCA9F2B5D4F2()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + F359F3456FFA3376_B25ACCA9F2B5D4F2_OFFSET))(this);
	}

	::System::Void _ctor_1(::System::Object* F7AF4D806886EC26, ::System::Object* ADB2CD9F5DF7E145, ::System::Object* FE79E5D12525EE6D)
	{
		return ((::System::Void(*)(::PVOID, ::System::Object*, ::System::Object*, ::System::Object*))((::PBYTE)hIl2Cpp + F359F3456FFA3376__CTOR_1_OFFSET))(this, F7AF4D806886EC26, ADB2CD9F5DF7E145, FE79E5D12525EE6D);
	}

	::System::Void _ctor_2(::Il2CppArray<::System::Object*>* F0D3F87128A7C4CA)
	{
		return ((::System::Void(*)(::PVOID, ::Il2CppArray<::System::Object*>*))((::PBYTE)hIl2Cpp + F359F3456FFA3376__CTOR_2_OFFSET))(this, F0D3F87128A7C4CA);
	}

	::System::Object* EEE77000E8206FBA(::System::Int32 B48C66E5FB2449C6)
	{
		return ((::System::Object*(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + F359F3456FFA3376_EEE77000E8206FBA_OFFSET))(this, B48C66E5FB2449C6);
	}

	static ::System::Void _cctor()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + F359F3456FFA3376__CCTOR_OFFSET))();
	}

	::System::Void _ctor_3(::System::Object* F7AF4D806886EC26)
	{
		return ((::System::Void(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + F359F3456FFA3376__CTOR_3_OFFSET))(this, F7AF4D806886EC26);
	}
};
