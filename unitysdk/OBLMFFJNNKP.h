#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Entitas/VisualDebugging/Unity/ContextObserver.h"
class PGBLBOJBDGG;
namespace Entitas { class IContext; }
namespace Entitas { class IEntity; }
namespace Entitas::VisualDebugging::Unity { class EntityBehaviour; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }

#define OBLMFFJNNKP_AAJNAFJEDHB_OFFSET UNITYSDK_OFFSET(0x1AB8C150)
#define OBLMFFJNNKP_CTOR_OFFSET UNITYSDK_OFFSET(0x1AB8BBF0)
#define OBLMFFJNNKP_DEACTIVATE_OFFSET UNITYSDK_OFFSET(0x1AB8BD70)
#define OBLMFFJNNKP_ONENTITYCREATED_OFFSET UNITYSDK_OFFSET(0x1AB8BF10)

inline static constexpr unsigned int OBLMFFJNNKP_TypeDefinitionIndex = 79581;

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
