#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/JsonConfig.h"
class FCOEMCEDLNL;
class GOCOEDLLDFP;
namespace RPG::GameCore { class TaskConfig; }

#define GOCOEDLLDFP_CTOR_OFFSET UNITYSDK_OFFSET(0x1CE71B30)
#define GOCOEDLLDFP_OJNNBEJLDIJ_OFFSET UNITYSDK_OFFSET(0x1CE71A10)

	class GOCOEDLLDFP : public ::RPG::GameCore::JsonConfig
	{
	public:
		::Il2CppArray<::RPG::GameCore::TaskConfig*>* LIBJIPECDLE; // 0x10
		::System::UInt32 PKHFHLNCOGC; // 0x18
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + GOCOEDLLDFP_CTOR_OFFSET))(this);
		}

		static ::System::Void OJNNBEJLDIJ(::FCOEMCEDLNL* a1, ::GOCOEDLLDFP* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::GOCOEDLLDFP*))((::PBYTE)hIl2Cpp + GOCOEDLLDFP_OJNNBEJLDIJ_OFFSET))(a1, a2);
		}

	};
