#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class FAFEHMOPNBB_ALBBMEPBJMF;
namespace Newtonsoft::Json { class JsonTextWriter; }
namespace Newtonsoft::Json::Linq { class JObject; }
namespace Newtonsoft::Json::Linq { class JProperty; }
namespace System { class Object; }
namespace System::Collections::Generic { template <typename T> class IEnumerator_1; }

#define FAFEHMOPNBB_ALBBMEPBJMF__WRITESNAPSHOT_D__12_CTOR_OFFSET UNITYSDK_OFFSET(0x1566ACC0)
#define FAFEHMOPNBB_ALBBMEPBJMF__WRITESNAPSHOT_D__12_MOVENEXT_OFFSET UNITYSDK_OFFSET(0x1566C9B0)
#define FAFEHMOPNBB_ALBBMEPBJMF__WRITESNAPSHOT_D__12_SYSTEM_COLLECTIONS_GENERIC_IENUMERATOR_SYSTEM_OBJECT__GET_CURRENT_OFFSET UNITYSDK_OFFSET(0x1566D040)
#define FAFEHMOPNBB_ALBBMEPBJMF__WRITESNAPSHOT_D__12_SYSTEM_COLLECTIONS_IENUMERATOR_GET_CURRENT_OFFSET UNITYSDK_OFFSET(0x1566D0A0)
#define FAFEHMOPNBB_ALBBMEPBJMF__WRITESNAPSHOT_D__12_SYSTEM_COLLECTIONS_IENUMERATOR_RESET_OFFSET UNITYSDK_OFFSET(0x1566D050)
#define FAFEHMOPNBB_ALBBMEPBJMF__WRITESNAPSHOT_D__12_SYSTEM_IDISPOSABLE_DISPOSE_OFFSET UNITYSDK_OFFSET(0x1566C870)
#define FAFEHMOPNBB_ALBBMEPBJMF__WRITESNAPSHOT_D__12___M__FINALLY1_OFFSET UNITYSDK_OFFSET(0x1566C8B0)

	template <typename T1, typename T2, typename T3, typename T4, typename T5, typename T6, typename T7, typename T8, typename T9, typename T10, typename T11, typename T12>
	class FAFEHMOPNBB_ALBBMEPBJMF__WriteSnapshot_d__12 : public ::System::Object
	{
	public:
		::Newtonsoft::Json::JsonTextWriter* json; // 0x10
		::System::Object* __2__current; // 0x18
		::System::Collections::Generic::IEnumerator_1<::Newtonsoft::Json::Linq::JProperty*>* __7__wrap1; // 0x20
		::Newtonsoft::Json::Linq::JObject* snapshot; // 0x28
		::FAFEHMOPNBB_ALBBMEPBJMF* __4__this; // 0x30
		::System::Int32 __1__state; // 0x38
		::System::Void _ctor(::System::Int32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + FAFEHMOPNBB_ALBBMEPBJMF__WRITESNAPSHOT_D__12_CTOR_OFFSET))(this, a1);
		}

		::System::Void System_IDisposable_Dispose()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + FAFEHMOPNBB_ALBBMEPBJMF__WRITESNAPSHOT_D__12_SYSTEM_IDISPOSABLE_DISPOSE_OFFSET))(this);
		}

		::System::Boolean MoveNext()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + FAFEHMOPNBB_ALBBMEPBJMF__WRITESNAPSHOT_D__12_MOVENEXT_OFFSET))(this);
		}

		::System::Void __m__Finally1()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + FAFEHMOPNBB_ALBBMEPBJMF__WRITESNAPSHOT_D__12___M__FINALLY1_OFFSET))(this);
		}

		::System::Object* System_Collections_Generic_IEnumerator_System_Object__get_Current()
		{
			return ((::System::Object*(*)(::PVOID))((::PBYTE)hIl2Cpp + FAFEHMOPNBB_ALBBMEPBJMF__WRITESNAPSHOT_D__12_SYSTEM_COLLECTIONS_GENERIC_IENUMERATOR_SYSTEM_OBJECT__GET_CURRENT_OFFSET))(this);
		}

		::System::Void System_Collections_IEnumerator_Reset()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + FAFEHMOPNBB_ALBBMEPBJMF__WRITESNAPSHOT_D__12_SYSTEM_COLLECTIONS_IENUMERATOR_RESET_OFFSET))(this);
		}

		::System::Object* System_Collections_IEnumerator_get_Current()
		{
			return ((::System::Object*(*)(::PVOID))((::PBYTE)hIl2Cpp + FAFEHMOPNBB_ALBBMEPBJMF__WRITESNAPSHOT_D__12_SYSTEM_COLLECTIONS_IENUMERATOR_GET_CURRENT_OFFSET))(this);
		}

	};
