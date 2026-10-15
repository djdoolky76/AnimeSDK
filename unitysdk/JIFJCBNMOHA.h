#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/AnimatorParameterType.h"
#include "unitysdk/System/Object.h"
namespace System { class String; }

#define JIFJCBNMOHA_CTOR_OFFSET UNITYSDK_OFFSET(0xB1EF9C0)

	class JIFJCBNMOHA : public ::System::Object
	{
	public:
		::System::String* CEGADPFLPGM; // 0x10
		::System::Single AALPICLABCO; // 0x18
		::RPG::GameCore::AnimatorParameterType JBPNBECLGKN; // 0x1C
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + JIFJCBNMOHA_CTOR_OFFSET))(this);
		}

	};
