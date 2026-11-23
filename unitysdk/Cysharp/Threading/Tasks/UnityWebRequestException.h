#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/B81252A784389775/AE65CC9A7178B161_BFE8C2E1F1993414.h"
#include "unitysdk/System/Exception.h"

namespace B81252A784389775 { class AE65CC9A7178B161; }
namespace System { class String; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }

#define CYSHARP_THREADING_TASKS_UNITYWEBREQUESTEXCEPTION_GET_ERROR_OFFSET UNITYSDK_OFFSET(0x17F7040)
#define CYSHARP_THREADING_TASKS_UNITYWEBREQUESTEXCEPTION_GET_MESSAGE_OFFSET UNITYSDK_OFFSET(0x3F31C00)
#define CYSHARP_THREADING_TASKS_UNITYWEBREQUESTEXCEPTION_GET_TEXT_OFFSET UNITYSDK_OFFSET(0x17F7020)
#define CYSHARP_THREADING_TASKS_UNITYWEBREQUESTEXCEPTION_GET_UNITYWEBREQUEST_OFFSET UNITYSDK_OFFSET(0x17919E0)
#define CYSHARP_THREADING_TASKS_UNITYWEBREQUESTEXCEPTION__CTOR_OFFSET UNITYSDK_OFFSET(0x3F31AC0)

namespace Cysharp::Threading::Tasks
{
	inline static constexpr unsigned int UnityWebRequestException_TypeDefinitionIndex = 19887;

	class UnityWebRequestException : public ::System::Exception
	{
	public:
		::B81252A784389775::AE65CC9A7178B161* _UnityWebRequest_k__BackingField; // 0x90
		::B81252A784389775::AE65CC9A7178B161_BFE8C2E1F1993414 _Result_k__BackingField; // 0x98
		::System::Byte _padding0[0x4];
		::System::String* _Error_k__BackingField; // 0xA0
		::System::String* _Text_k__BackingField; // 0xA8
		::System::Int64 _ResponseCode_k__BackingField; // 0xB0
		::System::Collections::Generic::Dictionary_2<::System::String*, ::System::String*>* _ResponseHeaders_k__BackingField; // 0xB8
		::System::String* msg; // 0xC0

		::System::String* get_Text()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + CYSHARP_THREADING_TASKS_UNITYWEBREQUESTEXCEPTION_GET_TEXT_OFFSET))(this);
		}

		::System::String* get_Error()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + CYSHARP_THREADING_TASKS_UNITYWEBREQUESTEXCEPTION_GET_ERROR_OFFSET))(this);
		}

		::System::String* get_Message()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + CYSHARP_THREADING_TASKS_UNITYWEBREQUESTEXCEPTION_GET_MESSAGE_OFFSET))(this);
		}

		::B81252A784389775::AE65CC9A7178B161* get_UnityWebRequest()
		{
			return ((::B81252A784389775::AE65CC9A7178B161*(*)(::PVOID))((::PBYTE)hIl2Cpp + CYSHARP_THREADING_TASKS_UNITYWEBREQUESTEXCEPTION_GET_UNITYWEBREQUEST_OFFSET))(this);
		}

		::System::Void _ctor(::B81252A784389775::AE65CC9A7178B161* ED5F406D410A5F53)
		{
			return ((::System::Void(*)(::PVOID, ::B81252A784389775::AE65CC9A7178B161*))((::PBYTE)hIl2Cpp + CYSHARP_THREADING_TASKS_UNITYWEBREQUESTEXCEPTION__CTOR_OFFSET))(this, ED5F406D410A5F53);
		}
	};
}
