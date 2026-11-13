#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/UISkillIndex.h"
#include "unitysdk/System/Object.h"
class JGNCIONCKNN;
class NMNIJNNFPGP;
class NPECNJDLMFD;
namespace System { class Object; }
namespace System::Collections { class IEnumerator; }
namespace System::Collections::Generic { template <typename T> class IEnumerator_1; }

#define JGNCIONCKNN__GETBUTTONS_D__3_CTOR_OFFSET UNITYSDK_OFFSET(0x193546E0)
#define JGNCIONCKNN__GETBUTTONS_D__3_MOVENEXT_OFFSET UNITYSDK_OFFSET(0x193580D0)
#define JGNCIONCKNN__GETBUTTONS_D__3_SYSTEM_COLLECTIONS_GENERIC_IENUMERABLE_RPG_CLIENT_IBATTLESKILLBUTTON__GETENUMERATOR_OFFSET UNITYSDK_OFFSET(0x193589C0)
#define JGNCIONCKNN__GETBUTTONS_D__3_SYSTEM_COLLECTIONS_GENERIC_IENUMERATOR_RPG_CLIENT_IBATTLESKILLBUTTON__GET_CURRENT_OFFSET UNITYSDK_OFFSET(0x19358950)
#define JGNCIONCKNN__GETBUTTONS_D__3_SYSTEM_COLLECTIONS_IENUMERABLE_GETENUMERATOR_OFFSET UNITYSDK_OFFSET(0x19358A20)
#define JGNCIONCKNN__GETBUTTONS_D__3_SYSTEM_COLLECTIONS_IENUMERATOR_GET_CURRENT_OFFSET UNITYSDK_OFFSET(0x193589B0)
#define JGNCIONCKNN__GETBUTTONS_D__3_SYSTEM_COLLECTIONS_IENUMERATOR_RESET_OFFSET UNITYSDK_OFFSET(0x19358960)
#define JGNCIONCKNN__GETBUTTONS_D__3_SYSTEM_IDISPOSABLE_DISPOSE_OFFSET UNITYSDK_OFFSET(0x19357E20)
#define JGNCIONCKNN__GETBUTTONS_D__3___M__FINALLY1_OFFSET UNITYSDK_OFFSET(0x19357FD0)
#define JGNCIONCKNN__GETBUTTONS_D__3___M__FINALLY2_OFFSET UNITYSDK_OFFSET(0x19357ED0)

inline static constexpr unsigned int JGNCIONCKNN__GetButtons_d__3_TypeDefinitionIndex = 73984;

	template <typename T1, typename T2, typename T3>
	class JGNCIONCKNN__GetButtons_d__3 : public ::System::Object
	{
	public:
		::JGNCIONCKNN* __4__this; // 0x10
		::NMNIJNNFPGP* __2__current; // 0x18
		::System::Collections::Generic::IEnumerator_1<::NPECNJDLMFD*>* __7__wrap1; // 0x20
		::System::Collections::Generic::IEnumerator_1<::NMNIJNNFPGP*>* __7__wrap2; // 0x28
		::RPG::Client::UISkillIndex __3__uiSkillIndex; // 0x30
		::System::Int32 __1__state; // 0x34
		::System::Int32 __l__initialThreadId; // 0x38
		::RPG::Client::UISkillIndex uiSkillIndex; // 0x3C
		::System::Void _ctor(::System::Int32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + JGNCIONCKNN__GETBUTTONS_D__3_CTOR_OFFSET))(this, a1);
		}

		::System::Void System_IDisposable_Dispose()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + JGNCIONCKNN__GETBUTTONS_D__3_SYSTEM_IDISPOSABLE_DISPOSE_OFFSET))(this);
		}

		::System::Boolean MoveNext()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + JGNCIONCKNN__GETBUTTONS_D__3_MOVENEXT_OFFSET))(this);
		}

		::System::Void __m__Finally1()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + JGNCIONCKNN__GETBUTTONS_D__3___M__FINALLY1_OFFSET))(this);
		}

		::System::Void __m__Finally2()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + JGNCIONCKNN__GETBUTTONS_D__3___M__FINALLY2_OFFSET))(this);
		}

		::NMNIJNNFPGP* System_Collections_Generic_IEnumerator_RPG_Client_IBattleSkillButton__get_Current()
		{
			return ((::NMNIJNNFPGP*(*)(::PVOID))((::PBYTE)hIl2Cpp + JGNCIONCKNN__GETBUTTONS_D__3_SYSTEM_COLLECTIONS_GENERIC_IENUMERATOR_RPG_CLIENT_IBATTLESKILLBUTTON__GET_CURRENT_OFFSET))(this);
		}

		::System::Void System_Collections_IEnumerator_Reset()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + JGNCIONCKNN__GETBUTTONS_D__3_SYSTEM_COLLECTIONS_IENUMERATOR_RESET_OFFSET))(this);
		}

		::System::Object* System_Collections_IEnumerator_get_Current()
		{
			return ((::System::Object*(*)(::PVOID))((::PBYTE)hIl2Cpp + JGNCIONCKNN__GETBUTTONS_D__3_SYSTEM_COLLECTIONS_IENUMERATOR_GET_CURRENT_OFFSET))(this);
		}

		::System::Collections::Generic::IEnumerator_1<::NMNIJNNFPGP*>* System_Collections_Generic_IEnumerable_RPG_Client_IBattleSkillButton__GetEnumerator()
		{
			return ((::System::Collections::Generic::IEnumerator_1<::NMNIJNNFPGP*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + JGNCIONCKNN__GETBUTTONS_D__3_SYSTEM_COLLECTIONS_GENERIC_IENUMERABLE_RPG_CLIENT_IBATTLESKILLBUTTON__GETENUMERATOR_OFFSET))(this);
		}

		::System::Collections::IEnumerator* System_Collections_IEnumerable_GetEnumerator()
		{
			return ((::System::Collections::IEnumerator*(*)(::PVOID))((::PBYTE)hIl2Cpp + JGNCIONCKNN__GETBUTTONS_D__3_SYSTEM_COLLECTIONS_IENUMERABLE_GETENUMERATOR_OFFSET))(this);
		}

	};
