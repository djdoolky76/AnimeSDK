#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class JGNCIONCKNN;
class NMNIJNNFPGP;
class NPECNJDLMFD;
namespace System { class Object; }
namespace System::Collections { class IEnumerator; }
namespace System::Collections::Generic { template <typename T> class IEnumerator_1; }

#define JGNCIONCKNN__GETBUTTONS_D__4_CTOR_OFFSET UNITYSDK_OFFSET(0xB19FB90)
#define JGNCIONCKNN__GETBUTTONS_D__4_MOVENEXT_OFFSET UNITYSDK_OFFSET(0xB1A4160)
#define JGNCIONCKNN__GETBUTTONS_D__4_SYSTEM_COLLECTIONS_GENERIC_IENUMERABLE_RPG_CLIENT_IBATTLESKILLBUTTON__GETENUMERATOR_OFFSET UNITYSDK_OFFSET(0xB1A4A40)
#define JGNCIONCKNN__GETBUTTONS_D__4_SYSTEM_COLLECTIONS_GENERIC_IENUMERATOR_RPG_CLIENT_IBATTLESKILLBUTTON__GET_CURRENT_OFFSET UNITYSDK_OFFSET(0xB1A49D0)
#define JGNCIONCKNN__GETBUTTONS_D__4_SYSTEM_COLLECTIONS_IENUMERABLE_GETENUMERATOR_OFFSET UNITYSDK_OFFSET(0xB1A4AA0)
#define JGNCIONCKNN__GETBUTTONS_D__4_SYSTEM_COLLECTIONS_IENUMERATOR_GET_CURRENT_OFFSET UNITYSDK_OFFSET(0xB1A4A30)
#define JGNCIONCKNN__GETBUTTONS_D__4_SYSTEM_COLLECTIONS_IENUMERATOR_RESET_OFFSET UNITYSDK_OFFSET(0xB1A49E0)
#define JGNCIONCKNN__GETBUTTONS_D__4_SYSTEM_IDISPOSABLE_DISPOSE_OFFSET UNITYSDK_OFFSET(0xB1A3EA0)
#define JGNCIONCKNN__GETBUTTONS_D__4___M__FINALLY1_OFFSET UNITYSDK_OFFSET(0xB1A4060)
#define JGNCIONCKNN__GETBUTTONS_D__4___M__FINALLY2_OFFSET UNITYSDK_OFFSET(0xB1A3F60)

inline static constexpr unsigned int JGNCIONCKNN__GetButtons_d__4_TypeDefinitionIndex = 71962;

	template <typename T1, typename T2, typename T3, typename T4>
	class JGNCIONCKNN__GetButtons_d__4 : public ::System::Object
	{
	public:
		::System::Collections::Generic::IEnumerator_1<::NMNIJNNFPGP*>* __7__wrap2; // 0x10
		::JGNCIONCKNN* __4__this; // 0x18
		::System::Collections::Generic::IEnumerator_1<::NPECNJDLMFD*>* __7__wrap1; // 0x20
		::NMNIJNNFPGP* __2__current; // 0x28
		::System::Int32 __1__state; // 0x30
		::System::Int32 __l__initialThreadId; // 0x34
		::System::Void _ctor(::System::Int32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + JGNCIONCKNN__GETBUTTONS_D__4_CTOR_OFFSET))(this, a1);
		}

		::System::Void System_IDisposable_Dispose()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + JGNCIONCKNN__GETBUTTONS_D__4_SYSTEM_IDISPOSABLE_DISPOSE_OFFSET))(this);
		}

		::System::Boolean MoveNext()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + JGNCIONCKNN__GETBUTTONS_D__4_MOVENEXT_OFFSET))(this);
		}

		::System::Void __m__Finally1()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + JGNCIONCKNN__GETBUTTONS_D__4___M__FINALLY1_OFFSET))(this);
		}

		::System::Void __m__Finally2()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + JGNCIONCKNN__GETBUTTONS_D__4___M__FINALLY2_OFFSET))(this);
		}

		::NMNIJNNFPGP* System_Collections_Generic_IEnumerator_RPG_Client_IBattleSkillButton__get_Current()
		{
			return ((::NMNIJNNFPGP*(*)(::PVOID))((::PBYTE)hIl2Cpp + JGNCIONCKNN__GETBUTTONS_D__4_SYSTEM_COLLECTIONS_GENERIC_IENUMERATOR_RPG_CLIENT_IBATTLESKILLBUTTON__GET_CURRENT_OFFSET))(this);
		}

		::System::Void System_Collections_IEnumerator_Reset()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + JGNCIONCKNN__GETBUTTONS_D__4_SYSTEM_COLLECTIONS_IENUMERATOR_RESET_OFFSET))(this);
		}

		::System::Object* System_Collections_IEnumerator_get_Current()
		{
			return ((::System::Object*(*)(::PVOID))((::PBYTE)hIl2Cpp + JGNCIONCKNN__GETBUTTONS_D__4_SYSTEM_COLLECTIONS_IENUMERATOR_GET_CURRENT_OFFSET))(this);
		}

		::System::Collections::Generic::IEnumerator_1<::NMNIJNNFPGP*>* System_Collections_Generic_IEnumerable_RPG_Client_IBattleSkillButton__GetEnumerator()
		{
			return ((::System::Collections::Generic::IEnumerator_1<::NMNIJNNFPGP*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + JGNCIONCKNN__GETBUTTONS_D__4_SYSTEM_COLLECTIONS_GENERIC_IENUMERABLE_RPG_CLIENT_IBATTLESKILLBUTTON__GETENUMERATOR_OFFSET))(this);
		}

		::System::Collections::IEnumerator* System_Collections_IEnumerable_GetEnumerator()
		{
			return ((::System::Collections::IEnumerator*(*)(::PVOID))((::PBYTE)hIl2Cpp + JGNCIONCKNN__GETBUTTONS_D__4_SYSTEM_COLLECTIONS_IENUMERABLE_GETENUMERATOR_OFFSET))(this);
		}

	};
