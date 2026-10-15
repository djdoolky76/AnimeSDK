#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/ValueTuple.h"
#include "unitysdk/UnityEngine/MonoBehaviour.h"
namespace RPG::GameCore { class AdventureCharacterConfig; }
namespace System { class Nullable; }
namespace System { class String; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }
namespace System::Collections::Generic { template <typename T> class IEnumerable_1; }
namespace UnityEngine { class GameObject; }
namespace UnityEngine { class Material; }
namespace UnityEngine { class Renderer; }

#define RPG_CLIENT_MATERIALREPLACERBASE_AWAKE_OFFSET UNITYSDK_OFFSET(0xD5DB190)
#define RPG_CLIENT_MATERIALREPLACERBASE_CTOR_OFFSET UNITYSDK_OFFSET(0xD5DB850)
#define RPG_CLIENT_MATERIALREPLACERBASE_KDCLJMGIDLN_OFFSET UNITYSDK_OFFSET(0xD5DB310)
#define RPG_CLIENT_MATERIALREPLACERBASE_ODDGLOHILEG_OFFSET UNITYSDK_OFFSET(0xD5DB750)
#define RPG_CLIENT_MATERIALREPLACERBASE_PAFFDNAFPPC_OFFSET UNITYSDK_OFFSET(0xD5DB6F0)
#define RPG_CLIENT_MATERIALREPLACERBASE_REPLACEMATERIAL_OFFSET UNITYSDK_OFFSET(0xD5DB240)

namespace RPG::Client
{
	class MaterialReplacerBase : public ::UnityEngine::MonoBehaviour
	{
	public:
		::UnityEngine::GameObject* ArtNode; // 0x18
		::System::Collections::Generic::Dictionary_2<::System::ValueTuple, ::Il2CppArray<::UnityEngine::Material*>*>* FIBJJCFGGLF; // 0x20
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MATERIALREPLACERBASE_CTOR_OFFSET))(this);
		}

		::System::Void Awake()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MATERIALREPLACERBASE_AWAKE_OFFSET))(this);
		}

		::System::Void ReplaceMaterial()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MATERIALREPLACERBASE_REPLACEMATERIAL_OFFSET))(this);
		}

		::System::Void KDCLJMGIDLN(::System::String* a1, ::System::Collections::Generic::IEnumerable_1<::System::String*>* a2)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*, ::System::Collections::Generic::IEnumerable_1<::System::String*>*))((::PBYTE)hIl2Cpp + RPG_CLIENT_MATERIALREPLACERBASE_KDCLJMGIDLN_OFFSET))(this, a1, a2);
		}

		::System::Void PAFFDNAFPPC()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MATERIALREPLACERBASE_PAFFDNAFPPC_OFFSET))(this);
		}

		::RPG::GameCore::AdventureCharacterConfig* ODDGLOHILEG(::System::Nullable* a1)
		{
			return ((::RPG::GameCore::AdventureCharacterConfig*(*)(::PVOID, ::System::Nullable*))((::PBYTE)hIl2Cpp + RPG_CLIENT_MATERIALREPLACERBASE_ODDGLOHILEG_OFFSET))(this, a1);
		}

	};
}
