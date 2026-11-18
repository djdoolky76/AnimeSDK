#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/MoleMole/EntityHandle.h"
#include "unitysdk/OOPHGFIAKJM.h"
#include "unitysdk/System/ValueType.h"

namespace MoleMole::Battle { class Entity; }

#define FJMGNPCOGAP_DISPOSE_OFFSET UNITYSDK_OFFSET(0x6541E0)
#define FJMGNPCOGAP_GIFJJOPLKEI_OFFSET UNITYSDK_OFFSET(0x10EBCEC0)
#define FJMGNPCOGAP_HOMJBHMIPEE_OFFSET UNITYSDK_OFFSET(0x10EBCBC0)
#define FJMGNPCOGAP_MOBPPDKJABD_OFFSET UNITYSDK_OFFSET(0x10EBCBD0)
#define FJMGNPCOGAP_OLMMDLOLJBH_OFFSET UNITYSDK_OFFSET(0x10EBC930)
#define FJMGNPCOGAP__CTOR_OFFSET UNITYSDK_OFFSET(0x6541B0)

inline static constexpr unsigned int FJMGNPCOGAP_TypeDefinitionIndex = 38718;

struct alignas(4) FJMGNPCOGAP
{
	static ::MoleMole::EntityHandle* StaticGet_OGDNJKJANEK()
	{
		return (::MoleMole::EntityHandle*)Il2CppClass::FromTypeDefinitionIndex(FJMGNPCOGAP_TypeDefinitionIndex)->GetStaticField(0x440C0);
	}
	static ::OOPHGFIAKJM* StaticGet_IMJHOOJBICO()
	{
		return (::OOPHGFIAKJM*)Il2CppClass::FromTypeDefinitionIndex(FJMGNPCOGAP_TypeDefinitionIndex)->GetStaticField(0xFC00);
	}
	static ::System::Boolean* StaticGet_OICBIMLCENN()
	{
		return (::System::Boolean*)Il2CppClass::FromTypeDefinitionIndex(FJMGNPCOGAP_TypeDefinitionIndex)->GetStaticField(0xFC04);
	}
	::System::Boolean KANJODNFFOI; // 0x10

	::System::Void _ctor(::OOPHGFIAKJM IEJINACKMMN, ::MoleMole::EntityHandle DJHFOGHIFEJ, ::System::Boolean JPPDKGHCCCA, ::System::Boolean NBLGICHAOMH)
	{
		return ((::System::Void(*)(::PVOID, ::OOPHGFIAKJM, ::MoleMole::EntityHandle, ::System::Boolean, ::System::Boolean))((::PBYTE)hIl2Cpp + FJMGNPCOGAP__CTOR_OFFSET))(this, IEJINACKMMN, DJHFOGHIFEJ, JPPDKGHCCCA, NBLGICHAOMH);
	}

	::System::Void Dispose()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + FJMGNPCOGAP_DISPOSE_OFFSET))(this);
	}

	static ::System::Boolean OLMMDLOLJBH(::MoleMole::Battle::Entity* AMNIHACKELI, ::MoleMole::Battle::Entity* NGODDCIOJDP)
	{
		return ((::System::Boolean(*)(::MoleMole::Battle::Entity*, ::MoleMole::Battle::Entity*))((::PBYTE)hIl2Cpp + FJMGNPCOGAP_OLMMDLOLJBH_OFFSET))(AMNIHACKELI, NGODDCIOJDP);
	}

	static ::System::Boolean MOBPPDKJABD(::MoleMole::Battle::Entity* AMNIHACKELI, ::MoleMole::Battle::Entity* NGODDCIOJDP)
	{
		return ((::System::Boolean(*)(::MoleMole::Battle::Entity*, ::MoleMole::Battle::Entity*))((::PBYTE)hIl2Cpp + FJMGNPCOGAP_MOBPPDKJABD_OFFSET))(AMNIHACKELI, NGODDCIOJDP);
	}

	static ::System::Boolean GIFJJOPLKEI()
	{
		return ((::System::Boolean(*)())((::PBYTE)hIl2Cpp + FJMGNPCOGAP_GIFJJOPLKEI_OFFSET))();
	}

	static ::System::Boolean HOMJBHMIPEE()
	{
		return ((::System::Boolean(*)())((::PBYTE)hIl2Cpp + FJMGNPCOGAP_HOMJBHMIPEE_OFFSET))();
	}
};
