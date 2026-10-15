#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class MMPOBKCOIGH;
namespace RPG::Client { class AvatarOutfit; }

#define BIHJIOKBACN_CTOR_OFFSET UNITYSDK_OFFSET(0xB4A8780)
#define BIHJIOKBACN_IAJBHGAOPDG_OFFSET UNITYSDK_OFFSET(0xB4A8730)

inline static constexpr unsigned int BIHJIOKBACN_TypeDefinitionIndex = 62678;

	class BIHJIOKBACN : public ::System::Object
	{
	public:
		::MMPOBKCOIGH* GFKHCEGDLJN; // 0x10
		::System::Void _ctor(::MMPOBKCOIGH* a1)
		{
			return ((::System::Void(*)(::PVOID, ::MMPOBKCOIGH*))((::PBYTE)hIl2Cpp + BIHJIOKBACN_CTOR_OFFSET))(this, a1);
		}

		::RPG::Client::AvatarOutfit* IAJBHGAOPDG()
		{
			return ((::RPG::Client::AvatarOutfit*(*)(::PVOID))((::PBYTE)hIl2Cpp + BIHJIOKBACN_IAJBHGAOPDG_OFFSET))(this);
		}

	};
