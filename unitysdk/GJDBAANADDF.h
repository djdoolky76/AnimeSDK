#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/EventType.h"
#include "unitysdk/System/Object.h"
class CJPDCBEEOKA;
namespace System { class Object; }
namespace System::Reflection { class MethodInfo; }

#define GJDBAANADDF_CREATE_OFFSET UNITYSDK_OFFSET(0x15A5D020)
#define GJDBAANADDF_CTOR_OFFSET UNITYSDK_OFFSET(0x15A5D130)

	class GJDBAANADDF : public ::System::Object
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + GJDBAANADDF_CTOR_OFFSET))(this);
		}

		::CJPDCBEEOKA* Create(::System::Object* a1, ::System::Reflection::MethodInfo* a2, ::RPG::GameCore::EventType a3, ::System::UInt32 a4)
		{
			return ((::CJPDCBEEOKA*(*)(::PVOID, ::System::Object*, ::System::Reflection::MethodInfo*, ::RPG::GameCore::EventType, ::System::UInt32))((::PBYTE)hIl2Cpp + GJDBAANADDF_CREATE_OFFSET))(this, a1, a2, a3, a4);
		}

	};
