#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/UnityEngine/EventSystems/RaycastResult.h"
#include "unitysdk/UnityEngine/Vector2.h"
namespace RPG::Client { class UIDropTarget; }
namespace System::Collections::Generic { template <typename T> class List_1; }
namespace UnityEngine { class Transform; }
namespace UnityEngine::EventSystems { class PointerEventData; }

#define DMHKKMFEJNH_CTOR_OFFSET UNITYSDK_OFFSET(0xFEBC5A0)
#define DMHKKMFEJNH_EFLNDNGCCGN_OFFSET UNITYSDK_OFFSET(0xFEBC1D0)
#define DMHKKMFEJNH_NMNHDLBGDIE_OFFSET UNITYSDK_OFFSET(0xFEBC480)

inline static constexpr unsigned int DMHKKMFEJNH_TypeDefinitionIndex = 73060;

	class DMHKKMFEJNH : public ::System::Object
	{
	public:
		::UnityEngine::EventSystems::PointerEventData* EPJJGFNHKEM; // 0x10
		::System::Collections::Generic::List_1<::UnityEngine::EventSystems::RaycastResult>* DAAEFLHHLHD; // 0x18
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + DMHKKMFEJNH_CTOR_OFFSET))(this);
		}

		::RPG::Client::UIDropTarget* EFLNDNGCCGN(::UnityEngine::Vector2 a1)
		{
			return ((::RPG::Client::UIDropTarget*(*)(::PVOID, ::UnityEngine::Vector2))((::PBYTE)hIl2Cpp + DMHKKMFEJNH_EFLNDNGCCGN_OFFSET))(this, a1);
		}

		static ::RPG::Client::UIDropTarget* NMNHDLBGDIE(::UnityEngine::Transform* a1)
		{
			return ((::RPG::Client::UIDropTarget*(*)(::UnityEngine::Transform*))((::PBYTE)hIl2Cpp + DMHKKMFEJNH_NMNHDLBGDIE_OFFSET))(a1);
		}

	};
