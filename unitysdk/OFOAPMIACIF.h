#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/Match3/BombType.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/System/ValueTuple.h"

#define OFOAPMIACIF_CTOR_OFFSET UNITYSDK_OFFSET(0x1C98CDB0)

	class OFOAPMIACIF : public ::System::Object
	{
	public:
		::RPG::GameCore::Match3::BombType FEKGEPDLOCE; // 0x10
		::System::UInt32 JCAEANLAGMB; // 0x14
		::System::ValueTuple LBMFPCIBMAC; // 0x18
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + OFOAPMIACIF_CTOR_OFFSET))(this);
		}

	};
