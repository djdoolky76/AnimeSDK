#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
namespace RPG::Client { class BaseShaderPropertyTransition; }
namespace System { class Object; }
namespace System { class String; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define RPG_CLIENT_MODELUI3DMODECONSTRAINT_OPECAJNMBHB_CTOR_OFFSET UNITYSDK_OFFSET(0xD720050)

namespace RPG::Client
{
	inline static constexpr unsigned int ModelUI3DModeConstraint_OPECAJNMBHB_TypeDefinitionIndex = 68512;

	class ModelUI3DModeConstraint_OPECAJNMBHB : public ::System::Object
	{
	public:
		::System::String* BJEGPHCFBFH; // 0x10
		::RPG::Client::BaseShaderPropertyTransition* LPHDGEKELNH; // 0x18
		::System::Collections::Generic::List_1<::System::Object*>* AGLDCHDGJIB; // 0x20
		::System::Single CGCKKCPIBKB; // 0x28
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MODELUI3DMODECONSTRAINT_OPECAJNMBHB_CTOR_OFFSET))(this);
		}

	};
}
