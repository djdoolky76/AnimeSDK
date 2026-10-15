#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/LNNEBLLJHPC.h"
namespace RPG::GameCore { class IAvatarServantRowWrap; }

#define NGJCLIPLBFA_KMAKLLEGBHI_OFFSET UNITYSDK_OFFSET(0xBBA9F70)

inline static constexpr unsigned int NGJCLIPLBFA_TypeDefinitionIndex = 62644;

	class NGJCLIPLBFA : public ::System::Object
	{
	public:
		static ::RPG::GameCore::IAvatarServantRowWrap* KMAKLLEGBHI(::LNNEBLLJHPC a1)
		{
			return ((::RPG::GameCore::IAvatarServantRowWrap*(*)(::LNNEBLLJHPC))((::PBYTE)hIl2Cpp + NGJCLIPLBFA_KMAKLLEGBHI_OFFSET))(a1);
		}

	};
