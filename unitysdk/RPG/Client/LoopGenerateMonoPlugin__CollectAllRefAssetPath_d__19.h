#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
namespace RPG::Client { class LoopGenerateMonoPlugin; }
namespace System { class Object; }
namespace System { class String; }
namespace System::Collections::Generic { template <typename T> class IEnumerator_1; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define RPG_CLIENT_LOOPGENERATEMONOPLUGIN__COLLECTALLREFASSETPATH_D__19_CTOR_OFFSET UNITYSDK_OFFSET(0xD4E35B0)
#define RPG_CLIENT_LOOPGENERATEMONOPLUGIN__COLLECTALLREFASSETPATH_D__19_MOVENEXT_OFFSET UNITYSDK_OFFSET(0xD4E3B70)
#define RPG_CLIENT_LOOPGENERATEMONOPLUGIN__COLLECTALLREFASSETPATH_D__19_SYSTEM_COLLECTIONS_GENERIC_IENUMERATOR_SYSTEM_STRING__GET_CURRENT_OFFSET UNITYSDK_OFFSET(0xD4E3FB0)
#define RPG_CLIENT_LOOPGENERATEMONOPLUGIN__COLLECTALLREFASSETPATH_D__19_SYSTEM_COLLECTIONS_IENUMERATOR_GET_CURRENT_OFFSET UNITYSDK_OFFSET(0xD4E4010)
#define RPG_CLIENT_LOOPGENERATEMONOPLUGIN__COLLECTALLREFASSETPATH_D__19_SYSTEM_COLLECTIONS_IENUMERATOR_RESET_OFFSET UNITYSDK_OFFSET(0xD4E3FC0)
#define RPG_CLIENT_LOOPGENERATEMONOPLUGIN__COLLECTALLREFASSETPATH_D__19_SYSTEM_IDISPOSABLE_DISPOSE_OFFSET UNITYSDK_OFFSET(0xD4E3A30)
#define RPG_CLIENT_LOOPGENERATEMONOPLUGIN__COLLECTALLREFASSETPATH_D__19___M__FINALLY1_OFFSET UNITYSDK_OFFSET(0xD4E3A70)

namespace RPG::Client
{
	inline static constexpr unsigned int LoopGenerateMonoPlugin__CollectAllRefAssetPath_d__19_TypeDefinitionIndex = 70916;

	template <typename T1, typename T2, typename T3, typename T4, typename T5, typename T6, typename T7, typename T8, typename T9, typename T10, typename T11, typename T12, typename T13, typename T14, typename T15, typename T16, typename T17, typename T18, typename T19>
	class LoopGenerateMonoPlugin__CollectAllRefAssetPath_d__19 : public ::System::Object
	{
	public:
		::RPG::Client::LoopGenerateMonoPlugin* __4__this; // 0x10
		::System::Collections::Generic::List_1<::System::Object*>* _sliderTemplates_5__4; // 0x18
		::System::Collections::Generic::IEnumerator_1<::System::String*>* _basePaths_5__2; // 0x20
		::System::String* __2__current; // 0x28
		::System::Int32 _j_5__5; // 0x30
		::System::Int32 _i_5__3; // 0x34
		::System::Int32 __1__state; // 0x38
		::System::Void _ctor(::System::Int32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + RPG_CLIENT_LOOPGENERATEMONOPLUGIN__COLLECTALLREFASSETPATH_D__19_CTOR_OFFSET))(this, a1);
		}

		::System::Void System_IDisposable_Dispose()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_LOOPGENERATEMONOPLUGIN__COLLECTALLREFASSETPATH_D__19_SYSTEM_IDISPOSABLE_DISPOSE_OFFSET))(this);
		}

		::System::Boolean MoveNext()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_LOOPGENERATEMONOPLUGIN__COLLECTALLREFASSETPATH_D__19_MOVENEXT_OFFSET))(this);
		}

		::System::Void __m__Finally1()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_LOOPGENERATEMONOPLUGIN__COLLECTALLREFASSETPATH_D__19___M__FINALLY1_OFFSET))(this);
		}

		::System::String* System_Collections_Generic_IEnumerator_System_String__get_Current()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_LOOPGENERATEMONOPLUGIN__COLLECTALLREFASSETPATH_D__19_SYSTEM_COLLECTIONS_GENERIC_IENUMERATOR_SYSTEM_STRING__GET_CURRENT_OFFSET))(this);
		}

		::System::Void System_Collections_IEnumerator_Reset()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_LOOPGENERATEMONOPLUGIN__COLLECTALLREFASSETPATH_D__19_SYSTEM_COLLECTIONS_IENUMERATOR_RESET_OFFSET))(this);
		}

		::System::Object* System_Collections_IEnumerator_get_Current()
		{
			return ((::System::Object*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_LOOPGENERATEMONOPLUGIN__COLLECTALLREFASSETPATH_D__19_SYSTEM_COLLECTIONS_IENUMERATOR_GET_CURRENT_OFFSET))(this);
		}

	};
}
