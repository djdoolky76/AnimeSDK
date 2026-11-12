#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
namespace RPG::Client { class AlleySpecialOrderTarget; }

#define AOAKHAPIAFO_JMGMFMGFIAO_OFFSET UNITYSDK_OFFSET(0x1671D170)

inline static constexpr unsigned int AOAKHAPIAFO_TypeDefinitionIndex = 63682;

	class AOAKHAPIAFO : public ::System::Object
	{
	public:
		static ::RPG::Client::AlleySpecialOrderTarget* JMGMFMGFIAO(::System::UInt32 a1)
		{
			return ((::RPG::Client::AlleySpecialOrderTarget*(*)(::System::UInt32))((::PBYTE)hIl2Cpp + AOAKHAPIAFO_JMGMFMGFIAO_OFFSET))(a1);
		}

	};
