#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/MonoEffectPluginBase.h"
#include "unitysdk/RPG/Client/ReplaceMaterialsBlock.h"
class DEBEAKKOHLN;
namespace RPG::Client { class MonoEffectPluginCharaMaterialBlock; }
namespace System { class Object; }
namespace System::Collections::Generic { template <typename T> class List_1; }
namespace UnityEngine { class GameObject; }
namespace UnityEngine { class Material; }

#define RPG_CLIENT_EFFECT_CUTSCENE_REPLACEMATERIALS_CTOR_OFFSET UNITYSDK_OFFSET(0xCD1AFF0)
#define RPG_CLIENT_EFFECT_CUTSCENE_REPLACEMATERIALS_DISPOSEPLUGIN_OFFSET UNITYSDK_OFFSET(0xCD1AC40)
#define RPG_CLIENT_EFFECT_CUTSCENE_REPLACEMATERIALS_GHDEAPHIFJA_OFFSET UNITYSDK_OFFSET(0xCD1AE90)
#define RPG_CLIENT_EFFECT_CUTSCENE_REPLACEMATERIALS_IGNOREINEDITOR_OFFSET UNITYSDK_OFFSET(0xCD1A4B0)
#define RPG_CLIENT_EFFECT_CUTSCENE_REPLACEMATERIALS_OMGBFKFEEFL_OFFSET UNITYSDK_OFFSET(0xCD1AE40)
#define RPG_CLIENT_EFFECT_CUTSCENE_REPLACEMATERIALS_RESETPLUGIN_OFFSET UNITYSDK_OFFSET(0xCD1AD40)
#define RPG_CLIENT_EFFECT_CUTSCENE_REPLACEMATERIALS_TICK_OFFSET UNITYSDK_OFFSET(0xCD1A4F0)

namespace RPG::Client
{
	inline static constexpr unsigned int Effect_Cutscene_ReplaceMaterials_TypeDefinitionIndex = 70438;

	class Effect_Cutscene_ReplaceMaterials : public ::RPG::Client::MonoEffectPluginBase
	{
	public:
		::UnityEngine::GameObject* Target; // 0x28
		::System::Collections::Generic::List_1<::RPG::Client::ReplaceMaterialsBlock>* Blocks; // 0x30
		::System::Collections::Generic::List_1<::UnityEngine::Material*>* NPONPIKGOII; // 0x38
		::System::Collections::Generic::List_1<::RPG::Client::MonoEffectPluginCharaMaterialBlock*>* GIPHDOMCKPI; // 0x40
		::DEBEAKKOHLN* OIDAGBPPNBJ; // 0x48
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_EFFECT_CUTSCENE_REPLACEMATERIALS_CTOR_OFFSET))(this);
		}

		::System::Boolean IgnoreInEditor()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_EFFECT_CUTSCENE_REPLACEMATERIALS_IGNOREINEDITOR_OFFSET))(this);
		}

		::System::Void Tick(::System::Single a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + RPG_CLIENT_EFFECT_CUTSCENE_REPLACEMATERIALS_TICK_OFFSET))(this, a1);
		}

		::System::Void DisposePlugin()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_EFFECT_CUTSCENE_REPLACEMATERIALS_DISPOSEPLUGIN_OFFSET))(this);
		}

		::System::Void ResetPlugin()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_EFFECT_CUTSCENE_REPLACEMATERIALS_RESETPLUGIN_OFFSET))(this);
		}

		::System::Void OMGBFKFEEFL(::System::Object* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + RPG_CLIENT_EFFECT_CUTSCENE_REPLACEMATERIALS_OMGBFKFEEFL_OFFSET))(this, a1);
		}

		::System::Void GHDEAPHIFJA(::System::Object* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + RPG_CLIENT_EFFECT_CUTSCENE_REPLACEMATERIALS_GHDEAPHIFJA_OFFSET))(this, a1);
		}

	};
}
