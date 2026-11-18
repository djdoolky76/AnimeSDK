#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace MoleMole { class HollowEntityConfig; }
namespace System { template <typename T> class Action_1; }

#define LBLEHIIMFJA___C_HFIJIDHOKOP_OFFSET UNITYSDK_OFFSET(0x129BBFD0)
#define LBLEHIIMFJA___C__CCTOR_OFFSET UNITYSDK_OFFSET(0x129BBF80)
#define LBLEHIIMFJA___C__CTOR_OFFSET UNITYSDK_OFFSET(0x129BBFC0)

inline static constexpr unsigned int LBLEHIIMFJA___c_TypeDefinitionIndex = 57549;

class LBLEHIIMFJA___c : public ::System::Object
{
public:
	static ::System::Object** StaticGet___9()
	{
		return (::System::Object**)Il2CppClass::FromTypeDefinitionIndex(LBLEHIIMFJA___c_TypeDefinitionIndex)->GetStaticField(0x414F0);
	}
	static ::System::Action_1<::MoleMole::HollowEntityConfig*>** StaticGet___9__2_0()
	{
		return (::System::Action_1<::MoleMole::HollowEntityConfig*>**)Il2CppClass::FromTypeDefinitionIndex(LBLEHIIMFJA___c_TypeDefinitionIndex)->GetStaticField(0x414F8);
	}

	static ::System::Void _cctor()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + LBLEHIIMFJA___C__CCTOR_OFFSET))();
	}

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + LBLEHIIMFJA___C__CTOR_OFFSET))(this);
	}

	::System::Void HFIJIDHOKOP(::MoleMole::HollowEntityConfig* NGLKIKLLLFL)
	{
		return ((::System::Void(*)(::PVOID, ::MoleMole::HollowEntityConfig*))((::PBYTE)hIl2Cpp + LBLEHIIMFJA___C_HFIJIDHOKOP_OFFSET))(this, NGLKIKLLLFL);
	}
};
