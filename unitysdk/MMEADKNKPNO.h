#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
namespace RPG::GameCore { class LittleGameAttachPointConfig; }

#define MMEADKNKPNO_CTOR_OFFSET UNITYSDK_OFFSET(0x1C92D7B0)

	class MMEADKNKPNO : public ::System::Object
	{
	public:
		::RPG::GameCore::LittleGameAttachPointConfig* EABKOHGCHFP; // 0x10
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MMEADKNKPNO_CTOR_OFFSET))(this);
		}

	};
