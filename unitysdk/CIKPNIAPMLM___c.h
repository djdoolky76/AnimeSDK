#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace System { class String; }
namespace System { template <typename T> class Action_1; }

#define CIKPNIAPMLM___C_IKLMDKCHJCG_OFFSET UNITYSDK_OFFSET(0x153379F0)
#define CIKPNIAPMLM___C_LNFHPKALGOM_OFFSET UNITYSDK_OFFSET(0x15337A50)
#define CIKPNIAPMLM___C__CCTOR_OFFSET UNITYSDK_OFFSET(0x153379A0)
#define CIKPNIAPMLM___C__CTOR_OFFSET UNITYSDK_OFFSET(0x153379E0)

inline static constexpr unsigned int CIKPNIAPMLM___c_TypeDefinitionIndex = 73646;

class CIKPNIAPMLM___c : public ::System::Object
{
public:
	static ::System::Action_1<::System::String*>** StaticGet___9__0_0()
	{
		return (::System::Action_1<::System::String*>**)Il2CppClass::FromTypeDefinitionIndex(CIKPNIAPMLM___c_TypeDefinitionIndex)->GetStaticField(0x31200);
	}
	static ::System::Object** StaticGet___9()
	{
		return (::System::Object**)Il2CppClass::FromTypeDefinitionIndex(CIKPNIAPMLM___c_TypeDefinitionIndex)->GetStaticField(0x31208);
	}
	static ::System::Action_1<::System::String*>** StaticGet___9__3_0()
	{
		return (::System::Action_1<::System::String*>**)Il2CppClass::FromTypeDefinitionIndex(CIKPNIAPMLM___c_TypeDefinitionIndex)->GetStaticField(0x31210);
	}

	static ::System::Void _cctor()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + CIKPNIAPMLM___C__CCTOR_OFFSET))();
	}

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CIKPNIAPMLM___C__CTOR_OFFSET))(this);
	}

	::System::Void IKLMDKCHJCG(::System::String* ELCCAICKGEC)
	{
		return ((::System::Void(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + CIKPNIAPMLM___C_IKLMDKCHJCG_OFFSET))(this, ELCCAICKGEC);
	}

	::System::Void LNFHPKALGOM(::System::String* ELCCAICKGEC)
	{
		return ((::System::Void(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + CIKPNIAPMLM___C_LNFHPKALGOM_OFFSET))(this, ELCCAICKGEC);
	}
};
