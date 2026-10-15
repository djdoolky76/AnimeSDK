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

#define JGNCIONCKNN__GETBUTTONS_D__3_CTOR_OFFSET UNITYSDK_OFFSET(0xB1997A0)
#define JGNCIONCKNN__GETBUTTONS_D__3_MOVENEXT_OFFSET UNITYSDK_OFFSET(0xB19D170)
#define JGNCIONCKNN__GETBUTTONS_D__3_SYSTEM_COLLECTIONS_GENERIC_IENUMERABLE_RPG_CLIENT_IBATTLESKILLBUTTON__GETENUMERATOR_OFFSET UNITYSDK_OFFSET(0xB19DA70)
#define JGNCIONCKNN__GETBUTTONS_D__3_SYSTEM_COLLECTIONS_GENERIC_IENUMERATOR_RPG_CLIENT_IBATTLESKILLBUTTON__GET_CURRENT_OFFSET UNITYSDK_OFFSET(0xB19DA00)
#define JGNCIONCKNN__GETBUTTONS_D__3_SYSTEM_COLLECTIONS_IENUMERABLE_GETENUMERATOR_OFFSET UNITYSDK_OFFSET(0xB19DAD0)
#define JGNCIONCKNN__GETBUTTONS_D__3_SYSTEM_COLLECTIONS_IENUMERATOR_GET_CURRENT_OFFSET UNITYSDK_OFFSET(0xB19DA60)
#define JGNCIONCKNN__GETBUTTONS_D__3_SYSTEM_COLLECTIONS_IENUMERATOR_RESET_OFFSET UNITYSDK_OFFSET(0xB19DA10)
#define JGNCIONCKNN__GETBUTTONS_D__3_SYSTEM_IDISPOSABLE_DISPOSE_OFFSET UNITYSDK_OFFSET(0xB19CEB0)
#define JGNCIONCKNN__GETBUTTONS_D__3___M__FINALLY1_OFFSET UNITYSDK_OFFSET(0xB19D070)
#define JGNCIONCKNN__GETBUTTONS_D__3___M__FINALLY2_OFFSET UNITYSDK_OFFSET(0xB19CF70)

inline static constexpr unsigned int JGNCIONCKNN__GetButtons_d__3_TypeDefinitionIndex = 71960;

	template <typename T1, typename T2, typename T3>
	class JGNCIONCKNN__GetButtons_d__3 : public ::System::Object
	{
	public:
		::System::Collections::Generic::IEnumerator_1<::NPECNJDLMFD*>* __7__wrap1; // 0x10
		::NMNIJNNFPGP* __2__current; // 0x18
		::System::Collections::Generic::IEnumerator_1<::NMNIJNNFPGP*>* __7__wrap2; // 0x20
		::JGNCIONCKNN* __4__this; // 0x28
		::RPG::Client::UISkillIndex uiSkillIndex; // 0x30
		::System::Int32 __1__state; // 0x34
		::RPG::Client::UISkillIndex __3__uiSkillIndex; // 0x38
		::System::Int32 __l__initialThreadId; // 0x3C
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
