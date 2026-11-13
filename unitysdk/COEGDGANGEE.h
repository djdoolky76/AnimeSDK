#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/TextID.h"
#include "unitysdk/System/Object.h"
class COEGDGANGEE;
class FCOEMCEDLNL;
namespace System { class String; }

#define COEGDGANGEE_CTOR_OFFSET UNITYSDK_OFFSET(0x1EB8B560)
#define COEGDGANGEE_OJNNBEJLDIJ_OFFSET UNITYSDK_OFFSET(0x1EB8B350)

inline static constexpr unsigned int COEGDGANGEE_TypeDefinitionIndex = 15542;

	class COEGDGANGEE : public ::System::Object
	{
	public:
		::System::String* BGDEAHEAOFF; // 0x10
		::System::UInt32 ABCDGEFDNPC; // 0x18
		::System::UInt32 LLDCHLHNADA; // 0x1C
		::RPG::Client::TextID OENAMINOLLF; // 0x20
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + COEGDGANGEE_CTOR_OFFSET))(this);
		}

		static ::System::Void OJNNBEJLDIJ(::FCOEMCEDLNL* a1, ::COEGDGANGEE* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::COEGDGANGEE*))((::PBYTE)hIl2Cpp + COEGDGANGEE_OJNNBEJLDIJ_OFFSET))(a1, a2);
		}

	};
