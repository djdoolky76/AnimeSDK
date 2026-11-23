#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/ValueType.h"

#define F21FB9F2A8D5DA77_A2FD52BC77C659C9_OFFSET UNITYSDK_OFFSET(0x3BEC880)
#define F21FB9F2A8D5DA77_E3A4B119FFE29D79_1_OFFSET UNITYSDK_OFFSET(0x3BECA60)
#define F21FB9F2A8D5DA77_E3A4B119FFE29D79_OFFSET UNITYSDK_OFFSET(0x3BECA10)
#define F21FB9F2A8D5DA77_FA2AB5F4EECC030D_OFFSET UNITYSDK_OFFSET(0x3BECBE0)
#define F21FB9F2A8D5DA77__CCTOR_OFFSET UNITYSDK_OFFSET(0x3BECB60)

inline static constexpr unsigned int F21FB9F2A8D5DA77_TypeDefinitionIndex = 11298;

struct alignas(4) F21FB9F2A8D5DA77
{
	static ::System::Int32* StaticGet_FFF9C0D4C4E2647E()
	{
		return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(F21FB9F2A8D5DA77_TypeDefinitionIndex)->GetStaticField(0x0);
	}
	::System::Int32 AD0A6FD94E858431; // 0x10

	::System::Boolean FA2AB5F4EECC030D()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + F21FB9F2A8D5DA77_FA2AB5F4EECC030D_OFFSET))(this);
	}

	::System::Void A2FD52BC77C659C9(::System::Int32 F6989A63D3036C95)
	{
		return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + F21FB9F2A8D5DA77_A2FD52BC77C659C9_OFFSET))(this, F6989A63D3036C95);
	}

	static ::System::Void _cctor()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + F21FB9F2A8D5DA77__CCTOR_OFFSET))();
	}

	::System::Void E3A4B119FFE29D79()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + F21FB9F2A8D5DA77_E3A4B119FFE29D79_OFFSET))(this);
	}

	::System::Void E3A4B119FFE29D79_1(::System::Int32 F6989A63D3036C95)
	{
		return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + F21FB9F2A8D5DA77_E3A4B119FFE29D79_1_OFFSET))(this, F6989A63D3036C95);
	}
};
