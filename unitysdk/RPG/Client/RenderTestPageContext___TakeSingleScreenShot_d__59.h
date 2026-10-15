#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
namespace RPG::Client { class RenderTestPageContext; }
namespace System { class Object; }
namespace System { class String; }
namespace UnityEngine { class RenderTexture; }
namespace UnityEngine { class Texture2D; }

#define RPG_CLIENT_RENDERTESTPAGECONTEXT___TAKESINGLESCREENSHOT_D__59_CTOR_OFFSET UNITYSDK_OFFSET(0xDEA70C0)
#define RPG_CLIENT_RENDERTESTPAGECONTEXT___TAKESINGLESCREENSHOT_D__59_MOVENEXT_OFFSET UNITYSDK_OFFSET(0xDEA7A60)
#define RPG_CLIENT_RENDERTESTPAGECONTEXT___TAKESINGLESCREENSHOT_D__59_SYSTEM_COLLECTIONS_GENERIC_IENUMERATOR_SYSTEM_OBJECT__GET_CURRENT_OFFSET UNITYSDK_OFFSET(0xDEA7F20)
#define RPG_CLIENT_RENDERTESTPAGECONTEXT___TAKESINGLESCREENSHOT_D__59_SYSTEM_COLLECTIONS_IENUMERATOR_GET_CURRENT_OFFSET UNITYSDK_OFFSET(0xDEA7F80)
#define RPG_CLIENT_RENDERTESTPAGECONTEXT___TAKESINGLESCREENSHOT_D__59_SYSTEM_COLLECTIONS_IENUMERATOR_RESET_OFFSET UNITYSDK_OFFSET(0xDEA7F30)
#define RPG_CLIENT_RENDERTESTPAGECONTEXT___TAKESINGLESCREENSHOT_D__59_SYSTEM_IDISPOSABLE_DISPOSE_OFFSET UNITYSDK_OFFSET(0xDEA7A40)

namespace RPG::Client
{
	inline static constexpr unsigned int RenderTestPageContext___TakeSingleScreenShot_d__59_TypeDefinitionIndex = 72867;

	template <typename T1, typename T2, typename T3, typename T4, typename T5, typename T6, typename T7, typename T8, typename T9, typename T10, typename T11, typename T12, typename T13, typename T14, typename T15, typename T16, typename T17, typename T18, typename T19, typename T20, typename T21, typename T22, typename T23, typename T24, typename T25, typename T26, typename T27, typename T28, typename T29, typename T30, typename T31, typename T32, typename T33, typename T34, typename T35, typename T36, typename T37, typename T38, typename T39, typename T40, typename T41, typename T42, typename T43, typename T44, typename T45, typename T46, typename T47, typename T48, typename T49, typename T50, typename T51, typename T52, typename T53, typename T54, typename T55, typename T56, typename T57, typename T58, typename T59>
	class RenderTestPageContext___TakeSingleScreenShot_d__59 : public ::System::Object
	{
	public:
		::System::String* FileName; // 0x10
		::System::Object* __2__current; // 0x18
		::System::String* FolderName; // 0x20
		::UnityEngine::RenderTexture* _rt_5__2; // 0x28
		::RPG::Client::RenderTestPageContext* __4__this; // 0x30
		::UnityEngine::RenderTexture* _currentRT_5__3; // 0x38
		::UnityEngine::Texture2D* _tex_5__4; // 0x40
		::System::Int32 __1__state; // 0x48
		::System::Void _ctor(::System::Int32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + RPG_CLIENT_RENDERTESTPAGECONTEXT___TAKESINGLESCREENSHOT_D__59_CTOR_OFFSET))(this, a1);
		}

		::System::Void System_IDisposable_Dispose()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_RENDERTESTPAGECONTEXT___TAKESINGLESCREENSHOT_D__59_SYSTEM_IDISPOSABLE_DISPOSE_OFFSET))(this);
		}

		::System::Boolean MoveNext()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_RENDERTESTPAGECONTEXT___TAKESINGLESCREENSHOT_D__59_MOVENEXT_OFFSET))(this);
		}

		::System::Object* System_Collections_Generic_IEnumerator_System_Object__get_Current()
		{
			return ((::System::Object*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_RENDERTESTPAGECONTEXT___TAKESINGLESCREENSHOT_D__59_SYSTEM_COLLECTIONS_GENERIC_IENUMERATOR_SYSTEM_OBJECT__GET_CURRENT_OFFSET))(this);
		}

		::System::Void System_Collections_IEnumerator_Reset()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_RENDERTESTPAGECONTEXT___TAKESINGLESCREENSHOT_D__59_SYSTEM_COLLECTIONS_IENUMERATOR_RESET_OFFSET))(this);
		}

		::System::Object* System_Collections_IEnumerator_get_Current()
		{
			return ((::System::Object*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_RENDERTESTPAGECONTEXT___TAKESINGLESCREENSHOT_D__59_SYSTEM_COLLECTIONS_IENUMERATOR_GET_CURRENT_OFFSET))(this);
		}

	};
}
