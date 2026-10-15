#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class FAFEHMOPNBB_ALBBMEPBJMF;
namespace Newtonsoft::Json { class JsonTextWriter; }
namespace System { class Object; }
namespace System::IO { class FileStream; }
namespace System::IO { class StreamWriter; }

#define FAFEHMOPNBB_ALBBMEPBJMF__RUN_D__11_CTOR_OFFSET UNITYSDK_OFFSET(0x1565EF40)
#define FAFEHMOPNBB_ALBBMEPBJMF__RUN_D__11_MOVENEXT_OFFSET UNITYSDK_OFFSET(0x1565FC60)
#define FAFEHMOPNBB_ALBBMEPBJMF__RUN_D__11_SYSTEM_COLLECTIONS_GENERIC_IENUMERATOR_SYSTEM_OBJECT__GET_CURRENT_OFFSET UNITYSDK_OFFSET(0x156601E0)
#define FAFEHMOPNBB_ALBBMEPBJMF__RUN_D__11_SYSTEM_COLLECTIONS_IENUMERATOR_GET_CURRENT_OFFSET UNITYSDK_OFFSET(0x15660240)
#define FAFEHMOPNBB_ALBBMEPBJMF__RUN_D__11_SYSTEM_COLLECTIONS_IENUMERATOR_RESET_OFFSET UNITYSDK_OFFSET(0x156601F0)
#define FAFEHMOPNBB_ALBBMEPBJMF__RUN_D__11_SYSTEM_IDISPOSABLE_DISPOSE_OFFSET UNITYSDK_OFFSET(0x1565F610)
#define FAFEHMOPNBB_ALBBMEPBJMF__RUN_D__11___M__FINALLY1_OFFSET UNITYSDK_OFFSET(0x1565FA70)
#define FAFEHMOPNBB_ALBBMEPBJMF__RUN_D__11___M__FINALLY2_OFFSET UNITYSDK_OFFSET(0x1565F930)
#define FAFEHMOPNBB_ALBBMEPBJMF__RUN_D__11___M__FINALLY3_OFFSET UNITYSDK_OFFSET(0x1565F910)
#define FAFEHMOPNBB_ALBBMEPBJMF__RUN_D__11___M__FINALLY4_OFFSET UNITYSDK_OFFSET(0x1565F810)

inline static constexpr unsigned int FAFEHMOPNBB_ALBBMEPBJMF__Run_d__11_TypeDefinitionIndex = 72755;

	template <typename T1, typename T2, typename T3, typename T4, typename T5, typename T6, typename T7, typename T8, typename T9, typename T10, typename T11>
	class FAFEHMOPNBB_ALBBMEPBJMF__Run_d__11 : public ::System::Object
	{
	public:
		::FAFEHMOPNBB_ALBBMEPBJMF* __4__this; // 0x10
		::System::IO::StreamWriter* _writer_5__4; // 0x18
		::System::Object* __2__current; // 0x20
		::Newtonsoft::Json::JsonTextWriter* _json_5__5; // 0x28
		::System::IO::FileStream* _stream_5__3; // 0x30
		::System::Int32 __1__state; // 0x38
		::System::Boolean _completed_5__2; // 0x3C
		::System::Void _ctor(::System::Int32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + FAFEHMOPNBB_ALBBMEPBJMF__RUN_D__11_CTOR_OFFSET))(this, a1);
		}

		::System::Void System_IDisposable_Dispose()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + FAFEHMOPNBB_ALBBMEPBJMF__RUN_D__11_SYSTEM_IDISPOSABLE_DISPOSE_OFFSET))(this);
		}

		::System::Boolean MoveNext()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + FAFEHMOPNBB_ALBBMEPBJMF__RUN_D__11_MOVENEXT_OFFSET))(this);
		}

		::System::Void __m__Finally1()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + FAFEHMOPNBB_ALBBMEPBJMF__RUN_D__11___M__FINALLY1_OFFSET))(this);
		}

		::System::Void __m__Finally2()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + FAFEHMOPNBB_ALBBMEPBJMF__RUN_D__11___M__FINALLY2_OFFSET))(this);
		}

		::System::Void __m__Finally3()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + FAFEHMOPNBB_ALBBMEPBJMF__RUN_D__11___M__FINALLY3_OFFSET))(this);
		}

		::System::Void __m__Finally4()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + FAFEHMOPNBB_ALBBMEPBJMF__RUN_D__11___M__FINALLY4_OFFSET))(this);
		}

		::System::Object* System_Collections_Generic_IEnumerator_System_Object__get_Current()
		{
			return ((::System::Object*(*)(::PVOID))((::PBYTE)hIl2Cpp + FAFEHMOPNBB_ALBBMEPBJMF__RUN_D__11_SYSTEM_COLLECTIONS_GENERIC_IENUMERATOR_SYSTEM_OBJECT__GET_CURRENT_OFFSET))(this);
		}

		::System::Void System_Collections_IEnumerator_Reset()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + FAFEHMOPNBB_ALBBMEPBJMF__RUN_D__11_SYSTEM_COLLECTIONS_IENUMERATOR_RESET_OFFSET))(this);
		}

		::System::Object* System_Collections_IEnumerator_get_Current()
		{
			return ((::System::Object*(*)(::PVOID))((::PBYTE)hIl2Cpp + FAFEHMOPNBB_ALBBMEPBJMF__RUN_D__11_SYSTEM_COLLECTIONS_IENUMERATOR_GET_CURRENT_OFFSET))(this);
		}

	};
