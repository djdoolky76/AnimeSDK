#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class NFANJNAMFBH;
namespace RPG::Client { class GlobalDispatchData; }
namespace System { class Action; }
namespace System { class Object; }
namespace System { class String; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }

#define NFANJNAMFBH__STARTPINGSERVER_D__0_CTOR_OFFSET UNITYSDK_OFFSET(0x18E5A200)
#define NFANJNAMFBH__STARTPINGSERVER_D__0_MOVENEXT_OFFSET UNITYSDK_OFFSET(0x18E5A490)
#define NFANJNAMFBH__STARTPINGSERVER_D__0_SYSTEM_COLLECTIONS_GENERIC_IENUMERATOR_SYSTEM_OBJECT__GET_CURRENT_OFFSET UNITYSDK_OFFSET(0x18E5A8A0)
#define NFANJNAMFBH__STARTPINGSERVER_D__0_SYSTEM_COLLECTIONS_IENUMERATOR_GET_CURRENT_OFFSET UNITYSDK_OFFSET(0x18E5A900)
#define NFANJNAMFBH__STARTPINGSERVER_D__0_SYSTEM_COLLECTIONS_IENUMERATOR_RESET_OFFSET UNITYSDK_OFFSET(0x18E5A8B0)
#define NFANJNAMFBH__STARTPINGSERVER_D__0_SYSTEM_IDISPOSABLE_DISPOSE_OFFSET UNITYSDK_OFFSET(0x18E5A480)

inline static constexpr unsigned int NFANJNAMFBH__StartPingServer_d__0_TypeDefinitionIndex = 71299;

	class NFANJNAMFBH__StartPingServer_d__0 : public ::System::Object
	{
	public:
		::System::Object* __2__current; // 0x10
		::NFANJNAMFBH* __4__this; // 0x18
		::System::Action* onPingsFinished; // 0x20
		::RPG::Client::GlobalDispatchData* data; // 0x28
		::System::Collections::Generic::Dictionary_2<::System::String*, ::System::Int64>* dct; // 0x30
		::System::Int32 __1__state; // 0x38
		::System::Void _ctor(::System::Int32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + NFANJNAMFBH__STARTPINGSERVER_D__0_CTOR_OFFSET))(this, a1);
		}

		::System::Void System_IDisposable_Dispose()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + NFANJNAMFBH__STARTPINGSERVER_D__0_SYSTEM_IDISPOSABLE_DISPOSE_OFFSET))(this);
		}

		::System::Boolean MoveNext()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + NFANJNAMFBH__STARTPINGSERVER_D__0_MOVENEXT_OFFSET))(this);
		}

		::System::Object* System_Collections_Generic_IEnumerator_System_Object__get_Current()
		{
			return ((::System::Object*(*)(::PVOID))((::PBYTE)hIl2Cpp + NFANJNAMFBH__STARTPINGSERVER_D__0_SYSTEM_COLLECTIONS_GENERIC_IENUMERATOR_SYSTEM_OBJECT__GET_CURRENT_OFFSET))(this);
		}

		::System::Void System_Collections_IEnumerator_Reset()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + NFANJNAMFBH__STARTPINGSERVER_D__0_SYSTEM_COLLECTIONS_IENUMERATOR_RESET_OFFSET))(this);
		}

		::System::Object* System_Collections_IEnumerator_get_Current()
		{
			return ((::System::Object*(*)(::PVOID))((::PBYTE)hIl2Cpp + NFANJNAMFBH__STARTPINGSERVER_D__0_SYSTEM_COLLECTIONS_IENUMERATOR_GET_CURRENT_OFFSET))(this);
		}

	};
