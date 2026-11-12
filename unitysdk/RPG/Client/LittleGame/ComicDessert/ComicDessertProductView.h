#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/LittleGame/ComicDessert/ComicDessertView.h"
#include "unitysdk/RPG/Client/LittleGame/ComicDessert/ProductPositionBinding.h"
class GDCBKFDNOCL;
namespace System { class Object; }
namespace System::Collections::Generic { template <typename T> class IReadOnlyList_1; }
namespace System::Collections::Generic { template <typename T> class List_1; }
namespace UnityEngine { class GameObject; }

#define RPG_CLIENT_LITTLEGAME_COMICDESSERT_COMICDESSERTPRODUCTVIEW_BUILDSLOTS_OFFSET UNITYSDK_OFFSET(0xDE8C3C0)
#define RPG_CLIENT_LITTLEGAME_COMICDESSERT_COMICDESSERTPRODUCTVIEW_CLONEVISUALSTATE_OFFSET UNITYSDK_OFFSET(0xDE8C230)
#define RPG_CLIENT_LITTLEGAME_COMICDESSERT_COMICDESSERTPRODUCTVIEW_CTOR_OFFSET UNITYSDK_OFFSET(0xDE8CDB0)
#define RPG_CLIENT_LITTLEGAME_COMICDESSERT_COMICDESSERTPRODUCTVIEW_GET_POSITIONS_OFFSET UNITYSDK_OFFSET(0xDE8CDA0)
#define RPG_CLIENT_LITTLEGAME_COMICDESSERT_COMICDESSERTPRODUCTVIEW_GIGIGPLEMKM_OFFSET UNITYSDK_OFFSET(0xDE8C9F0)
#define RPG_CLIENT_LITTLEGAME_COMICDESSERT_COMICDESSERTPRODUCTVIEW_GOMDNAGGOGC_OFFSET UNITYSDK_OFFSET(0xDE8CC90)
#define RPG_CLIENT_LITTLEGAME_COMICDESSERT_COMICDESSERTPRODUCTVIEW_REVEALSLOT_OFFSET UNITYSDK_OFFSET(0xDE8CA70)
#define RPG_CLIENT_LITTLEGAME_COMICDESSERT_COMICDESSERTPRODUCTVIEW_SETASSEMBLYEFFECT_OFFSET UNITYSDK_OFFSET(0xDE8C910)
#define RPG_CLIENT_LITTLEGAME_COMICDESSERT_COMICDESSERTPRODUCTVIEW_SETFINISHEFFECT_OFFSET UNITYSDK_OFFSET(0xDE8C980)
#define RPG_CLIENT_LITTLEGAME_COMICDESSERT_COMICDESSERTPRODUCTVIEW_SETSLOTSHOWN_OFFSET UNITYSDK_OFFSET(0xDE8C740)
#define RPG_CLIENT_LITTLEGAME_COMICDESSERT_COMICDESSERTPRODUCTVIEW_TRYGETVISIBLEOUTLINERENDERERS_OFFSET UNITYSDK_OFFSET(0xDE8CAE0)

namespace RPG::Client::LittleGame::ComicDessert
{
	inline static constexpr unsigned int ComicDessertProductView_TypeDefinitionIndex = 80092;

	class ComicDessertProductView : public ::RPG::Client::LittleGame::ComicDessert::ComicDessertView
	{
	public:
		::System::Collections::Generic::List_1<::RPG::Client::LittleGame::ComicDessert::ProductPositionBinding>* _Positions; // 0x58
		::UnityEngine::GameObject* _AssemblyEffect; // 0x60
		::UnityEngine::GameObject* _FinishEffect; // 0x68
		::UnityEngine::GameObject* JGKOEFGGABJ; // 0x70
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_LITTLEGAME_COMICDESSERT_COMICDESSERTPRODUCTVIEW_CTOR_OFFSET))(this);
		}

		static ::System::Void CloneVisualState(::UnityEngine::GameObject* a1, ::System::Collections::Generic::List_1<::GDCBKFDNOCL*>* a2)
		{
			return ((::System::Void(*)(::UnityEngine::GameObject*, ::System::Collections::Generic::List_1<::GDCBKFDNOCL*>*))((::PBYTE)hIl2Cpp + RPG_CLIENT_LITTLEGAME_COMICDESSERT_COMICDESSERTPRODUCTVIEW_CLONEVISUALSTATE_OFFSET))(a1, a2);
		}

		::System::Collections::Generic::List_1<::GDCBKFDNOCL*>* BuildSlots()
		{
			return ((::System::Collections::Generic::List_1<::GDCBKFDNOCL*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_LITTLEGAME_COMICDESSERT_COMICDESSERTPRODUCTVIEW_BUILDSLOTS_OFFSET))(this);
		}

		::System::Boolean RevealSlot(::GDCBKFDNOCL* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::GDCBKFDNOCL*))((::PBYTE)hIl2Cpp + RPG_CLIENT_LITTLEGAME_COMICDESSERT_COMICDESSERTPRODUCTVIEW_REVEALSLOT_OFFSET))(this, a1);
		}

		::System::Void SetAssemblyEffect(::System::Boolean a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + RPG_CLIENT_LITTLEGAME_COMICDESSERT_COMICDESSERTPRODUCTVIEW_SETASSEMBLYEFFECT_OFFSET))(this, a1);
		}

		::System::Void SetFinishEffect(::System::Boolean a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + RPG_CLIENT_LITTLEGAME_COMICDESSERT_COMICDESSERTPRODUCTVIEW_SETFINISHEFFECT_OFFSET))(this, a1);
		}

		::System::Boolean TryGetVisibleOutlineRenderers(::System::Object* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + RPG_CLIENT_LITTLEGAME_COMICDESSERT_COMICDESSERTPRODUCTVIEW_TRYGETVISIBLEOUTLINERENDERERS_OFFSET))(this, a1);
		}

		::System::Boolean GOMDNAGGOGC()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_LITTLEGAME_COMICDESSERT_COMICDESSERTPRODUCTVIEW_GOMDNAGGOGC_OFFSET))(this);
		}

		::System::Boolean SetSlotShown(::System::UInt32 a1, ::System::Boolean a2)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::UInt32, ::System::Boolean))((::PBYTE)hIl2Cpp + RPG_CLIENT_LITTLEGAME_COMICDESSERT_COMICDESSERTPRODUCTVIEW_SETSLOTSHOWN_OFFSET))(this, a1, a2);
		}

		::System::Void GIGIGPLEMKM(::RPG::Client::LittleGame::ComicDessert::ProductPositionBinding a1, ::System::Boolean a2)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::LittleGame::ComicDessert::ProductPositionBinding, ::System::Boolean))((::PBYTE)hIl2Cpp + RPG_CLIENT_LITTLEGAME_COMICDESSERT_COMICDESSERTPRODUCTVIEW_GIGIGPLEMKM_OFFSET))(this, a1, a2);
		}

		::System::Collections::Generic::IReadOnlyList_1<::RPG::Client::LittleGame::ComicDessert::ProductPositionBinding>* get_Positions()
		{
			return ((::System::Collections::Generic::IReadOnlyList_1<::RPG::Client::LittleGame::ComicDessert::ProductPositionBinding>*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_LITTLEGAME_COMICDESSERT_COMICDESSERTPRODUCTVIEW_GET_POSITIONS_OFFSET))(this);
		}

	};
}
