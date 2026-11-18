#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/ValueType.h"

class PJHKDJEGJOG;

#define LJLILFNJKJJ_BBOMJDBNHIC_OFFSET UNITYSDK_OFFSET(0x6ED1F0)
#define LJLILFNJKJJ__CCTOR_OFFSET UNITYSDK_OFFSET(0x12A62090)
#define LJLILFNJKJJ__CTOR_OFFSET UNITYSDK_OFFSET(0x6ED170)

inline static constexpr unsigned int LJLILFNJKJJ_TypeDefinitionIndex = 52572;

struct alignas(4) LJLILFNJKJJ
{
	static ::LJLILFNJKJJ* StaticGet_NENLMCBOEPM()
	{
		return (::LJLILFNJKJJ*)Il2CppClass::FromTypeDefinitionIndex(LJLILFNJKJJ_TypeDefinitionIndex)->GetStaticField(0xFD30);
	}
	::System::Int32 DONFNODEALN; // 0x10
	::System::Int32 KLJNHMGMDNP; // 0x14

	::System::Void _ctor(::PJHKDJEGJOG* IGPJDIMNEAO)
	{
		return ((::System::Void(*)(::PVOID, ::PJHKDJEGJOG*))((::PBYTE)hIl2Cpp + LJLILFNJKJJ__CTOR_OFFSET))(this, IGPJDIMNEAO);
	}

	static ::System::Void _cctor()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + LJLILFNJKJJ__CCTOR_OFFSET))();
	}

	::System::Void BBOMJDBNHIC(::PJHKDJEGJOG* IGPJDIMNEAO)
	{
		return ((::System::Void(*)(::PVOID, ::PJHKDJEGJOG*))((::PBYTE)hIl2Cpp + LJLILFNJKJJ_BBOMJDBNHIC_OFFSET))(this, IGPJDIMNEAO);
	}
};
