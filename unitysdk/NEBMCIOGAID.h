#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Entitas/VisualDebugging/Unity/ContextObserver.h"
class HDIAALCMDNG;
namespace Entitas { class IContext; }
namespace Entitas { class IEntity; }
namespace Entitas::VisualDebugging::Unity { class EntityBehaviour; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }

#define NEBMCIOGAID_AAJNAFJEDHB_OFFSET UNITYSDK_OFFSET(0xBB526F0)
#define NEBMCIOGAID_CTOR_OFFSET UNITYSDK_OFFSET(0xBB52190)
#define NEBMCIOGAID_DEACTIVATE_OFFSET UNITYSDK_OFFSET(0xBB52310)
#define NEBMCIOGAID_ONENTITYCREATED_OFFSET UNITYSDK_OFFSET(0xBB524B0)

inline static constexpr unsigned int NEBMCIOGAID_TypeDefinitionIndex = 77716;

	class NEBMCIOGAID : public ::Entitas::VisualDebugging::Unity::ContextObserver
	{
	public:
		::HDIAALCMDNG* EEFMDEHLLFI; // 0x38
		::System::Collections::Generic::Dictionary_2<::Entitas::IEntity*, ::Entitas::VisualDebugging::Unity::EntityBehaviour*>* HIHDEEBFGIL; // 0x40
		::System::Void _ctor(::Entitas::IContext* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Entitas::IContext*))((::PBYTE)hIl2Cpp + NEBMCIOGAID_CTOR_OFFSET))(this, a1);
		}

		::System::Void Deactivate()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + NEBMCIOGAID_DEACTIVATE_OFFSET))(this);
		}

		::System::Void onEntityCreated(::Entitas::IContext* a1, ::Entitas::IEntity* a2)
		{
			return ((::System::Void(*)(::PVOID, ::Entitas::IContext*, ::Entitas::IEntity*))((::PBYTE)hIl2Cpp + NEBMCIOGAID_ONENTITYCREATED_OFFSET))(this, a1, a2);
		}

		::System::Void AAJNAFJEDHB(::Entitas::IContext* a1, ::Entitas::IEntity* a2)
		{
			return ((::System::Void(*)(::PVOID, ::Entitas::IContext*, ::Entitas::IEntity*))((::PBYTE)hIl2Cpp + NEBMCIOGAID_AAJNAFJEDHB_OFFSET))(this, a1, a2);
		}

	};
