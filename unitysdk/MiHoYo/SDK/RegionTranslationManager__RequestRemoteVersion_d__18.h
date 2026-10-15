#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
namespace MiHoYo::SDK { class RegionTranslationManager; }
namespace System { class Action; }
namespace System { class Object; }
namespace System { class String; }

#define MIHOYO_SDK_REGIONTRANSLATIONMANAGER__REQUESTREMOTEVERSION_D__18_CTOR_OFFSET UNITYSDK_OFFSET(0x1BFC2760)
#define MIHOYO_SDK_REGIONTRANSLATIONMANAGER__REQUESTREMOTEVERSION_D__18_MOVENEXT_OFFSET UNITYSDK_OFFSET(0x1BFC2BC0)
#define MIHOYO_SDK_REGIONTRANSLATIONMANAGER__REQUESTREMOTEVERSION_D__18_SYSTEM_COLLECTIONS_GENERIC_IENUMERATOR_SYSTEM_OBJECT__GET_CURRENT_OFFSET UNITYSDK_OFFSET(0x1BFC2DE0)
#define MIHOYO_SDK_REGIONTRANSLATIONMANAGER__REQUESTREMOTEVERSION_D__18_SYSTEM_COLLECTIONS_IENUMERATOR_GET_CURRENT_OFFSET UNITYSDK_OFFSET(0x1BFC2E40)
#define MIHOYO_SDK_REGIONTRANSLATIONMANAGER__REQUESTREMOTEVERSION_D__18_SYSTEM_COLLECTIONS_IENUMERATOR_RESET_OFFSET UNITYSDK_OFFSET(0x1BFC2DF0)
#define MIHOYO_SDK_REGIONTRANSLATIONMANAGER__REQUESTREMOTEVERSION_D__18_SYSTEM_IDISPOSABLE_DISPOSE_OFFSET UNITYSDK_OFFSET(0x1BFC2BB0)

namespace MiHoYo::SDK
{
	template <typename T1, typename T2, typename T3, typename T4, typename T5, typename T6, typename T7, typename T8, typename T9, typename T10, typename T11, typename T12, typename T13, typename T14, typename T15, typename T16, typename T17, typename T18>
	class RegionTranslationManager__RequestRemoteVersion_d__18 : public ::System::Object
	{
	public:
		::System::String* _url_5__1; // 0x10
		::System::Action* timeoutCallback; // 0x18
		::MiHoYo::SDK::RegionTranslationManager* __4__this; // 0x20
		::System::Object* __2__current; // 0x28
		::System::Action* callback; // 0x30
		::System::Int32 __1__state; // 0x38
		::System::Void _ctor(::System::Int32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + MIHOYO_SDK_REGIONTRANSLATIONMANAGER__REQUESTREMOTEVERSION_D__18_CTOR_OFFSET))(this, a1);
		}

		::System::Void System_IDisposable_Dispose()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MIHOYO_SDK_REGIONTRANSLATIONMANAGER__REQUESTREMOTEVERSION_D__18_SYSTEM_IDISPOSABLE_DISPOSE_OFFSET))(this);
		}

		::System::Boolean MoveNext()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + MIHOYO_SDK_REGIONTRANSLATIONMANAGER__REQUESTREMOTEVERSION_D__18_MOVENEXT_OFFSET))(this);
		}

		::System::Object* System_Collections_Generic_IEnumerator_System_Object__get_Current()
		{
			return ((::System::Object*(*)(::PVOID))((::PBYTE)hIl2Cpp + MIHOYO_SDK_REGIONTRANSLATIONMANAGER__REQUESTREMOTEVERSION_D__18_SYSTEM_COLLECTIONS_GENERIC_IENUMERATOR_SYSTEM_OBJECT__GET_CURRENT_OFFSET))(this);
		}

		::System::Void System_Collections_IEnumerator_Reset()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MIHOYO_SDK_REGIONTRANSLATIONMANAGER__REQUESTREMOTEVERSION_D__18_SYSTEM_COLLECTIONS_IENUMERATOR_RESET_OFFSET))(this);
		}

		::System::Object* System_Collections_IEnumerator_get_Current()
		{
			return ((::System::Object*(*)(::PVOID))((::PBYTE)hIl2Cpp + MIHOYO_SDK_REGIONTRANSLATIONMANAGER__REQUESTREMOTEVERSION_D__18_SYSTEM_COLLECTIONS_IENUMERATOR_GET_CURRENT_OFFSET))(this);
		}

	};
}
