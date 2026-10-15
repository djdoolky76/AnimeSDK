#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/UnityEngine/Vector3.h"
#include "unitysdk/RPG/Client/TriggerEffectCallbackParams.h"
class BCLKDMAHONE;
class DHJMOBCHGJB;
namespace RPG::Client { class MonoEffect; }
namespace System { class String; }

#define DHJMOBCHGJB___C__DISPLAYCLASS7_0_CTOR_OFFSET UNITYSDK_OFFSET(0xEBE1540)
#define DHJMOBCHGJB___C__DISPLAYCLASS7_0__CREATEPIXAIRMISSILEENTITY_B__0_OFFSET UNITYSDK_OFFSET(0xEBE3050)

	class DHJMOBCHGJB___c__DisplayClass7_0 : public ::System::Object
	{
	public:
		::BCLKDMAHONE* missileEntity; // 0x10
		::DHJMOBCHGJB* __4__this; // 0x18
		::System::String* hitEffectPath; // 0x20
		::System::Single effectScale; // 0x28
		::System::Int32 targetRuntimeID; // 0x2C
		::UnityEngine::Vector3 normalizedControlPoint; // 0x30
		::UnityEngine::Vector3 localRight; // 0x3C
		::System::UInt32 effectID; // 0x48
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + DHJMOBCHGJB___C__DISPLAYCLASS7_0_CTOR_OFFSET))(this);
		}

		::System::Void _CreatePixAirMissileEntity_b__0(::RPG::Client::MonoEffect* a1, ::RPG::Client::TriggerEffectCallbackParams a2)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::MonoEffect*, ::RPG::Client::TriggerEffectCallbackParams))((::PBYTE)hIl2Cpp + DHJMOBCHGJB___C__DISPLAYCLASS7_0__CREATEPIXAIRMISSILEENTITY_B__0_OFFSET))(this, a1, a2);
		}

	};
