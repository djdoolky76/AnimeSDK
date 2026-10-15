#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class FAFEHMOPNBB_ALBBMEPBJMF;
namespace Newtonsoft::Json { class JsonTextWriter; }
namespace Newtonsoft::Json::Linq { class JArray; }
namespace Newtonsoft::Json::Linq { class JObject; }
namespace Newtonsoft::Json::Linq { class JProperty; }
namespace System { class Object; }
namespace System::Collections::Generic { template <typename T> class IEnumerator_1; }

#define FAFEHMOPNBB_ALBBMEPBJMF__WRITENODETREE_D__13_CTOR_OFFSET UNITYSDK_OFFSET(0x1566AD60)
#define FAFEHMOPNBB_ALBBMEPBJMF__WRITENODETREE_D__13_MOVENEXT_OFFSET UNITYSDK_OFFSET(0x1566C070)
#define FAFEHMOPNBB_ALBBMEPBJMF__WRITENODETREE_D__13_SYSTEM_COLLECTIONS_GENERIC_IENUMERATOR_SYSTEM_OBJECT__GET_CURRENT_OFFSET UNITYSDK_OFFSET(0x1566C800)
#define FAFEHMOPNBB_ALBBMEPBJMF__WRITENODETREE_D__13_SYSTEM_COLLECTIONS_IENUMERATOR_GET_CURRENT_OFFSET UNITYSDK_OFFSET(0x1566C860)
#define FAFEHMOPNBB_ALBBMEPBJMF__WRITENODETREE_D__13_SYSTEM_COLLECTIONS_IENUMERATOR_RESET_OFFSET UNITYSDK_OFFSET(0x1566C810)
#define FAFEHMOPNBB_ALBBMEPBJMF__WRITENODETREE_D__13_SYSTEM_IDISPOSABLE_DISPOSE_OFFSET UNITYSDK_OFFSET(0x1566BF30)
#define FAFEHMOPNBB_ALBBMEPBJMF__WRITENODETREE_D__13___M__FINALLY1_OFFSET UNITYSDK_OFFSET(0x1566BF70)

	template <typename T1, typename T2, typename T3, typename T4, typename T5, typename T6, typename T7, typename T8, typename T9, typename T10, typename T11, typename T12, typename T13>
	class FAFEHMOPNBB_ALBBMEPBJMF__WriteNodeTree_d__13 : public ::System::Object
	{
	public:
		::FAFEHMOPNBB_ALBBMEPBJMF* __4__this; // 0x10
		::Newtonsoft::Json::Linq::JArray* _children_5__3; // 0x18
		::System::Object* __2__current; // 0x20
		::Newtonsoft::Json::Linq::JObject* node; // 0x28
		::System::Collections::Generic::IEnumerator_1<::Newtonsoft::Json::Linq::JProperty*>* __7__wrap1; // 0x30
		::Newtonsoft::Json::JsonTextWriter* json; // 0x38
		::System::Int32 __1__state; // 0x40
		::System::Int32 _i_5__4; // 0x44
		::System::Void _ctor(::System::Int32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + FAFEHMOPNBB_ALBBMEPBJMF__WRITENODETREE_D__13_CTOR_OFFSET))(this, a1);
		}

		::System::Void System_IDisposable_Dispose()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + FAFEHMOPNBB_ALBBMEPBJMF__WRITENODETREE_D__13_SYSTEM_IDISPOSABLE_DISPOSE_OFFSET))(this);
		}

		::System::Boolean MoveNext()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + FAFEHMOPNBB_ALBBMEPBJMF__WRITENODETREE_D__13_MOVENEXT_OFFSET))(this);
		}

		::System::Void __m__Finally1()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + FAFEHMOPNBB_ALBBMEPBJMF__WRITENODETREE_D__13___M__FINALLY1_OFFSET))(this);
		}

		::System::Object* System_Collections_Generic_IEnumerator_System_Object__get_Current()
		{
			return ((::System::Object*(*)(::PVOID))((::PBYTE)hIl2Cpp + FAFEHMOPNBB_ALBBMEPBJMF__WRITENODETREE_D__13_SYSTEM_COLLECTIONS_GENERIC_IENUMERATOR_SYSTEM_OBJECT__GET_CURRENT_OFFSET))(this);
		}

		::System::Void System_Collections_IEnumerator_Reset()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + FAFEHMOPNBB_ALBBMEPBJMF__WRITENODETREE_D__13_SYSTEM_COLLECTIONS_IENUMERATOR_RESET_OFFSET))(this);
		}

		::System::Object* System_Collections_IEnumerator_get_Current()
		{
			return ((::System::Object*(*)(::PVOID))((::PBYTE)hIl2Cpp + FAFEHMOPNBB_ALBBMEPBJMF__WRITENODETREE_D__13_SYSTEM_COLLECTIONS_IENUMERATOR_GET_CURRENT_OFFSET))(this);
		}

	};
