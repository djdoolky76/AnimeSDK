#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/DGCNFOOAFPO.h"
#include "unitysdk/RPG/GameCore/EventType.h"
class EKFMIDBJDIA;
namespace System { class Action; }
namespace System { class Object; }
namespace System::Reflection { class MethodInfo; }

#define BOOCGPLOMGL_CTOR_OFFSET UNITYSDK_OFFSET(0xC199FE0)
#define BOOCGPLOMGL_INTERNALINVOKE_OFFSET UNITYSDK_OFFSET(0xC19A060)

	class BOOCGPLOMGL : public ::DGCNFOOAFPO
	{
	public:
		::System::Action* KFCIMLKKMEE; // 0x20
		::System::Void _ctor(::System::Object* a1, ::System::Reflection::MethodInfo* a2, ::RPG::GameCore::EventType a3, ::System::UInt32 a4)
		{
			return ((::System::Void(*)(::PVOID, ::System::Object*, ::System::Reflection::MethodInfo*, ::RPG::GameCore::EventType, ::System::UInt32))((::PBYTE)hIl2Cpp + BOOCGPLOMGL_CTOR_OFFSET))(this, a1, a2, a3, a4);
		}

		::System::Void InternalInvoke(::EKFMIDBJDIA* a1)
		{
			return ((::System::Void(*)(::PVOID, ::EKFMIDBJDIA*))((::PBYTE)hIl2Cpp + BOOCGPLOMGL_INTERNALINVOKE_OFFSET))(this, a1);
		}

	};
