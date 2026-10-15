#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/NotifyType.h"
#include "unitysdk/System/Object.h"
namespace RPG::Client { class GridFightBonusResultData; }

#define KNLHLEHEODM_CTOR_OFFSET UNITYSDK_OFFSET(0xB587DF0)
#define KNLHLEHEODM_DISTRIBUTE_OFFSET UNITYSDK_OFFSET(0xB587E00)

	class KNLHLEHEODM : public ::System::Object
	{
	public:
		::RPG::Client::NotifyType GMCNLFICNOB; // 0x10
		::System::Void _ctor(::RPG::Client::NotifyType a1)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::NotifyType))((::PBYTE)hIl2Cpp + KNLHLEHEODM_CTOR_OFFSET))(this, a1);
		}

		::System::Void Distribute(::RPG::Client::GridFightBonusResultData* a1)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::GridFightBonusResultData*))((::PBYTE)hIl2Cpp + KNLHLEHEODM_DISTRIBUTE_OFFSET))(this, a1);
		}

	};
