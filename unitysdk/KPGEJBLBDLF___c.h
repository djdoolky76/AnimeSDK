#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/OIOMFDOEHLH.h"
#include "unitysdk/System/Object.h"

namespace System { class String; }
namespace System { template <typename T> class Func_1; }

#define KPGEJBLBDLF___C_EOHLCNJCHKK_OFFSET UNITYSDK_OFFSET(0x15234BD0)
#define KPGEJBLBDLF___C_HGKOMNAMIEI_OFFSET UNITYSDK_OFFSET(0x15234960)
#define KPGEJBLBDLF___C_PGBJJELHIMO_OFFSET UNITYSDK_OFFSET(0x15234AE0)
#define KPGEJBLBDLF___C__CCTOR_OFFSET UNITYSDK_OFFSET(0x15234910)
#define KPGEJBLBDLF___C__CTOR_OFFSET UNITYSDK_OFFSET(0x15234950)

inline static constexpr unsigned int KPGEJBLBDLF___c_TypeDefinitionIndex = 43265;

class KPGEJBLBDLF___c : public ::System::Object
{
public:
	static ::System::Func_1<::System::String*>** StaticGet___9__49_12()
	{
		return (::System::Func_1<::System::String*>**)Il2CppClass::FromTypeDefinitionIndex(KPGEJBLBDLF___c_TypeDefinitionIndex)->GetStaticField(0x468A0);
	}
	static ::System::Func_1<::OIOMFDOEHLH>** StaticGet___9__49_7()
	{
		return (::System::Func_1<::OIOMFDOEHLH>**)Il2CppClass::FromTypeDefinitionIndex(KPGEJBLBDLF___c_TypeDefinitionIndex)->GetStaticField(0x468A8);
	}
	static ::System::Object** StaticGet___9()
	{
		return (::System::Object**)Il2CppClass::FromTypeDefinitionIndex(KPGEJBLBDLF___c_TypeDefinitionIndex)->GetStaticField(0x468B0);
	}
	static ::System::Func_1<::System::String*>** StaticGet___9__49_10()
	{
		return (::System::Func_1<::System::String*>**)Il2CppClass::FromTypeDefinitionIndex(KPGEJBLBDLF___c_TypeDefinitionIndex)->GetStaticField(0x468B8);
	}

	static ::System::Void _cctor()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + KPGEJBLBDLF___C__CCTOR_OFFSET))();
	}

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + KPGEJBLBDLF___C__CTOR_OFFSET))(this);
	}

	::System::String* HGKOMNAMIEI()
	{
		return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + KPGEJBLBDLF___C_HGKOMNAMIEI_OFFSET))(this);
	}

	::OIOMFDOEHLH PGBJJELHIMO()
	{
		return ((::OIOMFDOEHLH(*)(::PVOID))((::PBYTE)hIl2Cpp + KPGEJBLBDLF___C_PGBJJELHIMO_OFFSET))(this);
	}

	::System::String* EOHLCNJCHKK()
	{
		return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + KPGEJBLBDLF___C_EOHLCNJCHKK_OFFSET))(this);
	}
};
