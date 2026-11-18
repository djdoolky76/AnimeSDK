#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class MEMPJCOPMDE;
namespace System { class String; }
namespace System { template <typename T1, typename T2> class Func_2; }
namespace System { template <typename T> class Action_1; }

#define POOFKGJJLAH___C_APFJIJOKEGK_OFFSET UNITYSDK_OFFSET(0x194BEEC0)
#define POOFKGJJLAH___C_FJMNNMCGHEH_OFFSET UNITYSDK_OFFSET(0x194BEF00)
#define POOFKGJJLAH___C__CCTOR_OFFSET UNITYSDK_OFFSET(0x194BEE70)
#define POOFKGJJLAH___C__CTOR_OFFSET UNITYSDK_OFFSET(0x194BEEB0)

inline static constexpr unsigned int POOFKGJJLAH___c_TypeDefinitionIndex = 81843;

class POOFKGJJLAH___c : public ::System::Object
{
public:
	static ::System::Action_1<::MEMPJCOPMDE*>** StaticGet___9__16_1()
	{
		return (::System::Action_1<::MEMPJCOPMDE*>**)Il2CppClass::FromTypeDefinitionIndex(POOFKGJJLAH___c_TypeDefinitionIndex)->GetStaticField(0x39EA0);
	}
	static ::System::Object** StaticGet___9()
	{
		return (::System::Object**)Il2CppClass::FromTypeDefinitionIndex(POOFKGJJLAH___c_TypeDefinitionIndex)->GetStaticField(0x39EA8);
	}
	static ::System::Func_2<::System::Int32, ::System::String*>** StaticGet___9__20_1()
	{
		return (::System::Func_2<::System::Int32, ::System::String*>**)Il2CppClass::FromTypeDefinitionIndex(POOFKGJJLAH___c_TypeDefinitionIndex)->GetStaticField(0x39EB0);
	}

	static ::System::Void _cctor()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + POOFKGJJLAH___C__CCTOR_OFFSET))();
	}

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + POOFKGJJLAH___C__CTOR_OFFSET))(this);
	}

	::System::String* APFJIJOKEGK(::System::Int32 EOGLMAEPALE)
	{
		return ((::System::String*(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + POOFKGJJLAH___C_APFJIJOKEGK_OFFSET))(this, EOGLMAEPALE);
	}

	::System::Void FJMNNMCGHEH(::MEMPJCOPMDE* GLAOEHCGCFO)
	{
		return ((::System::Void(*)(::PVOID, ::MEMPJCOPMDE*))((::PBYTE)hIl2Cpp + POOFKGJJLAH___C_FJMNNMCGHEH_OFFSET))(this, GLAOEHCGCFO);
	}
};
