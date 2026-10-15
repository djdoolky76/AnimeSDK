#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class NMNIJNNFPGP;
class NNOFIHMOPLG;
namespace System { class Object; }
namespace System::Collections { class IEnumerator; }
namespace System::Collections::Generic { template <typename T> class IEnumerator_1; }

#define NNOFIHMOPLG__GETALLBUTTONS_D__8_CTOR_OFFSET UNITYSDK_OFFSET(0xBCD8DA0)
#define NNOFIHMOPLG__GETALLBUTTONS_D__8_MOVENEXT_OFFSET UNITYSDK_OFFSET(0xBCDA2C0)
#define NNOFIHMOPLG__GETALLBUTTONS_D__8_SYSTEM_COLLECTIONS_GENERIC_IENUMERABLE_RPG_CLIENT_IBATTLESKILLBUTTON__GETENUMERATOR_OFFSET UNITYSDK_OFFSET(0xBCDA580)
#define NNOFIHMOPLG__GETALLBUTTONS_D__8_SYSTEM_COLLECTIONS_GENERIC_IENUMERATOR_RPG_CLIENT_IBATTLESKILLBUTTON__GET_CURRENT_OFFSET UNITYSDK_OFFSET(0xBCDA510)
#define NNOFIHMOPLG__GETALLBUTTONS_D__8_SYSTEM_COLLECTIONS_IENUMERABLE_GETENUMERATOR_OFFSET UNITYSDK_OFFSET(0xBCDA600)
#define NNOFIHMOPLG__GETALLBUTTONS_D__8_SYSTEM_COLLECTIONS_IENUMERATOR_GET_CURRENT_OFFSET UNITYSDK_OFFSET(0xBCDA570)
#define NNOFIHMOPLG__GETALLBUTTONS_D__8_SYSTEM_COLLECTIONS_IENUMERATOR_RESET_OFFSET UNITYSDK_OFFSET(0xBCDA520)
#define NNOFIHMOPLG__GETALLBUTTONS_D__8_SYSTEM_IDISPOSABLE_DISPOSE_OFFSET UNITYSDK_OFFSET(0xBCDA2A0)
#define NNOFIHMOPLG__GETALLBUTTONS_D__8___M__FINALLY1_OFFSET UNITYSDK_OFFSET(0xBCDA2B0)

inline static constexpr unsigned int NNOFIHMOPLG__GetAllButtons_d__8_TypeDefinitionIndex = 71988;

	template <typename T1, typename T2, typename T3, typename T4, typename T5, typename T6, typename T7, typename T8>
	class NNOFIHMOPLG__GetAllButtons_d__8 : public ::System::Object
	{
	public:
		::System::Object* __7__wrap1; // 0x10
		::System::Byte _padding0[0x10];
		::NMNIJNNFPGP* __2__current; // 0x28
		::NNOFIHMOPLG* __4__this; // 0x30
		::System::Int32 __1__state; // 0x38
		::System::Int32 __l__initialThreadId; // 0x3C
		::System::Void _ctor(::System::Int32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + NNOFIHMOPLG__GETALLBUTTONS_D__8_CTOR_OFFSET))(this, a1);
		}

		::System::Void System_IDisposable_Dispose()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + NNOFIHMOPLG__GETALLBUTTONS_D__8_SYSTEM_IDISPOSABLE_DISPOSE_OFFSET))(this);
		}

		::System::Boolean MoveNext()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + NNOFIHMOPLG__GETALLBUTTONS_D__8_MOVENEXT_OFFSET))(this);
		}

		::System::Void __m__Finally1()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + NNOFIHMOPLG__GETALLBUTTONS_D__8___M__FINALLY1_OFFSET))(this);
		}

		::NMNIJNNFPGP* System_Collections_Generic_IEnumerator_RPG_Client_IBattleSkillButton__get_Current()
		{
			return ((::NMNIJNNFPGP*(*)(::PVOID))((::PBYTE)hIl2Cpp + NNOFIHMOPLG__GETALLBUTTONS_D__8_SYSTEM_COLLECTIONS_GENERIC_IENUMERATOR_RPG_CLIENT_IBATTLESKILLBUTTON__GET_CURRENT_OFFSET))(this);
		}

		::System::Void System_Collections_IEnumerator_Reset()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + NNOFIHMOPLG__GETALLBUTTONS_D__8_SYSTEM_COLLECTIONS_IENUMERATOR_RESET_OFFSET))(this);
		}

		::System::Object* System_Collections_IEnumerator_get_Current()
		{
			return ((::System::Object*(*)(::PVOID))((::PBYTE)hIl2Cpp + NNOFIHMOPLG__GETALLBUTTONS_D__8_SYSTEM_COLLECTIONS_IENUMERATOR_GET_CURRENT_OFFSET))(this);
		}

		::System::Collections::Generic::IEnumerator_1<::NMNIJNNFPGP*>* System_Collections_Generic_IEnumerable_RPG_Client_IBattleSkillButton__GetEnumerator()
		{
			return ((::System::Collections::Generic::IEnumerator_1<::NMNIJNNFPGP*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + NNOFIHMOPLG__GETALLBUTTONS_D__8_SYSTEM_COLLECTIONS_GENERIC_IENUMERABLE_RPG_CLIENT_IBATTLESKILLBUTTON__GETENUMERATOR_OFFSET))(this);
		}

		::System::Collections::IEnumerator* System_Collections_IEnumerable_GetEnumerator()
		{
			return ((::System::Collections::IEnumerator*(*)(::PVOID))((::PBYTE)hIl2Cpp + NNOFIHMOPLG__GETALLBUTTONS_D__8_SYSTEM_COLLECTIONS_IENUMERABLE_GETENUMERATOR_OFFSET))(this);
		}

	};
