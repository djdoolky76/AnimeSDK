#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/System/ValueTuple.h"
class AJJCKLMCOMM;
class HIOEAKHGILF;
namespace RPG::GameCore { class FiveDimTriggerEventEmitterConfig; }
namespace UnityEngine { class Collider; }

#define AJJCKLMCOMM___C__DISPLAYCLASS14_0_CTOR_OFFSET UNITYSDK_OFFSET(0x12CC0BF0)
#define AJJCKLMCOMM___C__DISPLAYCLASS14_0___CREATEONTRIGGERENTERCALLBACK_B__0_OFFSET UNITYSDK_OFFSET(0x12CC1790)

inline static constexpr unsigned int AJJCKLMCOMM___c__DisplayClass14_0_TypeDefinitionIndex = 77092;

	class AJJCKLMCOMM___c__DisplayClass14_0 : public ::System::Object
	{
	public:
		::System::ValueTuple ctx; // 0x10
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + AJJCKLMCOMM___C__DISPLAYCLASS14_0_CTOR_OFFSET))(this);
		}

		::System::Void __CreateOnTriggerEnterCallback_b__0(::AJJCKLMCOMM* a1, ::System::ValueTuple a2, ::UnityEngine::Collider* a3)
		{
			return ((::System::Void(*)(::PVOID, ::AJJCKLMCOMM*, ::System::ValueTuple, ::UnityEngine::Collider*))((::PBYTE)hIl2Cpp + AJJCKLMCOMM___C__DISPLAYCLASS14_0___CREATEONTRIGGERENTERCALLBACK_B__0_OFFSET))(this, a1, a2, a3);
		}

	};
