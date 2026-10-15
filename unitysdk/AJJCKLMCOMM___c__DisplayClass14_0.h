#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/System/ValueTuple_2.h"
class AJJCKLMCOMM;
class HIOEAKHGILF;
namespace RPG::GameCore { class FiveDimTriggerEventEmitterConfig; }
namespace UnityEngine { class Collider; }

#define AJJCKLMCOMM___C__DISPLAYCLASS14_0_CTOR_OFFSET UNITYSDK_OFFSET(0x12CBC1F0)
#define AJJCKLMCOMM___C__DISPLAYCLASS14_0___CREATEONTRIGGERENTERCALLBACK_B__0_OFFSET UNITYSDK_OFFSET(0x12CBCD90)

inline static constexpr unsigned int AJJCKLMCOMM___c__DisplayClass14_0_TypeDefinitionIndex = 77091;

	class AJJCKLMCOMM___c__DisplayClass14_0 : public ::System::Object
	{
	public:
		::System::ValueTuple_2<::HIOEAKHGILF*, ::RPG::GameCore::FiveDimTriggerEventEmitterConfig*> ctx; // 0x10
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + AJJCKLMCOMM___C__DISPLAYCLASS14_0_CTOR_OFFSET))(this);
		}

		::System::Void __CreateOnTriggerEnterCallback_b__0(::AJJCKLMCOMM* a1, ::System::ValueTuple_2<::HIOEAKHGILF*, ::RPG::GameCore::FiveDimTriggerEventEmitterConfig*> a2, ::UnityEngine::Collider* a3)
		{
			return ((::System::Void(*)(::PVOID, ::AJJCKLMCOMM*, ::System::ValueTuple_2<::HIOEAKHGILF*, ::RPG::GameCore::FiveDimTriggerEventEmitterConfig*>, ::UnityEngine::Collider*))((::PBYTE)hIl2Cpp + AJJCKLMCOMM___C__DISPLAYCLASS14_0___CREATEONTRIGGERENTERCALLBACK_B__0_OFFSET))(this, a1, a2, a3);
		}

	};
