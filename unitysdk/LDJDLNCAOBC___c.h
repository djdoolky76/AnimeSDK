#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class DIMBOKENEMI;
namespace MoleMole::Battle { class Entity; }
namespace System { template <typename T> class Action_1; }

#define LDJDLNCAOBC___C_AIKNDJKJEKN_OFFSET UNITYSDK_OFFSET(0x17683DA0)
#define LDJDLNCAOBC___C_ENIOFHLABCG_OFFSET UNITYSDK_OFFSET(0x17683E20)
#define LDJDLNCAOBC___C_NLKAIDADMKE_OFFSET UNITYSDK_OFFSET(0x17683E40)
#define LDJDLNCAOBC___C__CCTOR_OFFSET UNITYSDK_OFFSET(0x17683D50)
#define LDJDLNCAOBC___C__CTOR_OFFSET UNITYSDK_OFFSET(0x17683D90)

inline static constexpr unsigned int LDJDLNCAOBC___c_TypeDefinitionIndex = 60082;

class LDJDLNCAOBC___c : public ::System::Object
{
public:
	static ::System::Action_1<::DIMBOKENEMI*>** StaticGet___9__3_0()
	{
		return (::System::Action_1<::DIMBOKENEMI*>**)Il2CppClass::FromTypeDefinitionIndex(LDJDLNCAOBC___c_TypeDefinitionIndex)->GetStaticField(0x4BE40);
	}
	static ::System::Object** StaticGet___9()
	{
		return (::System::Object**)Il2CppClass::FromTypeDefinitionIndex(LDJDLNCAOBC___c_TypeDefinitionIndex)->GetStaticField(0x4BE48);
	}
	static ::System::Action_1<::MoleMole::Battle::Entity*>** StaticGet___9__38_0()
	{
		return (::System::Action_1<::MoleMole::Battle::Entity*>**)Il2CppClass::FromTypeDefinitionIndex(LDJDLNCAOBC___c_TypeDefinitionIndex)->GetStaticField(0x4BE50);
	}
	static ::System::Action_1<::DIMBOKENEMI*>** StaticGet___9__4_0()
	{
		return (::System::Action_1<::DIMBOKENEMI*>**)Il2CppClass::FromTypeDefinitionIndex(LDJDLNCAOBC___c_TypeDefinitionIndex)->GetStaticField(0x4BE58);
	}

	static ::System::Void _cctor()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + LDJDLNCAOBC___C__CCTOR_OFFSET))();
	}

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + LDJDLNCAOBC___C__CTOR_OFFSET))(this);
	}

	::System::Void AIKNDJKJEKN(::DIMBOKENEMI* OAOMIDFEKBJ)
	{
		return ((::System::Void(*)(::PVOID, ::DIMBOKENEMI*))((::PBYTE)hIl2Cpp + LDJDLNCAOBC___C_AIKNDJKJEKN_OFFSET))(this, OAOMIDFEKBJ);
	}

	::System::Void ENIOFHLABCG(::DIMBOKENEMI* OAOMIDFEKBJ)
	{
		return ((::System::Void(*)(::PVOID, ::DIMBOKENEMI*))((::PBYTE)hIl2Cpp + LDJDLNCAOBC___C_ENIOFHLABCG_OFFSET))(this, OAOMIDFEKBJ);
	}

	::System::Void NLKAIDADMKE(::MoleMole::Battle::Entity* KECKGDFIALJ)
	{
		return ((::System::Void(*)(::PVOID, ::MoleMole::Battle::Entity*))((::PBYTE)hIl2Cpp + LDJDLNCAOBC___C_NLKAIDADMKE_OFFSET))(this, KECKGDFIALJ);
	}
};
