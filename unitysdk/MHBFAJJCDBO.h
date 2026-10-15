#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/NotifyType.h"
#include "unitysdk/System/Object.h"
class CANFMMJEBJG;
namespace System { class Object; }
namespace System::Reflection { class MethodInfo; }

#define MHBFAJJCDBO_CREATE_OFFSET UNITYSDK_OFFSET(0xB9296B0)
#define MHBFAJJCDBO_CTOR_OFFSET UNITYSDK_OFFSET(0xB9297A0)

inline static constexpr unsigned int MHBFAJJCDBO_TypeDefinitionIndex = 73151;

	class MHBFAJJCDBO : public ::System::Object
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MHBFAJJCDBO_CTOR_OFFSET))(this);
		}

		::CANFMMJEBJG* Create(::System::Object* a1, ::System::Reflection::MethodInfo* a2, ::RPG::Client::NotifyType a3)
		{
			return ((::CANFMMJEBJG*(*)(::PVOID, ::System::Object*, ::System::Reflection::MethodInfo*, ::RPG::Client::NotifyType))((::PBYTE)hIl2Cpp + MHBFAJJCDBO_CREATE_OFFSET))(this, a1, a2, a3);
		}

	};
