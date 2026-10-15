#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/UISkillIndex.h"
#include "unitysdk/System/Object.h"
class MMHPBKNKBGP_EHCHDILLGPK;
class NMNIJNNFPGP;
namespace System { class Object; }
namespace System::Collections { class IEnumerator; }
namespace System::Collections::Generic { template <typename T> class IEnumerator_1; }

#define MMHPBKNKBGP_EHCHDILLGPK___BUTTONS_D__26_CTOR_OFFSET UNITYSDK_OFFSET(0xB9C6DD0)
#define MMHPBKNKBGP_EHCHDILLGPK___BUTTONS_D__26_MOVENEXT_OFFSET UNITYSDK_OFFSET(0xB9C8F70)
#define MMHPBKNKBGP_EHCHDILLGPK___BUTTONS_D__26_SYSTEM_COLLECTIONS_GENERIC_IENUMERABLE_RPG_CLIENT_IBATTLESKILLBUTTON__GETENUMERATOR_OFFSET UNITYSDK_OFFSET(0xB9C9680)
#define MMHPBKNKBGP_EHCHDILLGPK___BUTTONS_D__26_SYSTEM_COLLECTIONS_GENERIC_IENUMERATOR_RPG_CLIENT_IBATTLESKILLBUTTON__GET_CURRENT_OFFSET UNITYSDK_OFFSET(0xB9C9610)
#define MMHPBKNKBGP_EHCHDILLGPK___BUTTONS_D__26_SYSTEM_COLLECTIONS_IENUMERABLE_GETENUMERATOR_OFFSET UNITYSDK_OFFSET(0xB9C96E0)
#define MMHPBKNKBGP_EHCHDILLGPK___BUTTONS_D__26_SYSTEM_COLLECTIONS_IENUMERATOR_GET_CURRENT_OFFSET UNITYSDK_OFFSET(0xB9C9670)
#define MMHPBKNKBGP_EHCHDILLGPK___BUTTONS_D__26_SYSTEM_COLLECTIONS_IENUMERATOR_RESET_OFFSET UNITYSDK_OFFSET(0xB9C9620)
#define MMHPBKNKBGP_EHCHDILLGPK___BUTTONS_D__26_SYSTEM_IDISPOSABLE_DISPOSE_OFFSET UNITYSDK_OFFSET(0xB9C8E30)
#define MMHPBKNKBGP_EHCHDILLGPK___BUTTONS_D__26___M__FINALLY1_OFFSET UNITYSDK_OFFSET(0xB9C8E70)

inline static constexpr unsigned int MMHPBKNKBGP_EHCHDILLGPK___Buttons_d__26_TypeDefinitionIndex = 71903;

	template <typename T1, typename T2, typename T3, typename T4, typename T5, typename T6, typename T7, typename T8, typename T9, typename T10, typename T11, typename T12, typename T13, typename T14, typename T15, typename T16, typename T17, typename T18, typename T19, typename T20, typename T21, typename T22, typename T23, typename T24, typename T25, typename T26>
	class MMHPBKNKBGP_EHCHDILLGPK___Buttons_d__26 : public ::System::Object
	{
	public:
		::System::Collections::Generic::IEnumerator_1<::NMNIJNNFPGP*>* __7__wrap1; // 0x10
		::NMNIJNNFPGP* __2__current; // 0x18
		::MMHPBKNKBGP_EHCHDILLGPK* __4__this; // 0x20
		::System::Int32 __1__state; // 0x28
		::System::Int32 __l__initialThreadId; // 0x2C
		::RPG::Client::UISkillIndex __3__uiSkillIndex; // 0x30
		::RPG::Client::UISkillIndex uiSkillIndex; // 0x34
		::System::Void _ctor(::System::Int32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + MMHPBKNKBGP_EHCHDILLGPK___BUTTONS_D__26_CTOR_OFFSET))(this, a1);
		}

		::System::Void System_IDisposable_Dispose()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MMHPBKNKBGP_EHCHDILLGPK___BUTTONS_D__26_SYSTEM_IDISPOSABLE_DISPOSE_OFFSET))(this);
		}

		::System::Boolean MoveNext()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + MMHPBKNKBGP_EHCHDILLGPK___BUTTONS_D__26_MOVENEXT_OFFSET))(this);
		}

		::System::Void __m__Finally1()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MMHPBKNKBGP_EHCHDILLGPK___BUTTONS_D__26___M__FINALLY1_OFFSET))(this);
		}

		::NMNIJNNFPGP* System_Collections_Generic_IEnumerator_RPG_Client_IBattleSkillButton__get_Current()
		{
			return ((::NMNIJNNFPGP*(*)(::PVOID))((::PBYTE)hIl2Cpp + MMHPBKNKBGP_EHCHDILLGPK___BUTTONS_D__26_SYSTEM_COLLECTIONS_GENERIC_IENUMERATOR_RPG_CLIENT_IBATTLESKILLBUTTON__GET_CURRENT_OFFSET))(this);
		}

		::System::Void System_Collections_IEnumerator_Reset()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MMHPBKNKBGP_EHCHDILLGPK___BUTTONS_D__26_SYSTEM_COLLECTIONS_IENUMERATOR_RESET_OFFSET))(this);
		}

		::System::Object* System_Collections_IEnumerator_get_Current()
		{
			return ((::System::Object*(*)(::PVOID))((::PBYTE)hIl2Cpp + MMHPBKNKBGP_EHCHDILLGPK___BUTTONS_D__26_SYSTEM_COLLECTIONS_IENUMERATOR_GET_CURRENT_OFFSET))(this);
		}

		::System::Collections::Generic::IEnumerator_1<::NMNIJNNFPGP*>* System_Collections_Generic_IEnumerable_RPG_Client_IBattleSkillButton__GetEnumerator()
		{
			return ((::System::Collections::Generic::IEnumerator_1<::NMNIJNNFPGP*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + MMHPBKNKBGP_EHCHDILLGPK___BUTTONS_D__26_SYSTEM_COLLECTIONS_GENERIC_IENUMERABLE_RPG_CLIENT_IBATTLESKILLBUTTON__GETENUMERATOR_OFFSET))(this);
		}

		::System::Collections::IEnumerator* System_Collections_IEnumerable_GetEnumerator()
		{
			return ((::System::Collections::IEnumerator*(*)(::PVOID))((::PBYTE)hIl2Cpp + MMHPBKNKBGP_EHCHDILLGPK___BUTTONS_D__26_SYSTEM_COLLECTIONS_IENUMERABLE_GETENUMERATOR_OFFSET))(this);
		}

	};
