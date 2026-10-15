#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
namespace Entitas { class IContext; }
namespace Entitas { class IEntity; }

#define BLOBJPIJDPC_ECCEMBIIJPF_1_OFFSET UNITYSDK_OFFSET(0x1C591FC0)

inline static constexpr unsigned int BLOBJPIJDPC_TypeDefinitionIndex = 37011;

	class BLOBJPIJDPC : public ::System::Object
	{
	public:
		static ::Entitas::IEntity* ECCEMBIIJPF_1(::Entitas::IContext* a1, ::System::Int32 a2)
		{
			return ((::Entitas::IEntity*(*)(::Entitas::IContext*, ::System::Int32))((::PBYTE)hIl2Cpp + BLOBJPIJDPC_ECCEMBIIJPF_1_OFFSET))(a1, a2);
		}

	};
