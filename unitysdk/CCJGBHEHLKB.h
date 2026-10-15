#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
namespace RPG::Client { class ActivityPlayerReturnRecommendData; }

#define CCJGBHEHLKB_BPLPBPMEODA_OFFSET UNITYSDK_OFFSET(0xC73EE10)
#define CCJGBHEHLKB_CTOR_OFFSET UNITYSDK_OFFSET(0xC73F0A0)

	class CCJGBHEHLKB : public ::System::Object
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CCJGBHEHLKB_CTOR_OFFSET))(this);
		}

		static ::RPG::Client::ActivityPlayerReturnRecommendData* BPLPBPMEODA(::System::UInt32 a1)
		{
			return ((::RPG::Client::ActivityPlayerReturnRecommendData*(*)(::System::UInt32))((::PBYTE)hIl2Cpp + CCJGBHEHLKB_BPLPBPMEODA_OFFSET))(a1);
		}

	};
