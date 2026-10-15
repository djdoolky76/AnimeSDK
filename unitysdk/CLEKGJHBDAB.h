#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/UnityEngine/Vector2.h"
class CFINHCPMLBB;
class JIDKACGCHMA;
namespace RPG::Client { class Freelook3rdRigParams; }

#define CLEKGJHBDAB_CTOR_OFFSET UNITYSDK_OFFSET(0xD77BCE0)
#define CLEKGJHBDAB_IIGINGICOLL_OFFSET UNITYSDK_OFFSET(0xD77BBD0)

	class CLEKGJHBDAB : public ::System::Object
	{
	public:
		::Il2CppArray<::RPG::Client::Freelook3rdRigParams*>* GACLJJDFHIK; // 0x10
		::JIDKACGCHMA* MBJHFKGGHKP; // 0x18
		::CFINHCPMLBB* OKDKLBDEKHC; // 0x20
		::UnityEngine::Vector2 NCKPDKAOMFG; // 0x28
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLEKGJHBDAB_CTOR_OFFSET))(this);
		}

		::System::Boolean IIGINGICOLL()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + CLEKGJHBDAB_IIGINGICOLL_OFFSET))(this);
		}

	};
