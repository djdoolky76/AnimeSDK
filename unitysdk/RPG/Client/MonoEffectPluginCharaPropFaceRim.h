#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/MonoEffectPluginCharaPropBase.h"
#include "unitysdk/UnityEngine/Color.h"
#include "unitysdk/UnityEngine/Vector4.h"
namespace System { class Object; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }
namespace System::Collections::Generic { template <typename T> class List_1; }
namespace UnityEngine { class Material; }
namespace UnityEngine { class Renderer; }

#define RPG_CLIENT_MONOEFFECTPLUGINCHARAPROPFACERIM_CTOR_OFFSET UNITYSDK_OFFSET(0xD7E3420)
#define RPG_CLIENT_MONOEFFECTPLUGINCHARAPROPFACERIM_INIT_OFFSET UNITYSDK_OFFSET(0xD7E3020)
#define RPG_CLIENT_MONOEFFECTPLUGINCHARAPROPFACERIM_UNINIT_OFFSET UNITYSDK_OFFSET(0xD7E33D0)
#define RPG_CLIENT_MONOEFFECTPLUGINCHARAPROPFACERIM_UPDATEPROPERTY_OFFSET UNITYSDK_OFFSET(0xD7E30C0)

namespace RPG::Client
{
	class MonoEffectPluginCharaPropFaceRim : public ::RPG::Client::MonoEffectPluginCharaPropBase
	{
	public:
		::System::Boolean Toggle_FresnelColor; // 0x40
		::System::Byte _padding0[0x3];
		::UnityEngine::Color _FresnelColor; // 0x44
		::System::Boolean Toggle_FresnelBSI; // 0x54
		::System::Byte _padding1[0x3];
		::UnityEngine::Vector4 _FresnelBSI; // 0x58
		::System::Boolean Toggle_FresnelColorStrength; // 0x68
		::System::Byte _padding2[0x3];
		::System::Single _FresnelColorStrength; // 0x6C
		::Il2CppArray<::System::Boolean>* LKIKPHKAFJB; // 0x70
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MONOEFFECTPLUGINCHARAPROPFACERIM_CTOR_OFFSET))(this);
		}

		::System::Void Init(::System::Collections::Generic::Dictionary_2<::UnityEngine::Renderer*, ::System::Object*>* a1, ::System::Collections::Generic::List_1<::UnityEngine::Material*>* a2, ::System::Object* a3)
		{
			return ((::System::Void(*)(::PVOID, ::System::Collections::Generic::Dictionary_2<::UnityEngine::Renderer*, ::System::Object*>*, ::System::Collections::Generic::List_1<::UnityEngine::Material*>*, ::System::Object*))((::PBYTE)hIl2Cpp + RPG_CLIENT_MONOEFFECTPLUGINCHARAPROPFACERIM_INIT_OFFSET))(this, a1, a2, a3);
		}

		::System::Void UpdateProperty(::System::Collections::Generic::List_1<::UnityEngine::Material*>* a1, ::System::Boolean a2)
		{
			return ((::System::Void(*)(::PVOID, ::System::Collections::Generic::List_1<::UnityEngine::Material*>*, ::System::Boolean))((::PBYTE)hIl2Cpp + RPG_CLIENT_MONOEFFECTPLUGINCHARAPROPFACERIM_UPDATEPROPERTY_OFFSET))(this, a1, a2);
		}

		::System::Void UnInit()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MONOEFFECTPLUGINCHARAPROPFACERIM_UNINIT_OFFSET))(this);
		}

	};
}
