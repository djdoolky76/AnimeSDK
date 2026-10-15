#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Entitas/VisualDebugging/Unity/ContextObserver.h"
class PGBLBOJBDGG;
namespace Entitas { class IContext; }
namespace Entitas { class IEntity; }
namespace Entitas::VisualDebugging::Unity { class EntityBehaviour; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }

#define OBLMFFJNNKP_AAJNAFJEDHB_OFFSET UNITYSDK_OFFSET(0xBD45040)
#define OBLMFFJNNKP_CTOR_OFFSET UNITYSDK_OFFSET(0xBD44AE0)
#define OBLMFFJNNKP_DEACTIVATE_OFFSET UNITYSDK_OFFSET(0xBD44C60)
#define OBLMFFJNNKP_ONENTITYCREATED_OFFSET UNITYSDK_OFFSET(0xBD44E00)

inline static constexpr unsigned int OBLMFFJNNKP_TypeDefinitionIndex = 77247;

	class OBLMFFJNNKP : public ::Entitas::VisualDebugging::Unity::ContextObserver
	{
	public:
		::PGBLBOJBDGG* EEFMDEHLLFI; // 0x38
		::System::Collections::Generic::Dictionary_2<::Entitas::IEntity*, ::Entitas::VisualDebugging::Unity::EntityBehaviour*>* HIHDEEBFGIL; // 0x40
		::System::Void _ctor(::Entitas::IContext* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Entitas::IContext*))((::PBYTE)hIl2Cpp + OBLMFFJNNKP_CTOR_OFFSET))(this, a1);
		}

		::System::Void Deactivate()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + OBLMFFJNNKP_DEACTIVATE_OFFSET))(this);
		}

		::System::Void onEntityCreated(::Entitas::IContext* a1, ::Entitas::IEntity* a2)
		{
			return ((::System::Void(*)(::PVOID, ::Entitas::IContext*, ::Entitas::IEntity*))((::PBYTE)hIl2Cpp + OBLMFFJNNKP_ONENTITYCREATED_OFFSET))(this, a1, a2);
		}

		::System::Void AAJNAFJEDHB(::Entitas::IContext* a1, ::Entitas::IEntity* a2)
		{
			return ((::System::Void(*)(::PVOID, ::Entitas::IContext*, ::Entitas::IEntity*))((::PBYTE)hIl2Cpp + OBLMFFJNNKP_AAJNAFJEDHB_OFFSET))(this, a1, a2);
		}

	};
