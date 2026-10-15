#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/FullBody/FullBodyBipedChain.h"
#include "unitysdk/System/Object.h"
namespace System { class String; }

#define RPGTOOLS_TIMELINE_BATTLEPERFORM_BPCHARACTERSTOPFULLBODYCHAINDATA_CTOR_OFFSET UNITYSDK_OFFSET(0xE8B97C0)

namespace RPGTools::Timeline::BattlePerform
{
	class BPCharacterStopFullBodyChainData : public ::System::Object
	{
	public:
		::System::Boolean Enabled; // 0x10
		::System::Byte _padding0[0x3];
		::RPG::Client::FullBody::FullBodyBipedChain BipedChain; // 0x14
		::System::Single Duration; // 0x18
		::System::Byte _padding1[0x4];
		::System::String* CurveName; // 0x20
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPGTOOLS_TIMELINE_BATTLEPERFORM_BPCHARACTERSTOPFULLBODYCHAINDATA_CTOR_OFFSET))(this);
		}

	};
}
