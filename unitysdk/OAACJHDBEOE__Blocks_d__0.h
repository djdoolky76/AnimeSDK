#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class HGDELEAHIJO;
class HKPOAGEKMAM;
namespace System { class Object; }
namespace System { template <typename T1, typename T2> class Func_2; }
namespace System::Collections { class IEnumerator; }
namespace System::Collections::Generic { template <typename T> class IEnumerator_1; }

#define OAACJHDBEOE__BLOCKS_D__0_CTOR_OFFSET UNITYSDK_OFFSET(0x1C4C8980)
#define OAACJHDBEOE__BLOCKS_D__0_MOVENEXT_OFFSET UNITYSDK_OFFSET(0x1C4C89B0)
#define OAACJHDBEOE__BLOCKS_D__0_SYSTEM_COLLECTIONS_GENERIC_IENUMERABLE_RPG_CLIENT_IBLOCKITEM__GETENUMERATOR_OFFSET UNITYSDK_OFFSET(0x1C4C8CA0)
#define OAACJHDBEOE__BLOCKS_D__0_SYSTEM_COLLECTIONS_GENERIC_IENUMERATOR_RPG_CLIENT_IBLOCKITEM__GET_CURRENT_OFFSET UNITYSDK_OFFSET(0x1C4C8C30)
#define OAACJHDBEOE__BLOCKS_D__0_SYSTEM_COLLECTIONS_IENUMERABLE_GETENUMERATOR_OFFSET UNITYSDK_OFFSET(0x1C4C8D20)
#define OAACJHDBEOE__BLOCKS_D__0_SYSTEM_COLLECTIONS_IENUMERATOR_GET_CURRENT_OFFSET UNITYSDK_OFFSET(0x1C4C8C90)
#define OAACJHDBEOE__BLOCKS_D__0_SYSTEM_COLLECTIONS_IENUMERATOR_RESET_OFFSET UNITYSDK_OFFSET(0x1C4C8C40)
#define OAACJHDBEOE__BLOCKS_D__0_SYSTEM_IDISPOSABLE_DISPOSE_OFFSET UNITYSDK_OFFSET(0x1C4C89A0)

inline static constexpr unsigned int OAACJHDBEOE__Blocks_d__0_TypeDefinitionIndex = 41493;

	class OAACJHDBEOE__Blocks_d__0 : public ::System::Object
	{
	public:
		::System::Func_2<::HGDELEAHIJO*, ::System::Boolean>* predicate; // 0x10
		::HGDELEAHIJO* __2__current; // 0x18
		::HKPOAGEKMAM* index; // 0x20
		::System::Func_2<::HGDELEAHIJO*, ::System::Boolean>* __3__predicate; // 0x28
		::HKPOAGEKMAM* __3__index; // 0x30
		::System::Int32 _i_5__3; // 0x38
		::System::Int32 _count_5__2; // 0x3C
		::System::Int32 __l__initialThreadId; // 0x40
		::System::Int32 __1__state; // 0x44
		::System::Void _ctor(::System::Int32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + OAACJHDBEOE__BLOCKS_D__0_CTOR_OFFSET))(this, a1);
		}

		::System::Void System_IDisposable_Dispose()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + OAACJHDBEOE__BLOCKS_D__0_SYSTEM_IDISPOSABLE_DISPOSE_OFFSET))(this);
		}

		::System::Boolean MoveNext()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + OAACJHDBEOE__BLOCKS_D__0_MOVENEXT_OFFSET))(this);
		}

		::HGDELEAHIJO* System_Collections_Generic_IEnumerator_RPG_Client_IBlockItem__get_Current()
		{
			return ((::HGDELEAHIJO*(*)(::PVOID))((::PBYTE)hIl2Cpp + OAACJHDBEOE__BLOCKS_D__0_SYSTEM_COLLECTIONS_GENERIC_IENUMERATOR_RPG_CLIENT_IBLOCKITEM__GET_CURRENT_OFFSET))(this);
		}

		::System::Void System_Collections_IEnumerator_Reset()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + OAACJHDBEOE__BLOCKS_D__0_SYSTEM_COLLECTIONS_IENUMERATOR_RESET_OFFSET))(this);
		}

		::System::Object* System_Collections_IEnumerator_get_Current()
		{
			return ((::System::Object*(*)(::PVOID))((::PBYTE)hIl2Cpp + OAACJHDBEOE__BLOCKS_D__0_SYSTEM_COLLECTIONS_IENUMERATOR_GET_CURRENT_OFFSET))(this);
		}

		::System::Collections::Generic::IEnumerator_1<::HGDELEAHIJO*>* System_Collections_Generic_IEnumerable_RPG_Client_IBlockItem__GetEnumerator()
		{
			return ((::System::Collections::Generic::IEnumerator_1<::HGDELEAHIJO*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + OAACJHDBEOE__BLOCKS_D__0_SYSTEM_COLLECTIONS_GENERIC_IENUMERABLE_RPG_CLIENT_IBLOCKITEM__GETENUMERATOR_OFFSET))(this);
		}

		::System::Collections::IEnumerator* System_Collections_IEnumerable_GetEnumerator()
		{
			return ((::System::Collections::IEnumerator*(*)(::PVOID))((::PBYTE)hIl2Cpp + OAACJHDBEOE__BLOCKS_D__0_SYSTEM_COLLECTIONS_IENUMERABLE_GETENUMERATOR_OFFSET))(this);
		}

	};
