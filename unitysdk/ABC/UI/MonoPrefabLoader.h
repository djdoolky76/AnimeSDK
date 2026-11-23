#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/B39AAAD1233537D7/E60308870E44DC14.h"
#include "unitysdk/UnityEngine/MonoBehaviour.h"
#include "unitysdk/UnityEngine/Vector2.h"
#include "unitysdk/UnityEngine/Vector3.h"

namespace ABC::UI { class PrefabRectTransModifier; }
namespace System { template <typename T1, typename T2> class Action_2; }
namespace System::Collections::Generic { template <typename T> class List_1; }
namespace UnityEngine { class GameObject; }
namespace UnityEngine { class RectTransform; }

#define ABC_UI_MONOPREFABLOADER_A684873DB2B811AB_OFFSET UNITYSDK_OFFSET(0x1F1E060)
#define ABC_UI_MONOPREFABLOADER_B6D4EB00D10C2A91_OFFSET UNITYSDK_OFFSET(0x1F1E1D0)
#define ABC_UI_MONOPREFABLOADER_BD73D251010FA71D_1_OFFSET UNITYSDK_OFFSET(0x1F1EC70)
#define ABC_UI_MONOPREFABLOADER_BD73D251010FA71D_OFFSET UNITYSDK_OFFSET(0x1F1E8C0)
#define ABC_UI_MONOPREFABLOADER_BEE6424CF5790DD3_OFFSET UNITYSDK_OFFSET(0x1F1E560)
#define ABC_UI_MONOPREFABLOADER_BF3F776792F33E53_OFFSET UNITYSDK_OFFSET(0x1F1E6E0)
#define ABC_UI_MONOPREFABLOADER_E0E32064441EA163_OFFSET UNITYSDK_OFFSET(0x1F1E310)
#define ABC_UI_MONOPREFABLOADER_E5E5FBE5DAB57F83_OFFSET UNITYSDK_OFFSET(0x1F1F090)
#define ABC_UI_MONOPREFABLOADER_FAEC92DDBA9A895B_1_OFFSET UNITYSDK_OFFSET(0x1F1EF90)
#define ABC_UI_MONOPREFABLOADER_FAEC92DDBA9A895B_OFFSET UNITYSDK_OFFSET(0x1F1ED30)
#define ABC_UI_MONOPREFABLOADER__CTOR_OFFSET UNITYSDK_OFFSET(0x1F1F030)

namespace ABC::UI
{
	inline static constexpr unsigned int MonoPrefabLoader_TypeDefinitionIndex = 7542;

	class MonoPrefabLoader : public ::UnityEngine::MonoBehaviour
	{
	public:
		::UnityEngine::GameObject* Prefab; // 0x20
		::Il2CppArray<::UnityEngine::GameObject*>* Prefabs; // 0x28
		::System::Collections::Generic::List_1<::ABC::UI::PrefabRectTransModifier*>* RectTransModifier; // 0x30
		::UnityEngine::Vector2 Size; // 0x38
		::UnityEngine::Vector2 Scale; // 0x40
		::System::Boolean SetSize; // 0x48
		::System::Boolean SetScale; // 0x49
		::System::Byte _padding0[0x6];
		::System::Collections::Generic::List_1<::B39AAAD1233537D7::E60308870E44DC14>* LoadTagList; // 0x50

		::System::Boolean B6D4EB00D10C2A91(::System::Single& EB9EEFBC09013844)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Single&))((::PBYTE)hIl2Cpp + ABC_UI_MONOPREFABLOADER_B6D4EB00D10C2A91_OFFSET))(this, EB9EEFBC09013844);
		}

		::UnityEngine::GameObject* BD73D251010FA71D(::System::Int32 B48C66E5FB2449C6, ::UnityEngine::Vector3 A0C1F1E95D5F6CA9, ::System::Boolean FB732D37F47B1F04, ::System::Boolean A187B0A4ACA502FF)
		{
			return ((::UnityEngine::GameObject*(*)(::PVOID, ::System::Int32, ::UnityEngine::Vector3, ::System::Boolean, ::System::Boolean))((::PBYTE)hIl2Cpp + ABC_UI_MONOPREFABLOADER_BD73D251010FA71D_OFFSET))(this, B48C66E5FB2449C6, A0C1F1E95D5F6CA9, FB732D37F47B1F04, A187B0A4ACA502FF);
		}

		::System::Int32 E0E32064441EA163()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + ABC_UI_MONOPREFABLOADER_E0E32064441EA163_OFFSET))(this);
		}

		::System::Void BF3F776792F33E53(::System::Int32 A70E5C58B2C7A692, ::System::Action_2<::System::Int32, ::UnityEngine::GameObject*>* E04D2BE64FCE9814)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32, ::System::Action_2<::System::Int32, ::UnityEngine::GameObject*>*))((::PBYTE)hIl2Cpp + ABC_UI_MONOPREFABLOADER_BF3F776792F33E53_OFFSET))(this, A70E5C58B2C7A692, E04D2BE64FCE9814);
		}

		::UnityEngine::GameObject* FAEC92DDBA9A895B(::UnityEngine::Vector3 A0C1F1E95D5F6CA9, ::System::Boolean FB732D37F47B1F04, ::System::Boolean A187B0A4ACA502FF)
		{
			return ((::UnityEngine::GameObject*(*)(::PVOID, ::UnityEngine::Vector3, ::System::Boolean, ::System::Boolean))((::PBYTE)hIl2Cpp + ABC_UI_MONOPREFABLOADER_FAEC92DDBA9A895B_OFFSET))(this, A0C1F1E95D5F6CA9, FB732D37F47B1F04, A187B0A4ACA502FF);
		}

		::UnityEngine::GameObject* FAEC92DDBA9A895B_1()
		{
			return ((::UnityEngine::GameObject*(*)(::PVOID))((::PBYTE)hIl2Cpp + ABC_UI_MONOPREFABLOADER_FAEC92DDBA9A895B_1_OFFSET))(this);
		}

		::UnityEngine::GameObject* BD73D251010FA71D_1(::System::Int32 B48C66E5FB2449C6)
		{
			return ((::UnityEngine::GameObject*(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + ABC_UI_MONOPREFABLOADER_BD73D251010FA71D_1_OFFSET))(this, B48C66E5FB2449C6);
		}

		::System::Void A684873DB2B811AB(::System::Int32 B48C66E5FB2449C6, ::UnityEngine::RectTransform* B856F1DD25F702CF)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32, ::UnityEngine::RectTransform*))((::PBYTE)hIl2Cpp + ABC_UI_MONOPREFABLOADER_A684873DB2B811AB_OFFSET))(this, B48C66E5FB2449C6, B856F1DD25F702CF);
		}

		::System::Boolean E5E5FBE5DAB57F83()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + ABC_UI_MONOPREFABLOADER_E5E5FBE5DAB57F83_OFFSET))(this);
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + ABC_UI_MONOPREFABLOADER__CTOR_OFFSET))(this);
		}

		::System::Boolean BEE6424CF5790DD3(::System::Single& EB9EEFBC09013844)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Single&))((::PBYTE)hIl2Cpp + ABC_UI_MONOPREFABLOADER_BEE6424CF5790DD3_OFFSET))(this, EB9EEFBC09013844);
		}
	};
}
