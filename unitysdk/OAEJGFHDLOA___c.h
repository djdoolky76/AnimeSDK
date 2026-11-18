#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace System { template <typename T> class Action_1; }

#define OAEJGFHDLOA___C_BDJDOPFGBCO_OFFSET UNITYSDK_OFFSET(0x114E7130)
#define OAEJGFHDLOA___C_EIKBAHDECFB_OFFSET UNITYSDK_OFFSET(0x114E7230)
#define OAEJGFHDLOA___C__CCTOR_OFFSET UNITYSDK_OFFSET(0x114E70E0)
#define OAEJGFHDLOA___C__CTOR_OFFSET UNITYSDK_OFFSET(0x114E7120)

inline static constexpr unsigned int OAEJGFHDLOA___c_TypeDefinitionIndex = 67180;

class OAEJGFHDLOA___c : public ::System::Object
{
public:
	static ::System::Object** StaticGet___9()
	{
		return (::System::Object**)Il2CppClass::FromTypeDefinitionIndex(OAEJGFHDLOA___c_TypeDefinitionIndex)->GetStaticField(0x4DD40);
	}
	static ::System::Action_1<::System::Boolean>** StaticGet___9__39_1()
	{
		return (::System::Action_1<::System::Boolean>**)Il2CppClass::FromTypeDefinitionIndex(OAEJGFHDLOA___c_TypeDefinitionIndex)->GetStaticField(0x4DD48);
	}
	static ::System::Action_1<::System::Boolean>** StaticGet___9__39_0()
	{
		return (::System::Action_1<::System::Boolean>**)Il2CppClass::FromTypeDefinitionIndex(OAEJGFHDLOA___c_TypeDefinitionIndex)->GetStaticField(0x4DD50);
	}

	static ::System::Void _cctor()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + OAEJGFHDLOA___C__CCTOR_OFFSET))();
	}

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + OAEJGFHDLOA___C__CTOR_OFFSET))(this);
	}

	::System::Void BDJDOPFGBCO(::System::Boolean JLGCMPJMDLO)
	{
		return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + OAEJGFHDLOA___C_BDJDOPFGBCO_OFFSET))(this, JLGCMPJMDLO);
	}

	::System::Void EIKBAHDECFB(::System::Boolean JLGCMPJMDLO)
	{
		return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + OAEJGFHDLOA___C_EIKBAHDECFB_OFFSET))(this, JLGCMPJMDLO);
	}
};
