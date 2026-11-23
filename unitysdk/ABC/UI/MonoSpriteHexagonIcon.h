#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/UnityEngine/MonoBehaviour.h"

class E7AD2F6CF872AFB3;
class F0705120A21F74F0;
namespace ABC::UI { class MonoPrefabLoader; }
namespace System::Collections::Generic { template <typename T> class List_1; }
namespace UnityEngine { class GameObject; }
namespace UnityEngine::UI { class Image; }

#define ABC_UI_MONOSPRITEHEXAGONICON_A7E7F2AE2161C201_OFFSET UNITYSDK_OFFSET(0x205D9E0)
#define ABC_UI_MONOSPRITEHEXAGONICON_BBAF4324AA02C1B3_OFFSET UNITYSDK_OFFSET(0x205D7E0)
#define ABC_UI_MONOSPRITEHEXAGONICON_E3D815C5535F6868_1_OFFSET UNITYSDK_OFFSET(0x205DF40)
#define ABC_UI_MONOSPRITEHEXAGONICON_E3D815C5535F6868_OFFSET UNITYSDK_OFFSET(0x205DE10)
#define ABC_UI_MONOSPRITEHEXAGONICON_F7C815777BC5DEEF_OFFSET UNITYSDK_OFFSET(0x205DB50)
#define ABC_UI_MONOSPRITEHEXAGONICON__CTOR_OFFSET UNITYSDK_OFFSET(0x205E070)

namespace ABC::UI
{
	inline static constexpr unsigned int MonoSpriteHexagonIcon_TypeDefinitionIndex = 8367;

	class MonoSpriteHexagonIcon : public ::UnityEngine::MonoBehaviour
	{
	public:
		::UnityEngine::UI::Image* SpriteIcon; // 0x20
		::UnityEngine::UI::Image* RarityIcon; // 0x28
		::ABC::UI::MonoPrefabLoader* TraitIconLoader; // 0x30
		::ABC::UI::MonoPrefabLoader* RankStarLoader; // 0x38
		::System::Collections::Generic::List_1<::System::UInt32>* AEA3E3E6764E39AE; // 0x40
		::System::Collections::Generic::List_1<::UnityEngine::GameObject*>* E3BB9B66467C9791; // 0x48
		::System::Collections::Generic::List_1<::UnityEngine::GameObject*>* AF41A128CA036E68; // 0x50
		::System::Collections::Generic::List_1<::UnityEngine::UI::Image*>* B2BE8D0841068CA9; // 0x58

		::System::Void A7E7F2AE2161C201(::System::Int32 E14961743E675799)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + ABC_UI_MONOSPRITEHEXAGONICON_A7E7F2AE2161C201_OFFSET))(this, E14961743E675799);
		}

		::System::Void E3D815C5535F6868(::E7AD2F6CF872AFB3* F4FB7906631FFD83, ::System::Int32 E14961743E675799, ::System::Boolean EEB65986AF87247F)
		{
			return ((::System::Void(*)(::PVOID, ::E7AD2F6CF872AFB3*, ::System::Int32, ::System::Boolean))((::PBYTE)hIl2Cpp + ABC_UI_MONOSPRITEHEXAGONICON_E3D815C5535F6868_OFFSET))(this, F4FB7906631FFD83, E14961743E675799, EEB65986AF87247F);
		}

		::System::Void E3D815C5535F6868_1(::F0705120A21F74F0* A1475B75CE307C65, ::System::Int32 E14961743E675799, ::System::Boolean EEB65986AF87247F)
		{
			return ((::System::Void(*)(::PVOID, ::F0705120A21F74F0*, ::System::Int32, ::System::Boolean))((::PBYTE)hIl2Cpp + ABC_UI_MONOSPRITEHEXAGONICON_E3D815C5535F6868_1_OFFSET))(this, A1475B75CE307C65, E14961743E675799, EEB65986AF87247F);
		}

		::System::Void BBAF4324AA02C1B3()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + ABC_UI_MONOSPRITEHEXAGONICON_BBAF4324AA02C1B3_OFFSET))(this);
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + ABC_UI_MONOSPRITEHEXAGONICON__CTOR_OFFSET))(this);
		}

		::System::Void F7C815777BC5DEEF(::System::Collections::Generic::List_1<::System::UInt32>* E42C647AD6F6DBE5)
		{
			return ((::System::Void(*)(::PVOID, ::System::Collections::Generic::List_1<::System::UInt32>*))((::PBYTE)hIl2Cpp + ABC_UI_MONOSPRITEHEXAGONICON_F7C815777BC5DEEF_OFFSET))(this, E42C647AD6F6DBE5);
		}
	};
}
