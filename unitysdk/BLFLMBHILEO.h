#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/MatchThreeV2ConditionType.h"
#include "unitysdk/System/Object.h"
class BLFLMBHILEO;
class FCOEMCEDLNL;
namespace System { class String; }

#define BLFLMBHILEO_CTOR_OFFSET UNITYSDK_OFFSET(0x1D824360)
#define BLFLMBHILEO_OJNNBEJLDIJ_OFFSET UNITYSDK_OFFSET(0x1D824220)

	class BLFLMBHILEO : public ::System::Object
	{
	public:
		::System::String* NNACKOBKFGE; // 0x10
		::RPG::GameCore::MatchThreeV2ConditionType GMPGDEINODK; // 0x18
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + BLFLMBHILEO_CTOR_OFFSET))(this);
		}

		static ::System::Void OJNNBEJLDIJ(::FCOEMCEDLNL* a1, ::BLFLMBHILEO* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::BLFLMBHILEO*))((::PBYTE)hIl2Cpp + BLFLMBHILEO_OJNNBEJLDIJ_OFFSET))(a1, a2);
		}

	};
