#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class AINLHDFJGBJ;
namespace RPG::Client { class GridFightRole; }
namespace RPG::Client { class GridFightTrait; }
namespace RPG::Client { class GridFightUnlockTraitMember; }
namespace System { class Object; }
namespace System::Collections { class IEnumerator; }
namespace System::Collections::Generic { template <typename T> class IEnumerator_1; }

#define AINLHDFJGBJ__CREATETRAITS_D__8_CTOR_OFFSET UNITYSDK_OFFSET(0x19D2E7E0)
#define AINLHDFJGBJ__CREATETRAITS_D__8_MOVENEXT_OFFSET UNITYSDK_OFFSET(0x19D2EAA0)
#define AINLHDFJGBJ__CREATETRAITS_D__8_SYSTEM_COLLECTIONS_GENERIC_IENUMERABLE_RPG_CLIENT_GRIDFIGHTTRAIT__GETENUMERATOR_OFFSET UNITYSDK_OFFSET(0x19D2FF50)
#define AINLHDFJGBJ__CREATETRAITS_D__8_SYSTEM_COLLECTIONS_GENERIC_IENUMERATOR_RPG_CLIENT_GRIDFIGHTTRAIT__GET_CURRENT_OFFSET UNITYSDK_OFFSET(0x19D2FEE0)
#define AINLHDFJGBJ__CREATETRAITS_D__8_SYSTEM_COLLECTIONS_IENUMERABLE_GETENUMERATOR_OFFSET UNITYSDK_OFFSET(0x19D2FFD0)
#define AINLHDFJGBJ__CREATETRAITS_D__8_SYSTEM_COLLECTIONS_IENUMERATOR_GET_CURRENT_OFFSET UNITYSDK_OFFSET(0x19D2FF40)
#define AINLHDFJGBJ__CREATETRAITS_D__8_SYSTEM_COLLECTIONS_IENUMERATOR_RESET_OFFSET UNITYSDK_OFFSET(0x19D2FEF0)
#define AINLHDFJGBJ__CREATETRAITS_D__8_SYSTEM_IDISPOSABLE_DISPOSE_OFFSET UNITYSDK_OFFSET(0x19D2E800)
#define AINLHDFJGBJ__CREATETRAITS_D__8___M__FINALLY1_OFFSET UNITYSDK_OFFSET(0x19D2E890)
#define AINLHDFJGBJ__CREATETRAITS_D__8___M__FINALLY2_OFFSET UNITYSDK_OFFSET(0x19D2E8A0)
#define AINLHDFJGBJ__CREATETRAITS_D__8___M__FINALLY3_OFFSET UNITYSDK_OFFSET(0x19D2E9A0)

inline static constexpr unsigned int AINLHDFJGBJ__CreateTraits_d__8_TypeDefinitionIndex = 66791;

	template <typename T1, typename T2, typename T3, typename T4, typename T5, typename T6, typename T7, typename T8>
	class AINLHDFJGBJ__CreateTraits_d__8 : public ::System::Object
	{
	public:
		::Il2CppArray<::System::UInt32>* __7__wrap1; // 0x10
		::RPG::Client::GridFightTrait* __2__current; // 0x18
		::AINLHDFJGBJ* __4__this; // 0x20
		::System::Collections::Generic::IEnumerator_1<::RPG::Client::GridFightUnlockTraitMember*>* __7__wrap5; // 0x28
		::System::Collections::Generic::IEnumerator_1<::System::UInt32>* __7__wrap6; // 0x30
		::RPG::Client::GridFightTrait* _trait_5__4; // 0x38
		::RPG::Client::GridFightRole* role; // 0x40
		::RPG::Client::GridFightRole* __3__role; // 0x48
		::System::Object* __7__wrap4; // 0x50
		::System::Byte _padding0[0x10];
		::System::Int32 __l__initialThreadId; // 0x68
		::System::Int32 __7__wrap2; // 0x6C
		::System::Int32 __1__state; // 0x70
		::System::Void _ctor(::System::Int32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + AINLHDFJGBJ__CREATETRAITS_D__8_CTOR_OFFSET))(this, a1);
		}

		::System::Void System_IDisposable_Dispose()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + AINLHDFJGBJ__CREATETRAITS_D__8_SYSTEM_IDISPOSABLE_DISPOSE_OFFSET))(this);
		}

		::System::Boolean MoveNext()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + AINLHDFJGBJ__CREATETRAITS_D__8_MOVENEXT_OFFSET))(this);
		}

		::System::Void __m__Finally1()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + AINLHDFJGBJ__CREATETRAITS_D__8___M__FINALLY1_OFFSET))(this);
		}

		::System::Void __m__Finally2()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + AINLHDFJGBJ__CREATETRAITS_D__8___M__FINALLY2_OFFSET))(this);
		}

		::System::Void __m__Finally3()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + AINLHDFJGBJ__CREATETRAITS_D__8___M__FINALLY3_OFFSET))(this);
		}

		::RPG::Client::GridFightTrait* System_Collections_Generic_IEnumerator_RPG_Client_GridFightTrait__get_Current()
		{
			return ((::RPG::Client::GridFightTrait*(*)(::PVOID))((::PBYTE)hIl2Cpp + AINLHDFJGBJ__CREATETRAITS_D__8_SYSTEM_COLLECTIONS_GENERIC_IENUMERATOR_RPG_CLIENT_GRIDFIGHTTRAIT__GET_CURRENT_OFFSET))(this);
		}

		::System::Void System_Collections_IEnumerator_Reset()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + AINLHDFJGBJ__CREATETRAITS_D__8_SYSTEM_COLLECTIONS_IENUMERATOR_RESET_OFFSET))(this);
		}

		::System::Object* System_Collections_IEnumerator_get_Current()
		{
			return ((::System::Object*(*)(::PVOID))((::PBYTE)hIl2Cpp + AINLHDFJGBJ__CREATETRAITS_D__8_SYSTEM_COLLECTIONS_IENUMERATOR_GET_CURRENT_OFFSET))(this);
		}

		::System::Collections::Generic::IEnumerator_1<::RPG::Client::GridFightTrait*>* System_Collections_Generic_IEnumerable_RPG_Client_GridFightTrait__GetEnumerator()
		{
			return ((::System::Collections::Generic::IEnumerator_1<::RPG::Client::GridFightTrait*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + AINLHDFJGBJ__CREATETRAITS_D__8_SYSTEM_COLLECTIONS_GENERIC_IENUMERABLE_RPG_CLIENT_GRIDFIGHTTRAIT__GETENUMERATOR_OFFSET))(this);
		}

		::System::Collections::IEnumerator* System_Collections_IEnumerable_GetEnumerator()
		{
			return ((::System::Collections::IEnumerator*(*)(::PVOID))((::PBYTE)hIl2Cpp + AINLHDFJGBJ__CREATETRAITS_D__8_SYSTEM_COLLECTIONS_IENUMERABLE_GETENUMERATOR_OFFSET))(this);
		}

	};
