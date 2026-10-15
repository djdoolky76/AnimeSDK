#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class AIBOPLOBAFN;
class NNDAJDLAHNC;
namespace System { class Object; }

#define AIBOPLOBAFN___WAITFORASYNCLOADFINISH_D__20_CTOR_OFFSET UNITYSDK_OFFSET(0xEB99660)
#define AIBOPLOBAFN___WAITFORASYNCLOADFINISH_D__20_MOVENEXT_OFFSET UNITYSDK_OFFSET(0xEB9E8D0)
#define AIBOPLOBAFN___WAITFORASYNCLOADFINISH_D__20_SYSTEM_COLLECTIONS_GENERIC_IENUMERATOR_RPG_WORK_IASYNCWORKSTEPRESULT__GET_CURRENT_OFFSET UNITYSDK_OFFSET(0xEB9E960)
#define AIBOPLOBAFN___WAITFORASYNCLOADFINISH_D__20_SYSTEM_COLLECTIONS_IENUMERATOR_GET_CURRENT_OFFSET UNITYSDK_OFFSET(0xEB9E9C0)
#define AIBOPLOBAFN___WAITFORASYNCLOADFINISH_D__20_SYSTEM_COLLECTIONS_IENUMERATOR_RESET_OFFSET UNITYSDK_OFFSET(0xEB9E970)
#define AIBOPLOBAFN___WAITFORASYNCLOADFINISH_D__20_SYSTEM_IDISPOSABLE_DISPOSE_OFFSET UNITYSDK_OFFSET(0xEB9E8C0)

inline static constexpr unsigned int AIBOPLOBAFN___WaitForAsyncLoadFinish_d__20_TypeDefinitionIndex = 59386;

	template <typename T1, typename T2, typename T3, typename T4, typename T5, typename T6, typename T7, typename T8, typename T9, typename T10, typename T11, typename T12, typename T13, typename T14, typename T15, typename T16, typename T17, typename T18, typename T19, typename T20>
	class AIBOPLOBAFN___WaitForAsyncLoadFinish_d__20 : public ::System::Object
	{
	public:
		::NNDAJDLAHNC* __2__current; // 0x10
		::AIBOPLOBAFN* __4__this; // 0x18
		::System::Int32 __1__state; // 0x20
		::System::Void _ctor(::System::Int32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + AIBOPLOBAFN___WAITFORASYNCLOADFINISH_D__20_CTOR_OFFSET))(this, a1);
		}

		::System::Void System_IDisposable_Dispose()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + AIBOPLOBAFN___WAITFORASYNCLOADFINISH_D__20_SYSTEM_IDISPOSABLE_DISPOSE_OFFSET))(this);
		}

		::System::Boolean MoveNext()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + AIBOPLOBAFN___WAITFORASYNCLOADFINISH_D__20_MOVENEXT_OFFSET))(this);
		}

		::NNDAJDLAHNC* System_Collections_Generic_IEnumerator_RPG_Work_IAsyncWorkStepResult__get_Current()
		{
			return ((::NNDAJDLAHNC*(*)(::PVOID))((::PBYTE)hIl2Cpp + AIBOPLOBAFN___WAITFORASYNCLOADFINISH_D__20_SYSTEM_COLLECTIONS_GENERIC_IENUMERATOR_RPG_WORK_IASYNCWORKSTEPRESULT__GET_CURRENT_OFFSET))(this);
		}

		::System::Void System_Collections_IEnumerator_Reset()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + AIBOPLOBAFN___WAITFORASYNCLOADFINISH_D__20_SYSTEM_COLLECTIONS_IENUMERATOR_RESET_OFFSET))(this);
		}

		::System::Object* System_Collections_IEnumerator_get_Current()
		{
			return ((::System::Object*(*)(::PVOID))((::PBYTE)hIl2Cpp + AIBOPLOBAFN___WAITFORASYNCLOADFINISH_D__20_SYSTEM_COLLECTIONS_IENUMERATOR_GET_CURRENT_OFFSET))(this);
		}

	};
