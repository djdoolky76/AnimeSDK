#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/MonoEffectPluginCharaPropBase.h"
namespace System { class Object; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }
namespace System::Collections::Generic { template <typename T> class List_1; }
namespace UnityEngine { class Material; }
namespace UnityEngine { class Renderer; }

#define RPG_CLIENT_MONOEFFECTPLUGINCHARAPROPPARTSSELECTION_CCLFJNENICH_OFFSET UNITYSDK_OFFSET(0xD7E7650)
#define RPG_CLIENT_MONOEFFECTPLUGINCHARAPROPPARTSSELECTION_CTOR_OFFSET UNITYSDK_OFFSET(0xD7E7740)
#define RPG_CLIENT_MONOEFFECTPLUGINCHARAPROPPARTSSELECTION_INIT_OFFSET UNITYSDK_OFFSET(0xD7E6A80)
#define RPG_CLIENT_MONOEFFECTPLUGINCHARAPROPPARTSSELECTION_UNINIT_OFFSET UNITYSDK_OFFSET(0xD7E76F0)
#define RPG_CLIENT_MONOEFFECTPLUGINCHARAPROPPARTSSELECTION_UPDATEPROPERTY_OFFSET UNITYSDK_OFFSET(0xD7E6B20)

namespace RPG::Client
{
	inline static constexpr unsigned int MonoEffectPluginCharaPropPartsSelection_TypeDefinitionIndex = 69974;

	class MonoEffectPluginCharaPropPartsSelection : public ::RPG::Client::MonoEffectPluginCharaPropBase
	{
	public:
		::System::Boolean _HideCharaParts; // 0x40
		::System::Boolean _ShowID0; // 0x41
		::System::Boolean _EnableShadowID0; // 0x42
		::System::Boolean _ShowID1; // 0x43
		::System::Boolean _EnableShadowID1; // 0x44
		::System::Boolean _ShowID2; // 0x45
		::System::Boolean _EnableShadowID2; // 0x46
		::System::Boolean _ShowID3; // 0x47
		::System::Boolean _EnableShadowID3; // 0x48
		::System::Boolean _ShowID4; // 0x49
		::System::Boolean _EnableShadowID4; // 0x4A
		::System::Boolean _ShowID5; // 0x4B
		::System::Boolean _EnableShadowID5; // 0x4C
		::System::Boolean _ShowID6; // 0x4D
		::System::Boolean _EnableShadowID6; // 0x4E
		::System::Boolean _ShowID7; // 0x4F
		::System::Boolean _EnableShadowID7; // 0x50
		::System::Byte _padding0[0x7];
		::Il2CppArray<::System::Boolean>* LKIKPHKAFJB; // 0x58
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MONOEFFECTPLUGINCHARAPROPPARTSSELECTION_CTOR_OFFSET))(this);
		}

		::System::Void Init(::System::Collections::Generic::Dictionary_2<::UnityEngine::Renderer*, ::System::Object*>* a1, ::System::Collections::Generic::List_1<::UnityEngine::Material*>* a2, ::System::Object* a3)
		{
			return ((::System::Void(*)(::PVOID, ::System::Collections::Generic::Dictionary_2<::UnityEngine::Renderer*, ::System::Object*>*, ::System::Collections::Generic::List_1<::UnityEngine::Material*>*, ::System::Object*))((::PBYTE)hIl2Cpp + RPG_CLIENT_MONOEFFECTPLUGINCHARAPROPPARTSSELECTION_INIT_OFFSET))(this, a1, a2, a3);
		}

		::System::Void UpdateProperty(::System::Collections::Generic::List_1<::UnityEngine::Material*>* a1, ::System::Boolean a2)
		{
			return ((::System::Void(*)(::PVOID, ::System::Collections::Generic::List_1<::UnityEngine::Material*>*, ::System::Boolean))((::PBYTE)hIl2Cpp + RPG_CLIENT_MONOEFFECTPLUGINCHARAPROPPARTSSELECTION_UPDATEPROPERTY_OFFSET))(this, a1, a2);
		}

		::System::Void UnInit()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MONOEFFECTPLUGINCHARAPROPPARTSSELECTION_UNINIT_OFFSET))(this);
		}

		::System::Int32 CCLFJNENICH(::UnityEngine::Material* a1, ::System::Boolean a2, ::System::Int32 a3, ::System::Int32 a4)
		{
			return ((::System::Int32(*)(::PVOID, ::UnityEngine::Material*, ::System::Boolean, ::System::Int32, ::System::Int32))((::PBYTE)hIl2Cpp + RPG_CLIENT_MONOEFFECTPLUGINCHARAPROPPARTSSELECTION_CCLFJNENICH_OFFSET))(this, a1, a2, a3, a4);
		}

	};
}
