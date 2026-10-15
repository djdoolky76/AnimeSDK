#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/TextID.h"
#include "unitysdk/System/Object.h"
class COEGDGANGEE;
class FCOEMCEDLNL;
namespace System { class String; }

#define COEGDGANGEE_CTOR_OFFSET UNITYSDK_OFFSET(0x1DCB78C0)
#define COEGDGANGEE_OJNNBEJLDIJ_OFFSET UNITYSDK_OFFSET(0x1DCB76B0)

	class COEGDGANGEE : public ::System::Object
	{
	public:
		::System::String* BGDEAHEAOFF; // 0x10
		::RPG::Client::TextID OENAMINOLLF; // 0x18
		::System::UInt32 ABCDGEFDNPC; // 0x28
		::System::UInt32 LLDCHLHNADA; // 0x2C
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + COEGDGANGEE_CTOR_OFFSET))(this);
		}

		static ::System::Void OJNNBEJLDIJ(::FCOEMCEDLNL* a1, ::COEGDGANGEE* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::COEGDGANGEE*))((::PBYTE)hIl2Cpp + COEGDGANGEE_OJNNBEJLDIJ_OFFSET))(a1, a2);
		}

	};
