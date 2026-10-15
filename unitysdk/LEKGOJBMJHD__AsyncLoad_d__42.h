#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class HHCKNGMIAKL;
class LEKGOJBMJHD;
class NNDAJDLAHNC;
namespace RPG::Client { class AdventurePhase; }
namespace System { class Object; }
namespace System::Collections::Generic { template <typename T> class IEnumerator_1; }

#define LEKGOJBMJHD__ASYNCLOAD_D__42_CTOR_OFFSET UNITYSDK_OFFSET(0xB6520F0)
#define LEKGOJBMJHD__ASYNCLOAD_D__42_MOVENEXT_OFFSET UNITYSDK_OFFSET(0xB653C70)
#define LEKGOJBMJHD__ASYNCLOAD_D__42_SYSTEM_COLLECTIONS_GENERIC_IENUMERATOR_RPG_WORK_IASYNCWORKSTEPRESULT__GET_CURRENT_OFFSET UNITYSDK_OFFSET(0xB6549A0)
#define LEKGOJBMJHD__ASYNCLOAD_D__42_SYSTEM_COLLECTIONS_IENUMERATOR_GET_CURRENT_OFFSET UNITYSDK_OFFSET(0xB654A00)
#define LEKGOJBMJHD__ASYNCLOAD_D__42_SYSTEM_COLLECTIONS_IENUMERATOR_RESET_OFFSET UNITYSDK_OFFSET(0xB6549B0)
#define LEKGOJBMJHD__ASYNCLOAD_D__42_SYSTEM_IDISPOSABLE_DISPOSE_OFFSET UNITYSDK_OFFSET(0xB653A00)
#define LEKGOJBMJHD__ASYNCLOAD_D__42___M__FINALLY1_OFFSET UNITYSDK_OFFSET(0xB653A70)
#define LEKGOJBMJHD__ASYNCLOAD_D__42___M__FINALLY2_OFFSET UNITYSDK_OFFSET(0xB653B70)

inline static constexpr unsigned int LEKGOJBMJHD__AsyncLoad_d__42_TypeDefinitionIndex = 60887;

	template <typename T1, typename T2, typename T3, typename T4, typename T5, typename T6, typename T7, typename T8, typename T9, typename T10, typename T11, typename T12, typename T13, typename T14, typename T15, typename T16, typename T17, typename T18, typename T19, typename T20, typename T21, typename T22, typename T23, typename T24, typename T25, typename T26, typename T27, typename T28, typename T29, typename T30, typename T31, typename T32, typename T33, typename T34, typename T35, typename T36, typename T37, typename T38, typename T39, typename T40, typename T41, typename T42>
	class LEKGOJBMJHD__AsyncLoad_d__42 : public ::System::Object
	{
	public:
		::System::Collections::Generic::IEnumerator_1<::NNDAJDLAHNC*>* _itor_5__4; // 0x10
		::RPG::Client::AdventurePhase* _adventurePhase_5__2; // 0x18
		::HHCKNGMIAKL* _mgr_5__3; // 0x20
		::LEKGOJBMJHD* __4__this; // 0x28
		::NNDAJDLAHNC* __2__current; // 0x30
		::System::Int32 __1__state; // 0x38
		::System::Void _ctor(::System::Int32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + LEKGOJBMJHD__ASYNCLOAD_D__42_CTOR_OFFSET))(this, a1);
		}

		::System::Void System_IDisposable_Dispose()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + LEKGOJBMJHD__ASYNCLOAD_D__42_SYSTEM_IDISPOSABLE_DISPOSE_OFFSET))(this);
		}

		::System::Boolean MoveNext()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + LEKGOJBMJHD__ASYNCLOAD_D__42_MOVENEXT_OFFSET))(this);
		}

		::System::Void __m__Finally1()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + LEKGOJBMJHD__ASYNCLOAD_D__42___M__FINALLY1_OFFSET))(this);
		}

		::System::Void __m__Finally2()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + LEKGOJBMJHD__ASYNCLOAD_D__42___M__FINALLY2_OFFSET))(this);
		}

		::NNDAJDLAHNC* System_Collections_Generic_IEnumerator_RPG_Work_IAsyncWorkStepResult__get_Current()
		{
			return ((::NNDAJDLAHNC*(*)(::PVOID))((::PBYTE)hIl2Cpp + LEKGOJBMJHD__ASYNCLOAD_D__42_SYSTEM_COLLECTIONS_GENERIC_IENUMERATOR_RPG_WORK_IASYNCWORKSTEPRESULT__GET_CURRENT_OFFSET))(this);
		}

		::System::Void System_Collections_IEnumerator_Reset()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + LEKGOJBMJHD__ASYNCLOAD_D__42_SYSTEM_COLLECTIONS_IENUMERATOR_RESET_OFFSET))(this);
		}

		::System::Object* System_Collections_IEnumerator_get_Current()
		{
			return ((::System::Object*(*)(::PVOID))((::PBYTE)hIl2Cpp + LEKGOJBMJHD__ASYNCLOAD_D__42_SYSTEM_COLLECTIONS_IENUMERATOR_GET_CURRENT_OFFSET))(this);
		}

	};
