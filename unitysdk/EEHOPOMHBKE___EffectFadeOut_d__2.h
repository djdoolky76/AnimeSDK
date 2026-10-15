#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class EEHOPOMHBKE;
namespace System { class Object; }

#define EEHOPOMHBKE___EFFECTFADEOUT_D__2_CTOR_OFFSET UNITYSDK_OFFSET(0x13A2E730)
#define EEHOPOMHBKE___EFFECTFADEOUT_D__2_MOVENEXT_OFFSET UNITYSDK_OFFSET(0x13A2E750)
#define EEHOPOMHBKE___EFFECTFADEOUT_D__2_SYSTEM_COLLECTIONS_GENERIC_IENUMERATOR_SYSTEM_OBJECT__GET_CURRENT_OFFSET UNITYSDK_OFFSET(0x13A2EEC0)
#define EEHOPOMHBKE___EFFECTFADEOUT_D__2_SYSTEM_COLLECTIONS_IENUMERATOR_GET_CURRENT_OFFSET UNITYSDK_OFFSET(0x13A2EF20)
#define EEHOPOMHBKE___EFFECTFADEOUT_D__2_SYSTEM_COLLECTIONS_IENUMERATOR_RESET_OFFSET UNITYSDK_OFFSET(0x13A2EED0)
#define EEHOPOMHBKE___EFFECTFADEOUT_D__2_SYSTEM_IDISPOSABLE_DISPOSE_OFFSET UNITYSDK_OFFSET(0x13A2E740)

inline static constexpr unsigned int EEHOPOMHBKE___EffectFadeOut_d__2_TypeDefinitionIndex = 56361;

	template <typename T1, typename T2>
	class EEHOPOMHBKE___EffectFadeOut_d__2 : public ::System::Object
	{
	public:
		::EEHOPOMHBKE* __4__this; // 0x10
		::System::Object* __2__current; // 0x18
		::System::Single _fAccTime_5__2; // 0x20
		::System::Int32 __1__state; // 0x24
		::System::Void _ctor(::System::Int32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + EEHOPOMHBKE___EFFECTFADEOUT_D__2_CTOR_OFFSET))(this, a1);
		}

		::System::Void System_IDisposable_Dispose()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + EEHOPOMHBKE___EFFECTFADEOUT_D__2_SYSTEM_IDISPOSABLE_DISPOSE_OFFSET))(this);
		}

		::System::Boolean MoveNext()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + EEHOPOMHBKE___EFFECTFADEOUT_D__2_MOVENEXT_OFFSET))(this);
		}

		::System::Object* System_Collections_Generic_IEnumerator_System_Object__get_Current()
		{
			return ((::System::Object*(*)(::PVOID))((::PBYTE)hIl2Cpp + EEHOPOMHBKE___EFFECTFADEOUT_D__2_SYSTEM_COLLECTIONS_GENERIC_IENUMERATOR_SYSTEM_OBJECT__GET_CURRENT_OFFSET))(this);
		}

		::System::Void System_Collections_IEnumerator_Reset()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + EEHOPOMHBKE___EFFECTFADEOUT_D__2_SYSTEM_COLLECTIONS_IENUMERATOR_RESET_OFFSET))(this);
		}

		::System::Object* System_Collections_IEnumerator_get_Current()
		{
			return ((::System::Object*(*)(::PVOID))((::PBYTE)hIl2Cpp + EEHOPOMHBKE___EFFECTFADEOUT_D__2_SYSTEM_COLLECTIONS_IENUMERATOR_GET_CURRENT_OFFSET))(this);
		}

	};
