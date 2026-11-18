#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace System { class String; }
namespace System { template <typename T> class Func_1; }

#define DCKPLFOIANM___C_CJFLJJMOKOF_OFFSET UNITYSDK_OFFSET(0x168A5620)
#define DCKPLFOIANM___C_KDPNFAOOBAD_OFFSET UNITYSDK_OFFSET(0x168A55E0)
#define DCKPLFOIANM___C_PGPBAHFPLII_OFFSET UNITYSDK_OFFSET(0x168A55A0)
#define DCKPLFOIANM___C__CCTOR_OFFSET UNITYSDK_OFFSET(0x168A5550)
#define DCKPLFOIANM___C__CTOR_OFFSET UNITYSDK_OFFSET(0x168A5590)

inline static constexpr unsigned int DCKPLFOIANM___c_TypeDefinitionIndex = 64759;

class DCKPLFOIANM___c : public ::System::Object
{
public:
	static ::System::Func_1<::System::String*>** StaticGet___9__8_4()
	{
		return (::System::Func_1<::System::String*>**)Il2CppClass::FromTypeDefinitionIndex(DCKPLFOIANM___c_TypeDefinitionIndex)->GetStaticField(0x512E0);
	}
	static ::System::Func_1<::System::String*>** StaticGet___9__8_2()
	{
		return (::System::Func_1<::System::String*>**)Il2CppClass::FromTypeDefinitionIndex(DCKPLFOIANM___c_TypeDefinitionIndex)->GetStaticField(0x512E8);
	}
	static ::System::Object** StaticGet___9()
	{
		return (::System::Object**)Il2CppClass::FromTypeDefinitionIndex(DCKPLFOIANM___c_TypeDefinitionIndex)->GetStaticField(0x512F0);
	}
	static ::System::Func_1<::System::Boolean>** StaticGet___9__8_1()
	{
		return (::System::Func_1<::System::Boolean>**)Il2CppClass::FromTypeDefinitionIndex(DCKPLFOIANM___c_TypeDefinitionIndex)->GetStaticField(0x512F8);
	}

	static ::System::Void _cctor()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + DCKPLFOIANM___C__CCTOR_OFFSET))();
	}

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + DCKPLFOIANM___C__CTOR_OFFSET))(this);
	}

	::System::String* PGPBAHFPLII()
	{
		return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + DCKPLFOIANM___C_PGPBAHFPLII_OFFSET))(this);
	}

	::System::String* KDPNFAOOBAD()
	{
		return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + DCKPLFOIANM___C_KDPNFAOOBAD_OFFSET))(this);
	}

	::System::Boolean CJFLJJMOKOF()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + DCKPLFOIANM___C_CJFLJJMOKOF_OFFSET))(this);
	}
};
