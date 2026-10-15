#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class LLHILPLLOHO;
namespace RPG::Client { class BattleLogModel; }
namespace System { class Object; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define LLHILPLLOHO__SENDUPLOADREQUEST_D__8_CTOR_OFFSET UNITYSDK_OFFSET(0xB7669B0)
#define LLHILPLLOHO__SENDUPLOADREQUEST_D__8_MOVENEXT_OFFSET UNITYSDK_OFFSET(0xB767040)
#define LLHILPLLOHO__SENDUPLOADREQUEST_D__8_SYSTEM_COLLECTIONS_GENERIC_IENUMERATOR_SYSTEM_OBJECT__GET_CURRENT_OFFSET UNITYSDK_OFFSET(0xB767720)
#define LLHILPLLOHO__SENDUPLOADREQUEST_D__8_SYSTEM_COLLECTIONS_IENUMERATOR_GET_CURRENT_OFFSET UNITYSDK_OFFSET(0xB767780)
#define LLHILPLLOHO__SENDUPLOADREQUEST_D__8_SYSTEM_COLLECTIONS_IENUMERATOR_RESET_OFFSET UNITYSDK_OFFSET(0xB767730)
#define LLHILPLLOHO__SENDUPLOADREQUEST_D__8_SYSTEM_IDISPOSABLE_DISPOSE_OFFSET UNITYSDK_OFFSET(0xB767030)

inline static constexpr unsigned int LLHILPLLOHO__SendUploadRequest_d__8_TypeDefinitionIndex = 60960;

	template <typename T1, typename T2, typename T3, typename T4, typename T5, typename T6, typename T7, typename T8>
	class LLHILPLLOHO__SendUploadRequest_d__8 : public ::System::Object
	{
	public:
		::System::Object* __2__current; // 0x10
		::System::Collections::Generic::List_1<::RPG::Client::BattleLogModel*>* reportingList; // 0x18
		::LLHILPLLOHO* __4__this; // 0x20
		::System::Int32 __1__state; // 0x28
		::System::Void _ctor(::System::Int32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + LLHILPLLOHO__SENDUPLOADREQUEST_D__8_CTOR_OFFSET))(this, a1);
		}

		::System::Void System_IDisposable_Dispose()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + LLHILPLLOHO__SENDUPLOADREQUEST_D__8_SYSTEM_IDISPOSABLE_DISPOSE_OFFSET))(this);
		}

		::System::Boolean MoveNext()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + LLHILPLLOHO__SENDUPLOADREQUEST_D__8_MOVENEXT_OFFSET))(this);
		}

		::System::Object* System_Collections_Generic_IEnumerator_System_Object__get_Current()
		{
			return ((::System::Object*(*)(::PVOID))((::PBYTE)hIl2Cpp + LLHILPLLOHO__SENDUPLOADREQUEST_D__8_SYSTEM_COLLECTIONS_GENERIC_IENUMERATOR_SYSTEM_OBJECT__GET_CURRENT_OFFSET))(this);
		}

		::System::Void System_Collections_IEnumerator_Reset()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + LLHILPLLOHO__SENDUPLOADREQUEST_D__8_SYSTEM_COLLECTIONS_IENUMERATOR_RESET_OFFSET))(this);
		}

		::System::Object* System_Collections_IEnumerator_get_Current()
		{
			return ((::System::Object*(*)(::PVOID))((::PBYTE)hIl2Cpp + LLHILPLLOHO__SENDUPLOADREQUEST_D__8_SYSTEM_COLLECTIONS_IENUMERATOR_GET_CURRENT_OFFSET))(this);
		}

	};
