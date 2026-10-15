#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
namespace MiHoYo::SDK::Win { class PopImageManager; }
namespace System { class Object; }
namespace System { class String; }
namespace System::Security::Cryptography { class MD5; }
namespace UnityEngine { class Texture2D; }
namespace UnityEngine::Events { class UnityAction; }
namespace UnityEngine::Networking { class UnityWebRequest; }

#define MIHOYO_SDK_WIN_POPIMAGEMANAGER__LOADNETWORKTEXTURE_D__30_CTOR_OFFSET UNITYSDK_OFFSET(0x1BDD9B30)
#define MIHOYO_SDK_WIN_POPIMAGEMANAGER__LOADNETWORKTEXTURE_D__30_MOVENEXT_OFFSET UNITYSDK_OFFSET(0x1BDD9EB0)
#define MIHOYO_SDK_WIN_POPIMAGEMANAGER__LOADNETWORKTEXTURE_D__30_SYSTEM_COLLECTIONS_GENERIC_IENUMERATOR_SYSTEM_OBJECT__GET_CURRENT_OFFSET UNITYSDK_OFFSET(0x1BDDA5C0)
#define MIHOYO_SDK_WIN_POPIMAGEMANAGER__LOADNETWORKTEXTURE_D__30_SYSTEM_COLLECTIONS_IENUMERATOR_GET_CURRENT_OFFSET UNITYSDK_OFFSET(0x1BDDA620)
#define MIHOYO_SDK_WIN_POPIMAGEMANAGER__LOADNETWORKTEXTURE_D__30_SYSTEM_COLLECTIONS_IENUMERATOR_RESET_OFFSET UNITYSDK_OFFSET(0x1BDDA5D0)
#define MIHOYO_SDK_WIN_POPIMAGEMANAGER__LOADNETWORKTEXTURE_D__30_SYSTEM_IDISPOSABLE_DISPOSE_OFFSET UNITYSDK_OFFSET(0x1BDD9EA0)

namespace MiHoYo::SDK::Win
{
	inline static constexpr unsigned int PopImageManager__LoadNetworkTexture_d__30_TypeDefinitionIndex = 9477;

	template <typename T1, typename T2, typename T3, typename T4, typename T5, typename T6, typename T7, typename T8, typename T9, typename T10, typename T11, typename T12, typename T13, typename T14, typename T15, typename T16, typename T17, typename T18, typename T19, typename T20, typename T21, typename T22, typename T23, typename T24, typename T25, typename T26, typename T27, typename T28, typename T29, typename T30>
	class PopImageManager__LoadNetworkTexture_d__30 : public ::System::Object
	{
	public:
		::Il2CppArray<::System::Byte>* _pngData_5__4; // 0x10
		::System::String* url; // 0x18
		::UnityEngine::Networking::UnityWebRequest* _localRequest_5__1; // 0x20
		::System::Object* __2__current; // 0x28
		::Il2CppArray<::System::Byte>* _hash_5__7; // 0x30
		::MiHoYo::SDK::Win::PopImageManager* __4__this; // 0x38
		::UnityEngine::Texture2D* _image_5__3; // 0x40
		::System::String* _imageMD5_5__5; // 0x48
		::System::String* _downloadMD5_5__8; // 0x50
		::System::String* _name_5__2; // 0x58
		::UnityEngine::Events::UnityAction* callback; // 0x60
		::System::Security::Cryptography::MD5* _md5_5__6; // 0x68
		::System::Int32 __1__state; // 0x70
		::System::Void _ctor(::System::Int32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + MIHOYO_SDK_WIN_POPIMAGEMANAGER__LOADNETWORKTEXTURE_D__30_CTOR_OFFSET))(this, a1);
		}

		::System::Void System_IDisposable_Dispose()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MIHOYO_SDK_WIN_POPIMAGEMANAGER__LOADNETWORKTEXTURE_D__30_SYSTEM_IDISPOSABLE_DISPOSE_OFFSET))(this);
		}

		::System::Boolean MoveNext()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + MIHOYO_SDK_WIN_POPIMAGEMANAGER__LOADNETWORKTEXTURE_D__30_MOVENEXT_OFFSET))(this);
		}

		::System::Object* System_Collections_Generic_IEnumerator_System_Object__get_Current()
		{
			return ((::System::Object*(*)(::PVOID))((::PBYTE)hIl2Cpp + MIHOYO_SDK_WIN_POPIMAGEMANAGER__LOADNETWORKTEXTURE_D__30_SYSTEM_COLLECTIONS_GENERIC_IENUMERATOR_SYSTEM_OBJECT__GET_CURRENT_OFFSET))(this);
		}

		::System::Void System_Collections_IEnumerator_Reset()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MIHOYO_SDK_WIN_POPIMAGEMANAGER__LOADNETWORKTEXTURE_D__30_SYSTEM_COLLECTIONS_IENUMERATOR_RESET_OFFSET))(this);
		}

		::System::Object* System_Collections_IEnumerator_get_Current()
		{
			return ((::System::Object*(*)(::PVOID))((::PBYTE)hIl2Cpp + MIHOYO_SDK_WIN_POPIMAGEMANAGER__LOADNETWORKTEXTURE_D__30_SYSTEM_COLLECTIONS_IENUMERATOR_GET_CURRENT_OFFSET))(this);
		}

	};
}
