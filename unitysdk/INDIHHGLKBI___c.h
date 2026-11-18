#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace MoleMole { class MonsterSpecialIdleConfig; }
namespace System { template <typename T> class Func_1; }

#define INDIHHGLKBI___C_LPCHADDECLC_OFFSET UNITYSDK_OFFSET(0x15C22B10)
#define INDIHHGLKBI___C__CCTOR_OFFSET UNITYSDK_OFFSET(0x15C22AC0)
#define INDIHHGLKBI___C__CTOR_OFFSET UNITYSDK_OFFSET(0x15C22B00)

inline static constexpr unsigned int INDIHHGLKBI___c_TypeDefinitionIndex = 73499;

class INDIHHGLKBI___c : public ::System::Object
{
public:
	static ::System::Object** StaticGet___9()
	{
		return (::System::Object**)Il2CppClass::FromTypeDefinitionIndex(INDIHHGLKBI___c_TypeDefinitionIndex)->GetStaticField(0x32540);
	}
	static ::System::Func_1<::MoleMole::MonsterSpecialIdleConfig*>** StaticGet___9__2_0()
	{
		return (::System::Func_1<::MoleMole::MonsterSpecialIdleConfig*>**)Il2CppClass::FromTypeDefinitionIndex(INDIHHGLKBI___c_TypeDefinitionIndex)->GetStaticField(0x32548);
	}

	static ::System::Void _cctor()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + INDIHHGLKBI___C__CCTOR_OFFSET))();
	}

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + INDIHHGLKBI___C__CTOR_OFFSET))(this);
	}

	::MoleMole::MonsterSpecialIdleConfig* LPCHADDECLC()
	{
		return ((::MoleMole::MonsterSpecialIdleConfig*(*)(::PVOID))((::PBYTE)hIl2Cpp + INDIHHGLKBI___C_LPCHADDECLC_OFFSET))(this);
	}
};
