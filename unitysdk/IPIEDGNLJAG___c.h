#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace MoleMole::GalGame { class MainCityChatRandomChoiceDisplayItem; }
namespace MoleMole::GalGame { class MainCityChatTransitionDisplayItem; }
namespace System { template <typename T1, typename T2> class Func_2; }
namespace System::Linq { template <typename T1, typename T2> class IGrouping_2; }

#define IPIEDGNLJAG___C_CENCJABAFMH_OFFSET UNITYSDK_OFFSET(0x1ACC5C10)
#define IPIEDGNLJAG___C_EKBCHKAHJFP_OFFSET UNITYSDK_OFFSET(0x1ACC5C20)
#define IPIEDGNLJAG___C_IIAJENBFAEC_OFFSET UNITYSDK_OFFSET(0x1ACC5BB0)
#define IPIEDGNLJAG___C__CCTOR_OFFSET UNITYSDK_OFFSET(0x1ACC5B60)
#define IPIEDGNLJAG___C__CTOR_OFFSET UNITYSDK_OFFSET(0x1ACC5BA0)

inline static constexpr unsigned int IPIEDGNLJAG___c_TypeDefinitionIndex = 77722;

class IPIEDGNLJAG___c : public ::System::Object
{
public:
	static ::System::Object** StaticGet___9()
	{
		return (::System::Object**)Il2CppClass::FromTypeDefinitionIndex(IPIEDGNLJAG___c_TypeDefinitionIndex)->GetStaticField(0x3B410);
	}
	static ::System::Func_2<::MoleMole::GalGame::MainCityChatRandomChoiceDisplayItem*, ::MoleMole::GalGame::MainCityChatTransitionDisplayItem*>** StaticGet___9__2_2()
	{
		return (::System::Func_2<::MoleMole::GalGame::MainCityChatRandomChoiceDisplayItem*, ::MoleMole::GalGame::MainCityChatTransitionDisplayItem*>**)Il2CppClass::FromTypeDefinitionIndex(IPIEDGNLJAG___c_TypeDefinitionIndex)->GetStaticField(0x3B418);
	}
	static ::System::Func_2<::System::Linq::IGrouping_2<::System::Int32, ::MoleMole::GalGame::MainCityChatRandomChoiceDisplayItem*>*, ::MoleMole::GalGame::MainCityChatRandomChoiceDisplayItem*>** StaticGet___9__2_1()
	{
		return (::System::Func_2<::System::Linq::IGrouping_2<::System::Int32, ::MoleMole::GalGame::MainCityChatRandomChoiceDisplayItem*>*, ::MoleMole::GalGame::MainCityChatRandomChoiceDisplayItem*>**)Il2CppClass::FromTypeDefinitionIndex(IPIEDGNLJAG___c_TypeDefinitionIndex)->GetStaticField(0x3B420);
	}
	static ::System::Func_2<::MoleMole::GalGame::MainCityChatRandomChoiceDisplayItem*, ::System::Int32>** StaticGet___9__2_0()
	{
		return (::System::Func_2<::MoleMole::GalGame::MainCityChatRandomChoiceDisplayItem*, ::System::Int32>**)Il2CppClass::FromTypeDefinitionIndex(IPIEDGNLJAG___c_TypeDefinitionIndex)->GetStaticField(0x3B428);
	}

	static ::System::Void _cctor()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + IPIEDGNLJAG___C__CCTOR_OFFSET))();
	}

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + IPIEDGNLJAG___C__CTOR_OFFSET))(this);
	}

	::MoleMole::GalGame::MainCityChatRandomChoiceDisplayItem* IIAJENBFAEC(::System::Linq::IGrouping_2<::System::Int32, ::MoleMole::GalGame::MainCityChatRandomChoiceDisplayItem*>* KPNIHKEKDOC)
	{
		return ((::MoleMole::GalGame::MainCityChatRandomChoiceDisplayItem*(*)(::PVOID, ::System::Linq::IGrouping_2<::System::Int32, ::MoleMole::GalGame::MainCityChatRandomChoiceDisplayItem*>*))((::PBYTE)hIl2Cpp + IPIEDGNLJAG___C_IIAJENBFAEC_OFFSET))(this, KPNIHKEKDOC);
	}

	::MoleMole::GalGame::MainCityChatTransitionDisplayItem* CENCJABAFMH(::MoleMole::GalGame::MainCityChatRandomChoiceDisplayItem* KPFDLNFPMOM)
	{
		return ((::MoleMole::GalGame::MainCityChatTransitionDisplayItem*(*)(::PVOID, ::MoleMole::GalGame::MainCityChatRandomChoiceDisplayItem*))((::PBYTE)hIl2Cpp + IPIEDGNLJAG___C_CENCJABAFMH_OFFSET))(this, KPFDLNFPMOM);
	}

	::System::Int32 EKBCHKAHJFP(::MoleMole::GalGame::MainCityChatRandomChoiceDisplayItem* IPMMCGDMODG)
	{
		return ((::System::Int32(*)(::PVOID, ::MoleMole::GalGame::MainCityChatRandomChoiceDisplayItem*))((::PBYTE)hIl2Cpp + IPIEDGNLJAG___C_EKBCHKAHJFP_OFFSET))(this, IPMMCGDMODG);
	}
};
