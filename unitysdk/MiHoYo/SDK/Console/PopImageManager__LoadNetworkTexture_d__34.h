#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
namespace MiHoYo::SDK::Console { class PopImageManager; }
namespace System { class Object; }
namespace System { class String; }
namespace System::Security::Cryptography { class MD5; }
namespace UnityEngine { class Texture2D; }
namespace UnityEngine::Events { class UnityAction; }
namespace UnityEngine::Networking { class UnityWebRequest; }

#define MIHOYO_SDK_CONSOLE_POPIMAGEMANAGER__LOADNETWORKTEXTURE_D__34_CTOR_OFFSET UNITYSDK_OFFSET(0x1BE1EFA0)
#define MIHOYO_SDK_CONSOLE_POPIMAGEMANAGER__LOADNETWORKTEXTURE_D__34_MOVENEXT_OFFSET UNITYSDK_OFFSET(0x1BE1F2A0)
#define MIHOYO_SDK_CONSOLE_POPIMAGEMANAGER__LOADNETWORKTEXTURE_D__34_SYSTEM_COLLECTIONS_GENERIC_IENUMERATOR_SYSTEM_OBJECT__GET_CURRENT_OFFSET UNITYSDK_OFFSET(0x1BE1F8E0)
#define MIHOYO_SDK_CONSOLE_POPIMAGEMANAGER__LOADNETWORKTEXTURE_D__34_SYSTEM_COLLECTIONS_IENUMERATOR_GET_CURRENT_OFFSET UNITYSDK_OFFSET(0x1BE1F940)
#define MIHOYO_SDK_CONSOLE_POPIMAGEMANAGER__LOADNETWORKTEXTURE_D__34_SYSTEM_COLLECTIONS_IENUMERATOR_RESET_OFFSET UNITYSDK_OFFSET(0x1BE1F8F0)
#define MIHOYO_SDK_CONSOLE_POPIMAGEMANAGER__LOADNETWORKTEXTURE_D__34_SYSTEM_IDISPOSABLE_DISPOSE_OFFSET UNITYSDK_OFFSET(0x1BE1F290)

namespace MiHoYo::SDK::Console
{
	template <typename T1, typename T2, typename T3, typename T4, typename T5, typename T6, typename T7, typename T8, typename T9, typename T10, typename T11, typename T12, typename T13, typename T14, typename T15, typename T16, typename T17, typename T18, typename T19, typename T20, typename T21, typename T22, typename T23, typename T24, typename T25, typename T26, typename T27, typename T28, typename T29, typename T30, typename T31, typename T32, typename T33, typename T34>
	class PopImageManager__LoadNetworkTexture_d__34 : public ::System::Object
	{
	public:
		::UnityEngine::Events::UnityAction* callback; // 0x10
		::System::String* _downloadMD5_5__6; // 0x18
		::System::Security::Cryptography::MD5* _md5_5__4; // 0x20
		::System::String* url; // 0x28
		::System::String* _imageMD5_5__3; // 0x30
		::Il2CppArray<::System::Byte>* _hash_5__5; // 0x38
		::MiHoYo::SDK::Console::PopImageManager* __4__this; // 0x40
		::UnityEngine::Texture2D* _image_5__2; // 0x48
		::UnityEngine::Networking::UnityWebRequest* _localRequest_5__1; // 0x50
		::System::Object* __2__current; // 0x58
		::System::Int32 __1__state; // 0x60
		::System::Void _ctor(::System::Int32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + MIHOYO_SDK_CONSOLE_POPIMAGEMANAGER__LOADNETWORKTEXTURE_D__34_CTOR_OFFSET))(this, a1);
		}

		::System::Void System_IDisposable_Dispose()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MIHOYO_SDK_CONSOLE_POPIMAGEMANAGER__LOADNETWORKTEXTURE_D__34_SYSTEM_IDISPOSABLE_DISPOSE_OFFSET))(this);
		}

		::System::Boolean MoveNext()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + MIHOYO_SDK_CONSOLE_POPIMAGEMANAGER__LOADNETWORKTEXTURE_D__34_MOVENEXT_OFFSET))(this);
		}

		::System::Object* System_Collections_Generic_IEnumerator_System_Object__get_Current()
		{
			return ((::System::Object*(*)(::PVOID))((::PBYTE)hIl2Cpp + MIHOYO_SDK_CONSOLE_POPIMAGEMANAGER__LOADNETWORKTEXTURE_D__34_SYSTEM_COLLECTIONS_GENERIC_IENUMERATOR_SYSTEM_OBJECT__GET_CURRENT_OFFSET))(this);
		}

		::System::Void System_Collections_IEnumerator_Reset()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MIHOYO_SDK_CONSOLE_POPIMAGEMANAGER__LOADNETWORKTEXTURE_D__34_SYSTEM_COLLECTIONS_IENUMERATOR_RESET_OFFSET))(this);
		}

		::System::Object* System_Collections_IEnumerator_get_Current()
		{
			return ((::System::Object*(*)(::PVOID))((::PBYTE)hIl2Cpp + MIHOYO_SDK_CONSOLE_POPIMAGEMANAGER__LOADNETWORKTEXTURE_D__34_SYSTEM_COLLECTIONS_IENUMERATOR_GET_CURRENT_OFFSET))(this);
		}

	};
}
