#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class CKMJPGPLECG;
namespace RPG::Client { class FiveDimGameInstance; }
namespace RPG::Client { class Stage; }
namespace System { class Object; }

#define CKMJPGPLECG___WAITSTREAMING_D__25_CTOR_OFFSET UNITYSDK_OFFSET(0x1AD49DF0)
#define CKMJPGPLECG___WAITSTREAMING_D__25_MOVENEXT_OFFSET UNITYSDK_OFFSET(0x1AD4BAE0)
#define CKMJPGPLECG___WAITSTREAMING_D__25_SYSTEM_COLLECTIONS_GENERIC_IENUMERATOR_SYSTEM_OBJECT__GET_CURRENT_OFFSET UNITYSDK_OFFSET(0x1AD4BFB0)
#define CKMJPGPLECG___WAITSTREAMING_D__25_SYSTEM_COLLECTIONS_IENUMERATOR_GET_CURRENT_OFFSET UNITYSDK_OFFSET(0x1AD4C010)
#define CKMJPGPLECG___WAITSTREAMING_D__25_SYSTEM_COLLECTIONS_IENUMERATOR_RESET_OFFSET UNITYSDK_OFFSET(0x1AD4BFC0)
#define CKMJPGPLECG___WAITSTREAMING_D__25_SYSTEM_IDISPOSABLE_DISPOSE_OFFSET UNITYSDK_OFFSET(0x1AD4BAD0)

inline static constexpr unsigned int CKMJPGPLECG___WaitStreaming_d__25_TypeDefinitionIndex = 61843;

	template <typename T1, typename T2, typename T3, typename T4, typename T5, typename T6, typename T7, typename T8, typename T9, typename T10, typename T11, typename T12, typename T13, typename T14, typename T15, typename T16, typename T17, typename T18, typename T19, typename T20, typename T21, typename T22, typename T23, typename T24, typename T25>
	class CKMJPGPLECG___WaitStreaming_d__25 : public ::System::Object
	{
	public:
		::System::Object* __2__current; // 0x10
		::CKMJPGPLECG* __4__this; // 0x18
		::RPG::Client::FiveDimGameInstance* _targetInstance_5__2; // 0x20
		::RPG::Client::Stage* _stage_5__3; // 0x28
		::System::Int32 _i_5__4; // 0x30
		::System::Int32 __1__state; // 0x34
		::System::Void _ctor(::System::Int32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + CKMJPGPLECG___WAITSTREAMING_D__25_CTOR_OFFSET))(this, a1);
		}

		::System::Void System_IDisposable_Dispose()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CKMJPGPLECG___WAITSTREAMING_D__25_SYSTEM_IDISPOSABLE_DISPOSE_OFFSET))(this);
		}

		::System::Boolean MoveNext()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + CKMJPGPLECG___WAITSTREAMING_D__25_MOVENEXT_OFFSET))(this);
		}

		::System::Object* System_Collections_Generic_IEnumerator_System_Object__get_Current()
		{
			return ((::System::Object*(*)(::PVOID))((::PBYTE)hIl2Cpp + CKMJPGPLECG___WAITSTREAMING_D__25_SYSTEM_COLLECTIONS_GENERIC_IENUMERATOR_SYSTEM_OBJECT__GET_CURRENT_OFFSET))(this);
		}

		::System::Void System_Collections_IEnumerator_Reset()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CKMJPGPLECG___WAITSTREAMING_D__25_SYSTEM_COLLECTIONS_IENUMERATOR_RESET_OFFSET))(this);
		}

		::System::Object* System_Collections_IEnumerator_get_Current()
		{
			return ((::System::Object*(*)(::PVOID))((::PBYTE)hIl2Cpp + CKMJPGPLECG___WAITSTREAMING_D__25_SYSTEM_COLLECTIONS_IENUMERATOR_GET_CURRENT_OFFSET))(this);
		}

	};
