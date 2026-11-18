#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class IBENDELLLAO;
namespace System { template <typename T1, typename T2> class Func_2; }

#define BNLBHIAJHMB___C_CPKKBIHIDLN_OFFSET UNITYSDK_OFFSET(0x18586550)
#define BNLBHIAJHMB___C__CCTOR_OFFSET UNITYSDK_OFFSET(0x18586500)
#define BNLBHIAJHMB___C__CTOR_OFFSET UNITYSDK_OFFSET(0x18586540)

inline static constexpr unsigned int BNLBHIAJHMB___c_TypeDefinitionIndex = 51151;

class BNLBHIAJHMB___c : public ::System::Object
{
public:
	static ::System::Func_2<::System::Int32, ::IBENDELLLAO*>** StaticGet___9__10_2()
	{
		return (::System::Func_2<::System::Int32, ::IBENDELLLAO*>**)Il2CppClass::FromTypeDefinitionIndex(BNLBHIAJHMB___c_TypeDefinitionIndex)->GetStaticField(0x36FA0);
	}
	static ::System::Object** StaticGet___9()
	{
		return (::System::Object**)Il2CppClass::FromTypeDefinitionIndex(BNLBHIAJHMB___c_TypeDefinitionIndex)->GetStaticField(0x36FA8);
	}

	static ::System::Void _cctor()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + BNLBHIAJHMB___C__CCTOR_OFFSET))();
	}

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + BNLBHIAJHMB___C__CTOR_OFFSET))(this);
	}

	::IBENDELLLAO* CPKKBIHIDLN(::System::Int32 EOGLMAEPALE)
	{
		return ((::IBENDELLLAO*(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + BNLBHIAJHMB___C_CPKKBIHIDLN_OFFSET))(this, EOGLMAEPALE);
	}
};
