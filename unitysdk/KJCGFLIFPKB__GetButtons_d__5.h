#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/UISkillIndex.h"
#include "unitysdk/System/Object.h"
class KJCGFLIFPKB;
class NMNIJNNFPGP;
namespace System { class Object; }
namespace System::Collections { class IEnumerator; }
namespace System::Collections::Generic { template <typename T> class IEnumerator_1; }

#define KJCGFLIFPKB__GETBUTTONS_D__5_CTOR_OFFSET UNITYSDK_OFFSET(0xB436A90)
#define KJCGFLIFPKB__GETBUTTONS_D__5_MOVENEXT_OFFSET UNITYSDK_OFFSET(0xB436F60)
#define KJCGFLIFPKB__GETBUTTONS_D__5_SYSTEM_COLLECTIONS_GENERIC_IENUMERABLE_RPG_CLIENT_IBATTLESKILLBUTTON__GETENUMERATOR_OFFSET UNITYSDK_OFFSET(0xB4370B0)
#define KJCGFLIFPKB__GETBUTTONS_D__5_SYSTEM_COLLECTIONS_GENERIC_IENUMERATOR_RPG_CLIENT_IBATTLESKILLBUTTON__GET_CURRENT_OFFSET UNITYSDK_OFFSET(0xB437040)
#define KJCGFLIFPKB__GETBUTTONS_D__5_SYSTEM_COLLECTIONS_IENUMERABLE_GETENUMERATOR_OFFSET UNITYSDK_OFFSET(0xB437140)
#define KJCGFLIFPKB__GETBUTTONS_D__5_SYSTEM_COLLECTIONS_IENUMERATOR_GET_CURRENT_OFFSET UNITYSDK_OFFSET(0xB4370A0)
#define KJCGFLIFPKB__GETBUTTONS_D__5_SYSTEM_COLLECTIONS_IENUMERATOR_RESET_OFFSET UNITYSDK_OFFSET(0xB437050)
#define KJCGFLIFPKB__GETBUTTONS_D__5_SYSTEM_IDISPOSABLE_DISPOSE_OFFSET UNITYSDK_OFFSET(0xB436F50)

inline static constexpr unsigned int KJCGFLIFPKB__GetButtons_d__5_TypeDefinitionIndex = 71971;

	template <typename T1, typename T2, typename T3, typename T4, typename T5>
	class KJCGFLIFPKB__GetButtons_d__5 : public ::System::Object
	{
	public:
		::NMNIJNNFPGP* __2__current; // 0x10
		::KJCGFLIFPKB* __4__this; // 0x18
		::System::Int32 __l__initialThreadId; // 0x20
		::System::Int32 __1__state; // 0x24
		::RPG::Client::UISkillIndex uiSkillIndex; // 0x28
		::RPG::Client::UISkillIndex __3__uiSkillIndex; // 0x2C
		::System::Boolean ignoreIsShow; // 0x30
		::System::Boolean __3__ignoreIsShow; // 0x31
		::System::Void _ctor(::System::Int32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + KJCGFLIFPKB__GETBUTTONS_D__5_CTOR_OFFSET))(this, a1);
		}

		::System::Void System_IDisposable_Dispose()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + KJCGFLIFPKB__GETBUTTONS_D__5_SYSTEM_IDISPOSABLE_DISPOSE_OFFSET))(this);
		}

		::System::Boolean MoveNext()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + KJCGFLIFPKB__GETBUTTONS_D__5_MOVENEXT_OFFSET))(this);
		}

		::NMNIJNNFPGP* System_Collections_Generic_IEnumerator_RPG_Client_IBattleSkillButton__get_Current()
		{
			return ((::NMNIJNNFPGP*(*)(::PVOID))((::PBYTE)hIl2Cpp + KJCGFLIFPKB__GETBUTTONS_D__5_SYSTEM_COLLECTIONS_GENERIC_IENUMERATOR_RPG_CLIENT_IBATTLESKILLBUTTON__GET_CURRENT_OFFSET))(this);
		}

		::System::Void System_Collections_IEnumerator_Reset()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + KJCGFLIFPKB__GETBUTTONS_D__5_SYSTEM_COLLECTIONS_IENUMERATOR_RESET_OFFSET))(this);
		}

		::System::Object* System_Collections_IEnumerator_get_Current()
		{
			return ((::System::Object*(*)(::PVOID))((::PBYTE)hIl2Cpp + KJCGFLIFPKB__GETBUTTONS_D__5_SYSTEM_COLLECTIONS_IENUMERATOR_GET_CURRENT_OFFSET))(this);
		}

		::System::Collections::Generic::IEnumerator_1<::NMNIJNNFPGP*>* System_Collections_Generic_IEnumerable_RPG_Client_IBattleSkillButton__GetEnumerator()
		{
			return ((::System::Collections::Generic::IEnumerator_1<::NMNIJNNFPGP*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + KJCGFLIFPKB__GETBUTTONS_D__5_SYSTEM_COLLECTIONS_GENERIC_IENUMERABLE_RPG_CLIENT_IBATTLESKILLBUTTON__GETENUMERATOR_OFFSET))(this);
		}

		::System::Collections::IEnumerator* System_Collections_IEnumerable_GetEnumerator()
		{
			return ((::System::Collections::IEnumerator*(*)(::PVOID))((::PBYTE)hIl2Cpp + KJCGFLIFPKB__GETBUTTONS_D__5_SYSTEM_COLLECTIONS_IENUMERABLE_GETENUMERATOR_OFFSET))(this);
		}

	};
