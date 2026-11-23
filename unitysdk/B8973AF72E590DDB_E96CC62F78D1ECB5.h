#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace System::Threading { class ECC1454E822BC9F0; }

#define B8973AF72E590DDB_E96CC62F78D1ECB5_FC1301C125C37DCE_OFFSET UNITYSDK_OFFSET(0x3EAB7A0)
#define B8973AF72E590DDB_E96CC62F78D1ECB5__CCTOR_OFFSET UNITYSDK_OFFSET(0x3EABBE0)
#define B8973AF72E590DDB_E96CC62F78D1ECB5__CTOR_OFFSET UNITYSDK_OFFSET(0x1666CA0)

inline static constexpr unsigned int B8973AF72E590DDB_E96CC62F78D1ECB5_TypeDefinitionIndex = 15053;

class B8973AF72E590DDB_E96CC62F78D1ECB5 : public ::System::Object
{
public:
	static ::B8973AF72E590DDB_E96CC62F78D1ECB5** StaticGet_FB0A7EB463FA294A()
	{
		return (::B8973AF72E590DDB_E96CC62F78D1ECB5**)Il2CppClass::FromTypeDefinitionIndex(B8973AF72E590DDB_E96CC62F78D1ECB5_TypeDefinitionIndex)->GetStaticField(0x0);
	}
	static ::System::Threading::ECC1454E822BC9F0** StaticGet_BBF92428A29CE75C()
	{
		return (::System::Threading::ECC1454E822BC9F0**)Il2CppClass::FromTypeDefinitionIndex(B8973AF72E590DDB_E96CC62F78D1ECB5_TypeDefinitionIndex)->GetStaticField(0x8);
	}

	static ::System::Void _cctor()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + B8973AF72E590DDB_E96CC62F78D1ECB5__CCTOR_OFFSET))();
	}

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + B8973AF72E590DDB_E96CC62F78D1ECB5__CTOR_OFFSET))(this);
	}

	::System::Void FC1301C125C37DCE(::System::Object* E5EB06E4FD2C32F7)
	{
		return ((::System::Void(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + B8973AF72E590DDB_E96CC62F78D1ECB5_FC1301C125C37DCE_OFFSET))(this, E5EB06E4FD2C32F7);
	}
};
