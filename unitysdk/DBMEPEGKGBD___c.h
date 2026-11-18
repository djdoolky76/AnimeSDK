#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace System { class String; }
namespace System { template <typename T> class Func_1; }

#define DBMEPEGKGBD___C_DKPBHIKKMCO_OFFSET UNITYSDK_OFFSET(0x19A31E10)
#define DBMEPEGKGBD___C_HOJEHIPIELE_OFFSET UNITYSDK_OFFSET(0x19A31DD0)
#define DBMEPEGKGBD___C__CCTOR_OFFSET UNITYSDK_OFFSET(0x19A31D80)
#define DBMEPEGKGBD___C__CTOR_OFFSET UNITYSDK_OFFSET(0x19A31DC0)

inline static constexpr unsigned int DBMEPEGKGBD___c_TypeDefinitionIndex = 75917;

class DBMEPEGKGBD___c : public ::System::Object
{
public:
	static ::System::Func_1<::System::String*>** StaticGet___9__2_4()
	{
		return (::System::Func_1<::System::String*>**)Il2CppClass::FromTypeDefinitionIndex(DBMEPEGKGBD___c_TypeDefinitionIndex)->GetStaticField(0x37220);
	}
	static ::System::Func_1<::System::String*>** StaticGet___9__2_2()
	{
		return (::System::Func_1<::System::String*>**)Il2CppClass::FromTypeDefinitionIndex(DBMEPEGKGBD___c_TypeDefinitionIndex)->GetStaticField(0x37228);
	}
	static ::System::Object** StaticGet___9()
	{
		return (::System::Object**)Il2CppClass::FromTypeDefinitionIndex(DBMEPEGKGBD___c_TypeDefinitionIndex)->GetStaticField(0x37230);
	}

	static ::System::Void _cctor()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + DBMEPEGKGBD___C__CCTOR_OFFSET))();
	}

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + DBMEPEGKGBD___C__CTOR_OFFSET))(this);
	}

	::System::String* HOJEHIPIELE()
	{
		return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + DBMEPEGKGBD___C_HOJEHIPIELE_OFFSET))(this);
	}

	::System::String* DKPBHIKKMCO()
	{
		return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + DBMEPEGKGBD___C_DKPBHIKKMCO_OFFSET))(this);
	}
};
