#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
namespace RPG::GameCore { class ChimeraDuelEventListener; }

#define AILGEOEGMJK_CTOR_OFFSET UNITYSDK_OFFSET(0x1C88D960)

	class AILGEOEGMJK : public ::System::Object
	{
	public:
		::RPG::GameCore::ChimeraDuelEventListener* FCLCOAONNCA; // 0x10
		::System::UInt32 NMBKAIEIAPE; // 0x18
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + AILGEOEGMJK_CTOR_OFFSET))(this);
		}

	};
