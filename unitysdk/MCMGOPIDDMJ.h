#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/TextID.h"
#include "unitysdk/RPG/GameCore/FateClazzType.h"
#include "unitysdk/System/Object.h"
class FCOEMCEDLNL;
class MCMGOPIDDMJ;
namespace System { class String; }

#define MCMGOPIDDMJ_CTOR_OFFSET UNITYSDK_OFFSET(0x1E33E570)
#define MCMGOPIDDMJ_OJNNBEJLDIJ_OFFSET UNITYSDK_OFFSET(0x1E33E250)

inline static constexpr unsigned int MCMGOPIDDMJ_TypeDefinitionIndex = 11549;

	class MCMGOPIDDMJ : public ::System::Object
	{
	public:
		::System::String* FLLGGNAPJOI; // 0x10
		::System::String* HOGDKNENKMB; // 0x18
		::System::String* KILFKBDMJGI; // 0x20
		::RPG::Client::TextID PMGABBELKNG; // 0x28
		::System::UInt32 KJKMDFEJIJJ; // 0x38
		::RPG::GameCore::FateClazzType BKKAOIBLCJG; // 0x3C
		::System::UInt32 EMFGEFNHOIB; // 0x40
		::System::UInt32 DOBKKDIECDO; // 0x44
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MCMGOPIDDMJ_CTOR_OFFSET))(this);
		}

		static ::System::Void OJNNBEJLDIJ(::FCOEMCEDLNL* a1, ::MCMGOPIDDMJ* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::MCMGOPIDDMJ*))((::PBYTE)hIl2Cpp + MCMGOPIDDMJ_OJNNBEJLDIJ_OFFSET))(a1, a2);
		}

	};
