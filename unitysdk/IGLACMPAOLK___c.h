#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class PABCFJHDBNK;
namespace Code::Logic::Data::ScriptObject::Level { class Member; }
namespace System { template <typename T1, typename T2> class Func_2; }

#define IGLACMPAOLK___C_CJMKGJKKBBI_OFFSET UNITYSDK_OFFSET(0x16A9A840)
#define IGLACMPAOLK___C_DNGFPDPMJGN_OFFSET UNITYSDK_OFFSET(0x16A9A860)
#define IGLACMPAOLK___C__CCTOR_OFFSET UNITYSDK_OFFSET(0x16A9A7F0)
#define IGLACMPAOLK___C__CTOR_OFFSET UNITYSDK_OFFSET(0x16A9A830)

inline static constexpr unsigned int IGLACMPAOLK___c_TypeDefinitionIndex = 71985;

class IGLACMPAOLK___c : public ::System::Object
{
public:
	static ::System::Object** StaticGet___9()
	{
		return (::System::Object**)Il2CppClass::FromTypeDefinitionIndex(IGLACMPAOLK___c_TypeDefinitionIndex)->GetStaticField(0x3E070);
	}
	static ::System::Func_2<::Code::Logic::Data::ScriptObject::Level::Member*, ::System::Boolean>** StaticGet___9__17_1()
	{
		return (::System::Func_2<::Code::Logic::Data::ScriptObject::Level::Member*, ::System::Boolean>**)Il2CppClass::FromTypeDefinitionIndex(IGLACMPAOLK___c_TypeDefinitionIndex)->GetStaticField(0x3E078);
	}
	static ::System::Func_2<::Code::Logic::Data::ScriptObject::Level::Member*, ::PABCFJHDBNK*>** StaticGet___9__17_0()
	{
		return (::System::Func_2<::Code::Logic::Data::ScriptObject::Level::Member*, ::PABCFJHDBNK*>**)Il2CppClass::FromTypeDefinitionIndex(IGLACMPAOLK___c_TypeDefinitionIndex)->GetStaticField(0x3E080);
	}

	static ::System::Void _cctor()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + IGLACMPAOLK___C__CCTOR_OFFSET))();
	}

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + IGLACMPAOLK___C__CTOR_OFFSET))(this);
	}

	::System::Boolean CJMKGJKKBBI(::Code::Logic::Data::ScriptObject::Level::Member* IPMMCGDMODG)
	{
		return ((::System::Boolean(*)(::PVOID, ::Code::Logic::Data::ScriptObject::Level::Member*))((::PBYTE)hIl2Cpp + IGLACMPAOLK___C_CJMKGJKKBBI_OFFSET))(this, IPMMCGDMODG);
	}

	::PABCFJHDBNK* DNGFPDPMJGN(::Code::Logic::Data::ScriptObject::Level::Member* KHILBNJIAKA)
	{
		return ((::PABCFJHDBNK*(*)(::PVOID, ::Code::Logic::Data::ScriptObject::Level::Member*))((::PBYTE)hIl2Cpp + IGLACMPAOLK___C_DNGFPDPMJGN_OFFSET))(this, KHILBNJIAKA);
	}
};
