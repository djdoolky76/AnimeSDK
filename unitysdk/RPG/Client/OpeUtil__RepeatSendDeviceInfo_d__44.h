#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
namespace System { class Object; }
namespace System { class String; }
namespace UnityEngine::Networking { class UnityWebRequest; }

#define RPG_CLIENT_OPEUTIL__REPEATSENDDEVICEINFO_D__44_CTOR_OFFSET UNITYSDK_OFFSET(0xD9F0380)
#define RPG_CLIENT_OPEUTIL__REPEATSENDDEVICEINFO_D__44_MOVENEXT_OFFSET UNITYSDK_OFFSET(0xD9F2890)
#define RPG_CLIENT_OPEUTIL__REPEATSENDDEVICEINFO_D__44_SYSTEM_COLLECTIONS_GENERIC_IENUMERATOR_SYSTEM_OBJECT__GET_CURRENT_OFFSET UNITYSDK_OFFSET(0xD9F35C0)
#define RPG_CLIENT_OPEUTIL__REPEATSENDDEVICEINFO_D__44_SYSTEM_COLLECTIONS_IENUMERATOR_GET_CURRENT_OFFSET UNITYSDK_OFFSET(0xD9F3620)
#define RPG_CLIENT_OPEUTIL__REPEATSENDDEVICEINFO_D__44_SYSTEM_COLLECTIONS_IENUMERATOR_RESET_OFFSET UNITYSDK_OFFSET(0xD9F35D0)
#define RPG_CLIENT_OPEUTIL__REPEATSENDDEVICEINFO_D__44_SYSTEM_IDISPOSABLE_DISPOSE_OFFSET UNITYSDK_OFFSET(0xD9F2820)
#define RPG_CLIENT_OPEUTIL__REPEATSENDDEVICEINFO_D__44___M__FINALLY1_OFFSET UNITYSDK_OFFSET(0xD9F2870)

namespace RPG::Client
{
	inline static constexpr unsigned int OpeUtil__RepeatSendDeviceInfo_d__44_TypeDefinitionIndex = 59311;

	template <typename T1, typename T2, typename T3, typename T4, typename T5, typename T6, typename T7, typename T8, typename T9, typename T10, typename T11, typename T12, typename T13, typename T14, typename T15, typename T16, typename T17, typename T18, typename T19, typename T20, typename T21, typename T22, typename T23, typename T24, typename T25, typename T26, typename T27, typename T28, typename T29, typename T30, typename T31, typename T32, typename T33, typename T34, typename T35, typename T36, typename T37, typename T38, typename T39, typename T40, typename T41, typename T42, typename T43, typename T44>
	class OpeUtil__RepeatSendDeviceInfo_d__44 : public ::System::Object
	{
	public:
		::System::String* authKey; // 0x10
		::System::String* _reqUrl_5__3; // 0x18
		::System::String* _postData_5__2; // 0x20
		::System::Object* __2__current; // 0x28
		::System::String* cliID; // 0x30
		::UnityEngine::Networking::UnityWebRequest* _Post_5__5; // 0x38
		::System::Boolean _result_5__4; // 0x40
		::System::Byte _padding0[0x3];
		::System::Int32 __1__state; // 0x44
		::System::Void _ctor(::System::Int32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + RPG_CLIENT_OPEUTIL__REPEATSENDDEVICEINFO_D__44_CTOR_OFFSET))(this, a1);
		}

		::System::Void System_IDisposable_Dispose()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_OPEUTIL__REPEATSENDDEVICEINFO_D__44_SYSTEM_IDISPOSABLE_DISPOSE_OFFSET))(this);
		}

		::System::Boolean MoveNext()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_OPEUTIL__REPEATSENDDEVICEINFO_D__44_MOVENEXT_OFFSET))(this);
		}

		::System::Void __m__Finally1()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_OPEUTIL__REPEATSENDDEVICEINFO_D__44___M__FINALLY1_OFFSET))(this);
		}

		::System::Object* System_Collections_Generic_IEnumerator_System_Object__get_Current()
		{
			return ((::System::Object*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_OPEUTIL__REPEATSENDDEVICEINFO_D__44_SYSTEM_COLLECTIONS_GENERIC_IENUMERATOR_SYSTEM_OBJECT__GET_CURRENT_OFFSET))(this);
		}

		::System::Void System_Collections_IEnumerator_Reset()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_OPEUTIL__REPEATSENDDEVICEINFO_D__44_SYSTEM_COLLECTIONS_IENUMERATOR_RESET_OFFSET))(this);
		}

		::System::Object* System_Collections_IEnumerator_get_Current()
		{
			return ((::System::Object*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_OPEUTIL__REPEATSENDDEVICEINFO_D__44_SYSTEM_COLLECTIONS_IENUMERATOR_GET_CURRENT_OFFSET))(this);
		}

	};
}
