#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace System { class String; }
namespace System { template <typename T> class Func_1; }

#define KBEELHMPNIF___C_DKPBHIKKMCO_OFFSET UNITYSDK_OFFSET(0x129768B0)
#define KBEELHMPNIF___C_HOJEHIPIELE_OFFSET UNITYSDK_OFFSET(0x129768C0)
#define KBEELHMPNIF___C_JPEKDPMCKMP_OFFSET UNITYSDK_OFFSET(0x12976870)
#define KBEELHMPNIF___C__CCTOR_OFFSET UNITYSDK_OFFSET(0x12976820)
#define KBEELHMPNIF___C__CTOR_OFFSET UNITYSDK_OFFSET(0x12976860)

inline static constexpr unsigned int KBEELHMPNIF___c_TypeDefinitionIndex = 52492;

class KBEELHMPNIF___c : public ::System::Object
{
public:
	static ::System::Func_1<::System::String*>** StaticGet___9__2_1()
	{
		return (::System::Func_1<::System::String*>**)Il2CppClass::FromTypeDefinitionIndex(KBEELHMPNIF___c_TypeDefinitionIndex)->GetStaticField(0x32750);
	}
	static ::System::Object** StaticGet___9()
	{
		return (::System::Object**)Il2CppClass::FromTypeDefinitionIndex(KBEELHMPNIF___c_TypeDefinitionIndex)->GetStaticField(0x32758);
	}
	static ::System::Func_1<::System::String*>** StaticGet___9__2_2()
	{
		return (::System::Func_1<::System::String*>**)Il2CppClass::FromTypeDefinitionIndex(KBEELHMPNIF___c_TypeDefinitionIndex)->GetStaticField(0x32760);
	}
	static ::System::Func_1<::System::Boolean>** StaticGet___9__2_4()
	{
		return (::System::Func_1<::System::Boolean>**)Il2CppClass::FromTypeDefinitionIndex(KBEELHMPNIF___c_TypeDefinitionIndex)->GetStaticField(0x32768);
	}

	static ::System::Void _cctor()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + KBEELHMPNIF___C__CCTOR_OFFSET))();
	}

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + KBEELHMPNIF___C__CTOR_OFFSET))(this);
	}

	::System::String* JPEKDPMCKMP()
	{
		return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + KBEELHMPNIF___C_JPEKDPMCKMP_OFFSET))(this);
	}

	::System::Boolean DKPBHIKKMCO()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + KBEELHMPNIF___C_DKPBHIKKMCO_OFFSET))(this);
	}

	::System::String* HOJEHIPIELE()
	{
		return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + KBEELHMPNIF___C_HOJEHIPIELE_OFFSET))(this);
	}
};
