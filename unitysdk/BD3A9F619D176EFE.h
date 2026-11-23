#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

#define BD3A9F619D176EFE_BB32D953709CFC24_OFFSET UNITYSDK_OFFSET(0x1FE16A0)
#define BD3A9F619D176EFE_BE45898387226EEC_OFFSET UNITYSDK_OFFSET(0x16A4160)
#define BD3A9F619D176EFE_EB665BA153496FCD_OFFSET UNITYSDK_OFFSET(0x16A7C80)
#define BD3A9F619D176EFE_EF46BFCF0F884B6D_OFFSET UNITYSDK_OFFSET(0x16A7BC0)
#define BD3A9F619D176EFE_F2C4E97AE7BC061C_OFFSET UNITYSDK_OFFSET(0x1FE16F0)
#define BD3A9F619D176EFE__CTOR_OFFSET UNITYSDK_OFFSET(0x1FE1750)

inline static constexpr unsigned int BD3A9F619D176EFE_TypeDefinitionIndex = 8113;

class BD3A9F619D176EFE : public ::System::Object
{
public:
	static ::System::Int32* StaticGet_A4EC3528E9B34EFE()
	{
		return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(BD3A9F619D176EFE_TypeDefinitionIndex)->GetStaticField(0x0);
	}
	::System::Int32 AA42BD0A6AF75072; // 0x10

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + BD3A9F619D176EFE__CTOR_OFFSET))(this);
	}

	::System::Boolean BB32D953709CFC24()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + BD3A9F619D176EFE_BB32D953709CFC24_OFFSET))(this);
	}

	::System::Void EB665BA153496FCD(::System::Int32 E937D4885DAA1AE8)
	{
		return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + BD3A9F619D176EFE_EB665BA153496FCD_OFFSET))(this, E937D4885DAA1AE8);
	}

	::System::Int32 EF46BFCF0F884B6D()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + BD3A9F619D176EFE_EF46BFCF0F884B6D_OFFSET))(this);
	}

	::System::Boolean BE45898387226EEC()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + BD3A9F619D176EFE_BE45898387226EEC_OFFSET))(this);
	}

	::System::Void F2C4E97AE7BC061C(::System::Single EB5670302F34D4B7)
	{
		return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + BD3A9F619D176EFE_F2C4E97AE7BC061C_OFFSET))(this, EB5670302F34D4B7);
	}
};
