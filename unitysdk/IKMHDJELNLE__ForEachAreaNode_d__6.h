#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/FKDIDBGBGMF.h"
#include "unitysdk/System/Object.h"
class CPGIAIBIFLI;
class IKMHDJELNLE;
namespace System { class Object; }
namespace System::Collections { class IEnumerator; }
namespace System::Collections::Generic { template <typename T> class IEnumerator_1; }

#define IKMHDJELNLE__FOREACHAREANODE_D__6_CTOR_OFFSET UNITYSDK_OFFSET(0x1649AEB0)
#define IKMHDJELNLE__FOREACHAREANODE_D__6_MOVENEXT_OFFSET UNITYSDK_OFFSET(0x1649B010)
#define IKMHDJELNLE__FOREACHAREANODE_D__6_SYSTEM_COLLECTIONS_GENERIC_IENUMERABLE_RPGTOOLS_OCTREE_GENERATION_OCTREENODEPTR__GETENUMERATOR_OFFSET UNITYSDK_OFFSET(0x1649B670)
#define IKMHDJELNLE__FOREACHAREANODE_D__6_SYSTEM_COLLECTIONS_GENERIC_IENUMERATOR_RPGTOOLS_OCTREE_GENERATION_OCTREENODEPTR__GET_CURRENT_OFFSET UNITYSDK_OFFSET(0x1649B5C0)
#define IKMHDJELNLE__FOREACHAREANODE_D__6_SYSTEM_COLLECTIONS_IENUMERABLE_GETENUMERATOR_OFFSET UNITYSDK_OFFSET(0x1649B6F0)
#define IKMHDJELNLE__FOREACHAREANODE_D__6_SYSTEM_COLLECTIONS_IENUMERATOR_GET_CURRENT_OFFSET UNITYSDK_OFFSET(0x1649B620)
#define IKMHDJELNLE__FOREACHAREANODE_D__6_SYSTEM_COLLECTIONS_IENUMERATOR_RESET_OFFSET UNITYSDK_OFFSET(0x1649B5D0)
#define IKMHDJELNLE__FOREACHAREANODE_D__6_SYSTEM_IDISPOSABLE_DISPOSE_OFFSET UNITYSDK_OFFSET(0x1649AED0)
#define IKMHDJELNLE__FOREACHAREANODE_D__6___M__FINALLY1_OFFSET UNITYSDK_OFFSET(0x1649AF10)

inline static constexpr unsigned int IKMHDJELNLE__ForEachAreaNode_d__6_TypeDefinitionIndex = 48873;

	template <typename T1, typename T2, typename T3, typename T4, typename T5, typename T6>
	class IKMHDJELNLE__ForEachAreaNode_d__6 : public ::System::Object
	{
	public:
		::IKMHDJELNLE* __4__this; // 0x10
		::FKDIDBGBGMF __3__node; // 0x18
		::FKDIDBGBGMF node; // 0x28
		::FKDIDBGBGMF __2__current; // 0x38
		::Il2CppArray<::CPGIAIBIFLI*>* __7__wrap1; // 0x48
		::System::Collections::Generic::IEnumerator_1<::FKDIDBGBGMF>* __7__wrap3; // 0x50
		::System::Int32 __7__wrap2; // 0x58
		::System::Int32 __l__initialThreadId; // 0x5C
		::System::Int32 __1__state; // 0x60
		::System::Void _ctor(::System::Int32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + IKMHDJELNLE__FOREACHAREANODE_D__6_CTOR_OFFSET))(this, a1);
		}

		::System::Void System_IDisposable_Dispose()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + IKMHDJELNLE__FOREACHAREANODE_D__6_SYSTEM_IDISPOSABLE_DISPOSE_OFFSET))(this);
		}

		::System::Boolean MoveNext()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + IKMHDJELNLE__FOREACHAREANODE_D__6_MOVENEXT_OFFSET))(this);
		}

		::System::Void __m__Finally1()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + IKMHDJELNLE__FOREACHAREANODE_D__6___M__FINALLY1_OFFSET))(this);
		}

		::FKDIDBGBGMF System_Collections_Generic_IEnumerator_RPGTools_Octree_Generation_OctreeNodePtr__get_Current()
		{
			return ((::FKDIDBGBGMF(*)(::PVOID))((::PBYTE)hIl2Cpp + IKMHDJELNLE__FOREACHAREANODE_D__6_SYSTEM_COLLECTIONS_GENERIC_IENUMERATOR_RPGTOOLS_OCTREE_GENERATION_OCTREENODEPTR__GET_CURRENT_OFFSET))(this);
		}

		::System::Void System_Collections_IEnumerator_Reset()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + IKMHDJELNLE__FOREACHAREANODE_D__6_SYSTEM_COLLECTIONS_IENUMERATOR_RESET_OFFSET))(this);
		}

		::System::Object* System_Collections_IEnumerator_get_Current()
		{
			return ((::System::Object*(*)(::PVOID))((::PBYTE)hIl2Cpp + IKMHDJELNLE__FOREACHAREANODE_D__6_SYSTEM_COLLECTIONS_IENUMERATOR_GET_CURRENT_OFFSET))(this);
		}

		::System::Collections::Generic::IEnumerator_1<::FKDIDBGBGMF>* System_Collections_Generic_IEnumerable_RPGTools_Octree_Generation_OctreeNodePtr__GetEnumerator()
		{
			return ((::System::Collections::Generic::IEnumerator_1<::FKDIDBGBGMF>*(*)(::PVOID))((::PBYTE)hIl2Cpp + IKMHDJELNLE__FOREACHAREANODE_D__6_SYSTEM_COLLECTIONS_GENERIC_IENUMERABLE_RPGTOOLS_OCTREE_GENERATION_OCTREENODEPTR__GETENUMERATOR_OFFSET))(this);
		}

		::System::Collections::IEnumerator* System_Collections_IEnumerable_GetEnumerator()
		{
			return ((::System::Collections::IEnumerator*(*)(::PVOID))((::PBYTE)hIl2Cpp + IKMHDJELNLE__FOREACHAREANODE_D__6_SYSTEM_COLLECTIONS_IENUMERABLE_GETENUMERATOR_OFFSET))(this);
		}

	};
