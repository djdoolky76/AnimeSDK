#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class EFCKAAKHBKG;
namespace RPG::AvatarSystem { class IAvatar; }
namespace System { class Object; }
namespace System::Collections { class IEnumerator; }
namespace System::Collections::Generic { template <typename T> class IEnumerator_1; }

#define EFCKAAKHBKG__ITERATE_D__6_CTOR_OFFSET UNITYSDK_OFFSET(0x14809020)
#define EFCKAAKHBKG__ITERATE_D__6_MOVENEXT_OFFSET UNITYSDK_OFFSET(0x14809190)
#define EFCKAAKHBKG__ITERATE_D__6_SYSTEM_COLLECTIONS_GENERIC_IENUMERABLE_RPG_AVATARSYSTEM_IAVATAR__GETENUMERATOR_OFFSET UNITYSDK_OFFSET(0x14809700)
#define EFCKAAKHBKG__ITERATE_D__6_SYSTEM_COLLECTIONS_GENERIC_IENUMERATOR_RPG_AVATARSYSTEM_IAVATAR__GET_CURRENT_OFFSET UNITYSDK_OFFSET(0x14809690)
#define EFCKAAKHBKG__ITERATE_D__6_SYSTEM_COLLECTIONS_IENUMERABLE_GETENUMERATOR_OFFSET UNITYSDK_OFFSET(0x14809780)
#define EFCKAAKHBKG__ITERATE_D__6_SYSTEM_COLLECTIONS_IENUMERATOR_GET_CURRENT_OFFSET UNITYSDK_OFFSET(0x148096F0)
#define EFCKAAKHBKG__ITERATE_D__6_SYSTEM_COLLECTIONS_IENUMERATOR_RESET_OFFSET UNITYSDK_OFFSET(0x148096A0)
#define EFCKAAKHBKG__ITERATE_D__6_SYSTEM_IDISPOSABLE_DISPOSE_OFFSET UNITYSDK_OFFSET(0x14809040)
#define EFCKAAKHBKG__ITERATE_D__6___M__FINALLY1_OFFSET UNITYSDK_OFFSET(0x14809080)
#define EFCKAAKHBKG__ITERATE_D__6___M__FINALLY2_OFFSET UNITYSDK_OFFSET(0x14809180)

inline static constexpr unsigned int EFCKAAKHBKG__Iterate_d__6_TypeDefinitionIndex = 84280;

	template <typename T1, typename T2, typename T3, typename T4, typename T5, typename T6>
	class EFCKAAKHBKG__Iterate_d__6 : public ::System::Object
	{
	public:
		::RPG::AvatarSystem::IAvatar* __2__current; // 0x10
		::System::Collections::Generic::IEnumerator_1<::RPG::AvatarSystem::IAvatar*>* __7__wrap1; // 0x18
		::System::Object* __7__wrap2; // 0x20
		::System::Byte _padding0[0x10];
		::EFCKAAKHBKG* __4__this; // 0x38
		::System::Int32 __l__initialThreadId; // 0x40
		::System::Int32 __1__state; // 0x44
		::System::Void _ctor(::System::Int32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + EFCKAAKHBKG__ITERATE_D__6_CTOR_OFFSET))(this, a1);
		}

		::System::Void System_IDisposable_Dispose()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + EFCKAAKHBKG__ITERATE_D__6_SYSTEM_IDISPOSABLE_DISPOSE_OFFSET))(this);
		}

		::System::Boolean MoveNext()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + EFCKAAKHBKG__ITERATE_D__6_MOVENEXT_OFFSET))(this);
		}

		::System::Void __m__Finally1()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + EFCKAAKHBKG__ITERATE_D__6___M__FINALLY1_OFFSET))(this);
		}

		::System::Void __m__Finally2()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + EFCKAAKHBKG__ITERATE_D__6___M__FINALLY2_OFFSET))(this);
		}

		::RPG::AvatarSystem::IAvatar* System_Collections_Generic_IEnumerator_RPG_AvatarSystem_IAvatar__get_Current()
		{
			return ((::RPG::AvatarSystem::IAvatar*(*)(::PVOID))((::PBYTE)hIl2Cpp + EFCKAAKHBKG__ITERATE_D__6_SYSTEM_COLLECTIONS_GENERIC_IENUMERATOR_RPG_AVATARSYSTEM_IAVATAR__GET_CURRENT_OFFSET))(this);
		}

		::System::Void System_Collections_IEnumerator_Reset()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + EFCKAAKHBKG__ITERATE_D__6_SYSTEM_COLLECTIONS_IENUMERATOR_RESET_OFFSET))(this);
		}

		::System::Object* System_Collections_IEnumerator_get_Current()
		{
			return ((::System::Object*(*)(::PVOID))((::PBYTE)hIl2Cpp + EFCKAAKHBKG__ITERATE_D__6_SYSTEM_COLLECTIONS_IENUMERATOR_GET_CURRENT_OFFSET))(this);
		}

		::System::Collections::Generic::IEnumerator_1<::RPG::AvatarSystem::IAvatar*>* System_Collections_Generic_IEnumerable_RPG_AvatarSystem_IAvatar__GetEnumerator()
		{
			return ((::System::Collections::Generic::IEnumerator_1<::RPG::AvatarSystem::IAvatar*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + EFCKAAKHBKG__ITERATE_D__6_SYSTEM_COLLECTIONS_GENERIC_IENUMERABLE_RPG_AVATARSYSTEM_IAVATAR__GETENUMERATOR_OFFSET))(this);
		}

		::System::Collections::IEnumerator* System_Collections_IEnumerable_GetEnumerator()
		{
			return ((::System::Collections::IEnumerator*(*)(::PVOID))((::PBYTE)hIl2Cpp + EFCKAAKHBKG__ITERATE_D__6_SYSTEM_COLLECTIONS_IENUMERABLE_GETENUMERATOR_OFFSET))(this);
		}

	};
