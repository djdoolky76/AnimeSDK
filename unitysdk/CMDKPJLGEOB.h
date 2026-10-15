#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/TextID.h"
#include "unitysdk/RPG/GameCore/FateRinCaseBoardAvatarType.h"
#include "unitysdk/System/Object.h"
class CMDKPJLGEOB;
class FCOEMCEDLNL;
namespace System { class String; }

#define CMDKPJLGEOB_CTOR_OFFSET UNITYSDK_OFFSET(0x1DC82160)
#define CMDKPJLGEOB_OJNNBEJLDIJ_OFFSET UNITYSDK_OFFSET(0x1DC81930)

inline static constexpr unsigned int CMDKPJLGEOB_TypeDefinitionIndex = 11578;

	class CMDKPJLGEOB : public ::System::Object
	{
	public:
		::System::String* IAOIMDKHPCG; // 0x10
		::System::String* OLOIFNNLKJP; // 0x18
		::RPG::Client::TextID IIIOIGMEHGG; // 0x20
		::RPG::Client::TextID EEJPJOPLIFH; // 0x30
		::RPG::Client::TextID CENPLDELHNG; // 0x40
		::RPG::Client::TextID FGKOGGMACBA; // 0x50
		::RPG::Client::TextID NNLLEEHJHMK; // 0x60
		::System::UInt32 GMCBNNKJAGJ; // 0x70
		::RPG::GameCore::FateRinCaseBoardAvatarType BEDFGGKCODK; // 0x74
		::RPG::Client::TextID ILEHHBEEDBP; // 0x78
		::RPG::Client::TextID HKDMGOBJIMA; // 0x88
		::RPG::Client::TextID OENAMINOLLF; // 0x98
		::RPG::Client::TextID LEPNNKOAOJF; // 0xA8
		::RPG::Client::TextID PDBNACBFHGN; // 0xB8
		::RPG::Client::TextID ENACPJCCIAP; // 0xC8
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CMDKPJLGEOB_CTOR_OFFSET))(this);
		}

		static ::System::Void OJNNBEJLDIJ(::FCOEMCEDLNL* a1, ::CMDKPJLGEOB* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::CMDKPJLGEOB*))((::PBYTE)hIl2Cpp + CMDKPJLGEOB_OJNNBEJLDIJ_OFFSET))(a1, a2);
		}

	};
