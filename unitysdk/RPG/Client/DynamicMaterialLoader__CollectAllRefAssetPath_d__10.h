#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
namespace RPG::Client { class DynamicMaterialLoader; }
namespace System { class Object; }
namespace System { class String; }

#define RPG_CLIENT_DYNAMICMATERIALLOADER__COLLECTALLREFASSETPATH_D__10_CTOR_OFFSET UNITYSDK_OFFSET(0xCCFD000)
#define RPG_CLIENT_DYNAMICMATERIALLOADER__COLLECTALLREFASSETPATH_D__10_MOVENEXT_OFFSET UNITYSDK_OFFSET(0xCCFD0F0)
#define RPG_CLIENT_DYNAMICMATERIALLOADER__COLLECTALLREFASSETPATH_D__10_SYSTEM_COLLECTIONS_GENERIC_IENUMERATOR_SYSTEM_STRING__GET_CURRENT_OFFSET UNITYSDK_OFFSET(0xCCFD240)
#define RPG_CLIENT_DYNAMICMATERIALLOADER__COLLECTALLREFASSETPATH_D__10_SYSTEM_COLLECTIONS_IENUMERATOR_GET_CURRENT_OFFSET UNITYSDK_OFFSET(0xCCFD2A0)
#define RPG_CLIENT_DYNAMICMATERIALLOADER__COLLECTALLREFASSETPATH_D__10_SYSTEM_COLLECTIONS_IENUMERATOR_RESET_OFFSET UNITYSDK_OFFSET(0xCCFD250)
#define RPG_CLIENT_DYNAMICMATERIALLOADER__COLLECTALLREFASSETPATH_D__10_SYSTEM_IDISPOSABLE_DISPOSE_OFFSET UNITYSDK_OFFSET(0xCCFD0E0)

namespace RPG::Client
{
	inline static constexpr unsigned int DynamicMaterialLoader__CollectAllRefAssetPath_d__10_TypeDefinitionIndex = 68411;

	template <typename T1, typename T2, typename T3, typename T4, typename T5, typename T6, typename T7, typename T8, typename T9, typename T10>
	class DynamicMaterialLoader__CollectAllRefAssetPath_d__10 : public ::System::Object
	{
	public:
		::Il2CppArray<::System::Object*>* _mats_5__3; // 0x10
		::RPG::Client::DynamicMaterialLoader* __4__this; // 0x18
		::System::String* __2__current; // 0x20
		::System::Int32 _j_5__4; // 0x28
		::System::Int32 _i_5__2; // 0x2C
		::System::Int32 __1__state; // 0x30
		::System::Void _ctor(::System::Int32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + RPG_CLIENT_DYNAMICMATERIALLOADER__COLLECTALLREFASSETPATH_D__10_CTOR_OFFSET))(this, a1);
		}

		::System::Void System_IDisposable_Dispose()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_DYNAMICMATERIALLOADER__COLLECTALLREFASSETPATH_D__10_SYSTEM_IDISPOSABLE_DISPOSE_OFFSET))(this);
		}

		::System::Boolean MoveNext()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_DYNAMICMATERIALLOADER__COLLECTALLREFASSETPATH_D__10_MOVENEXT_OFFSET))(this);
		}

		::System::String* System_Collections_Generic_IEnumerator_System_String__get_Current()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_DYNAMICMATERIALLOADER__COLLECTALLREFASSETPATH_D__10_SYSTEM_COLLECTIONS_GENERIC_IENUMERATOR_SYSTEM_STRING__GET_CURRENT_OFFSET))(this);
		}

		::System::Void System_Collections_IEnumerator_Reset()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_DYNAMICMATERIALLOADER__COLLECTALLREFASSETPATH_D__10_SYSTEM_COLLECTIONS_IENUMERATOR_RESET_OFFSET))(this);
		}

		::System::Object* System_Collections_IEnumerator_get_Current()
		{
			return ((::System::Object*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_DYNAMICMATERIALLOADER__COLLECTALLREFASSETPATH_D__10_SYSTEM_COLLECTIONS_IENUMERATOR_GET_CURRENT_OFFSET))(this);
		}

	};
}
